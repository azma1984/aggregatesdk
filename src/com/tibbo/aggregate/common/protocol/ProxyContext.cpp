// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java
#include "ProxyContext.h"

  /*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/action/ActionDefinition.h"
#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/ActionConstants.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/ContextRuntimeException.h"
#include <com/tibbo/aggregate/common/context/ContextStatus.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/context/ContextVisitor.h"
#include <com/tibbo/aggregate/common/context/Contexts.h"
#include <com/tibbo/aggregate/common/context/EventData.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/datatable/encoding/FormatCache.h"
#include <com/tibbo/aggregate/common/device/DisconnectionException.h"
#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.h"
#include <com/tibbo/aggregate/common/protocol/CachedVariableValue.h"
#include <com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_4.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_1.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_2.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_3.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_5.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_6.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_7.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_8.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_9.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_10.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_11.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_12.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_13.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_14.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_setupMyself_15.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext_clear_16.h"
#include <com/tibbo/aggregate/common/protocol/RemoteContextManager.h"
#include <com/tibbo/aggregate/common/server/ServerContextConstants.h"
#include <com/tibbo/aggregate/common/util/Util.h"

ProxyContext::ProxyContext(std::string name, AbstractAggreGateDeviceController* controller)
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

java::util::List*& ProxyContext::AUTO_LISTENED_EVENTS()
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
    addEventListener(E_CHILD_ADDED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_4(this)));
    addEventListener(E_CHILD_REMOVED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_5(this)));
    addEventListener(E_VARIABLE_ADDED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_6(this)));
    addEventListener(E_VARIABLE_REMOVED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_7(this)));
    addEventListener(E_FUNCTION_ADDED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_8(this)));
    addEventListener(E_FUNCTION_REMOVED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_9(this)));
    addEventListener(E_EVENT_ADDED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_10(this)));
    addEventListener(E_EVENT_REMOVED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_11(this)));
    addEventListener(E_ACTION_ADDED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_12(this)));
    addEventListener(E_ACTION_REMOVED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_13(this)));
    addEventListener(E_ACTION_STATE_CHANGED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_14(this)));
    addEventListener(E_INFO_CHANGED(), static_cast< ContextEventListener* >(new ProxyContext_setupMyself_15(this)));
    localInitComplete = true;
}

void ProxyContext::addLocalFunctionDefinitions()
{
    addFunctionDefinition(new ::com::tibbo::aggregate::common::context::FunctionDefinition(F_LOCAL_REINITIALIZE(), TableFormat::EMPTY_FORMAT(), TableFormat::EMPTY_FORMAT()));
}

com::tibbo::aggregate::common::datatable::TableFormat* ProxyContext::decodeFormat(const std::string & source, ::com::tibbo::aggregate::common::context::CallerController* caller)
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
    auto format = source)->length() > 0 ? new TableFormat(source, new encoding::ClassicEncodingSettings(false)) : static_cast< TableFormat* >(0);
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
	 accept(static_cast< ::com::tibbo::aggregate::common::context::ContextVisitor* >(new ProxyContext_clear_16(this)));
	}
	catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initInfo()
{
    try {
        if(initializedInfo) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initChildren()
{
    try {
        if(initializedChildren) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initVariables()
{
    try {
        if(initializedVariables) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initFunctions()
{
    try {
        if(initializedFunctions) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initEvents()
{
    try {
        if(initializedEvents) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initActions()
{
    try {
        if(initializedActions) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
                        initActionsImpl(getRemoteVariable(ACTION_DEF_FORMAT(), ::com::tibbo::aggregate::common::context::AbstractContext::V_ACTIONS(), ::java::lang::Long::valueOf(METADATA_READ_TIMEOUT)));
                        initializedActions = true;
                    }
                }

            }
        }
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initVisibleChildren()
{
    try {
        if(visibleChildren != 0) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initStatus()
{
    try {
        if(initializedStatus) {
            return;
        }
        if(java_cast< RemoteContextManager* >(controller)->getContextManager()) != 0) {
            java_cast< RemoteContextManager* >(controller)->getContextManager()))->initialize();
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void ProxyContext::initInfoImpl(DataTable* info)
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

void ProxyContext::initChildrenImpl(DataTable* children)
{
    for (auto _i = getChildren(getContextManager())->getCallerController()))->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::context::Context* child = java_cast< ::com::tibbo::aggregate::common::context::Context* >(_i->next());
        {
            if(children)->select(VF_CHILDREN_NAME(), child)->getName()) == 0) {
                removeChild(static_cast< ::com::tibbo::aggregate::common::context::Context* >(child));
            }
        }
    }
    for (auto _i = children)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            auto cn = rec)->getString(VF_CHILDREN_NAME());
            if(java_cast< ::com::tibbo::aggregate::common::context::Context* >(getChild(cn)) == 0) {
                addChild(static_cast< ::com::tibbo::aggregate::common::context::Context* >(java_cast< ::com::tibbo::aggregate::common::context::Context* >(createChildContextProxy(cn))));
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
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            auto localVisiblePath = getLocalVisiblePath(rec)->getString(::com::tibbo::aggregate::common::server::ServerContextConstants::VF_VISIBLE_CHILDREN_PATH()));
            if(localVisiblePath != 0) {
                visibleChildren)->add(localVisiblePath);
            }
        }
    }
}

ProxyContext* ProxyContext::createChildContextProxy(const std::string & name)
{
    auto proxy = new ProxyContext(name, controller);
    proxy)->setNotManageRemoteListeners(isNotManageRemoteListeners());
    return proxy;
}

void ProxyContext::initVariablesImpl(DataTable* variables)
{
    for (auto _i = getVariableDefinitions())->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::context::VariableDefinition* def = java_cast< ::com::tibbo::aggregate::common::context::VariableDefinition* >(_i->next());
        {
            if(variables)->select(FIELD_VD_NAME(), def)->getName()) == 0) {
                removeVariableDefinition(def)->getName());
            }
        }
    }
    for (auto _i = variables)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
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

void ProxyContext::initFunctionsImpl(DataTable* functions)
{
    for (auto _i = getFunctionDefinitions())->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::context::FunctionDefinition* def = java_cast< ::com::tibbo::aggregate::common::context::FunctionDefinition* >(_i->next());
        {
            if(functions)->select(FIELD_FD_NAME(), def)->getName()) == 0) {
                removeFunctionDefinition(def)->getName());
            }
        }
    }
    addLocalFunctionDefinitions();
    for (auto _i = functions)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
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

void ProxyContext::initEventsImpl(DataTable* events)
{
    for (auto _i = getEventDefinitions())->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::context::EventDefinition* def = java_cast< ::com::tibbo::aggregate::common::context::EventDefinition* >(_i->next());
        {
            if(events)->select(FIELD_ED_NAME(), def)->getName()) == 0) {
                removeEventDefinition(def)->getName());
            }
        }
    }
    for (auto _i = events)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
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

void ProxyContext::initActionsImpl(DataTable* actions)
{
    for (auto _i = getActionDefinitions())->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::action::ActionDefinition* ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
        {
            if(actions)->select(::com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_NAME(), ad)->getName()) == 0) {
                removeActionDefinition(ad)->getName());
            }
        }
    }
    for (auto _i = actions)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_VARIABLES())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error getting description of remote context"_j, ex);
    }
    return super::getDescription();
}

std::string ProxyContext::getType()
{
    try {
        initInfo();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(std::stringBuilder().append(u"Error getting type of remote context: "_j)->append(ex)->getMessage())->toString(), ex);
    }
    return super::getType();
}

std::string ProxyContext::getLocalRoot()
{
    try {
        initInfo();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return localRoot;
}

std::string ProxyContext::getRemoteRoot()
{
    try {
        initInfo();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return remoteRoot;
}

bool ProxyContext::isMapped()
{
    try {
        initInfo();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return mapped;
}

com::tibbo::aggregate::common::context::Context* ProxyContext::get(const std::string & contextPath, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    if(contextPath == 0) {
        return 0;
    }
    if(::com::tibbo::aggregate::common::context::ContextUtils::isRelative(contextPath)) {
        return java_cast< ::com::tibbo::aggregate::common::context::Context* >(super::get(contextPath, caller));
    }
    auto localPath = getLocalPath(contextPath);
    if(localPath == 0) {
        return 0;
    }
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(super::get(localPath, caller));
}

std::string ProxyContext::getIconId()
{
    try {
        initInfo();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_VARIABLES())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error getting icon of remote context"_j, ex);
    }
    return super::getIconId();
}

com::tibbo::aggregate::common::context::Context* ProxyContext::getChild(const std::string & name, ::com::tibbo::aggregate::common::context::CallerController* callerController)
{
    if(java_cast< ::com::tibbo::aggregate::common::context::Context* >(super::getChild(name, callerController)) == 0) {
        try {
            initChildren();
        } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
            auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
            Log::CONTEXT_CHILDREN())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error initializing children of remote context"_j, ex);
        }
    }
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(super::getChild(name, callerController));
}

com::tibbo::aggregate::common::context::VariableDefinition* ProxyContext::getVariableDefinition(const std::string & name)
{
    auto sup = super::getVariableDefinition(name);
    if(sup == 0 && isSetupComplete()) {
        initVariablesLoggingErrors();
        return super::getVariableDefinition(name);
    } else {
        return sup;
    }
}

com::tibbo::aggregate::common::context::FunctionDefinition* ProxyContext::getFunctionDefinition(const std::string & name)
{
    auto sup = super::getFunctionDefinition(name);
    if(sup == 0 && isSetupComplete()) {
        initFunctionsLoggingErrors();
        return super::getFunctionDefinition(name);
    } else {
        return sup;
    }
}

com::tibbo::aggregate::common::context::EventData* ProxyContext::getEventData(const std::string & name)
{
    auto sup = super::getEventData(name);
    if(sup == 0 && isSetupComplete()) {
        initEventsLoggingErrors();
        return super::getEventData(name);
    } else {
        return sup;
    }
}

com::tibbo::aggregate::common::action::ActionDefinition* ProxyContext::getActionDefinition(const std::string & name)
{
    initActionsLoggingErrors();
    return super::getActionDefinition(name);
}

java::util::List* ProxyContext::getVariableDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden)
{
    initVariablesLoggingErrors();
    return java_cast< std::list  >(super::getVariableDefinitions(caller, hidden));
}

java::util::List* ProxyContext::getFunctionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden)
{
    initFunctionsLoggingErrors();
    return java_cast< std::list  >(super::getFunctionDefinitions(caller, hidden));
}

java::util::List* ProxyContext::getEventDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden)
{
    initEventsLoggingErrors();
    return java_cast< std::list  >(super::getEventDefinitions(caller, hidden));
}

java::util::List* ProxyContext::getActionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden)
{
    initActionsLoggingErrors();
    return java_cast< std::list  >(super::getActionDefinitions(caller, hidden));
}

com::tibbo::aggregate::common::context::ContextStatus* ProxyContext::getStatus()
{
    initStatusLoggingErrors();
    return super::getStatus();
}

void ProxyContext::initVariablesLoggingErrors()
{
    try {
        initVariables();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        auto message = std::stringBuilder().append(u"Error initializing variables of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString();
        Log::CONTEXT_VARIABLES())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), message, ex);
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(message, ex);
    }
}

void ProxyContext::initFunctionsLoggingErrors()
{
    try {
        initFunctions();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        auto message = std::stringBuilder().append(u"Error initializing functions of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString();
        Log::CONTEXT_FUNCTIONS())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), message, ex);
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(message, ex);
    }
}

void ProxyContext::initEventsLoggingErrors()
{
    try {
        initEvents();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        auto message = std::stringBuilder().append(u"Error initializing events of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString();
        Log::CONTEXT_EVENTS())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), message, ex);
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(message, ex);
    }
}

void ProxyContext::initActionsLoggingErrors()
{
    try {
        initActions();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_ACTIONS())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), std::stringBuilder().append(u"Error initializing actions of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

void ProxyContext::initStatusLoggingErrors()
{
    try {
        initStatus();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        Log::CONTEXT())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), std::stringBuilder().append(u"Error initializing status of remote context '"_j)->append(getPathDescription())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

IncomingAggreGateCommand* ProxyContext::sendGetVariable(const std::string & name, ::java::lang::Long* timeout)
{
    auto const cmd = AggreGateCommandUtils::getVariableOperation(getPeerPath(), name);
    cmd)->setTimeout(timeout);
    return controller)->sendCommandAndCheckReplyCode(cmd);
}

com::tibbo::aggregate::common::datatable::DataTable* ProxyContext::getRemoteVariable(TableFormat* format, const std::string & name, ::java::lang::Long* timeout)
{
    auto encodedReply = sendGetVariable(name, timeout))->getEncodedDataTableFromReply();
    try {
        return controller)->decodeRemoteDataTable(format, encodedReply);
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextException(std::stringBuilder().append(u"Error parsing encoded data table '"_j)->append(encodedReply)
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

AbstractAggreGateDeviceController* ProxyContext::getController()
{
    return controller;
}

void ProxyContext::setupVariables()
{
    initVariables();
    super::setupVariables();
}

com::tibbo::aggregate::common::datatable::DataTable* ProxyContext::getVariableImpl(::com::tibbo::aggregate::common::context::VariableDefinition* def, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request)
{
    return getRemoteVariable(def);
}

com::tibbo::aggregate::common::datatable::DataTable* ProxyContext::getRemoteVariable(::com::tibbo::aggregate::common::context::VariableDefinition* def)
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
                    auto ref = java_cast< ::java::lang::ref::SoftReference* >(variableCache)->get(def)->getName()));
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
        throw new ::com::tibbo::aggregate::common::context::ContextException(ex)->getMessage(), ex);
    }
}

bool ProxyContext::setVariableImpl(::com::tibbo::aggregate::common::context::VariableDefinition* def, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request, DataTable* value)
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
        throw new ::com::tibbo::aggregate::common::context::ContextException(ex)->getMessage(), ex);
    }
}

void ProxyContext::setupFunctions()
{
    initFunctions();
    super::setupFunctions();
}

com::tibbo::aggregate::common::datatable::DataTable* ProxyContext::callFunctionImpl(::com::tibbo::aggregate::common::context::FunctionDefinition* def, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request, DataTable* parameters)
{
    if(def)->getName())->equals(F_LOCAL_REINITIALIZE()))) {
        reinitialize();
        return new DataTable(def)->getOutputFormat(), true);
    }
    return callRemoteFunction(def)->getName(), def)->getOutputFormat(), parameters);
}

com::tibbo::aggregate::common::datatable::DataTable* ProxyContext::callRemoteFunction(const std::string & name, TableFormat* outputFormat, DataTable* parameters)
{
    try {
        return controller)->callRemoteFunction(getPeerPath(), name, outputFormat, parameters);
    } catch (::java::lang::Exception* ex) {
        Log::CONTEXT_FUNCTIONS())->debug(std::stringBuilder().append(u"Error calling function '"_j)->append(name)
            ->append(u"' of context '"_j)
            ->append(getPathDescription())
            ->append(u"'"_j)->toString(), ex);
        throw new ::com::tibbo::aggregate::common::context::ContextException(ex)->getMessage(), ex);
    }
}

bool ProxyContext::addEventListener(const std::string & name, ContextEventListener* contextEventListener, bool weak)
{
    return addEventListener(name, contextEventListener, weak, true);
}

bool ProxyContext::addEventListener(const std::string & name, ContextEventListener* contextEventListener, bool weak, bool sendRemoteCommand)
{
    try {
        initEvents();
        auto ed = getEventData(name);
        if(ed == 0) {
            throw new ::com::tibbo::aggregate::common::context::ContextException(std::stringBuilder().append(Cres::get())->getString(u"conEvtNotAvail"_j))->append(name)->toString());
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

bool ProxyContext::removeEventListener(const std::string & name, ContextEventListener* contextEventListener)
{
    return removeEventListener(name, contextEventListener, true);
}

bool ProxyContext::removeEventListener(const std::string & name, ContextEventListener* listener, bool sendRemoteCommand)
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
        auto ed = getEventData(name);
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
    } catch (::com::tibbo::aggregate::common::device::DisconnectionException* ex) {
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

void ProxyContext::addRemoteListener(const std::string & ename, ContextEventListener* contextEventListener)
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

java::util::List* ProxyContext::getChildren(::com::tibbo::aggregate::common::context::CallerController* caller)
{
    try {
        initChildren();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_CHILDREN())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error initializing children of remote context"_j, ex);
    }
    return java_cast< std::list  >(super::getChildren(caller));
}

java::util::List* ProxyContext::getVisibleChildren(::com::tibbo::aggregate::common::context::CallerController* caller)
{
    try {
        initVisibleChildren();
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(ex, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        Log::CONTEXT_CHILDREN())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::WARN()), u"Error initializing visible children of remote context"_j, ex);
        return new ::java::util::LinkedList();
    }
    std::list  res = new ::java::util::LinkedList();
    for (auto _i = visibleChildren)->iterator(); _i->hasNext(); ) {
        const std::string & path = java_cast< const std::string & >(_i->next());
        {
            auto con = java_cast< ::com::tibbo::aggregate::common::context::Context* >(java_cast< ::com::tibbo::aggregate::common::context::Context* >(java_cast< ::com::tibbo::aggregate::common::context::Context* >(getRoot()))->get(path, caller)));
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
    for (auto _i = java_cast< std::list  >(super::getEventDefinitions(static_cast< ::com::tibbo::aggregate::common::context::CallerController* >(0))))->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::context::EventDefinition* ed = java_cast< ::com::tibbo::aggregate::common::context::EventDefinition* >(_i->next());
        {
            auto edata = getEventData(ed)->getName());
            {
                synchronized synchronized_8(edata)->getListeners());
                {
                    for (auto _i = edata)->getListeners())->iterator(); _i->hasNext(); ) {
                        ContextEventListener* listener = java_cast< ContextEventListener* >(_i->next());
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

Event* ProxyContext::fireEvent(::com::tibbo::aggregate::common::context::EventDefinition* ed, DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, int  listener, ::com::tibbo::aggregate::common::context::CallerController* caller, FireEventRequestController* request, Permissions* permissions)
{
    auto event = super::fireEvent(ed, data, level, id, creationtime, listener, caller, request, permissions);
    if(ed)->getName())->equals(::com::tibbo::aggregate::common::context::AbstractContext::E_UPDATED())) && isInitializedVariables()) {
        auto variable = event)->getData())->rec())->getString(::com::tibbo::aggregate::common::context::AbstractContext::EF_UPDATED_VARIABLE());
        auto value = event)->getData())->rec())->getDataTable(::com::tibbo::aggregate::common::context::AbstractContext::EF_UPDATED_VALUE());
        auto vd = getVariableDefinition(variable);
        if(vd != 0 && vd)->getRemoteCacheTime() != 0) {
            cacheVariableValue(variable, value);
        }
    }
    return event;
}

void ProxyContext::cacheVariableValue(const std::string & variable, DataTable* value)
{
    variableCacheLock)->writeLock())->lock();
    {
        auto finally10 = finally([&] {
            variableCacheLock)->writeLock())->unlock();
        });
        {
            variableCache)->put(variable, new ::java::lang::ref::SoftReference(new CachedVariableValue(new ::java::util::Date(), value)));
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
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw new ::com::tibbo::aggregate::common::context::ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
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
    if(remoteRoot)->equals(::com::tibbo::aggregate::common::context::Contexts::CTX_ROOT()))) {
        remoteConverted = remoteFullPath;
    } else if(remoteFullPath)->equals(remoteRoot))) {
        remoteConverted = u""_j;
    } else if(remoteFullPath)->startsWith(std::stringBuilder().append(getRemoteRoot())->append(::com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_NAME_SEPARATOR())->toString())) {
        remoteConverted = remoteFullPath)->substring(getRemoteRoot())->length() + int(1));
    } else {
        return getRemotePrimaryPath(remoteFullPath);
    }
    auto converted = remoteConverted)->length() > 0 ? ::com::tibbo::aggregate::common::context::ContextUtils::createName(new std::stringArray({getLocalRoot(), remoteConverted})) : getLocalRoot();
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
    if(::com::tibbo::aggregate::common::util::Util::equals(::com::tibbo::aggregate::common::context::Contexts::CTX_ROOT(), remoteFullPath)) {
        return primaryMount;
    } else {
        return ::com::tibbo::aggregate::common::context::ContextUtils::createName(new std::stringArray({primaryMount, remoteFullPath}));
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
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.ProxyContext", 48);
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
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_CHILD_ADDED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_CHILD_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_VARIABLE_ADDED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_VARIABLE_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_FUNCTION_ADDED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_FUNCTION_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_EVENT_ADDED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_EVENT_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_INFO_CHANGED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_DESTROYED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_ACTION_ADDED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_ACTION_REMOVED()));
            AUTO_LISTENED_EVENTS())->add(::com::tibbo::aggregate::common::context::AbstractContext::E_ACTION_STATE_CHANGED()));
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

bool ProxyContext::addEventListener(const std::string & name, ContextEventListener* listener)
{
    return super::addEventListener(name, listener);
}

Event* ProxyContext::fireEvent(Event* event)
{
    return super::fireEvent(event);
}

Event* ProxyContext::fireEvent(const std::string & name, int level, ::com::tibbo::aggregate::common::context::CallerController* caller, FireEventRequestController* request, Permissions* permissions, DataTable* data)
{
    return super::fireEvent(name, level, caller, request, permissions, data);
}

Event* ProxyContext::fireEvent(const std::string & name, DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, int  listener, ::com::tibbo::aggregate::common::context::CallerController* caller, FireEventRequestController* request)
{
    return super::fireEvent(name, data, level, id, creationtime, listener, caller, request);
}

Event* ProxyContext::fireEvent(const std::string & name, DataTable* data)
{
    return super::fireEvent(name, data);
}

Event* ProxyContext::fireEvent(const std::string & name, ::com::tibbo::aggregate::common::context::CallerController* caller, DataTable* data)
{
    return super::fireEvent(name, caller, data);
}

Event* ProxyContext::fireEvent(const std::string & name, int level, DataTable* data)
{
    return super::fireEvent(name, level, data);
}

Event* ProxyContext::fireEvent(const std::string & name, int level, ::com::tibbo::aggregate::common::context::CallerController* caller, DataTable* data)
{
    return super::fireEvent(name, level, caller, data);
}

Event* ProxyContext::fireEvent(const std::string & name)
{
    return super::fireEvent(name);
}

Event* ProxyContext::fireEvent(const std::string & name, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::fireEvent(name, caller);
}

Event* ProxyContext::fireEvent(const std::string & name, voidArray* data)
{
    return super::fireEvent(name, data);
}

com::tibbo::aggregate::common::context::Context* ProxyContext::get(const std::string & contextName)
{
    return super::get(contextName);
}

com::tibbo::aggregate::common::action::ActionDefinition* ProxyContext::getActionDefinition(const std::string & name, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::getActionDefinition(name, caller);
}

java::util::List* ProxyContext::getActionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::getActionDefinitions(caller);
}

java::util::List* ProxyContext::getActionDefinitions()
{
    return super::getActionDefinitions();
}

com::tibbo::aggregate::common::context::Context* ProxyContext::getChild(const std::string & name)
{
    return super::getChild(name);
}

java::util::List* ProxyContext::getChildren()
{
    return super::getChildren();
}

java::util::List* ProxyContext::getEventDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::getEventDefinitions(caller);
}

java::util::List* ProxyContext::getEventDefinitions()
{
    return super::getEventDefinitions();
}

java::util::List* ProxyContext::getEventDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, const std::string & group)
{
    return super::getEventDefinitions(caller, group);
}

java::util::List* ProxyContext::getEventDefinitions(const std::string & group)
{
    return super::getEventDefinitions(group);
}

com::tibbo::aggregate::common::context::FunctionDefinition* ProxyContext::getFunctionDefinition(const std::string & name, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::getFunctionDefinition(name, caller);
}

java::util::List* ProxyContext::getFunctionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::getFunctionDefinitions(caller);
}

java::util::List* ProxyContext::getFunctionDefinitions()
{
    return super::getFunctionDefinitions();
}

java::util::List* ProxyContext::getFunctionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, const std::string & group)
{
    return super::getFunctionDefinitions(caller, group);
}

java::util::List* ProxyContext::getFunctionDefinitions(const std::string & group)
{
    return super::getFunctionDefinitions(group);
}

com::tibbo::aggregate::common::context::VariableDefinition* ProxyContext::getVariableDefinition(const std::string & name, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::getVariableDefinition(name, caller);
}

java::util::List* ProxyContext::getVariableDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller)
{
    return super::getVariableDefinitions(caller);
}

java::util::List* ProxyContext::getVariableDefinitions()
{
    return super::getVariableDefinitions();
}

java::util::List* ProxyContext::getVariableDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, const std::string & group)
{
    return super::getVariableDefinitions(caller, group);
}

java::util::List* ProxyContext::getVariableDefinitions(const std::string & group)
{
    return super::getVariableDefinitions(group);
}

java::util::List* ProxyContext::getVisibleChildren()
{
    return super::getVisibleChildren();
}

java::lang::Class* ProxyContext::getClass0()
{
    return class_();
}
  */

