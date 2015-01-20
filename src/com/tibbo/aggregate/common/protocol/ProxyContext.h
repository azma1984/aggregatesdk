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
	void ctor(const std::string & name, AbstractAggreGateDeviceController* controller);

public:
	void setupMyself();

public:
	void addLocalFunctionDefinitions();
	TableFormat* decodeFormat(const std::string & source, CallerController* caller);
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
	void initInfoImpl(DataTable* info);

public:
	const std::string & convertRemoteDescription(const std::string & remoteDescription);

private:
    void initChildrenImpl(DataTable* children);
	void initVisibleChildrenImpl();

public:
    ProxyContext* createChildContextProxy(const std::string & name);

private:
    void initVariablesImpl(DataTable* variables);
    void initFunctionsImpl(DataTable* functions);
    void initEventsImpl(DataTable* events);
    void initActionsImpl(DataTable* actions);
	void initStatusImpl();

public:
    const std::string & getDescription();
    const std::string & getType();
    const std::string & getLocalRoot();
    const std::string & getRemoteRoot();
    bool isMapped();
    Context* get(const std::string & contextPath, CallerController* caller);
    const std::string & getIconId();
    Context* getChild(const std::string & name, CallerController* callerController);
	VariableDefinition* getVariableDefinition(const std::string & name);
    FunctionDefinition* getFunctionDefinition(const std::string & name);
    EventData* getEventData(const std::string & name);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(const std::string & name);
    std::list  getVariableDefinitions(CallerController* caller, bool hidden);
    std::list  getFunctionDefinitions(CallerController* caller, bool hidden);
    std::list  getEventDefinitions(CallerController* caller, bool hidden);
    std::list  getActionDefinitions(CallerController* caller, bool hidden);
    ContextStatus* getStatus();

private:
    void initVariablesLoggingErrors();
    void initFunctionsLoggingErrors();
    void initEventsLoggingErrors();
    void initActionsLoggingErrors();
    void initStatusLoggingErrors();
	IncomingAggreGateCommand* sendGetVariable(const std::string & name, long  timeout);

public:
	DataTable* getRemoteVariable(TableFormat* format, const std::string & name, long  timeout) ;

public:
    AbstractAggreGateDeviceController* getController();
	void setupVariables();
	DataTable* getVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request);

private:
	DataTable* getRemoteVariable(VariableDefinition* def);

public:
	bool setVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request, DataTable* value);
	void setupFunctions();
	DataTable* callFunctionImpl(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters);
	DataTable* callRemoteFunction(const std::string & name, TableFormat* outputFormat, DataTable* parameters);

public:
    bool addEventListener(const std::string & name, ContextEventListener* contextEventListener, bool weak);
	bool addEventListener(const std::string & name, ContextEventListener* contextEventListener, bool weak, bool sendRemoteCommand);
    bool removeEventListener(const std::string & name, ContextEventListener* contextEventListener);
    bool removeEventListener(const std::string & name, ContextEventListener* listener, bool sendRemoteCommand);

private:
    void addRemoteListener(const std::string & ename, ContextEventListener* contextEventListener);

public:
    std::list  getChildren(CallerController* caller);
    std::list  getVisibleChildren(CallerController* caller);
    void addVisibleChild(const std::string & localVisiblePath);
    void removeVisibleChild(const std::string & localVisiblePath);

private:
	void restoreEventListeners();

public:
	void reinitialize();

public:
    Event* fireEvent(EventDefinition* ed, DataTable* data, int level, long  id, Date* creationtime, int  listener, CallerController* caller, FireEventRequestController* request, Permissions* permissions);

private:
    void cacheVariableValue(const std::string & variable, DataTable* value);

public:
    const std::string & getPathDescription();

public:
    bool isProxy();
    bool isDistributed();
	const std::string & getRemotePath();
    const std::string & getRemotePrimaryRoot();

public:
    const std::string & getPeerPath();

public:
    const std::string & getLocalPath(const std::string & remoteFullPath);

private:
    const std::string & getRemotePrimaryPath(const std::string & remoteFullPath);

public:
    const std::string & getLocalVisiblePath(const std::string & remoteFullPath);
    void setRemotePath(const std::string & remotePath);

public:
    bool isInitializedInfo();
    bool isInitializedChildren();
    bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
    bool isNotManageRemoteListeners();
    void setNotManageRemoteListeners(bool notManageRemoteListeners);

private:
    ContextEventListener* visibleChildAddedListener;
    ContextEventListener* visibleChildRemovedListener;
    ContextEventListener* contextStatusChangedListener;


public:
    
    static void 

private:
    void init();

public:
    bool addEventListener(const std::string & name, ContextEventListener* listener);

public:
    Event* fireEvent(Event* event);

public:
    Event* fireEvent(const std::string & name, int level, CallerController* caller, FireEventRequestController* request, Permissions* permissions, DataTable* data);
    Event* fireEvent(const std::string & name, DataTable* data, int level, long  id, Date* creationtime, int  listener, CallerController* caller, FireEventRequestController* request);
    Event* fireEvent(const std::string & name, DataTable* data);
    Event* fireEvent(const std::string & name, CallerController* caller, DataTable* data);
    Event* fireEvent(const std::string & name, int level, DataTable* data);
    Event* fireEvent(const std::string & name, int level, CallerController* caller, DataTable* data);
    Event* fireEvent(const std::string & name);
    Event* fireEvent(const std::string & name, CallerController* caller);
    Event* fireEvent(const std::string & name, voidArray* data);
    Context* get(const std::string & contextName);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(const std::string & name, CallerController* caller);
    std::list  getActionDefinitions(CallerController* caller);
    std::list  getActionDefinitions();
    Context* getChild(const std::string & name);
    std::list  getChildren();
    std::list  getEventDefinitions(CallerController* caller);
	std::list  getEventDefinitions();
    std::list  getEventDefinitions(CallerController* caller, const std::string & group);
    std::list  getEventDefinitions(const std::string & group);
    FunctionDefinition* getFunctionDefinition(const std::string & name, CallerController* caller);
    std::list  getFunctionDefinitions(CallerController* caller);
    std::list  getFunctionDefinitions();
    std::list  getFunctionDefinitions(CallerController* caller, const std::string & group);
    std::list  getFunctionDefinitions(const std::string & group);
    VariableDefinition* getVariableDefinition(const std::string & name, CallerController* caller);
    std::list  getVariableDefinitions(CallerController* caller);
    std::list  getVariableDefinitions();
    std::list  getVariableDefinitions(CallerController* caller, const std::string & group);
    std::list  getVariableDefinitions(const std::string & group);
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
