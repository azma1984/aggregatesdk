// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.java
#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController_processEvent_1.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/event/FireEventRequestController.h"
#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Date.h"
//#include <java/util/Iterator.h"
//#include <java/util/List.h"
//#include <org/apache/log4j/Logger.h"

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

com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_processEvent_1::AbstractAggreGateDeviceController_processEvent_1(AbstractAggreGateDeviceController *AbstractAggreGateDeviceController_this, IncomingAggreGateCommand* cmd)
    : super(*static_cast< ::default_init_tag* >(0))
    , AbstractAggreGateDeviceController_this(AbstractAggreGateDeviceController_this)
    , cmd(cmd)
{
    
    ctor();
}

void com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_processEvent_1::run()
{
    if(!AbstractAggreGateDeviceController_this->isConnected()) {
        return;
    }
    try {
        auto contextPath = cmd)->getParameter(AggreGateCommand::INDEX_EVENT_CONTEXT);
        auto eventName = cmd)->getParameter(AggreGateCommand::INDEX_EVENT_NAME);
        int level = (cmd)->getParameter(AggreGateCommand::INDEX_EVENT_LEVEL))))->intValue();
        auto idstr = cmd)->getParameter(AggreGateCommand::INDEX_EVENT_ID);
        auto id = idstr)->length() > 0 ? ::java::lang::Long::valueOf(idstr) : static_cast< ::java::lang::Long* >(0);
        auto listenerstr = cmd)->getParameter(AggreGateCommand::INDEX_EVENT_LISTENER);
        auto listener = listenerstr)->length() > 0 ? listenerstr) : static_cast< int  >(0);
        auto contexts = AbstractAggreGateDeviceController_this->getProxyContexts(contextPath);
        if(contexts)->size() == 0) {
            Log::CONTEXT_EVENTS())->info(std::stringBuilder().append(u"Error firing event '"_j)->append(eventName)
                ->append(u"': context '"_j)
                ->append(contextPath)
                ->append(u"' not found"_j)->toString());
            return;
        }
        for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
            ProxyContext* con = java_cast< ProxyContext* >(_i->next());
            {
                auto ed = con)->getEventDefinition(eventName);
                if(ed == 0) {
                    Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append(u"Error firing event: event '"_j)->append(eventName)
                        ->append(u"' not available in context '"_j)
                        ->append(contextPath)
                        ->append(u"'"_j)->toString());
                    continue;
                }
                auto data = AbstractAggreGateDeviceController_this->decodeRemoteDataTable(ed)->getFormat(), cmd)->getEncodedDataTableFromEventMessage());
                ::java::util::Date* timestamp;
                if(cmd)->hasParameter(AggreGateCommand::INDEX_EVENT_TIMESTAMP)) {
                    auto timestampstr = cmd)->getParameter(AggreGateCommand::INDEX_EVENT_TIMESTAMP);
                    timestamp = timestampstr)->length() > 0 ? new ::java::util::Date((::java::lang::Long::valueOf(timestampstr)))->longValue()) : static_cast< ::java::util::Date* >(0);
                }
                auto event = con)->fireEvent(ed)->getName(), data, level, id, timestamp, listener, static_cast< ::com::tibbo::aggregate::common::context::CallerController* >(0), new FireEventRequestController(false));
                AbstractAggreGateDeviceController_this->confirmEvent(con, ed, event);
            }
        }
    } catch (::java::lang::Exception* ex) {
        if(AbstractAggreGateDeviceController_this->getLogger() != 0) {
            AbstractAggreGateDeviceController_this->getLogger())->error(std::stringBuilder().append(u"Error processing async command '"_j)->append(cmd))
                ->append(u"'"_j)->toString(), ex);
        }
    }
}



java::lang::Class* com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_processEvent_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_processEvent_1::getClass0()
{
    return class_();
}

