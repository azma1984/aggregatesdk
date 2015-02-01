#ifndef ProxyContextH
#define ProxyContextH

#include "context/AbstractContext.h"


template <class C> class ProxyContext: public AbstractContext
{
 private:
	static const long METADATA_READ_TIMEOUT = 120000;
	static const long LISTENER_OPERATIONS_TIMEOUT = 120000;
	AbstractAggreGateDeviceControllerPtr controller;
	bool notManageRemoteListeners;
	bool localInitComplete;
	bool initializingInfo;
	bool initializedInfo;
	AgObjectPtr initializingInfoLock;
	bool initializingChildren;
	bool initializedChildren;
	AgObjectPtr initializingChildrenLock;
	bool initializingVariables;
	bool initializedVariables;
	AgObjectPtr initializingVariablesLock;
	bool initializingFunctions;
	bool initializedFunctions;
	AgObjectPtr initializingFunctionsLock;
	bool initializingEvents;
	bool initializedEvents;
	AgObjectPtr initializingEventsLock;
	bool initializingActions;
	bool initializedActions;
	AgObjectPtr initializingActionsLock;
	bool initializingStatus;
	bool initializedStatus;
	AgObjectPtr initializingStatusLock;
	bool initializingVisibleChildren;
	AgObjectPtr initializingVisibleChildrenLock;
	std::list<std::string> visibleChildren;
	std::string localRoot;
	std::string remoteRoot;
	std::string remotePath;
	std::string remotePrimaryRoot;
	bool mapped;

	//todo
   //	std::map< std::string, SoftReference<CachedVariableValue> > variableCache;
	boost::shared_mutex variableCacheLock;
	static std::list< std::string >  AUTO_LISTENED_EVENTS;



	void initInfo();
	void initChildren();
	void initVariables();
	void initFunctions();
	void initEvents();
	void initActions() ;
	void initVisibleChildren();
	void initStatus();
	void initInfoImpl(DataTablePtr info);

	void initChildrenImpl(DataTablePtr children);
	void initVisibleChildrenImpl();
		void initVariablesImpl(DataTablePtr variables);
	void initFunctionsImpl(DataTablePtr functions);
	void initEventsImpl(DataTablePtr events);
	void initActionsImpl(DataTablePtr actions);
	void initStatusImpl();

		void initVariablesLoggingErrors();
	void initFunctionsLoggingErrors();
	void initEventsLoggingErrors();
	void initActionsLoggingErrors();
	void initStatusLoggingErrors();
	IncomingAggreGateCommandPtr sendGetVariable(const std::string & name, long  timeout);

	DataTablePtr getRemoteVariable(VariableDefinitionPtr def);

	void addRemoteListener(const std::string & ename, ContextEventListenerPtr contextEventListener);

	void restoreEventListeners();

	void cacheVariableValue(const std::string & variable, DataTablePtr value);

	const std::string & getRemotePrimaryPath(const std::string & remoteFullPath);

	ContextEventListenerPtr visibleChildAddedListener;
	ContextEventListenerPtr visibleChildRemovedListener;
	ContextEventListenerPtr contextStatusChangedListener;

	void init();
	EventPtr fireEvent(EventPtr event);
public:
	std::string F_LOCAL_REINITIALIZE;
	void setupMyself();


	void addLocalFunctionDefinitions();
	TableFormatPtr decodeFormat(const std::string & source, CallerControllerPtr caller);
	void clear();


	const std::string & convertRemoteDescription(const std::string & remoteDescription);


	ProxyContextPtr createChildContextProxy(const std::string & name);

	const std::string & getDescription();
	const std::string & getType();
    const std::string & getLocalRoot();
    const std::string & getRemoteRoot();
    bool isMapped();
	ContextPtr get(const std::string & contextPath, CallerControllerPtr caller);
    const std::string & getIconId();
    ContextPtr getChild(const std::string & name, CallerControllerPtr callerController);
	VariableDefinitionPtr getVariableDefinition(const std::string & name);
	FunctionDefinitionPtr getFunctionDefinition(const std::string & name);
	EventDataPtr getEventDataPtr(const std::string & name);
	ActionDefinitionPtr getActionDefinition(const std::string & name);
	std::list<VariableDefinitionPtr>  getVariableDefinitions(CallerControllerPtr caller, bool hidden);
	std::list<FunctionDefinitionPtr>  getFunctionDefinitions(CallerControllerPtr caller, bool hidden);
	std::list<EventDefinitionPtr>  getEventDefinitions(CallerControllerPtr caller, bool hidden);
	std::list<ActionDefinitionPtr>  getActionDefinitions(CallerControllerPtr caller, bool hidden);
    ContextStatusPtr getStatus();

	DataTablePtr getRemoteVariable(TableFormatPtr format, const std::string & name, long  timeout) ;

    AbstractAggreGateDeviceControllerPtr getController();
	void setupVariables();
	DataTablePtr getVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request);


	bool setVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value);
	void setupFunctions();
	DataTablePtr callFunctionImpl(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters);
	DataTablePtr callRemoteFunction(const std::string & name, TableFormatPtr outputFormat, DataTablePtr parameters);

	bool addEventListener(const std::string & name, ContextEventListenerPtr contextEventListener, bool weak);
	bool addEventListener(const std::string & name, ContextEventListenerPtr contextEventListener, bool weak, bool sendRemoteCommand);
	bool removeEventListener(const std::string & name, ContextEventListenerPtr contextEventListener);
    bool removeEventListener(const std::string & name, ContextEventListenerPtr listener, bool sendRemoteCommand);


	std::list<std::string>  getChildren(CallerControllerPtr caller);
	std::list<std::string>  getVisibleChildren(CallerControllerPtr caller);
    void addVisibleChild(const std::string & localVisiblePath);
	void removeVisibleChild(const std::string & localVisiblePath);


	void reinitialize();


	EventPtr fireEvent(EventDefinitionPtr ed, DataTablePtr data, int level, long  id, DatePtr creationtime, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request, PermissionsPtr permissions);


	const std::string & getPathDescription();


	bool isProxy();
    bool isDistributed();
	std::string getRemotePath();
	std::string getRemotePrimaryRoot();
	std::string getPeerPath();
	std::string getLocalPath(const std::string & remoteFullPath);
	std::string getLocalVisiblePath(const std::string & remoteFullPath);
    void setRemotePath(const std::string & remotePath);

    bool isInitializedInfo();
    bool isInitializedChildren();
	bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
	bool isNotManageRemoteListeners();
    void setNotManageRemoteListeners(bool notManageRemoteListeners);

    bool addEventListener(const std::string & name, ContextEventListenerPtr listener);


    EventPtr fireEvent(const std::string & name, int level, CallerControllerPtr caller, FireEventRequestControllerPtr request, PermissionsPtr permissions, DataTablePtr data);
	EventPtr fireEvent(const std::string & name, DataTablePtr data, int level, long  id, DatePtr creationtime, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request);
    EventPtr fireEvent(const std::string & name, DataTablePtr data);
    EventPtr fireEvent(const std::string & name, CallerControllerPtr caller, DataTablePtr data);
	EventPtr fireEvent(const std::string & name, int level, DataTablePtr data);
    EventPtr fireEvent(const std::string & name, int level, CallerControllerPtr caller, DataTablePtr data);
    EventPtr fireEvent(const std::string & name);
	EventPtr fireEvent(const std::string & name, CallerControllerPtr caller);
	EventPtr fireEvent(const std::string & name, void* data);
    ContextPtr get(const std::string & contextName);
	ActionDefinitionPtr getActionDefinition(const std::string & name, CallerControllerPtr caller);
	std::list<ActionDefinitionPtr>  getActionDefinitions(CallerControllerPtr caller);
	std::list<ActionDefinitionPtr>  getActionDefinitions();
    ContextPtr getChild(const std::string & name);
	std::list<C>  getChildren();
	std::list<EventDefinition>  getEventDefinitions(CallerControllerPtr caller);
	std::list<EventDefinition>  getEventDefinitions();
	std::list<EventDefinition>  getEventDefinitions(CallerControllerPtr caller, const std::string & group);
	std::list<EventDefinition>  getEventDefinitions(const std::string & group);
    FunctionDefinitionPtr getFunctionDefinition(const std::string & name, CallerControllerPtr caller);
	std::list<FunctionDefinitionPtr>  getFunctionDefinitions(CallerControllerPtr caller);
	std::list<FunctionDefinitionPtr>  getFunctionDefinitions();
	std::list<FunctionDefinitionPtr>  getFunctionDefinitions(CallerControllerPtr caller, const std::string & group);
	std::list<FunctionDefinitionPtr>  getFunctionDefinitions(const std::string & group);
	VariableDefinitionPtr getVariableDefinition(const std::string & name, CallerControllerPtr caller);
	std::list<VariableDefinitionPtr>  getVariableDefinitions(CallerControllerPtr caller);
	std::list<VariableDefinitionPtr>  getVariableDefinitions();
	std::list<VariableDefinitionPtr>  getVariableDefinitions(CallerControllerPtr caller, const std::string & group);
	std::list<VariableDefinitionPtr>  getVariableDefinitions(const std::string & group);
	std::list<C>  getVisibleChildren();

	ProxyContext(std::string name, AbstractAggreGateDeviceControllerPtr controller);
};
#endif
