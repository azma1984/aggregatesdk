// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListenerSet.java
#include <com/tibbo/aggregate/common/event/ContextEventListenerSet.h"

#include <com/tibbo/aggregate/common/context/ContextRuntimeException.h"
#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
#include <com/tibbo/aggregate/common/event/ContextEventListenerInfo.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/ref/Reference.h"
//#include <java/lang/ref/WeakReference.h"
//#include <java/util/Collections.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashSet.h"
//#include <java/util/Set.h"

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
com::tibbo::aggregate::common::event::ContextEventListenerSet::ContextEventListenerSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::ContextEventListenerSet::ContextEventListenerSet()
    : ContextEventListenerSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::event::ContextEventListenerSet::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::event::ContextEventListenerSet::init()
{
    listeners = new ::java::util::LinkedHashSet();
}

java::util::Set* com::tibbo::aggregate::common::event::ContextEventListenerSet::getListeners()
{
    auto localListeners = new ::java::util::LinkedHashSet();
    for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        localListeners)->add(li)->getListener()));
    }
    return ::java::util::Collections::unmodifiableSet(localListeners);
}

java::util::Set* com::tibbo::aggregate::common::event::ContextEventListenerSet::getListenersInfo()
{
    auto localListeners = new ::java::util::LinkedHashSet();
    for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        localListeners)->add(li));
    }
    return ::java::util::Collections::unmodifiableSet(localListeners);
}

bool com::tibbo::aggregate::common::event::ContextEventListenerSet::addListener(ContextEventListener* listener, bool weak)
{
    if(contains(listener)) {
        return false;
    }
    listeners)->add(weak ? new ::java::lang::ref::WeakReference(listener)) : listener)));
    return true;
}

bool com::tibbo::aggregate::common::event::ContextEventListenerSet::removeListener(ContextEventListener* listener)
{
    for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        if(li)->getListener())->equals(listener)) {
            iterator)->remove();
            return true;
        }
    }
    return false;
}

bool com::tibbo::aggregate::common::event::ContextEventListenerSet::contains(ContextEventListener* listener)
{
    for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        if(li)->getListener())->equals(listener)) {
            return true;
        }
    }
    return false;
}

void com::tibbo::aggregate::common::event::ContextEventListenerSet::clear()
{
    {
        synchronized synchronized_0(listeners);
        {
            listeners)->clear();
        }
    }
}

int com::tibbo::aggregate::common::event::ContextEventListenerSet::size()
{
    return listeners)->size();
}

com::tibbo::aggregate::common::event::ContextEventListenerInfo* com::tibbo::aggregate::common::event::ContextEventListenerSet::getListenerInfo(void* ref)
{
    
    if(dynamic_cast< ContextEventListener* >(ref) != 0) {
        return new ContextEventListenerInfo(java_cast< ContextEventListener* >(ref), false);
    } else if(dynamic_cast< ::java::lang::ref::Reference* >(ref) != 0) {
        auto cel = java_cast< ContextEventListener* >((java_cast< ::java::lang::ref::Reference* >(ref)))->get());
        return cel != 0 ? new ContextEventListenerInfo(cel, true) : static_cast< ContextEventListenerInfo* >(0);
    } else {
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(std::stringBuilder().append(u"Unexpected reference: "_j)->append(ref))->toString());
    }
}



java::lang::Class* com::tibbo::aggregate::common::event::ContextEventListenerSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.ContextEventListenerSet", 56);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::event::ContextEventListenerSet::getClass0()
{
    return class_();
}

