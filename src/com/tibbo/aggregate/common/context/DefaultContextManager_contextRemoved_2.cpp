// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java
//#include <com/tibbo/aggregate/common/context/DefaultContextManager_contextRemoved_2.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/DefaultContextManager.h"
#include <com/tibbo/aggregate/common/context/EventData.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/event/ContextEventListenerInfo.h"
#include <com/tibbo/aggregate/common/event/ContextEventListenerSet.h"
/*
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Iterator.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
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
com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_2::DefaultContextManager_contextRemoved_2(DefaultContextManager *DefaultContextManager_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultContextManager_this(DefaultContextManager_this)
{
    
    ctor();
}

void com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_2::visit(Context* vc)
{
    auto cel = DefaultContextManager_this->getContextListeners(vc)->getPath());
    auto const eventDefinitions = vc)->getEventDefinitions(DefaultContextManager_this->callerController);
    for (auto _i = eventDefinitions)->iterator(); _i->hasNext(); ) {
        EventDefinition* ed = java_cast< EventDefinition* >(_i->next());
        {
            auto edata = vc)->getEventData(ed)->getName());
            auto listeners = java_cast< ContextEventListenerSet* >(cel)->get(ed)->getName()));
            if(listeners != 0) {
                {
                    synchronized synchronized_0(listeners);
                    {
                        for (auto _i = edata)->getListenersInfo())->iterator(); _i->hasNext(); ) {
                            ContextEventListenerInfo* celi = java_cast< ContextEventListenerInfo* >(_i->next());
                            {
                                listeners)->addListener(celi)->getListener(), celi)->isWeak());
                            }
                        }
                    }
                }
            }
        }
    }
}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_2::getClass0()
{
    return class_();
}

