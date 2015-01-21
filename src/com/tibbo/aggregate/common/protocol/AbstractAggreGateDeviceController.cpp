// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.java
#include <AbstractAggreGateDeviceController.h>

   /*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/communication/Command.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/context/ContextSecurityException.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"
#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/datatable/encoding/FormatCache.h"
#include <com/tibbo/aggregate/common/device/RemoteDeviceErrorException.h"
#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController_processEvent_1.h"
#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController_setCommandParser_2.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateDevice.h"
#include <com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"
#include <com/tibbo/aggregate/common/protocol/RemoteContextManager.h"
#include <com/tibbo/aggregate/common/util/UserSettings.h"
   */


template <class D,class C> AbstractAggreGateDeviceController<D,C>::AbstractAggreGateDeviceController()
{
 int i;
 i++;
}
 /*
AbstractAggreGateDeviceController::AbstractAggreGateDeviceController(AggreGateDevice* device, ::org::apache::log4j::Logger* logger)
    : AbstractAggreGateDeviceController(*static_cast< ::default_init_tag* >(0))
{
    ctor(device,logger);
}

void AbstractAggreGateDeviceController::init()
{
    userSettings = new ::com::tibbo::aggregate::common::util::UserSettings();
    formatCache = new encoding::FormatCache(this);
}

void AbstractAggreGateDeviceController::ctor(AggreGateDevice* device, ::org::apache::log4j::Logger* logger)
{
    super::ctor(device)->getCommandTimeout(), logger);
    init();
    this->device = device;
}

RemoteContextManager* AbstractAggreGateDeviceController::getContextManager()
{
    return java_cast< RemoteContextManager* >(contextManager);
}
	 */
template <class D,class C> void AbstractAggreGateDeviceController<D,C>::setContextManager(C* contextManager)
{
    this->contextManager = contextManager;
}
 /*
void AbstractAggreGateDeviceController::setDevice(AggreGateDevice* device)
{
    this->device = device;
}

AggreGateDevice* AbstractAggreGateDeviceController::getDevice()
{
    return java_cast< AggreGateDevice* >(device);
}

CallerController* AbstractAggreGateDeviceController::getCallerController()
{
    return callerController;
}

void AbstractAggreGateDeviceController::setCallerController(CallerController* callerController)
{
    this->callerController = callerController;
}

Dateencoding::FormatCache* AbstractAggreGateDeviceController::getFormatCache()
{
    return formatCache;
}

com::tibbo::aggregate::common::util::UserSettings* AbstractAggreGateDeviceController::getSettings()
{
    return userSettings;
}

Dateencoding::ClassicEncodingSettings* AbstractAggreGateDeviceController::createClassicEncodingSettings(bool forSending)
{
    auto es = new encoding::ClassicEncodingSettings(false);
    if(!forSending) {
        es)->setFormatCache(formatCache);
    }
    es)->setEncodeFormat(!avoidSendingFormats);
    return es;
}

void AbstractAggreGateDeviceController::setAvoidSendingFormats(bool avoidSendingFormats)
{
    this->avoidSendingFormats = avoidSendingFormats;
}

bool AbstractAggreGateDeviceController::isAvoidSendingFormats()
{
    return avoidSendingFormats;
}

bool AbstractAggreGateDeviceController::connectImpl()
{
	auto ans = java_cast< IncomingAggreGateCommand* >(sendCommand(AggreGateCommandUtils::startMessage()));
    if(!ans)->getReplyCode())->equals(AggreGateCommand::REPLY_CODE_OK()))) {
        throw new RemoteDeviceErrorException(Cres::get())->getString(u"devUncompatibleVersion"_j));
    }
    formatCache)->clear();
    return true;
}

void AbstractAggreGateDeviceController::destroy()
{
}

void AbstractAggreGateDeviceController::disconnectImpl()
{
    if(java_cast< RemoteContextManager* >(contextManager) != 0) {
        java_cast< RemoteContextManager* >(contextManager))->stop();
    }
    if(eventPreprocessor != 0) {
        eventPreprocessor)->shutdown();
    }
    formatCache)->clear();
}

std::list  AbstractAggreGateDeviceController::getProxyContexts(const std::string & path)
{
    auto con = java_cast< ProxyContext* >(java_cast< RemoteContextManager* >(getContextManager()))->get(path));
	return con != 0 ? ::java::util::Collections::singletonList(con) : ::java::util::Collections::emptyList();
}

java::util::concurrent::ExecutorService* AbstractAggreGateDeviceController::getEventPreprocessor()
{
    return eventPreprocessor;
}

IncomingAggreGateCommand* AbstractAggreGateDeviceController::sendCommandAndCheckReplyCode(OutgoingAggreGateCommand* cmd)
{
	auto ans = java_cast< IncomingAggreGateCommand* >(sendCommand(cmd));
    if(ans)->getReplyCode())->equals(AggreGateCommand::REPLY_CODE_DENIED()))) {
        auto message = ans)->getNumberOfParameters() > AggreGateCommand::INDEX_REPLY_MESSAGE ? std::stringBuilder().append(u": "_j)->append(DataTableUtils::transferDecode(ans)->getParameter(AggreGateCommand::INDEX_REPLY_MESSAGE)))->toString() : u""_j;
        throw new ContextSecurityException(std::stringBuilder().append(Cres::get())->getString(u"devAccessDeniedReply"_j))->append(message)->toString());
    }
    if(ans)->getReplyCode())->equals(AggreGateCommand::REPLY_CODE_ERROR()))) {
        auto message = ans)->getNumberOfParameters() > AggreGateCommand::INDEX_REPLY_MESSAGE ? std::stringBuilder().append(u": "_j)->append(DataTableUtils::transferDecode(ans)->getParameter(AggreGateCommand::INDEX_REPLY_MESSAGE)))->toString() : u""_j;
        auto details = ans)->getNumberOfParameters() > AggreGateCommand::INDEX_REPLY_DETAILS ? DataTableUtils::transferDecode(ans)->getParameter(AggreGateCommand::INDEX_REPLY_DETAILS)) : static_cast< const std::string & >(0);
        throw new RemoteDeviceErrorException(std::stringBuilder().append(Cres::get())->getString(u"devServerReturnedError"_j))->append(message)->toString(), details);
    }
    if(!ans)->getReplyCode())->equals(AggreGateCommand::REPLY_CODE_OK()))) {
        throw new RemoteDeviceErrorException(std::stringBuilder().append(Cres::get())->getString(u"devServerReturnedError"_j))->append(u": "_j)
            ->append(ans)->toString())
            ->append(u" (error code: '"_j)
            ->append(ans)->getReplyCode())
            ->append(u"')"_j)->toString());
    }
    return ans;
}

void AbstractAggreGateDeviceController::processAsyncCommand(IncomingAggreGateCommand* cmd)
{
    if(Log::COMMANDS())->isDebugEnabled()) {
        Log::COMMANDS())->debug(std::stringBuilder().append(u"Async command received from server: "_j)->append(cmd))->toString());
    }
    if(cmd)->getMessageCode())->charAt(int(0)) == AggreGateCommand::MESSAGE_CODE_EVENT) {
        processEvent(cmd);
    }
}

void AbstractAggreGateDeviceController::processAsyncCommand(::com::tibbo::aggregate::common::communication::Command* cmd)
{ 
    processAsyncCommand(dynamic_cast< IncomingAggreGateCommand* >(cmd));
}

void AbstractAggreGateDeviceController::processEvent(IncomingAggreGateCommand* cmd)
{
    if(eventPreprocessor == 0 || eventPreprocessor)->isShutdown()) {
        return;
    }
    eventPreprocessor)->execute(new AbstractAggreGateDeviceController_processEvent_1(this, cmd));
}

void AbstractAggreGateDeviceController::confirmEvent(Context* con, EventDefinition* def, Event* event)
{
}

void AbstractAggreGateDeviceController::setCommandParser(::com::tibbo::aggregate::common::communication::CommandParser* commandBuffer)
{
    super::setCommandParser(commandBuffer);
    eventPreprocessor = ::java::util::concurrent::Executors::newSingleThreadExecutor(new AbstractAggreGateDeviceController_setCommandParser_2(this));
}

std::string AbstractAggreGateDeviceController::toString()
{
    return java_cast< AggreGateDevice* >(getDevice()))->toString();
}

DateDataTable* AbstractAggreGateDeviceController::callRemoteFunction(const std::string & context, const std::string & name, TableFormat* outputFormat, DataTable* parameters)
{
    try {
        auto const encodedParameters = parameters)->encode(createClassicEncodingSettings(true));
        auto ans = sendCommandAndCheckReplyCode(AggreGateCommandUtils::callFunctionOperation(context, name, encodedParameters));
        return decodeRemoteDataTable(outputFormat, ans)->getEncodedDataTableFromReply());
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(ex)->getMessage(), ex);
    }
}

DateDataTable* AbstractAggreGateDeviceController::decodeRemoteDataTable(TableFormat* format, const std::string & encodedReply)
{
    if(isAvoidSendingFormats()) {
        auto settings = new encoding::ClassicEncodingSettings(false, format);
        return new DataTable(encodedReply, settings, true);
    }
    try {
        return new DataTable(encodedReply, createClassicEncodingSettings(false), false);
    } catch (::java::lang::Exception* ex) {
        throw new DataTableException(std::stringBuilder().append(u"Error parsing encoded data table '"_j)->append(encodedReply)
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}



java::lang::Class* AbstractAggreGateDeviceController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.AbstractAggreGateDeviceController", 69);
    return c;
}
 */
void AbstractAggreGateDeviceController::connect()
{
	AbstractDeviceController::connect();
}
  /*
void AbstractAggreGateDeviceController::disconnect()
{
    AbstractDeviceController::disconnect();
}

std::list  AbstractAggreGateDeviceController::getActiveCommands()
{
    return java_cast< std::list  >(AbstractDeviceController::getActiveCommands());
}

com::tibbo::aggregate::common::communication::CommandProcessorStatistics* AbstractAggreGateDeviceController::getStatistics()
{
    return AbstractDeviceController::getStatistics();
}

bool AbstractAggreGateDeviceController::isActive()
{
    return AbstractDeviceController::isActive();
}

void AbstractAggreGateDeviceController::login()
{
    AbstractDeviceController::login();
}

IncomingAggreGateCommand* AbstractAggreGateDeviceController::sendCommand(::com::tibbo::aggregate::common::communication::Command* cmd)
{
    return java_cast< IncomingAggreGateCommand* >(AbstractDeviceController::sendCommand(java_cast< OutgoingAggreGateCommand* >(cmd)));
}

java::lang::Class* AbstractAggreGateDeviceController::getClass0()
{
    return class_();
}
  */
