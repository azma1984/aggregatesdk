// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java
#include <com/tibbo/aggregate/common/protocol/DefaultClientController_ForwardingEventListener.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/event/EventHandlingException.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/protocol/DefaultClientController_PendingEventProcessingTask.h"
#include <com/tibbo/aggregate/common/protocol/DefaultClientController.h"
#include <com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/server/ServerContextConstants.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/Runnable.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/ResourceBundle.h"
//#include <java/util/concurrent/BlockingQueue.h"
//#include <java/util/concurrent/ExecutorService.h"
//#include <java/util/concurrent/RejectedExecutionException.h"
//#include <org/apache/log4j/Logger.h"
#include <ObjectArray.h"

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
com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::DefaultClientController_ForwardingEventListener(DefaultClientController *DefaultClientController_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultClientController_this(DefaultClientController_this)
{
    
}

com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::DefaultClientController_ForwardingEventListener(DefaultClientController *DefaultClientController_this, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter) 
    : DefaultClientController_ForwardingEventListener(DefaultClientController_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(listenerCode,filter);
}

void com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::ctor(int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter)
{
    super::ctor(0, listenerCode, filter);
    setAcceptEventsWithoutListenerCode(true);
}

bool com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::shouldHandle(Event* event) /* throws(EventHandlingException) */
{
    try {
        if(!super::shouldHandle(event)) {
            return false;
        }
        if(!DefaultClientController_this->controllerShouldHandle(event, this)) {
            return false;
        }
        if(event)->getName())->equals(::com::tibbo::aggregate::common::context::AbstractContext::E_CHILD_ADDED()))) {
            auto con = DefaultClientController_this->getContext(event)->getContext());
            if(con == 0 || java_cast< ::com::tibbo::aggregate::common::context::Context* >(con)->getChild(event)->getData())->rec())->getString(::com::tibbo::aggregate::common::context::AbstractContext::EF_CHILD_ADDED_CHILD()), getCallerController())) == 0) {
                return false;
            }
        }
        if(event)->getName())->equals(::com::tibbo::aggregate::common::server::ServerContextConstants::E_VISIBLE_CHILD_ADDED()))) {
            if(java_cast< ::com::tibbo::aggregate::common::context::Context* >(DefaultClientController_this->getContextManager())->get(event)->getData())->rec())->getString(::com::tibbo::aggregate::common::server::ServerContextConstants::EF_VISIBLE_CHILD_ADDED_PATH()), getCallerController())) == 0) {
                return false;
            }
        }
        return true;
    } catch (::java::lang::Exception* ex) {
        throw new EventHandlingException(ex)->getMessage(), ex);
    }
}

void com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::handle(Event* event) /* throws(EventHandlingException) */
{
    if(Log::CLIENTS())->isDebugEnabled()) {
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Handling event '"_j)->append(event)->getName())
            ->append(u"' from context '"_j)
            ->append(event)->getContext())
            ->append(u"' for listener '"_j)
            ->append(getListenerCode()))
            ->append(u"' ("_j)
            ->append(toString())
            ->append(u")"_j)->toString());
    }
    try {
        auto cmd = DefaultClientController_this->constructEventCommand(event, getListenerCode());
        {
            synchronized synchronized_0(DefaultClientController_this->pendingCommandsQueue);
            {
                auto wasEmpty = DefaultClientController_this->pendingCommandsQueue)->isEmpty();
                auto added = DefaultClientController_this->pendingCommandsQueue)->offer(cmd));
                if(!added && Log::CLIENTS())->isDebugEnabled()) {
                    Log::CLIENTS())->debug(std::stringBuilder().append(u"Event queue overflow for client controller: "_j)->append(DefaultClientController_this->toString())->toString());
                }
                if(wasEmpty) {
                    try {
                        DefaultClientController_this->commandExecutionService)->submit(static_cast< ::java::lang::Runnable* >(new DefaultClientController_PendingEventProcessingTask(DefaultClientController_this)));
                    } catch (::java::util::concurrent::RejectedExecutionException* ex) {
                        Log::CLIENTS())->warn(u"Cannot schedule new event delivery since command processing pool is overloaded"_j);
                    }
                }
            }
        }
    } catch (::java::lang::Exception* ex) {
        throw new EventHandlingException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"clErrorHandlingEvent"_j), new voidArray({event)->getName())})))->append(ex)->getMessage())->toString(), ex);
    }
}

std::string com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::toString()
{
    return std::stringBuilder().append(u"ForwardingEventListener: "_j)->append(getListenerCode()))->toString();
}

int com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + getOwningController())->hashCode();
    result = prime * result + ((getListenerCode() == 0) ? int(0) : getListenerCode())->hashCode());
    result = prime * result + ((getFilter() == 0) ? int(0) : getFilter())->hashCode());
    return result;
}

bool com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< DefaultClientController_ForwardingEventListener* >(obj);
    if(getOwningController() != other)->getOwningController()) {
        return false;
    }
    if(getListenerCode() == 0) {
        if(other)->getListenerCode() != 0) {
            return false;
        }
    } else if(other)->getListenerCode() == 0) {
        return false;
    }
    if(getListenerCode())->intValue() != other)->getListenerCode())->intValue()) {
        return false;
    }
    if(getFilter() == 0) {
        if(other)->getFilter() != 0) {
            return false;
        }
    } else if(!getFilter())->equals(other)->getFilter()))) {
        return false;
    }
    return true;
}

com::tibbo::aggregate::common::protocol::DefaultClientController* com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::getOwningController()
{
    return DefaultClientController_this;
}

com::tibbo::aggregate::common::context::CallerController* com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::getCallerController()
{
    return DefaultClientController_this->getCallerController();
}



java::lang::Class* com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.DefaultClientController.ForwardingEventListener", 83);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::DefaultClientController_ForwardingEventListener::getClass0()
{
    return class_();
}

