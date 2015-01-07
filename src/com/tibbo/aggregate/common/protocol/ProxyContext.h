// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/ProxyContext.java

#pragma once

#include "AbstractContext.h"
//#include "AbstractAggreGateDeviceController.h"


template <class C> class ProxyContext: public AbstractContext<C>
{
 private:
	static const long METADATA_READ_TIMEOUT = 120000;
	static const long LISTENER_OPERATIONS_TIMEOUT = 120000;
	std::string F_LOCAL_REINITIALIZE;
   //	AbstractAggreGateDeviceController* controller;
	bool notManageRemoteListeners;
	bool localInitComplete;
	bool initializingInfo;
	bool initializedInfo;
	void* initializingInfoLock;
	bool initializingChildren;
	bool initializedChildren;
	void* initializingChildrenLock;
	bool initializingVariables;
	bool initializedVariables;
	void* initializingVariablesLock;
	bool initializingFunctions;
	bool initializedFunctions;
	void* initializingFunctionsLock;
	bool initializingEvents;
	bool initializedEvents;
	void* initializingEventsLock;
	bool initializingActions;
	bool initializedActions;
	void* initializingActionsLock;
	bool initializingStatus;
	bool initializedStatus;
	void* initializingStatusLock;
	bool initializingVisibleChildren;
	void* initializingVisibleChildrenLock;
   //	std::list visibleChildren;
	std::string localRoot;
	std::string remoteRoot;
	std::string remotePath;
	std::string remotePrimaryRoot;
	bool mapped;
 /*
	std::map variableCache;
	::java::util::concurrent::locks::ReentrantReadWriteLock* variableCacheLock;
	static std::list  AUTO_LISTENED_EVENTS_;
protected:
	void ctor(std::string* name, AbstractAggreGateDeviceController* controller);

public:
	void setupMyself();

public:
	void addLocalFunctionDefinitions();
	::com::tibbo::aggregate::common::datatable::TableFormat* decodeFormat(std::string* source, ::com::tibbo::aggregate::common::context::CallerController* caller);
	void clear();

private:
	void initInfo();
	void initChildren();
	void initVariables();
	void initFunctions();
	void initEvents();
	void initActions() ;
	void initVisibleChildren();
	void initStatus();
	void initInfoImpl(::com::tibbo::aggregate::common::datatable::DataTable* info);

public:
	std::string* convertRemoteDescription(std::string* remoteDescription);

private:
    void initChildrenImpl(::com::tibbo::aggregate::common::datatable::DataTable* children);
	void initVisibleChildrenImpl();

public:
    ProxyContext* createChildContextProxy(std::string* name);

private:
    void initVariablesImpl(::com::tibbo::aggregate::common::datatable::DataTable* variables);
    void initFunctionsImpl(::com::tibbo::aggregate::common::datatable::DataTable* functions);
    void initEventsImpl(::com::tibbo::aggregate::common::datatable::DataTable* events);
    void initActionsImpl(::com::tibbo::aggregate::common::datatable::DataTable* actions);
	void initStatusImpl();

public:
    std::string* getDescription();
    std::string* getType();
    std::string* getLocalRoot();
    std::string* getRemoteRoot();
    bool isMapped();
    ::com::tibbo::aggregate::common::context::Context* get(std::string* contextPath, ::com::tibbo::aggregate::common::context::CallerController* caller);
    std::string* getIconId();
    ::com::tibbo::aggregate::common::context::Context* getChild(std::string* name, ::com::tibbo::aggregate::common::context::CallerController* callerController);
	::com::tibbo::aggregate::common::context::VariableDefinition* getVariableDefinition(std::string* name);
    ::com::tibbo::aggregate::common::context::FunctionDefinition* getFunctionDefinition(std::string* name);
    ::com::tibbo::aggregate::common::context::EventData* getEventData(std::string* name);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(std::string* name);
    std::list  getVariableDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden);
    std::list  getFunctionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden);
    std::list  getEventDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden);
    std::list  getActionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, bool hidden);
    ::com::tibbo::aggregate::common::context::ContextStatus* getStatus();

private:
    void initVariablesLoggingErrors();
    void initFunctionsLoggingErrors();
    void initEventsLoggingErrors();
    void initActionsLoggingErrors();
    void initStatusLoggingErrors();
	IncomingAggreGateCommand* sendGetVariable(std::string* name, ::java::lang::Long* timeout);

public:
	::com::tibbo::aggregate::common::datatable::DataTable* getRemoteVariable(::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* name, ::java::lang::Long* timeout) ;

public:
    AbstractAggreGateDeviceController* getController();
	void setupVariables();
	::com::tibbo::aggregate::common::datatable::DataTable* getVariableImpl(::com::tibbo::aggregate::common::context::VariableDefinition* def, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request);

private:
	::com::tibbo::aggregate::common::datatable::DataTable* getRemoteVariable(::com::tibbo::aggregate::common::context::VariableDefinition* def);

public:
	bool setVariableImpl(::com::tibbo::aggregate::common::context::VariableDefinition* def, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value);
	void setupFunctions();
	::com::tibbo::aggregate::common::datatable::DataTable* callFunctionImpl(::com::tibbo::aggregate::common::context::FunctionDefinition* def, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
	::com::tibbo::aggregate::common::datatable::DataTable* callRemoteFunction(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public:
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* contextEventListener, bool weak);
	bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* contextEventListener, bool weak, bool sendRemoteCommand);
    bool removeEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* contextEventListener);
    bool removeEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool sendRemoteCommand);

private:
    void addRemoteListener(std::string* ename, ::com::tibbo::aggregate::common::event::ContextEventListener* contextEventListener);

public:
    std::list  getChildren(::com::tibbo::aggregate::common::context::CallerController* caller);
    std::list  getVisibleChildren(::com::tibbo::aggregate::common::context::CallerController* caller);
    void addVisibleChild(std::string* localVisiblePath);
    void removeVisibleChild(std::string* localVisiblePath);

private:
	void restoreEventListeners();

public:
	void reinitialize();

public:
    ::com::tibbo::aggregate::common::data::Event* fireEvent(::com::tibbo::aggregate::common::context::EventDefinition* ed, ::com::tibbo::aggregate::common::datatable::DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, ::java::lang::Integer* listener, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request, ::com::tibbo::aggregate::common::security::Permissions* permissions);

private:
    void cacheVariableValue(std::string* variable, ::com::tibbo::aggregate::common::datatable::DataTable* value);

public:
    std::string* getPathDescription();

public:
    bool isProxy();
    bool isDistributed();
	std::string* getRemotePath();
    std::string* getRemotePrimaryRoot();

public:
    std::string* getPeerPath();

public:
    std::string* getLocalPath(std::string* remoteFullPath);

private:
    std::string* getRemotePrimaryPath(std::string* remoteFullPath);

public:
    std::string* getLocalVisiblePath(std::string* remoteFullPath);
    void setRemotePath(std::string* remotePath);

public:
    bool isInitializedInfo();
    bool isInitializedChildren();
    bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
    bool isNotManageRemoteListeners();
    void setNotManageRemoteListeners(bool notManageRemoteListeners);

private:
    ::com::tibbo::aggregate::common::event::ContextEventListener* visibleChildAddedListener;
    ::com::tibbo::aggregate::common::event::ContextEventListener* visibleChildRemovedListener;
    ::com::tibbo::aggregate::common::event::ContextEventListener* contextStatusChangedListener;


public:
    
    static void 

private:
    void init();

public:
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);

public:
    ::com::tibbo::aggregate::common::data::Event* fireEvent(::com::tibbo::aggregate::common::data::Event* event);

public:
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request, ::com::tibbo::aggregate::common::security::Permissions* permissions, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, ::java::lang::Integer* listener, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::context::CallerController* caller);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, voidArray* data);
    ::com::tibbo::aggregate::common::context::Context* get(std::string* contextName);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(std::string* name, ::com::tibbo::aggregate::common::context::CallerController* caller);
    std::list  getActionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller);
    std::list  getActionDefinitions();
    ::com::tibbo::aggregate::common::context::Context* getChild(std::string* name);
    std::list  getChildren();
    std::list  getEventDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller);
	std::list  getEventDefinitions();
    std::list  getEventDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, std::string* group);
    std::list  getEventDefinitions(std::string* group);
    ::com::tibbo::aggregate::common::context::FunctionDefinition* getFunctionDefinition(std::string* name, ::com::tibbo::aggregate::common::context::CallerController* caller);
    std::list  getFunctionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller);
    std::list  getFunctionDefinitions();
    std::list  getFunctionDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, std::string* group);
    std::list  getFunctionDefinitions(std::string* group);
    ::com::tibbo::aggregate::common::context::VariableDefinition* getVariableDefinition(std::string* name, ::com::tibbo::aggregate::common::context::CallerController* caller);
    std::list  getVariableDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller);
    std::list  getVariableDefinitions();
    std::list  getVariableDefinitions(::com::tibbo::aggregate::common::context::CallerController* caller, std::string* group);
    std::list  getVariableDefinitions(std::string* group);
    std::list  getVisibleChildren();
    static const std::string& F_LOCAL_REINITIALIZE();

private:
    static std::list & AUTO_LISTENED_EVENTS();
    ::java::lang::Class* getClass0();
    friend class ProxyContext_setupMyself_4;
    friend class ProxyContext_setupMyself_5;
    friend class ProxyContext_setupMyself_6;
    friend class ProxyContext_setupMyself_7;
    friend class ProxyContext_setupMyself_8;
    friend class ProxyContext_setupMyself_9;
    friend class ProxyContext_setupMyself_10;
    friend class ProxyContext_setupMyself_11;
    friend class ProxyContext_setupMyself_12;
    friend class ProxyContext_setupMyself_13;
    friend class ProxyContext_setupMyself_14;
    friend class ProxyContext_setupMyself_15;
    friend class ProxyContext_clear_16;
    friend class ProxyContext_1;
    friend class ProxyContext_2;
	friend class ProxyContext_3;  */

	public:
   //	ProxyContext(std::string name, AbstractAggreGateDeviceController* controller);


};
