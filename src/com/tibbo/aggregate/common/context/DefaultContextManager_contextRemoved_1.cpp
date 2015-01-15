// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java
#include <com/tibbo/aggregate/common/context/DefaultContextManager_contextRemoved_1.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/context/DefaultContextManager.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
#include <com/tibbo/aggregate/common/event/ContextEventListenerInfo.h"
#include <com/tibbo/aggregate/common/event/ContextEventListenerSet.h"
#include <com/tibbo/aggregate/common/event/EventUtils.h"
////#include <java/lang/ClassCastException.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/lang/String.h"
////#include <java/util/Iterator.h"
////#include <java/util/LinkedHashMap.h"
////#include <java/util/List.h"
////#include <java/util/Map.h"
////#include <java/util/Set.h"
////#include <java/util/concurrent/locks/ReentrantReadWriteLock_ReadLock.h"
////#include <java/util/concurrent/locks/ReentrantReadWriteLock.h"

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
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
com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_1::DefaultContextManager_contextRemoved_1(DefaultContextManager *DefaultContextManager_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultContextManager_this(DefaultContextManager_this)
{
    
    ctor();
}

void com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_1::visit(Context* vc)
{
    DefaultContextManager_this->maskListenersLock)->readLock())->lock();
    {
        auto finally0 = finally([&] {
            DefaultContextManager_this->maskListenersLock)->readLock())->unlock();
        });
        {
            for (auto _i = DefaultContextManager_this->maskListeners)->keySet())->iterator(); _i->hasNext(); ) {
                const std::string & mask = java_cast< const std::string & >(_i->next());
                {
                    if(ContextUtils::matchesToMask(mask, vc)->getPath())) {
                        auto contextMaskListeners = DefaultContextManager_this->getContextMaskListeners(mask);
                        std::map contextMaskListenersCopy;
                        {
                            synchronized synchronized_0(contextMaskListeners);
                            {
                                contextMaskListenersCopy = new ::java::util::LinkedHashMap(static_cast< std::map >(contextMaskListeners));
                            }
                        }
                        for (auto _i = contextMaskListenersCopy)->keySet())->iterator(); _i->hasNext(); ) {
                            const std::string & event = java_cast< const std::string & >(_i->next());
                            {
                                auto cels = DefaultContextManager_this->getMaskListeners(mask, event);
                                for (auto _i = cels)->getListenersInfo())->iterator(); _i->hasNext(); ) {
                                    ContextEventListenerInfo* li = java_cast< ContextEventListenerInfo* >(_i->next());
                                    {
                                        auto events = EventUtils::getEvents(vc, event, li)->getListener())->getCallerController());
                                        for (auto _i = events)->iterator(); _i->hasNext(); ) {
                                            EventDefinition* ed = java_cast< EventDefinition* >(_i->next());
                                            {
                                                vc)->removeEventListener(ed)->getName(), li)->getListener());
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_1::getClass0()
{
    return class_();
}

