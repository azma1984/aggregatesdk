// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java
#include "ProxyContext.h"

  /*
#include "Cres.h"
#include "Log.h"
#include "action/ActionDefinition.h"
#include "context/AbstractContext.h"
#include "context/ActionConstants.h"
#include "context/CallerController.h"
#include "context/Context.h"
#include "context/ContextException.h"
#include "context/ContextManager.h"
#include "context/ContextRuntimeException.h"
#include "context/ContextStatus.h"
#include "context/ContextUtils.h"
#include "context/ContextVisitor.h"
#include "context/Contexts.h"
#include "context/EventDataPtr.h"
#include "context/EventDefinition.h"
#include "context/FunctionDefinition.h"
#include "context/VariableDefinition.h"
#include "data/Event.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "datatable/encoding/FormatCache.h"
#include "device/DisconnectionException.h"
#include "event/ContextEventListener.h"
#include "expression/Expression.h"
#include "protocol/AbstractAggreGateDeviceController.h"
#include "protocol/AggreGateCommandUtils.h"
#include "protocol/CachedVariableValue.h"
#include "protocol/IncomingAggreGateCommand.h"
#include "protocol/OutgoingAggreGateCommand.h"
#include "protocol/ProxyContext_setupMyself_4.h"
#include "protocol/ProxyContext_1.h"
#include "protocol/ProxyContext_2.h"
#include "protocol/ProxyContext_3.h"
#include "protocol/ProxyContext_setupMyself_5.h"
#include "protocol/ProxyContext_setupMyself_6.h"
#include "protocol/ProxyContext_setupMyself_7.h"
#include "protocol/ProxyContext_setupMyself_8.h"
#include "protocol/ProxyContext_setupMyself_9.h"
#include "protocol/ProxyContext_setupMyself_10.h"
#include "protocol/ProxyContext_setupMyself_11.h"
#include "protocol/ProxyContext_setupMyself_12.h"
#include "protocol/ProxyContext_setupMyself_13.h"
#include "protocol/ProxyContext_setupMyself_14.h"
#include "protocol/ProxyContext_setupMyself_15.h"
#include "protocol/ProxyContext_clear_16.h"
#include "protocol/RemoteContextManager.h"
#include "server/ServerContextConstants.h"
#include "util/Util.h"

ProxyContext::ProxyContext(std::string name, AbstractAggreGateDeviceControllerPtr controller)
{

	localInitComplete = false;
	initializingInfo = false;
	initializedInfo = false;
	initializingInfoLock = new void();
	initializingChildren = false;
	initializedChildren = false;
	initializingChildrenLock = new void();
	initializingVariables = false;
	initializedVariables = false;
	initializingVariablesLock = new void();
	initializingFunctions = false;
	initializedFunctions = false;
	initializingFunctionsLock = new void();
	initializingEvents = false;
	initializedEvents = false;
	initializingEventsLock = new void();
	initializingActions = false;
	initializedActions = false;
	initializingActionsLock = new void();
	initializingStatus = false;
	initializedStatus = false;
	initializingStatusLock = new void();
	initializingVisibleChildren = false;
	initializingVisibleChildrenLock = new void();
	variableCache = new ::java::util::HashMap();
	variableCacheLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
	visibleChildAddedListener = new ProxyContext_1(this);
	visibleChildRemovedListener = new ProxyContext_2(this);
	contextStatusChangedListener = new ProxyContext_3(this);

 this->controller = controller;
 //clear();
}

std::string& ProxyContext::F_LOCAL_REINITIALIZE()
{
    
    return F_LOCAL_REINITIALIZE_;
}

std::list & ProxyContext::AUTO_LISTENED_EVENTS()
{
	
	return AUTO_LISTENED_EVENTS_;
}


void ProxyContext::setupMyself()
{
    super::setupMyself();
    setFireUpdateEvents(false);
    setPermissionCheckingEnabled(false);
    setChildrenSortingEnabled(false);
    addLocalFunctionDefinitions();
    addEventListener(E_CHILD_ADDED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_4(this)));
    addEventListener(E_CHILD_REMOVED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_5(this)));
    addEventListener(E_VARIABLE_ADDED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_6(this)));
    addEventListener(E_VARIABLE_REMOVED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_7(this)));
    addEventListener(E_FUNCTION_ADDED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_8(this)));
    addEventListener(E_FUNCTION_REMOVED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_9(this)));
    addEventListener(E_EVENT_ADDED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_10(this)));
    addEventListener(E_EVENT_REMOVED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_11(this)));
    addEventListener(E_ACTION_ADDED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_12(this)));
    addEventListener(E_ACTION_REMOVED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_13(this)));
    addEventListener(E_ACTION_STATE_CHANGED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_14(this)));
    addEventListener(E_INFO_CHANGED(), static_cast< ContextEventListenerPtr >(new ProxyContext_setupMyself_15(this)));
    localInitComplete = true;
}

void ProxyContext::addLocalFunctionDefinitions()
{
    addFunctionDefinition(new FunctionDefinition(F_LOCAL_REINITIALIZE(), TableFormat::EMPTY_FORMAT(), TableFormat::EMPTY_FORMAT()));
}

DateTableFormatPtr ProxyContext::decodeFormat(const std::string & source, CallerControllerPtr caller)
{
    if(source == 0) {
        return 0;
    }
    auto idSourceBuilder = new std::stringBuilder();
    int i;
    for (i; i < source)->length(); i++) {
        auto c = source)->charAt(i);
        if(::java::lang::Character::isDigit(c)) {
            idSourceBuilder)->append(c);
        } else {
            break;
        }
    }
    source = source)->substring(i);
    auto idSource = idSourceBuilder)->toString();
    auto formatId = idSource)->length() > 0 ? idSource) : static_cast< int  >(0);
    auto format = source)->length() > 0 ? new TableFormat(source, new encoding::ClassicEncodingSettings(false)) : static_cast< TableFormatPtr >(0);
    if(formatId == 0) {
        return format;
    } else {
        if(format == 0) {
            auto cached = controller)->getFormatCache())->get((formatId))->intValue());
            if(cached == 0) {
                std::cout <<"Unknown format ID: "_j)->append(formatId))->toString());
            }
            return cached;
        } else {
            controller)->getFormatCache())->put((formatId))->intValue(), format);
            return format;
        }
    }
}

void ProxyContext::clear()
{
	try
	{
	 accept(static_cast< ContextVisitorPtr >(new ProxyContext_clear_16(this)));
	}
	catch (ContextException* ex) {
        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initInfo()
{
    try {
        if(initializedInfo) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_0(initializingInfoLock);
            {
                if(!localInitComplete || initializingInfo) {
                    return;
                }
                {
                    auto finally0 = finally([&] {
                        initializingInfo = false;
                    });
                    {
                        initializingInfo = true;
                        initInfoImpl(getRemoteVariable(INFO_DEFINITION_FORMAT(), V_INFO(), ::java::lang::Long::valueOf(METADATA_READ_TIMEOUT)));
                        initializedInfo = true;
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initChildren()
{
    try {
        if(initializedChildren) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_1(initializingChildrenLock);
            {
                if(!localInitComplete || initializingChildren) {
                    return;
                }
                {
                    auto finally1 = finally([&] {
                        initializingChildren = false;
                    });
                    {
                        initializingChildren = true;
                        initChildrenImpl(getRemoteVariable(VFT_CHILDREN(), V_CHILDREN(), ::java::lang::Long::valueOf(METADATA_READ_TIMEOUT)));
                        initializedChildren = true;
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initVariables()
{
    try {
        if(initializedVariables) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_2(initializingVariablesLock);
            {
                if(!localInitComplete || initializingVariables) {
                    return;
                }
                {
                    auto finally2 = finally([&] {
                        initializingVariables = false;
                    });
                    {
                        initializingVariables = true;
                        initVariablesImpl(getRemoteVariable(VARIABLE_DEFINITION_FORMAT(), V_VARIABLES(), ::java::lang::Long::valueOf(METADATA_READ_TIMEOUT)));
                        initializedVariables = true;
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initFunctions()
{
    try {
        if(initializedFunctions) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_3(initializingFunctionsLock);
            {
                if(!localInitComplete || initializingFunctions) {
                    return;
                }
                {
                    auto finally3 = finally([&] {
                        initializingFunctions = false;
                    });
                    {
                        initializingFunctions = true;
                        initFunctionsImpl(getRemoteVariable(FUNCTION_DEFINITION_FORMAT(), V_FUNCTIONS(), ::java::lang::Long::valueOf(METADATA_READ_TIMEOUT)));
                        initializedFunctions = true;
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initEvents()
{
    try {
        if(initializedEvents) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_4(initializingEventsLock);
            {
                if(!localInitComplete || initializingEvents) {
                    return;
                }
                {
                    auto finally4 = finally([&] {
                        initializingEvents = false;
                    });
                    {
                        initializingEvents = true;
                        initEventsImpl(getRemoteVariable(EVENT_DEFINITION_FORMAT(), V_EVENTS(), ::java::lang::Long::valueOf(METADATA_READ_TIMEOUT)));
                        initializedEvents = true;
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initActions()
{
    try {
        if(initializedActions) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_5(initializingActionsLock);
            {
                if(!localInitComplete || initializingActions) {
                    return;
                }
                {
                    auto finally5 = finally([&] {
                        initializingActions = false;
                    });
                    {
                        initializingActions = true;
                        initActionsImpl(getRemoteVariable(ACTION_DEF_FORMAT(), AbstractContext::V_ACTIONS(), ::java::lang::Long::valueOf(METADATA_READ_TIMEOUT)));
                        initializedActions = true;
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initVisibleChildren()
{
    try {
        if(visibleChildren != 0) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_6(initializingVisibleChildrenLock);
            {
                if(!localInitComplete || initializingVisibleChildren) {
                    return;
                }
                {
                    auto finally6 = finally([&] {
                        initializingVisibleChildren = false;
                    });
                    {
                        initializingVisibleChildren = true;
                        initVisibleChildrenImpl();
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initStatus()
{
    try {
        if(initializedStatus) {
            return;
        }
        if(java_cast< RemoteContextManagerPtr >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManagerPtr >(controller)->getContextManager()))->initialize();
        }
        {
            synchronized synchronized_7(initializingStatusLock);
            {
                if(!localInitComplete || initializingStatus) {
                    return;
                }
                {
                    auto finally7 = finally([&] {
                        initializingStatus = false;
                    });
                    {
                        initializingStatus = true;
                        initStatusImpl();
                        initializedStatus = true;
                    }
                }

            }
        }
    } catch (ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initInfoImpl(DataTablePtr info)
{
    setDescription(convertRemoteDescription(info)->rec())->getString(VF_INFO_DESCRIPTION())));
    setType(info)->rec())->getString(VF_INFO_TYPE()));
    if(info)->getFormat())->hasField(VF_INFO_GROUP())) {
        setGroup(info)->rec())->getString(VF_INFO_GROUP()));
    }
    if(info)->getFormat())->hasField(VF_INFO_ICON())) {
        setIconId(info)->rec())->getString(VF_INFO_ICON()));
    }
    if(info)->getFormat())->hasField(VF_INFO_LOCAL_ROOT())) {
        localRoot = info)->rec())->getString(VF_INFO_LOCAL_ROOT());
    }
    if(info)->getFormat())->hasField(VF_INFO_REMOTE_ROOT())) {
        remoteRoot = info)->rec())->getString(VF_INFO_REMOTE_ROOT());
    }
    if(info)->getFormat())->hasField(VF_INFO_REMOTE_PATH()) && remotePath == 0) {
        remotePath = info)->rec())->getString(VF_INFO_REMOTE_PATH());
    }
    if(info)->getFormat())->hasField(VF_INFO_REMOTE_PRIMARY_ROOT())) {
        remotePrimaryRoot = info)->rec())->getString(VF_INFO_REMOTE_PRIMARY_ROOT());
    }
    if(info)->getFormat())->hasField(VF_INFO_MAPPED())) {
        mapped = (info)->rec())->getBoolean(VF_INFO_MAPPED())))->booleanValue();
    }
}

std::string ProxyContext::convertRemoteDescription(const std::string & remoteDescription)
{
    return remoteDescription;
}

void ProxyContext::initChildrenImpl(DataTablePtr children)
{
    for (auto _i = getChildren(getContextManager())->getCallerController()))->iterator(); _i->hasNext(); ) {
        ContextPtr child = java_cast< ContextPtr >(_i->next());
        {
            if(children)->select(VF_CHILDREN_NAME(), child)->getName()) == 0) {
                removeChild(static_cast< ContextPtr >(child));
            }
        }
    }
    for (auto _i = children)->iterator(); _i->hasNext(); ) {
        DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
        {
            auto cn = rec)->getString(VF_CHILDREN_NAME());
            if(java_cast< ContextPtr >(getChild(cn)) == 0) {
                addChild(static_cast< ContextPtr >(java_cast< ContextPtr >(createChildContextProxy(cn))));
            }
        }
    }
}

void ProxyContext::initVisibleChildrenImpl()
{
    initVariables();
    visibleChildren = new ::java::util::LinkedHashSet();
    addEventListener(::com::tibbo::aggregate::common::server::ServerContextConstants::E_VISIBLE_CHILD_ADDED(), visibleChildAddedListener);
    addEventListener(::com::tibbo::aggregate::common::server::ServerContextConstants::E_VISIBLE_CHILD_REMOVED(), visibleChildRemovedListener);
    auto visibleChildrenData = getRemoteVariable(getVariableDefinition(::com::tibbo::aggregate::common::server::ServerContextConstants::V_VISIBLE_CHILDREN()));
    for (auto _i = visibleChildrenData)->iterator(); _i->hasNext(); ) {
        DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
        {
            auto localVisiblePath = getLocalVisiblePath(rec)->getString(::com::tibbo::aggregate::common::server::ServerContextConstants::VF_VISIBLE_CHILDREN_PATH()));
            if(localVisiblePath != 0) {
                visibleChildren)->add(localVisiblePath);
            }
        }
    }
}

ProxyContextPtr ProxyContext::createChildContextProxy(const std::string & name)
{
    auto proxy = new ProxyContext(name, controller);
    proxy)->setNotManageRemoteListeners(isNotManageRemoteListeners());
    return proxy;
}

void ProxyContext::initVariablesImpl(DataTablePtr variables)
{
    for (auto _i = getVariableDefinitions())->iterator(); _i->hasNext(); ) {
        VariableDefinitionPtr def = java_cast< VariableDefinitionPtr >(_i->next());
        {
            if(variables)->select(FIELD_VD_NAME(), def)->getName()) == 0) {
                removeVariableDefinition(def)->getName());
            }
        }
    }
    for (auto _i = variables)->iterator(); _i->hasNext(); ) {
        DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
        {
            auto def = varDefFromDataRecord(rec);
            auto existing = getVariableDefinition(def)->getName());
            if(existing == 0 || !existing)->equals(def))) {
                if(existing != 0) {
                    removeVariableDefinition(existing)->getName());
                }
                addVariableDefinition(def);
            }
        }
    }
}

void ProxyContext::initFunctionsImpl(DataTablePtr functions)
{
    for (auto _i = getFunctionDefinitions())->iterator(); _i->hasNext(); ) {
        FunctionDefinitionPtr def = java_cast< FunctionDefinitionPtr >(_i->next());
        {
            if(functions)->select(FIELD_FD_NAME(), def)->getName()) == 0) {
                removeFunctionDefinition(def)->getName());
            }
        }
    }
    addLocalFunctionDefinitions();
    for (auto _i = functions)->iterator(); _i->hasNext(); ) {
        DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
        {
            auto def = funcDefFromDataRecord(rec);
            def)->setConcurrent(true);
            auto existing = getFunctionDefinition(def)->getName());
            if(existing == 0 || !existing)->equals(def))) {
                if(existing != 0) {
                    removeFunctionDefinition(existing)->getName());
                }
                addFunctionDefinition(def);
            }
        }
    }
}

void ProxyContext::initEventsImpl(DataTablePtr events)
{
    for (auto _i = getEventDefinitions())->iterator(); _i->hasNext(); ) {
        EventDefinitionPtr def = java_cast< EventDefinitionPtr >(_i->next());
        {
            if(events)->select(FIELD_ED_NAME(), def)->getName()) == 0) {
                removeEventDefinition(def)->getName());
            }
        }
    }
    for (auto _i = events)->iterator(); _i->hasNext(); ) {
        DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
        {
            auto def = evtDefFromDataRecord(rec);
            auto existing = getEventDefinition(def)->getName());
            if(existing == 0 || !existing)->equals(def))) {
                if(existing != 0) {
                    removeEventDefinition(existing)->getName());
                }
                addEventDefinition(def);
            }
        }
    }
}

void ProxyContext::initActionsImpl(DataTablePtr actions)
{
    for (auto _i = getActionDefinitions())->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::action::ActionDefinitionPtr ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinitionPtr >(_i->next());
        {
            if(actions)->select(ActionConstants::FIELD_AD_NAME(), ad)->getName()) == 0) {
                removeActionDefinition(ad)->getName());
            }
        }
    }
    for (auto _i = actions)->iterator(); _i->hasNext(); ) {
        DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
        {
            auto def = actDefFromDataRecord(rec);
            auto existing = getActionDefinition(def)->getName());
            if(existing == 0 || !existing)->equals(def)) {
                if(existing != 0) {
                    removeActionDefinition(existing)->getName());
                }
                addActionDefinition(def);
            }
        }
    }
}

void ProxyContext::initStatusImpl()
{
    initVariables();
    auto const statusVariable = getVariableDefinition(::com::tibbo::aggregate::common::server::ServerContextConstants::V_CONTEXT_STATUS());
    if(statusVariable == 0) {
        return;
    }
    enableStatus();
    addEventListener(::com::tibbo::aggregate::common::server::ServerContextConstants::E_CONTEXT_STATUS_CHANGED(), contextStatusChangedListener);
    auto contextStatus = getRemoteVariable(statusVariable);
    setStatus((contextStatus)->rec())->getInt(::com::tibbo::aggregate::common::server::ServerContextConstants::VF_CONTEXT_STATUS_STATUS())))->intValue(), contextStatus)->rec())->getString(::com::tibbo::aggregate::common::server::ServerContextConstants::VF_CONTEXT_STATUS_COMMENT()));
}

std::string ProxyContext::getDescription()
{
    try {
        initInfo();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_VARIABLES())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error getting description of remote context"_j, ex);
    }
    return super::getDescription();
}

std::string ProxyContext::getType()
{
    try {
        initInfo();
    } catch (ContextException* ex) {
        throw new ContextRuntimeException(std::stringBuilder().append(u"Error getting type of remote context: "_j)->append(ex)->getMessage())->toString(), ex);
    }
    return super::getType();
}

std::string ProxyContext::getLocalRoot()
{
    try {
        initInfo();
    } catch (ContextException* ex) {
        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return localRoot;
}

std::string ProxyContext::getRemoteRoot()
{
    try {
        initInfo();
    } catch (ContextException* ex) {
        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return remoteRoot;
}

bool ProxyContext::isMapped()
{
    try {
        initInfo();
    } catch (ContextException* ex) {
        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return mapped;
}

ContextPtr ProxyContext::get(const std::string & contextPath, CallerControllerPtr caller)
{
    if(contextPath == 0) {
        return 0;
    }
    if(ContextUtils::isRelative(contextPath)) {
        return java_cast< ContextPtr >(super::get(contextPath, caller));
    }
    auto localPath = getLocalPath(contextPath);
    if(localPath == 0) {
        return 0;
    }
    return java_cast< ContextPtr >(super::get(localPath, caller));
}

std::string ProxyContext::getIconId()
{
    try {
        initInfo();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_VARIABLES())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error getting icon of remote context"_j, ex);
    }
    return super::getIconId();
}

ContextPtr ProxyContext::getChild(const std::string & name, CallerControllerPtr callerController)
{
    if(java_cast< ContextPtr >(super::getChild(name, callerController)) == 0) {
        try {
            initChildren();
        } catch (ContextException* ex) {
            auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
            Log::CONTEXT_CHILDREN())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error initializing children of remote context"_j, ex);
        }
    }
    return java_cast< ContextPtr >(super::getChild(name, callerController));
}

VariableDefinitionPtr ProxyContext::getVariableDefinition(const std::string & name)
{
    auto sup = super::getVariableDefinition(name);
    if(sup == 0 && isSetupComplete()) {
        initVariablesLoggingErrors();
        return super::getVariableDefinition(name);
    } else {
        return sup;
    }
}

FunctionDefinitionPtr ProxyContext::getFunctionDefinition(const std::string & name)
{
    auto sup = super::getFunctionDefinition(name);
    if(sup == 0 && isSetupComplete()) {
        initFunctionsLoggingErrors();
        return super::getFunctionDefinition(name);
    } else {
        return sup;
    }
}

EventDataPtr ProxyContext::getEventDataPtr(const std::string & name)
{
    auto sup = super::getEventDataPtr(name);
    if(sup == 0 && isSetupComplete()) {
        initEventsLoggingErrors();
        return super::getEventDataPtr(name);
    } else {
        return sup;
    }
}

com::tibbo::aggregate::common::action::ActionDefinitionPtr ProxyContext::getActionDefinition(const std::string & name)
{
    initActionsLoggingErrors();
    return super::getActionDefinition(name);
}

std::list  ProxyContext::getVariableDefinitions(CallerControllerPtr caller, bool hidden)
{
    initVariablesLoggingErrors();
    return java_cast< std::list  >(super::getVariableDefinitions(caller, hidden));
}

std::list  ProxyContext::getFunctionDefinitions(CallerControllerPtr caller, bool hidden)
{
    initFunctionsLoggingErrors();
    return java_cast< std::list  >(super::getFunctionDefinitions(caller, hidden));
}

std::list  ProxyContext::getEventDefinitions(CallerControllerPtr caller, bool hidden)
{
    initEventsLoggingErrors();
    return java_cast< std::list  >(super::getEventDefinitions(caller, hidden));
}

std::list  ProxyContext::getActionDefinitions(CallerControllerPtr caller, bool hidden)
{
    initActionsLoggingErrors();
    return java_cast< std::list  >(super::getActionDefinitions(caller, hidden));
}

ContextStatusPtr ProxyContext::getStatus()
{
    initStatusLoggingErrors();
    return super::getStatus();
}

void ProxyContext::initVariablesLoggingErrors()
{
    try {
        initVariables();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        auto message = std::stringBuilder().append(u"Error initializing variables of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString();
        Log::CONTEXT_VARIABLES())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), message, ex);
        throw new ContextRuntimeException(message, ex);
    }
}

void ProxyContext::initFunctionsLoggingErrors()
{
    try {
        initFunctions();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        auto message = std::stringBuilder().append(u"Error initializing functions of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString();
        Log::CONTEXT_FUNCTIONS())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), message, ex);
        throw new ContextRuntimeException(message, ex);
    }
}

void ProxyContext::initEventsLoggingErrors()
{
    try {
        initEvents();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        auto message = std::stringBuilder().append(u"Error initializing events of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString();
        Log::CONTEXT_EVENTS())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), message, ex);
        throw new ContextRuntimeException(message, ex);
    }
}

void ProxyContext::initActionsLoggingErrors()
{
    try {
        initActions();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_ACTIONS())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), std::stringBuilder().append(u"Error initializing actions of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

void ProxyContext::initStatusLoggingErrors()
{
    try {
        initStatus();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        Log::CONTEXT())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), std::stringBuilder().append(u"Error initializing status of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

IncomingAggreGateCommandPtr ProxyContext::sendGetVariable(const std::string & name, long  timeout)
{
    auto const cmd = AggreGateCommandUtils::getVariableOperation(getPeerPath(), name);
    cmd)->setTimeout(timeout);
    return controller)->sendCommandAndCheckReplyCode(cmd);
}

DateDataTablePtr ProxyContext::getRemoteVariable(TableFormatPtr format, const std::string & name, long  timeout)
{
    auto encodedReply = sendGetVariable(name, timeout))->getEncodedDataTableFromReply();
    try {
        return controller)->decodeRemoteDataTable(format, encodedReply);
    } catch (::java::lang::Exception* ex) {
        throw new ContextException(std::stringBuilder().append(u"Error parsing encoded data table '"_j)->append(encodedReply)
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

AbstractAggreGateDeviceControllerPtr ProxyContext::getController()
{
    return controller;
}

void ProxyContext::setupVariables()
{
    initVariables();
    super::setupVariables();
}

DateDataTablePtr ProxyContext::getVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
{
    return getRemoteVariable(def);
}

DateDataTablePtr ProxyContext::getRemoteVariable(VariableDefinitionPtr def)
{
    try {
        auto cleanup = false;
        if(def)->getRemoteCacheTime() != 0) {
            variableCacheLock)->readLock())->lock();
            {
                auto finally8 = finally([&] {
                    variableCacheLock)->readLock())->unlock();
                });
                {
                    auto ref = java_cast< ::java::lang::ref::SoftReferencePtr >(variableCache)->get(def)->getName()));
                    if(ref != 0) {
                        auto cachedValue = java_cast< CachedVariableValue* >(ref)->get());
                        if(cachedValue != 0) {
                            if(::java::lang::System::currentTimeMillis() - cachedValue)->getTimestamp())->getTime() < (def)->getRemoteCacheTime()))->longValue()) {
                                return cachedValue)->getValue();
                            } else {
                                cleanup = true;
                            }
                        } else {
                            cleanup = true;
                        }
                    }
                }
            }

            if(cleanup) {
                variableCacheLock)->writeLock())->lock();
                {
                    auto finally9 = finally([&] {
                        variableCacheLock)->writeLock())->unlock();
                    });
                    {
                        variableCache)->remove(def)->getName());
                    }
                }

            }
        }
        auto ans = sendGetVariable(def)->getName(), 0);
        auto value = controller)->decodeRemoteDataTable(def)->getFormat(), ans)->getEncodedDataTableFromReply());
        if(def)->getRemoteCacheTime() != 0) {
            cacheVariableValue(def)->getName(), value);
        }
        return value;
    } catch (::java::lang::Exception* ex) {
        Log::CONTEXT_VARIABLES())->debug(std::stringBuilder().append(u"Error getting variable '"_j)->append(def)->getName())
            ->append(u"' from context '"_j)
            ->append(getPathDescription())
            ->append(u"'"_j)->toString(), ex);
        throw new ContextException(ex)->getMessage(), ex);
    }
}

bool ProxyContext::setVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value)
{
    try {
        auto const encoded = value)->encode(controller)->createClassicEncodingSettings(true));
        controller)->sendCommandAndCheckReplyCode(AggreGateCommandUtils::setVariableOperation(getPeerPath(), def)->getName(), encoded));
        return true;
    } catch (::java::lang::Exception* ex) {
        Log::CONTEXT_VARIABLES())->debug(std::stringBuilder().append(u"Error setting veriable '"_j)->append(def)->getName())
            ->append(u"' of context '"_j)
            ->append(getPathDescription())
            ->append(u"'"_j)->toString(), ex);
        throw new ContextException(ex)->getMessage(), ex);
    }
}

void ProxyContext::setupFunctions()
{
    initFunctions();
    super::setupFunctions();
}

DateDataTablePtr ProxyContext::callFunctionImpl(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters)
{
    if(def)->getName())->equals(F_LOCAL_REINITIALIZE()))) {
        reinitialize();
        return new DataTable(def)->getOutputFormat(), true);
    }
    return callRemoteFunction(def)->getName(), def)->getOutputFormat(), parameters);
}

DateDataTablePtr ProxyContext::callRemoteFunction(const std::string & name, TableFormatPtr outputFormat, DataTablePtr parameters)
{
    try {
        return controller)->callRemoteFunction(getPeerPath(), name, outputFormat, parameters);
    } catch (::java::lang::Exception* ex) {
        Log::CONTEXT_FUNCTIONS())->debug(std::stringBuilder().append(u"Error calling function '"_j)->append(name)
            ->append(u"' of context '"_j)
            ->append(getPathDescription())
            ->append(u"'"_j)->toString(), ex);
        throw new ContextException(ex)->getMessage(), ex);
    }
}

bool ProxyContext::addEventListener(const std::string & name, ContextEventListenerPtr contextEventListener, bool weak)
{
    return addEventListener(name, contextEventListener, weak, true);
}

bool ProxyContext::addEventListener(const std::string & name, ContextEventListenerPtr contextEventListener, bool weak, bool sendRemoteCommand)
{
    try {
        initEvents();
        auto ed = getEventDataPtr(name);
        if(ed == 0) {
            throw new ContextException(std::stringBuilder().append(Cres::get())->getString(u"conEvtNotAvail"_j))->append(name)->toString());
        }
        if(sendRemoteCommand) {
            addRemoteListener(ed)->getDefinition())->getName(), contextEventListener);
        }
        return super::addEventListener(name, contextEventListener, weak);
    } catch (::java::lang::Exception* ex) {
        auto msg = ::java::text::MessageFormat::format(Cres::get())->getString(u"conErrAddingListener"_j), new voidArray({name), getPathDescription())}));
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(msg)->append(u": "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

bool ProxyContext::removeEventListener(const std::string & name, ContextEventListenerPtr contextEventListener)
{
    return removeEventListener(name, contextEventListener, true);
}

bool ProxyContext::removeEventListener(const std::string & name, ContextEventListenerPtr listener, bool sendRemoteCommand)
{
    try {
        if(!isInitializedEvents()) {
            return false;
        }
        Log::CONTEXT_EVENTS())->debug(std::stringBuilder().append(u"Removing listener for event '"_j)->append(name)
            ->append(u"' from context '"_j)
            ->append(getPathDescription())
            ->append(u"'"_j)->toString());
        auto res = super::removeEventListener(name, listener);
        auto ed = getEventDataPtr(name);
        if(sendRemoteCommand && ed != 0 && ed)->getListeners())->size() == 0) {
            if(!notManageRemoteListeners) {
                auto hashCode = listener)->getListenerCode();
                auto filter = listener)->getFilter() != 0 ? listener)->getFilter())->getText() : static_cast< const std::string & >(0);
                auto cmd = AggreGateCommandUtils::removeEventListenerOperation(getPeerPath(), name, hashCode, filter);
                cmd)->setTimeout(::java::lang::Long::valueOf(LISTENER_OPERATIONS_TIMEOUT));
                controller)->sendCommandAndCheckReplyCode(cmd);
            }
        }
        return res;
    } catch (DisconnectionException* ex) {
        Log::CONTEXT_EVENTS())->debug(std::stringBuilder().append(u"Disconnection detected when removing listener for event '"_j)->append(name)
            ->append(u"' from context '"_j)
            ->append(getPathDescription())
            ->append(u"'"_j)->toString());
        return false;
    } catch (::java::lang::Exception* ex) {
        auto msg = ::java::text::MessageFormat::format(Cres::get())->getString(u"conErrRemovingListener"_j), new voidArray({name), getPathDescription())}));
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(msg)->append(u": "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

void ProxyContext::addRemoteListener(const std::string & ename, ContextEventListenerPtr contextEventListener)
{
    auto hashCode = contextEventListener)->getListenerCode();
    if(hashCode == 0 && AUTO_LISTENED_EVENTS())->contains(ename))) {
        return;
    }
    if(!notManageRemoteListeners) {
        auto filterText = contextEventListener)->getFilter() != 0 ? contextEventListener)->getFilter())->getText() : static_cast< const std::string & >(0);
        auto cmd = AggreGateCommandUtils::addEventListenerOperation(getPeerPath(), ename, hashCode, filterText);
        cmd)->setTimeout(::java::lang::Long::valueOf(LISTENER_OPERATIONS_TIMEOUT));
        controller)->sendCommandAndCheckReplyCode(cmd);
    }
}

std::list  ProxyContext::getChildren(CallerControllerPtr caller)
{
    try {
        initChildren();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_CHILDREN())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error initializing children of remote context"_j, ex);
    }
    return java_cast< std::list  >(super::getChildren(caller));
}

std::list  ProxyContext::getVisibleChildren(CallerControllerPtr caller)
{
    try {
        initVisibleChildren();
    } catch (ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_CHILDREN())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error initializing visible children of remote context"_j, ex);
        return new ::java::util::LinkedList();
    }
    std::list  res = new ::java::util::LinkedList();
    for (auto _i = visibleChildren)->iterator(); _i->hasNext(); ) {
        const std::string & path = java_cast< const std::string & >(_i->next());
        {
            auto con = java_cast< ContextPtr >(java_cast< ContextPtr >(java_cast< ContextPtr >(getRoot()))->get(path, caller)));
            if(con != 0) {
                res)->add(con));
            }
        }
    }
    return res;
}

void ProxyContext::addVisibleChild(const std::string & localVisiblePath)
{
    visibleChildren)->add(localVisiblePath);
}

void ProxyContext::removeVisibleChild(const std::string & localVisiblePath)
{
    visibleChildren)->remove(localVisiblePath);
}

void ProxyContext::restoreEventListeners()
{
    for (auto _i = java_cast< std::list  >(super::getEventDefinitions(static_cast< CallerControllerPtr >(0))))->iterator(); _i->hasNext(); ) {
        EventDefinitionPtr ed = java_cast< EventDefinitionPtr >(_i->next());
        {
            auto edata = getEventDataPtr(ed)->getName());
            {
                synchronized synchronized_8(edata)->getListeners());
                {
                    for (auto _i = edata)->getListeners())->iterator(); _i->hasNext(); ) {
                        ContextEventListenerPtr listener = java_cast< ContextEventListenerPtr >(_i->next());
                        {
                            try {
                                addRemoteListener(ed)->getName(), listener);
                            } catch (::java::lang::Exception* ex) {
                                Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append(u"Error restoring listener for event '"_j)->append(ed)->getName())
                                    ->append(u"'"_j)->toString(), ex);
                            }
                        }
                    }
                }
            }
        }
    }
}

void ProxyContext::reinitialize()
{
	clear();
    restoreEventListeners();
}

EventPtr ProxyContext::fireEvent(EventDefinitionPtr ed, DataTablePtr data, int level, long  id, DatePtr creationtime, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request, PermissionsPtr permissions)
{
    auto event = super::fireEvent(ed, data, level, id, creationtime, listener, caller, request, permissions);
    if(ed)->getName())->equals(AbstractContext::E_UPDATED())) && isInitializedVariables()) {
        auto variable = event)->getData())->rec())->getString(AbstractContext::EF_UPDATED_VARIABLE());
        auto value = event)->getData())->rec())->getDataTable(AbstractContext::EF_UPDATED_VALUE());
        auto vd = getVariableDefinition(variable);
        if(vd != 0 && vd)->getRemoteCacheTime() != 0) {
            cacheVariableValue(variable, value);
        }
    }
    return event;
}

void ProxyContext::cacheVariableValue(const std::string & variable, DataTablePtr value)
{
    variableCacheLock)->writeLock())->lock();
    {
        auto finally10 = finally([&] {
            variableCacheLock)->writeLock())->unlock();
        });
        {
            variableCache)->put(variable, new ::java::lang::ref::SoftReference(new CachedVariableValue(new Date(), value)));
        }
    }

}

std::string ProxyContext::getPathDescription()
{
    return getPath();
}

bool ProxyContext::isProxy()
{
    return true;
}

bool ProxyContext::isDistributed()
{
    return getRemoteRoot() != 0;
}

std::string ProxyContext::getRemotePath()
{
    try {
        initInfo();
    } catch (ContextException* ex) {
        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return remotePath;
}

std::string ProxyContext::getRemotePrimaryRoot()
{
    return remotePrimaryRoot;
}

std::string ProxyContext::getPeerPath()
{
    return getPath();
}

std::string ProxyContext::getLocalPath(const std::string & remoteFullPath)
{
    auto remoteRoot = getRemoteRoot();
    if(getRemoteRoot() == 0) {
        return remoteFullPath;
    }
    const std::string & remoteConverted;
    if(remoteRoot)->equals(Contexts::CTX_ROOT()))) {
        remoteConverted = remoteFullPath;
    } else if(remoteFullPath)->equals(remoteRoot))) {
        remoteConverted = u""_j;
    } else if(remoteFullPath)->startsWith(std::stringBuilder().append(getRemoteRoot())->append(ContextUtils::CONTEXT_NAME_SEPARATOR())->toString())) {
        remoteConverted = remoteFullPath)->substring(getRemoteRoot())->length() + int(1));
    } else {
        return getRemotePrimaryPath(remoteFullPath);
    }
    auto converted = remoteConverted)->length() > 0 ? ContextUtils::createName(new std::stringArray({getLocalRoot(), remoteConverted})) : getLocalRoot();
    Log::CONTEXT())->debug(std::stringBuilder().append(u"Converted remote path '"_j)->append(remoteFullPath)
        ->append(u"' to: "_j)
        ->append(converted)->toString());
    return converted;
}

std::string ProxyContext::getRemotePrimaryPath(const std::string & remoteFullPath)
{
    auto primaryMount = getRemotePrimaryRoot();
    if(primaryMount == 0) {
        return 0;
    }
    if(Util::equals(Contexts::CTX_ROOT(), remoteFullPath)) {
        return primaryMount;
    } else {
        return ContextUtils::createName(new std::stringArray({primaryMount, remoteFullPath}));
    }
}

std::string ProxyContext::getLocalVisiblePath(const std::string & remoteFullPath)
{
    return remoteFullPath;
}

void ProxyContext::setRemotePath(const std::string & remotePath)
{
    this->remotePath = remotePath;
}

bool ProxyContext::isInitializedInfo()
{
    return initializedInfo;
}

bool ProxyContext::isInitializedChildren()
{
    return initializedChildren;
}

bool ProxyContext::isInitializedVariables()
{
    return initializedVariables;
}

bool ProxyContext::isInitializedFunctions()
{
    return initializedFunctions;
}

bool ProxyContext::isInitializedEvents()
{
    return initializedEvents;
}

bool ProxyContext::isNotManageRemoteListeners()
{
    return notManageRemoteListeners;
}

void ProxyContext::setNotManageRemoteListeners(bool notManageRemoteListeners)
{
    this->notManageRemoteListeners = notManageRemoteListeners;
}



java::lang::Class* ProxyContext::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.protocol.ProxyContext", 48);
    return c;
}

void ProxyContext::clinit()
{
struct string_init_ {
    string_init_() {
    F_LOCAL_REINITIALIZE_ = u"localReinitialize"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        AUTO_LISTENED_EVENTS_ = new ::java::util::LinkedList();
        {
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_CHILD_ADDED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_CHILD_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_VARIABLE_ADDED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_VARIABLE_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_FUNCTION_ADDED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_FUNCTION_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_EVENT_ADDED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_EVENT_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_INFO_CHANGED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_DESTROYED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_ACTION_ADDED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_ACTION_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(AbstractContext::E_ACTION_STATE_CHANGED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::server::ServerContextConstants::E_VISIBLE_INFO_CHANGED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::server::ServerContextConstants::E_VISIBLE_CHILD_ADDED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::server::ServerContextConstants::E_VISIBLE_CHILD_REMOVED()));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

bool ProxyContext::addEventListener(const std::string & name, ContextEventListenerPtr listener)
{
    return super::addEventListener(name, listener);
}

EventPtr ProxyContext::fireEvent(EventPtr event)
{
    return super::fireEvent(event);
}

EventPtr ProxyContext::fireEvent(const std::string & name, int level, CallerControllerPtr caller, FireEventRequestControllerPtr request, PermissionsPtr permissions, DataTablePtr data)
{
    return super::fireEvent(name, level, caller, request, permissions, data);
}

EventPtr ProxyContext::fireEvent(const std::string & name, DataTablePtr data, int level, long  id, DatePtr creationtime, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request)
{
    return super::fireEvent(name, data, level, id, creationtime, listener, caller, request);
}

EventPtr ProxyContext::fireEvent(const std::string & name, DataTablePtr data)
{
    return super::fireEvent(name, data);
}

EventPtr ProxyContext::fireEvent(const std::string & name, CallerControllerPtr caller, DataTablePtr data)
{
    return super::fireEvent(name, caller, data);
}

EventPtr ProxyContext::fireEvent(const std::string & name, int level, DataTablePtr data)
{
    return super::fireEvent(name, level, data);
}

EventPtr ProxyContext::fireEvent(const std::string & name, int level, CallerControllerPtr caller, DataTablePtr data)
{
    return super::fireEvent(name, level, caller, data);
}

EventPtr ProxyContext::fireEvent(const std::string & name)
{
    return super::fireEvent(name);
}

EventPtr ProxyContext::fireEvent(const std::string & name, CallerControllerPtr caller)
{
    return super::fireEvent(name, caller);
}

EventPtr ProxyContext::fireEvent(const std::string & name, voidArray* data)
{
    return super::fireEvent(name, data);
}

ContextPtr ProxyContext::get(const std::string & contextName)
{
    return super::get(contextName);
}

com::tibbo::aggregate::common::action::ActionDefinitionPtr ProxyContext::getActionDefinition(const std::string & name, CallerControllerPtr caller)
{
    return super::getActionDefinition(name, caller);
}

std::list  ProxyContext::getActionDefinitions(CallerControllerPtr caller)
{
    return super::getActionDefinitions(caller);
}

std::list  ProxyContext::getActionDefinitions()
{
    return super::getActionDefinitions();
}

ContextPtr ProxyContext::getChild(const std::string & name)
{
    return super::getChild(name);
}

std::list  ProxyContext::getChildren()
{
    return super::getChildren();
}

std::list  ProxyContext::getEventDefinitions(CallerControllerPtr caller)
{
    return super::getEventDefinitions(caller);
}

std::list  ProxyContext::getEventDefinitions()
{
    return super::getEventDefinitions();
}

std::list  ProxyContext::getEventDefinitions(CallerControllerPtr caller, const std::string & group)
{
    return super::getEventDefinitions(caller, group);
}

std::list  ProxyContext::getEventDefinitions(const std::string & group)
{
    return super::getEventDefinitions(group);
}

FunctionDefinitionPtr ProxyContext::getFunctionDefinition(const std::string & name, CallerControllerPtr caller)
{
    return super::getFunctionDefinition(name, caller);
}

std::list  ProxyContext::getFunctionDefinitions(CallerControllerPtr caller)
{
    return super::getFunctionDefinitions(caller);
}

std::list  ProxyContext::getFunctionDefinitions()
{
    return super::getFunctionDefinitions();
}

std::list  ProxyContext::getFunctionDefinitions(CallerControllerPtr caller, const std::string & group)
{
    return super::getFunctionDefinitions(caller, group);
}

std::list  ProxyContext::getFunctionDefinitions(const std::string & group)
{
    return super::getFunctionDefinitions(group);
}

VariableDefinitionPtr ProxyContext::getVariableDefinition(const std::string & name, CallerControllerPtr caller)
{
    return super::getVariableDefinition(name, caller);
}

std::list  ProxyContext::getVariableDefinitions(CallerControllerPtr caller)
{
    return super::getVariableDefinitions(caller);
}

std::list  ProxyContext::getVariableDefinitions()
{
    return super::getVariableDefinitions();
}

std::list  ProxyContext::getVariableDefinitions(CallerControllerPtr caller, const std::string & group)
{
    return super::getVariableDefinitions(caller, group);
}

std::list  ProxyContext::getVariableDefinitions(const std::string & group)
{
    return super::getVariableDefinitions(group);
}

std::list  ProxyContext::getVisibleChildren()
{
    return super::getVisibleChildren();
}

java::lang::Class* ProxyContext::getClass0()
{
    return class_();
}
  */

