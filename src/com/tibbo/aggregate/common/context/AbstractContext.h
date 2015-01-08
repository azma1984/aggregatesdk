// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java

#ifndef AbstractContextH
#define AbstractContextH

#include "Context.h"



template <class C> class AbstractContext : public Context//<C>
{
private:
	std::string IMPLEMENTATION_METHOD_PREFIX;
	std::string SETTER_METHOD_PREFIX;
	std::string GETTER_METHOD_PREFIX;
public:
	std::string V_INFO;
	std::string V_CHILDREN;
	std::string V_VARIABLES;
	std::string V_FUNCTIONS;
	std::string V_EVENTS;
	std::string V_ACTIONS;
	std::string V_VARIABLE_STATUSES;
	std::string F_GET_COPY_DATA;
	std::string F_COPY;
	std::string F_COPY_TO_CHILDREN;
	std::string E_INFO;
	static std::string E_UPDATED;
	std::string E_CHANGE;
	std::string E_DESTROYED;
	std::string E_INFO_CHANGED;
	std::string E_VARIABLE_ADDED;
	std::string E_VARIABLE_REMOVED;
	std::string E_FUNCTION_ADDED;
	std::string E_FUNCTION_REMOVED;
	std::string E_EVENT_ADDED;
	std::string E_EVENT_REMOVED;
	std::string E_ACTION_ADDED;
    std::string E_ACTION_REMOVED;
	std::string E_ACTION_STATE_CHANGED;
    std::string E_CHILD_REMOVED;
    std::string E_CHILD_ADDED;
	std::string E_VARIABLE_STATUS_CHANGED;
	std::string VF_INFO_DESCRIPTION;
    std::string VF_INFO_TYPE;
	std::string VF_INFO_GROUP;
    std::string VF_INFO_ICON;
    std::string VF_INFO_LOCAL_ROOT;
	std::string VF_INFO_REMOTE_ROOT;
    std::string VF_INFO_REMOTE_PATH;
    std::string VF_INFO_REMOTE_PRIMARY_ROOT;
	std::string VF_INFO_MAPPED;
    std::string VF_CHILDREN_NAME;
    std::string VF_VARIABLE_STATUSES_COMMENT;
	std::string VF_VARIABLE_STATUSES_STATUS;
    std::string VF_VARIABLE_STATUSES_NAME;
    std::string FIF_COPY_DATA_RECIPIENTS;
	std::string FIF_COPY_DATA_GROUP;
    std::string FOF_COPY_DATA_NAME;
    std::string FOF_COPY_DATA_DESCRIPTION;
	std::string FOF_COPY_DATA_REPLICATE;
    std::string FOF_COPY_DATA_FIELDS;
    std::string FOF_COPY_DATA_VALUE;
	std::string FIF_REPLICATE_FIELDS_NAME;
    std::string FIF_REPLICATE_FIELDS_DESCRIPTION;
    std::string FIF_REPLICATE_FIELDS_REPLICATE;
	std::string FIF_COPY_DATA_RECIPIENTS_RECIPIENT;
    std::string EF_INFO_INFO;
    std::string EF_EVENT_REMOVED_NAME;
	std::string EF_FUNCTION_REMOVED_NAME;
    std::string EF_VARIABLE_REMOVED_NAME;
    std::string EF_ACTION_REMOVED_NAME;
	std::string EF_CHILD_REMOVED_CHILD;
    std::string EF_CHILD_ADDED_CHILD;
    std::string FIELD_REPLICATE_CONTEXT;
	std::string FIELD_REPLICATE_VARIABLE;
    std::string FIELD_REPLICATE_SUCCESSFUL;
    std::string FIELD_REPLICATE_ERRORS;
	std::string EF_UPDATED_VARIABLE;
    std::string EF_UPDATED_VALUE;
    std::string EF_UPDATED_USER;
	std::string EF_CHANGE_VARIABLE;
    std::string EF_CHANGE_VALUE;
    std::string EF_CHANGE_DATA;
	std::string FIELD_VD_NAME;
    std::string FIELD_VD_FORMAT;
    std::string FIELD_VD_DESCRIPTION;
	std::string FIELD_VD_READABLE;
    std::string FIELD_VD_WRITABLE;
    std::string FIELD_VD_HELP;
	std::string FIELD_VD_GROUP;
    std::string FIELD_VD_ICON_ID;
    std::string FIELD_VD_HELP_ID;
	std::string FIELD_VD_CACHE_TIME;
    std::string FIELD_FD_NAME;
    std::string FIELD_FD_INPUTFORMAT;
	std::string FIELD_FD_OUTPUTFORMAT;
    std::string FIELD_FD_DESCRIPTION;
    std::string FIELD_FD_HELP;
	std::string FIELD_FD_GROUP;
    std::string FIELD_FD_ICON_ID;
    std::string FIELD_ED_NAME;
	std::string FIELD_ED_FORMAT;
    std::string FIELD_ED_DESCRIPTION;
    std::string FIELD_ED_HELP;
	std::string FIELD_ED_LEVEL;
    std::string FIELD_ED_GROUP;
	std::string FIELD_ED_ICON_ID;
	/*
	static ::com::tibbo::aggregate::common::datatable::TableFormat* VARIABLE_DEFINITION_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EF_VARIABLE_ADDED;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* FUNCTION_DEFINITION_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EF_FUNCTION_ADDED;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EVENT_DEFINITION_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EF_EVENT_ADDED;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* VFT_CHILDREN;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* INFO_DEFINITION_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* ACTION_DEF_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* RESOURCE_MASKS_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* FIFT_GET_COPY_DATA;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* FIFT_GET_COPY_DATA_RECIPIENTS;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* REPLICATE_INPUT_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* FIFT_REPLICATE_FIELDS;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* REPLICATE_OUTPUT_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* REPLICATE_TO_CHILDREN_OUTPUT_FORMAT;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EF_UPDATED;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EF_CHANGE;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_INFO;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_VARIABLE_REMOVED;
	static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_EVENT_REMOVED;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_FUNCTION_REMOVED;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_CHILD_REMOVED;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_CHILD_ADDED;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EFT_ACTION_REMOVED;
    static VariableDefinition* VD_INFO;
    static VariableDefinition* VD_VARIABLES;
    static VariableDefinition* VD_FUNCTIONS;
    static VariableDefinition* VD_EVENTS;
    static VariableDefinition* VD_ACTIONS;
    static VariableDefinition* VD_CHILDREN;
    static FunctionDefinition* FD_GET_COPY_DATA;
    static FunctionDefinition* FD_COPY;
    static FunctionDefinition* FD_COPY_TO_CHILDREN;
    static EventDefinition* ED_INFO;
    static EventDefinition* ED_CHILD_ADDED;
    static EventDefinition* ED_CHILD_REMOVED;
    static EventDefinition* ED_VARIABLE_ADDED;
    static EventDefinition* ED_VARIABLE_REMOVED;
    static EventDefinition* ED_FUNCTION_ADDED;
    static EventDefinition* ED_FUNCTION_REMOVED;
    static EventDefinition* ED_EVENT_ADDED;
    static EventDefinition* ED_EVENT_REMOVED;
    static EventDefinition* ED_ACTION_ADDED;
    static EventDefinition* ED_ACTION_REMOVED;
    static EventDefinition* ED_ACTION_STATE_CHANGED;
    static EventDefinition* ED_INFO_CHANGED;
    static EventDefinition* ED_UPDATED;
    static EventDefinition* ED_CHANGE;
    static EventDefinition* ED_DESTROYED;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* VFT_VARIABLE_STATUSES;
    static const int DEFAULT_EVENT_LEVEL = -1) };
    static ::com::tibbo::aggregate::common::security::Permissions* DEFAULT_PERMISSIONS;*/
	
public:	
    std::string CALLER_CONTROLLER_PROPERTY_DEBUG;
    std::string CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS;
	std::string CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS;
/*

    static const int INDEX_HIGHEST = 400) };
    static const int INDEX_VERY_HIGH = 300) };
    static const int INDEX_HIGH = 200) };
    static const int INDEX_HIGHER = 100) };
    static const int INDEX_NORMAL) };
    static const int INDEX_LOWER = -100) };
    static const int INDEX_LOW = -200) };
    static const int INDEX_VERY_LOW = -300) };
    static const int INDEX_LOWEST = -400) };
    static const int DELTA_HIGHEST = 40) };
    static const int DELTA_VERY_HIGH = 30) };
    static const int DELTA_HIGH = 20) };
    static const int DELTA_HIGHER = 10) };
    static const int DELTA_LOWER = -10) };
    static const int DELTA_LOW = -20) };
    static const int DELTA_VERY_LOW = -30) };
    static const int DELTA_LOWEST = -400) };

private:
    static const int VERY_LOW_PERFORMANCE_THRESHOLD = 120000) };
    static const int LOW_PERFORMANCE_THRESHOLD = 20000) };
    ContextManager* contextManager;
    std::map variableData;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* variableDataLock;
    std::map functionData;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* functionDataLock;
    std::map eventData;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* eventDataLock;
    std::list  actionDefinitions;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* actionDefinitionsLock;
    std::string* name;
    std::string* description;
    std::string* type;
    std::string* group;
    std::string* iconId;
    Context* parent;
    bool setupComplete;
    bool started;
    ::java::lang::Integer* index;
    bool permissionCheckingEnabled;
    ::com::tibbo::aggregate::common::security::Permissions* permissions;
    ::com::tibbo::aggregate::common::security::Permissions* childrenViewPermissions;
    ::com::tibbo::aggregate::common::security::PermissionChecker* permissionChecker;
    std::list  children;
    std::map childrenMap;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* childrenLock;
    bool valueCheckingEnabled;
    bool childrenConcurrencyEnabled;
    bool childrenSortingEnabled;
    bool fireUpdateEvents;
    ContextStatus* status;
    std::map variableStatuses;
    bool variableStatusesUpdated;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* variableStatusesLock;
    std::string* path;
protected:
    void ctor(std::string* name);

public:
    void setup(ContextManager* contextManager);

public:
    void setup();

public:
    void setupPermissions();
	void setupMyself() ;
	void setupChildren() ;
    void teardown();
    void start();
    void stop();
    int compareTo(Context* context);
    std::list  getChildren(CallerController* caller);

private:
    bool shouldSeeChild(CallerController* caller, Context* cur);
    bool canSee(CallerController* caller, Context* con);

public:
    std::list  getChildren();
    std::list  getVisibleChildren(CallerController* caller);
    std::list  getVisibleChildren();
    bool isMapped();
    std::list  getMappedChildren(CallerController* caller);
    std::list  getMappedChildren();
    std::string* getName();
    std::string* getDescription();
    void setDescription(std::string* description);
    Context* getParent();
    bool hasParent(Context* parentContext);
    Context* getRoot();
    Context* get(std::string* contextPath, CallerController* caller);
    Context* get(std::string* contextName);
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();

public:
    void setName(std::string* name);

public:
    void setParent(Context* parent);

public:
    void setPermissions(::com::tibbo::aggregate::common::security::Permissions* permissions);
    void setPermissionChecker(::com::tibbo::aggregate::common::security::PermissionChecker* permissionChecker);
    void setFireUpdateEvents(bool fireUpdateEvents);
    bool isFireUpdateEvents();

private:
    void setContextManager(ContextManager* contextManager);

public:
    void setChildrenViewPermissions(::com::tibbo::aggregate::common::security::Permissions* childrenViewPermissions);
    void setChildrenSortingEnabled(bool childrenSortingEnabled);

public:
    bool isChildrenSortingEnabled();

public:
    void setValueCheckingEnabled(bool valueCheckingEnabled);

public:
    bool isChildrenConcurrencyEnabled();

public:
    void setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled);
	void checkPermissions(::com::tibbo::aggregate::common::security::Permissions* needPermissions, CallerController* caller);

public:
    bool checkPermissions(::com::tibbo::aggregate::common::security::Permissions* needPermissions, CallerController* caller, Context* accessedContext);
    void addChild(Context* child);
    void addChild(Context* child, ::java::lang::Integer* index);
    void removeFromParent();
    void destroy(bool moving);

public:
    void destroyChildren(bool moving);

public:
    void removeChild(Context* child);
    void removeChild(std::string* name);

public:
    void reorderChild(Context* child, int index);

public:
    void destroyChild(Context* child, bool moving);
    void destroyChild(std::string* name, bool moving);
    void removeAllChildren();

public:
	void movePrepare(std::string* oldPath, std::string* oldName, std::string* newPath, std::string* newName) ;
	void moveInternal(std::string* oldPath, std::string* oldName, std::string* newPath, std::string* newName) ;
	void moveFinalize(std::string* oldPath, std::string* oldName, std::string* newPath, std::string* newName);

public:
	void move(Context* newParent, std::string* newName);

private:
	void move(std::string* oldPath, Context* newParent, std::string* newName);

public:
    Context* getChild(std::string* name, CallerController* caller);
    Context* getChild(std::string* name);

private:
    Context* getChildWithoutCheckingPerms(std::string* name);

public:
    std::string* getPath();

private:
    std::string* createPath();

public:
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool weak);
    bool removeEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    std::list  getVariableDefinitions(CallerController* caller);
    std::list  getVariableDefinitions(CallerController* caller, bool includeHidden);
    std::list  getVariableDefinitions();
    std::list  getVariableDefinitions(CallerController* caller, std::string* group);
    std::list  getVariableDefinitions(std::string* group);
    ::com::tibbo::aggregate::common::security::PermissionChecker* getPermissionChecker();
    ::com::tibbo::aggregate::common::security::Permissions* getChildrenViewPermissions();
    ContextManager* getContextManager();
    bool isSetupComplete();
    bool isStarted();
    bool isInitializedInfo();
    bool isInitializedChildren();
    bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
    std::list  getFunctionDefinitions(CallerController* caller);
    std::list  getFunctionDefinitions(CallerController* caller, bool includeHidden);
    std::list  getFunctionDefinitions();
    std::list  getFunctionDefinitions(CallerController* caller, std::string* group);
    std::list  getFunctionDefinitions(std::string* group);

public:
    ::java::util::concurrent::locks::ReentrantReadWriteLock* getChildrenLock();

public:
    std::string* getType();
    bool isPermissionCheckingEnabled();
    std::string* getIconId();
    ::java::lang::Integer* getIndex();
    std::string* getGroup();
    std::string* getLocalRoot();
    bool isProxy();
    bool isDistributed();
    std::string* getRemoteRoot();
    std::string* getRemotePath();
    std::string* getRemotePrimaryRoot();
    void setType(std::string* type);

public:
    void setPermissionCheckingEnabled(bool permissionCheckingEnabled);
    void setIconId(std::string* iconId);

private:
    void contextInfoChanded();

public:
    void setIndex(::java::lang::Integer* index);
    void setGroup(std::string* group);
    std::list  getEventDefinitions(CallerController* caller);
    std::list  getEventDefinitions(CallerController* caller, bool includeHidden);
    std::list  getEventDefinitions();
    std::list  getEventDefinitions(CallerController* caller, std::string* group);
    std::list  getEventDefinitions(std::string* group);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(std::string* name);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(std::string* name, CallerController* caller);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getDefaultActionDefinition(CallerController* caller);
    std::list  getActionDefinitions(CallerController* caller);
    void addActionDefinition(::com::tibbo::aggregate::common::action::ActionDefinition* def);
    std::list  getActionDefinitions(CallerController* caller, bool includeHidden);
    std::list  getActionDefinitions();
    void removeActionDefinition(std::string* name);

public:
    ::com::tibbo::aggregate::common::action::ActionDefinition* actDefFromDataRecord(::com::tibbo::aggregate::common::datatable::DataRecord* rec);

private:
	::com::tibbo::aggregate::common::datatable::DataTable* getVariable(VariableDefinition* def, CallerController* caller, RequestController* request) ;
	::com::tibbo::aggregate::common::datatable::DataTable* checkVariableValue(VariableDefinition* def, ::com::tibbo::aggregate::common::datatable::DataTable* val) ;
    std::string* checkVariableValueFormat(VariableDefinition* def, ::com::tibbo::aggregate::common::datatable::DataTable* table);
	::com::tibbo::aggregate::common::datatable::DataTable* executeGetter(VariableData* data, CallerController* caller, RequestController* request) ;
	::com::tibbo::aggregate::common::datatable::DataTable* executeGetterMethod(VariableData* data, CallerController* caller, RequestController* request) ;

public:
	::com::tibbo::aggregate::common::datatable::DataTable* executeDefaultGetter(std::string* name, CallerController* caller);
	::com::tibbo::aggregate::common::datatable::DataTable* executeDefaultGetter(std::string* name, CallerController* caller, bool check);
	::com::tibbo::aggregate::common::datatable::DataTable* executeDefaultGetter(std::string* name, CallerController* caller, bool check, bool createDefault);

private:
	::com::tibbo::aggregate::common::datatable::DataTable* executeDefaultGetter(VariableDefinition* def, CallerController* caller, bool check, bool createDefault) ;

public:
	::com::tibbo::aggregate::common::datatable::DataTable* executeDefaultGetterImpl(VariableDefinition* vd, CallerController* caller);

public:
    int hashCode();
	bool equals(void* obj);
	::com::tibbo::aggregate::common::datatable::DataTable* getVariable(std::string* name, CallerController* caller, RequestController* request) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* getVariable(std::string* name, CallerController* caller) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* getVariable(std::string* name) ;

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* getVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    void* getVariableObject(std::string* name, CallerController* caller);

private:
    void setVariable(VariableDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;

public:
    void variableUpdated(VariableDefinition* def, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;
    void fireUpdatedEvent(VariableDefinition* def, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* value);
    void fireChangeEvent(VariableDefinition* def, CallerController* caller, ::java::util::Date* timestamp, ::com::tibbo::aggregate::common::datatable::DataTable* value);
    void setupVariables() ;

private:
	void executeSetter(VariableData* data, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value);
	bool executeSetterMethod(VariableData* data, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value);

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* getDefaultValue(VariableDefinition* def);
    void executeDefaultSetter(std::string* name, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;
    void executeDefaultSetter(VariableDefinition* def, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;

public:
    void executeDefaultSetterImpl(VariableDefinition* vd, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;

public:
    void setVariable(std::string* name, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;
    void setVariable(std::string* name, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;
    void setVariable(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;
	void setVariable(std::string* name, CallerController* caller, voidArray* value) ;
	void setVariable(std::string* name, voidArray* value) ;

public:
    bool setVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;

private:
    VariableDefinition* getAndCheckVariableDefinition(std::string* name) ;

public:
    bool setVariableField(std::string* variable, std::string* field, void* value, CallerController* cc) ;
    bool setVariableField(std::string* variable, std::string* field, int record, void* value, CallerController* cc) ;
    void setVariableField(std::string* variable, std::string* field, void* value, std::string* compareField, void* compareValue, CallerController* cc) ;
    void addVariableRecord(std::string* variable, CallerController* cc, ::com::tibbo::aggregate::common::datatable::DataRecord* record) ;
	void addVariableRecord(std::string* variable, CallerController* cc, voidArray* recordData) ;
    void removeVariableRecords(std::string* variable, CallerController* cc, std::string* field, void* value) ;

private:
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(FunctionDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
	::com::tibbo::aggregate::common::datatable::DataTable* executeImplementation(FunctionData* data, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
	::com::tibbo::aggregate::common::datatable::DataTable* executeImplementationMethod(FunctionData* data, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* getDefaultFunctionOutput(FunctionDefinition* def);

public:
    void setupFunctions() ;

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller) ;
	::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller, voidArray* parameters) ;
	::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, voidArray* parameters) ;

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunctionImpl(FunctionDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;

private:
    FunctionDefinition* getAndCheckFunctionDefinition(std::string* name) ;

public:
    void addVariableDefinition(VariableDefinition* def);
    void removeVariableDefinition(std::string* name);

private:
    void removeVariableDefinition(VariableDefinition* def);

public:
    void addFunctionDefinition(FunctionDefinition* def);
    void removeFunctionDefinition(std::string* name);

private:
    void removeFunctionDefinition(FunctionDefinition* def);

public:
    void addEventDefinition(EventDefinition* def);
    void removeEventDefinition(std::string* name);

private:
    void removeEventDefinition(EventDefinition* def);

public:
    VariableData* getVariableData(std::string* name);
    VariableDefinition* getVariableDefinition(std::string* name);
    VariableDefinition* getVariableDefinition(std::string* name, CallerController* caller);
    FunctionData* getFunctionData(std::string* name);
    FunctionDefinition* getFunctionDefinition(std::string* name);
    FunctionDefinition* getFunctionDefinition(std::string* name, CallerController* caller);
    EventData* getEventData(std::string* name);
    EventDefinition* getEventDefinition(std::string* name);
    EventDefinition* getEventDefinition(std::string* name, CallerController* caller);

private:
    EventDefinition* getAndCheckEventDefinition(std::string* name);

public:
    void setupEvents();
    void postEvent(::com::tibbo::aggregate::common::data::Event* ev, EventDefinition* ed, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request) ;
    void updateEvent(::com::tibbo::aggregate::common::data::Event* ev, EventDefinition* ed, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request) ;
    ::com::tibbo::aggregate::common::data::Event* fireEvent(EventDefinition* ed, ::com::tibbo::aggregate::common::datatable::DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, ::java::lang::Integer* listener, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request, ::com::tibbo::aggregate::common::security::Permissions* permissions);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(::com::tibbo::aggregate::common::data::Event* event);

private:
    ::com::tibbo::aggregate::common::data::Event* fireEvent(EventDefinition* ed, ::com::tibbo::aggregate::common::data::Event* event, ::java::lang::Integer* listener, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request);

public:
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request, ::com::tibbo::aggregate::common::security::Permissions* permissions, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, ::java::lang::Integer* listener, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, CallerController* caller);
	::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, voidArray * data);

public:
    ::com::tibbo::aggregate::common::event::EventProcessingRule* getEventProcessingRule(::com::tibbo::aggregate::common::data::Event* event);
    void processBindings(::com::tibbo::aggregate::common::data::Event* event);

private:
    void processEnrichments(::com::tibbo::aggregate::common::data::Event* event, ::com::tibbo::aggregate::common::event::EventProcessingRule* rule, CallerController* caller);

public:
    CallerController* getEventProcessingCallerController();

public:
    std::list  getEventHistory(std::string* name);

private:
    void lock(RequestController* request, ::java::util::concurrent::locks::Lock* lock) ;

public:
    std::string* toString();
    std::string* toDetailedString();
    void accept(ContextVisitor* visitor) ;

public:
    EventDefinition* getChangeEventDefinition();

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* getVvariables(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    std::string* encodeFormat(::com::tibbo::aggregate::common::datatable::TableFormat* format, CallerController* caller);
    ::com::tibbo::aggregate::common::datatable::TableFormat* decodeFormat(std::string* source, CallerController* caller);
    ::com::tibbo::aggregate::common::datatable::DataRecord* varDefToDataRecord(VariableDefinition* vd);

private:
    ::com::tibbo::aggregate::common::datatable::DataRecord* varDefToDataRecord(VariableDefinition* vd, CallerController* caller);

public:
    VariableDefinition* varDefFromDataRecord(::com::tibbo::aggregate::common::datatable::DataRecord* rec);

private:
    VariableDefinition* varDefFromDataRecord(::com::tibbo::aggregate::common::datatable::DataRecord* rec, CallerController* caller);

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* getVfunctions(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    ::com::tibbo::aggregate::common::datatable::DataRecord* funcDefToDataRecord(FunctionDefinition* fd);

private:
    ::com::tibbo::aggregate::common::datatable::DataRecord* funcDefToDataRecord(FunctionDefinition* fd, CallerController* caller);

public:
    FunctionDefinition* funcDefFromDataRecord(::com::tibbo::aggregate::common::datatable::DataRecord* rec);

private:
    FunctionDefinition* funcDefFromDataRecord(::com::tibbo::aggregate::common::datatable::DataRecord* rec, CallerController* caller);

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* getVevents(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    ::com::tibbo::aggregate::common::datatable::DataRecord* evtDefToDataRecord(EventDefinition* ed);

private:
    ::com::tibbo::aggregate::common::datatable::DataRecord* evtDefToDataRecord(EventDefinition* ed, CallerController* caller);

public:
    EventDefinition* evtDefFromDataRecord(::com::tibbo::aggregate::common::datatable::DataRecord* rec);

private:
    EventDefinition* evtDefFromDataRecord(::com::tibbo::aggregate::common::datatable::DataRecord* rec, CallerController* caller);

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* getVactions(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    ::com::tibbo::aggregate::common::datatable::DataRecord* actDefToDataRecord(::com::tibbo::aggregate::common::action::ActionDefinition* def);
    void executeTasks(std::list  tasks);
    void enableStatus() ;

public:
    ContextStatus* getStatus();
    void setStatus(int status, std::string* comment);

public:
    void fireStatusChanged(int status, std::string* comment, int oldStatus);
    void enableVariableStatuses(bool persistent);

private:
	::com::tibbo::aggregate::common::datatable::DataTable* createVariableStatusesTable();
    std::map getVariableStatuses() ;
    void ensureVariableStatuses() ;

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* fetchVariableStatuses() ;

public:
    void updateVariableStatus(std::string* variable, VariableStatus* status, bool persistent) ;

public:
    void clearVariableStatuses() ;
    void saveVariableStatuses() ;
    void persistVariableStatuses(::com::tibbo::aggregate::common::datatable::DataTable* statuses) ;

public:
    VariableStatus* getVariableStatus(std::string* name) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* getVchildren(VariableDefinition* def, CallerController* caller, RequestController* request) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* getVinfo(VariableDefinition* def, CallerController* caller, RequestController* request) ;

private:
    ::com::tibbo::aggregate::common::datatable::DataTable* createContextInfoTable();

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* callFgetCopyData(FunctionDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFcopy(FunctionDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
	::com::tibbo::aggregate::common::datatable::DataTable* callFcopyToChildren(FunctionDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* copyTo(FunctionDefinition* def, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters, std::list  children);

    // Generated




public:
    
    static void 

private:
    void init();

public:
    int compareTo(void* arg0);

private:
    std::string& IMPLEMENTATION_METHOD_PREFIX();
    std::string& SETTER_METHOD_PREFIX();
    std::string& GETTER_METHOD_PREFIX();

public:
    std::string& V_INFO();
    std::string& V_CHILDREN();
    std::string& V_VARIABLES();
    std::string& V_FUNCTIONS();
    std::string& V_EVENTS();
    std::string& V_ACTIONS();
    std::string& V_VARIABLE_STATUSES();
    std::string& F_GET_COPY_DATA();
    std::string& F_COPY();
    std::string& F_COPY_TO_CHILDREN();
    std::string& E_INFO();
    std::string& E_UPDATED();
    std::string& E_CHANGE();
    std::string& E_DESTROYED();
    std::string& E_INFO_CHANGED();
    std::string& E_VARIABLE_ADDED();
    std::string& E_VARIABLE_REMOVED();
    std::string& E_FUNCTION_ADDED();
    std::string& E_FUNCTION_REMOVED();
    std::string& E_EVENT_ADDED();
    std::string& E_EVENT_REMOVED();
    std::string& E_ACTION_ADDED();
    std::string& E_ACTION_REMOVED();
    std::string& E_ACTION_STATE_CHANGED();
    std::string& E_CHILD_REMOVED();
    std::string& E_CHILD_ADDED();
    std::string& E_VARIABLE_STATUS_CHANGED();
    std::string& VF_INFO_DESCRIPTION();
    std::string& VF_INFO_TYPE();
    std::string& VF_INFO_GROUP();
    std::string& VF_INFO_ICON();
    std::string& VF_INFO_LOCAL_ROOT();
    std::string& VF_INFO_REMOTE_ROOT();
    std::string& VF_INFO_REMOTE_PATH();
    std::string& VF_INFO_REMOTE_PRIMARY_ROOT();
    std::string& VF_INFO_MAPPED();
    std::string& VF_CHILDREN_NAME();
    std::string& VF_VARIABLE_STATUSES_COMMENT();
    std::string& VF_VARIABLE_STATUSES_STATUS();
    std::string& VF_VARIABLE_STATUSES_NAME();
    std::string& FIF_COPY_DATA_RECIPIENTS();
    std::string& FIF_COPY_DATA_GROUP();
    std::string& FOF_COPY_DATA_NAME();
    std::string& FOF_COPY_DATA_DESCRIPTION();
    std::string& FOF_COPY_DATA_REPLICATE();
    std::string& FOF_COPY_DATA_FIELDS();
    std::string& FOF_COPY_DATA_VALUE();
    std::string& FIF_REPLICATE_FIELDS_NAME();
    std::string& FIF_REPLICATE_FIELDS_DESCRIPTION();
    std::string& FIF_REPLICATE_FIELDS_REPLICATE();
    std::string& FIF_COPY_DATA_RECIPIENTS_RECIPIENT();
    std::string& EF_INFO_INFO();
    std::string& EF_EVENT_REMOVED_NAME();
    std::string& EF_FUNCTION_REMOVED_NAME();
    std::string& EF_VARIABLE_REMOVED_NAME();
    std::string& EF_ACTION_REMOVED_NAME();
    std::string& EF_CHILD_REMOVED_CHILD();
    std::string& EF_CHILD_ADDED_CHILD();

private:
    std::string& FIELD_REPLICATE_CONTEXT();

public:
    std::string& FIELD_REPLICATE_VARIABLE();
    std::string& FIELD_REPLICATE_SUCCESSFUL();
    std::string& FIELD_REPLICATE_ERRORS();
    std::string& EF_UPDATED_VARIABLE();
    std::string& EF_UPDATED_VALUE();
    std::string& EF_UPDATED_USER();
    std::string& EF_CHANGE_VARIABLE();
    std::string& EF_CHANGE_VALUE();
    std::string& EF_CHANGE_DATA();
    std::string& FIELD_VD_NAME();
    std::string& FIELD_VD_FORMAT();
    std::string& FIELD_VD_DESCRIPTION();
    std::string& FIELD_VD_READABLE();
    std::string& FIELD_VD_WRITABLE();
    std::string& FIELD_VD_HELP();
    std::string& FIELD_VD_GROUP();
    std::string& FIELD_VD_ICON_ID();
    std::string& FIELD_VD_HELP_ID();
    std::string& FIELD_VD_CACHE_TIME();
    std::string& FIELD_FD_NAME();
    std::string& FIELD_FD_INPUTFORMAT();
    std::string& FIELD_FD_OUTPUTFORMAT();
    std::string& FIELD_FD_DESCRIPTION();
    std::string& FIELD_FD_HELP();
    std::string& FIELD_FD_GROUP();
    std::string& FIELD_FD_ICON_ID();
    std::string& FIELD_ED_NAME();
    std::string& FIELD_ED_FORMAT();
    std::string& FIELD_ED_DESCRIPTION();
    std::string& FIELD_ED_HELP();
    std::string& FIELD_ED_LEVEL();
    std::string& FIELD_ED_GROUP();
    std::string& FIELD_ED_ICON_ID();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& VARIABLE_DEFINITION_FORMAT();

private:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EF_VARIABLE_ADDED();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FUNCTION_DEFINITION_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EF_FUNCTION_ADDED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EVENT_DEFINITION_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EF_EVENT_ADDED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& VFT_CHILDREN();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& INFO_DEFINITION_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& ACTION_DEF_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& RESOURCE_MASKS_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FIFT_GET_COPY_DATA();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FIFT_GET_COPY_DATA_RECIPIENTS();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& REPLICATE_INPUT_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FIFT_REPLICATE_FIELDS();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& REPLICATE_OUTPUT_FORMAT();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& REPLICATE_TO_CHILDREN_OUTPUT_FORMAT();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EF_UPDATED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EF_CHANGE();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_INFO();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_VARIABLE_REMOVED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_EVENT_REMOVED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_FUNCTION_REMOVED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_CHILD_REMOVED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_CHILD_ADDED();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EFT_ACTION_REMOVED();
    static VariableDefinition*& VD_INFO();
    static VariableDefinition*& VD_VARIABLES();
    static VariableDefinition*& VD_FUNCTIONS();
    static VariableDefinition*& VD_EVENTS();
    static VariableDefinition*& VD_ACTIONS();
    static VariableDefinition*& VD_CHILDREN();

public:
    static FunctionDefinition*& FD_GET_COPY_DATA();
    static FunctionDefinition*& FD_COPY();
    static FunctionDefinition*& FD_COPY_TO_CHILDREN();

public:
    static EventDefinition*& ED_INFO();
    static EventDefinition*& ED_CHILD_ADDED();
    static EventDefinition*& ED_CHILD_REMOVED();
    static EventDefinition*& ED_VARIABLE_ADDED();
    static EventDefinition*& ED_VARIABLE_REMOVED();
    static EventDefinition*& ED_FUNCTION_ADDED();
    static EventDefinition*& ED_FUNCTION_REMOVED();
    static EventDefinition*& ED_EVENT_ADDED();
    static EventDefinition*& ED_EVENT_REMOVED();
    static EventDefinition*& ED_ACTION_ADDED();
    static EventDefinition*& ED_ACTION_REMOVED();
    static EventDefinition*& ED_ACTION_STATE_CHANGED();
    static EventDefinition*& ED_INFO_CHANGED();
    static EventDefinition*& ED_UPDATED();
    static EventDefinition*& ED_CHANGE();
    static EventDefinition*& ED_DESTROYED();

private:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& VFT_VARIABLE_STATUSES();
    static ::com::tibbo::aggregate::common::security::Permissions*& DEFAULT_PERMISSIONS();

public:
    std::string& CALLER_CONTROLLER_PROPERTY_DEBUG();
    std::string& CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS();
	std::string& CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS();

private:
    ::java::lang::Class* getClass0();
    friend class AbstractContext_start_1;
    friend class AbstractContext_stop_2;
    friend class AbstractContext_removeChild_3;
	friend class AbstractContext_enableVariableStatuses_4;
	*/


	AbstractContext();
};
#endif
