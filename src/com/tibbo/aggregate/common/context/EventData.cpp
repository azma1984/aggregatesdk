// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EventData.java
#include <com/tibbo/aggregate/common/context/EventData.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
#include <com/tibbo/aggregate/common/event/ContextEventListenerSet.h"
#include <com/tibbo/aggregate/common/util/Util.h"
/*
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/System.h"
//#include <java/lang/Throwable.h"
//#include <java/util/Collections.h"
//#include <java/util/Date.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Set.h"
//#include <org/apache/log4j/Logger.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

extern void lock(void *);
extern void unlock(void *);

namespace
{
    struct synchronized
    {
        synchronized(void *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        void *o;
    };
}
com::tibbo::aggregate::common::context::EventData::EventData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::EventData::EventData(EventDefinition* definition) 
    : EventData(*static_cast< ::default_init_tag* >(0))
{
    ctor(definition);
}

void com::tibbo::aggregate::common::context::EventData::init()
{
    listeners = new ContextEventListenerSet();
    history = ::java::util::Collections::synchronizedList(new ::java::util::LinkedList());
}

void com::tibbo::aggregate::common::context::EventData::ctor(EventDefinition* definition)
{
    super::ctor();
    init();
    this->definition = definition;
}

void com::tibbo::aggregate::common::context::EventData::registerFiredEvent()
{
    fireCount++;
}

com::tibbo::aggregate::common::context::EventDefinition* com::tibbo::aggregate::common::context::EventData::getDefinition()
{
    return definition;
}

java::util::Set* com::tibbo::aggregate::common::context::EventData::getListeners()
{
    return listeners)->getListeners();
}

java::util::Set* com::tibbo::aggregate::common::context::EventData::getListenersInfo()
{
    return listeners)->getListenersInfo();
}

long com::tibbo::aggregate::common::context::EventData::getFireCount()
{
    return fireCount;
}

bool com::tibbo::aggregate::common::context::EventData::addListener(ContextEventListener* listener, bool weak)
{
    return listeners)->addListener(listener, weak);
}

bool com::tibbo::aggregate::common::context::EventData::removeListener(ContextEventListener* listener)
{
    return listeners)->removeListener(listener);
}

void com::tibbo::aggregate::common::context::EventData::clearListeners()
{
    listeners)->clear();
}

void com::tibbo::aggregate::common::context::EventData::dispatch(Event* event)
{
    try {
        auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
        auto listenerSet = listeners)->getListeners();
        if(logger)->isDebugEnabled()) {
            logger)->debug(std::stringBuilder().append(u"Dispatching event '"_j)->append(event))
                ->append(u"', "_j)
                ->append(listenerSet)->size())
                ->append(u" listeners"_j)->toString());
        }
        for (auto _i = listenerSet)->iterator(); _i->hasNext(); ) {
            ContextEventListener* el = java_cast< ContextEventListener* >(_i->next());
            {
                try {
                    if(!el)->shouldHandle(event)) {
                        if(logger)->isDebugEnabled()) {
                            logger)->debug(std::stringBuilder().append(u"Listener '"_j)->append(el))
                                ->append(u"' does not want to handle event: "_j)
                                ->append(event))->toString());
                        }
                        continue;
                    }
                    if(logger)->isDebugEnabled()) {
                        logger)->debug(std::stringBuilder().append(u"Listener '"_j)->append(el))
                            ->append(u"' is going to handle event: "_j)
                            ->append(event))->toString());
                    }
                    el)->handle(event);
                } catch (::java::lang::Exception* ex) {
                    Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append(u"Error handling event '"_j)->append(event)->toString())
                        ->append(u"'"_j)->toString(), ex);
                }
            }
        }
    } catch (::java::lang::Throwable* ex) {
        Log::CONTEXT_EVENTS())->error(std::stringBuilder().append(u"Unexpected error occurred while dispatching event '"_j)->append(event))
            ->append(u"'"_j)->toString(), ex);
    }
}

Event* com::tibbo::aggregate::common::context::EventData::store(Event* event, int  customMemoryStorageSize)
{
    auto memoryStorateSize = customMemoryStorageSize != 0 ? customMemoryStorageSize : definition)->getMemoryStorageSize();
    if(memoryStorateSize == 0) {
        return 0;
    }
    Event* duplicate;
    {
        synchronized synchronized_0(history);
        {
            for (auto *iterator = history)->iterator(); iterator)->hasNext(); ) {
                auto cur = java_cast< Event* >(iterator)->next());
                if(cur)->getExpirationtime() != 0 && cur)->getExpirationtime())->getTime() < ::java::lang::System::currentTimeMillis()) {
                    iterator)->remove();
                    continue;
                }
                if(history)->size() > (memoryStorateSize))->intValue()) {
                    iterator)->remove();
                    continue;
                }
                if(event)->getDeduplicationId() != 0 && ::com::tibbo::aggregate::common::util::Util::equals(event)->getDeduplicationId(), cur)->getDeduplicationId())) {
                    if(duplicate != 0) {
                        Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append(u"Event history of event "_j)->append(event))
                            ->append(u" contains more than one duplicate with ID: "_j)
                            ->append(event)->getDeduplicationId())->toString());
                    }
                    duplicate = cur;
                }
            }
        }
    }
    if(duplicate == 0) {
        history)->add(event));
        return 0;
    } else {
        Log::CONTEXT_EVENTS())->debug(std::stringBuilder().append(u"Found duplicate of event "_j)->append(event))
            ->append(u" (duplicate ID: "_j)
            ->append(event)->getDeduplicationId())
            ->append(u"): "_j)
            ->append(duplicate))->toString());
        duplicate)->setCreationtime(event)->getCreationtime());
        duplicate)->setCount(duplicate)->getCount() + int(1));
        return duplicate;
    }
}

java::util::List* com::tibbo::aggregate::common::context::EventData::getHistory()
{
    return new ::java::util::LinkedList(history);
}

std::string com::tibbo::aggregate::common::context::EventData::toString()
{
    return std::stringBuilder().append(definition))->append(u" - "_j)
        ->append(listeners)->size())
        ->append(u" listeners"_j)->toString();
}

int com::tibbo::aggregate::common::context::EventData::compareTo(EventData* d)
{
    return definition)->compareTo(d)->getDefinition());
}

int com::tibbo::aggregate::common::context::EventData::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< EventData* >(arg0));
}



java::lang::Class* com::tibbo::aggregate::common::context::EventData::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.EventData", 44);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::EventData::getClass0()
{
    return class_();
}

