// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java

#ifndef AbstractContextH
#define AbstractContextH

#include "Context.h"
//#include <com/tibbo/aggregate/common/Cres.h"
//#include <com/tibbo/aggregate/common/action/ActionDefinition.h"
//#include <com/tibbo/aggregate/common/action/BasicActionDefinition.h"
//#include <com/tibbo/aggregate/common/action/GroupIdentifier.h"
//#include <com/tibbo/aggregate/common/action/KeyStroke.h"
//#include <com/tibbo/aggregate/common/action/ResourceMask.h"
//#include <com/tibbo/aggregate/common/action/TreeMask.h"
//#include <com/tibbo/aggregate/common/context/AbstractContext_enableVariableStatuses_4.h"
//#include <com/tibbo/aggregate/common/context/AbstractContext_start_1.h"
//#include <com/tibbo/aggregate/common/context/AbstractContext_stop_2.h"
//#include <com/tibbo/aggregate/common/context/AbstractContext_removeChild_3.h"
//#include <com/tibbo/aggregate/common/context/ActionConstants.h"
//#include <com/tibbo/aggregate/common/context/CallerController.h"
//#include <com/tibbo/aggregate/common/context/CompatibilityConverter.h"
//#include <com/tibbo/aggregate/common/context/Context.h"
//#include <com/tibbo/aggregate/common/context/ContextException.h"
//#include <com/tibbo/aggregate/common/context/ContextManager.h"
//#include <com/tibbo/aggregate/common/context/ContextRuntimeException.h"
//#include <com/tibbo/aggregate/common/context/ContextSecurityException.h"
//#include <com/tibbo/aggregate/common/context/ContextStatus.h"
//#include <com/tibbo/aggregate/common/context/ContextUtils.h"
//#include <com/tibbo/aggregate/common/context/ContextVisitor.h"
//#include <com/tibbo/aggregate/common/context/Contexts.h"
//#include <com/tibbo/aggregate/common/context/EventData.h"
#include "context/EventDefinition.h"
//#include <com/tibbo/aggregate/common/context/FireChangeEventRequestController.h"
//#include <com/tibbo/aggregate/common/context/FunctionData.h"
#include "context/FunctionDefinition.h"
//#include <com/tibbo/aggregate/common/context/FunctionImplementation.h"
//#include <com/tibbo/aggregate/common/context/RequestController.h"
//#include <com/tibbo/aggregate/common/context/VariableData.h"
//#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
//#include <com/tibbo/aggregate/common/context/VariableGetter.h"
//#include <com/tibbo/aggregate/common/context/VariableSetter.h"
//#include <com/tibbo/aggregate/common/context/VariableStatus.h"
#include "data/Event.h"
//#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
//#include <com/tibbo/aggregate/common/datatable/DataTable.h"
//#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"
//#include <com/tibbo/aggregate/common/datatable/DataTableReplication.h"
//#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
//#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
//#include <com/tibbo/aggregate/common/datatable/ValidationException.h"
//#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
//#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
//#include <com/tibbo/aggregate/common/event/Enrichment.h"
//#include <com/tibbo/aggregate/common/event/EventEnrichmentRule.h"
//#include <com/tibbo/aggregate/common/event/EventLevel.h"
//#include <com/tibbo/aggregate/common/event/EventProcessingRule.h"
//#include <com/tibbo/aggregate/common/event/EventUtils.h"
//#include <com/tibbo/aggregate/common/event/FireEventRequestController.h"
//#include <com/tibbo/aggregate/common/event/PersistenceOptions.h"
//#include <com/tibbo/aggregate/common/expression/Evaluator.h"
//#include <com/tibbo/aggregate/common/expression/Expression.h"
//#include <com/tibbo/aggregate/common/security/DefaultPermissionChecker.h"
//#include <com/tibbo/aggregate/common/security/NullPermissionChecker.h"
//#include <com/tibbo/aggregate/common/security/PermissionChecker.h"
//#include <com/tibbo/aggregate/common/security/Permissions.h"
//#include <com/tibbo/aggregate/common/util/Icons.h"
//#include <com/tibbo/aggregate/common/util/StringUtils.h"
//#include <com/tibbo/aggregate/common/util/Util.h"


/*template <class C>*/ class AbstractContext : public Context//<C>
{
private:
	static const std::string IMPLEMENTATION_METHOD_PREFIX;
	static const std::string SETTER_METHOD_PREFIX;
	static const std::string GETTER_METHOD_PREFIX;
public:
	static const std::string V_INFO;
	static const std::string V_CHILDREN;
	static const std::string V_VARIABLES;
	static const std::string V_FUNCTIONS;
	static const std::string V_EVENTS;
	static const std::string V_ACTIONS;
	static const std::string V_VARIABLE_STATUSES;
	static const std::string F_GET_COPY_DATA;
	static const std::string F_COPY;
	static const std::string F_COPY_TO_CHILDREN;
	static const std::string E_INFO;
	static const std::string E_UPDATED;
	static const std::string E_CHANGE;
	static const std::string E_DESTROYED;
	static const std::string E_INFO_CHANGED;
	static const std::string E_VARIABLE_ADDED;
	static const std::string E_VARIABLE_REMOVED;
	static const std::string E_FUNCTION_ADDED;
	static const std::string E_FUNCTION_REMOVED;
	static const std::string E_EVENT_ADDED;
	static const std::string E_EVENT_REMOVED;
	static const std::string E_ACTION_ADDED;
    static const std::string E_ACTION_REMOVED;
	static const std::string E_ACTION_STATE_CHANGED;
    static const std::string E_CHILD_REMOVED;
    static const std::string E_CHILD_ADDED;
	static const std::string E_VARIABLE_STATUS_CHANGED;
	static const std::string VF_INFO_DESCRIPTION;
    static const std::string VF_INFO_TYPE;
	static const std::string VF_INFO_GROUP;
    static const std::string VF_INFO_ICON;
    static const std::string VF_INFO_LOCAL_ROOT;
	static const std::string VF_INFO_REMOTE_ROOT;
    static const std::string VF_INFO_REMOTE_PATH;
    static const std::string VF_INFO_REMOTE_PRIMARY_ROOT;
	static const std::string VF_INFO_MAPPED;
    static const std::string VF_CHILDREN_NAME;
    static const std::string VF_VARIABLE_STATUSES_COMMENT;
	static const std::string VF_VARIABLE_STATUSES_STATUS;
    static const std::string VF_VARIABLE_STATUSES_NAME;
    static const std::string FIF_COPY_DATA_RECIPIENTS;
	static const std::string FIF_COPY_DATA_GROUP;
    static const std::string FOF_COPY_DATA_NAME;
    static const std::string FOF_COPY_DATA_DESCRIPTION;
	static const std::string FOF_COPY_DATA_REPLICATE;
    static const std::string FOF_COPY_DATA_FIELDS;
    static const std::string FOF_COPY_DATA_VALUE;
	static const std::string FIF_REPLICATE_FIELDS_NAME;
    static const std::string FIF_REPLICATE_FIELDS_DESCRIPTION;
    static const std::string FIF_REPLICATE_FIELDS_REPLICATE;
	static const std::string FIF_COPY_DATA_RECIPIENTS_RECIPIENT;
    static const std::string EF_INFO_INFO;
    static const std::string EF_EVENT_REMOVED_NAME;
	static const std::string EF_FUNCTION_REMOVED_NAME;
    static const std::string EF_VARIABLE_REMOVED_NAME;
    static const std::string EF_ACTION_REMOVED_NAME;
	static const std::string EF_CHILD_REMOVED_CHILD;
    static const std::string EF_CHILD_ADDED_CHILD;
    static const std::string FIELD_REPLICATE_CONTEXT;
	static const std::string FIELD_REPLICATE_VARIABLE;
    static const std::string FIELD_REPLICATE_SUCCESSFUL;
    static const std::string FIELD_REPLICATE_ERRORS;
	static const std::string EF_UPDATED_VARIABLE;
    static const std::string EF_UPDATED_VALUE;
    static const std::string EF_UPDATED_USER;
	static const std::string EF_CHANGE_VARIABLE;
    static const std::string EF_CHANGE_VALUE;
    static const std::string EF_CHANGE_DATA;
	static const std::string FIELD_VD_NAME;
    static const std::string FIELD_VD_FORMAT;
    static const std::string FIELD_VD_DESCRIPTION;
	static const std::string FIELD_VD_READABLE;
    static const std::string FIELD_VD_WRITABLE;
    static const std::string FIELD_VD_HELP;
	static const std::string FIELD_VD_GROUP;
    static const std::string FIELD_VD_ICON_ID;
    static const std::string FIELD_VD_HELP_ID;
	static const std::string FIELD_VD_CACHE_TIME;
    static const std::string FIELD_FD_NAME;
    static const std::string FIELD_FD_INPUTFORMAT;
	static const std::string FIELD_FD_OUTPUTFORMAT;
    static const std::string FIELD_FD_DESCRIPTION;
    static const std::string FIELD_FD_HELP;
	static const std::string FIELD_FD_GROUP;
    static const std::string FIELD_FD_ICON_ID;
    static const std::string FIELD_ED_NAME;
	static const std::string FIELD_ED_FORMAT;
    static const std::string FIELD_ED_DESCRIPTION;
    static const std::string FIELD_ED_HELP;
	static const std::string FIELD_ED_LEVEL;
    static const std::string FIELD_ED_GROUP;
	static const std::string FIELD_ED_ICON_ID;
	/*
	TableFormat* VARIABLE_DEFINITION_FORMAT;
	TableFormat* EF_VARIABLE_ADDED;
	TableFormat* FUNCTION_DEFINITION_FORMAT;
	TableFormat* EF_FUNCTION_ADDED;
	TableFormat* EVENT_DEFINITION_FORMAT;
	TableFormat* EF_EVENT_ADDED;
	TableFormat* VFT_CHILDREN;
	TableFormat* INFO_DEFINITION_FORMAT;
	TableFormat* ACTION_DEF_FORMAT;
	TableFormat* RESOURCE_MASKS_FORMAT;
	TableFormat* FIFT_GET_COPY_DATA;
	TableFormat* FIFT_GET_COPY_DATA_RECIPIENTS;
	TableFormat* REPLICATE_INPUT_FORMAT;
	TableFormat* FIFT_REPLICATE_FIELDS;
	TableFormat* REPLICATE_OUTPUT_FORMAT;
	TableFormat* REPLICATE_TO_CHILDREN_OUTPUT_FORMAT;
	TableFormat* EF_UPDATED;
	TableFormat* EF_CHANGE;
	TableFormat* EFT_INFO;
	TableFormat* EFT_VARIABLE_REMOVED;
	TableFormat* EFT_EVENT_REMOVED;
    TableFormat* EFT_FUNCTION_REMOVED;
    TableFormat* EFT_CHILD_REMOVED;
    TableFormat* EFT_CHILD_ADDED;
    TableFormat* EFT_ACTION_REMOVED;
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
    TableFormat* VFT_VARIABLE_STATUSES;
    static const int DEFAULT_EVENT_LEVEL = -1) };
    static Permissions* DEFAULT_PERMISSIONS;*/
	

    static const std::string CALLER_CONTROLLER_PROPERTY_DEBUG;
    static const std::string CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS;
	static const std::string CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS;
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
	*/
    std::string name;
    std::string description;
   
	std::string type;
    std::string group;
    std::string iconId;
    //Context* parent;
	
    bool setupComplete;
	
    bool started;
    int index;
	/*
    bool permissionCheckingEnabled;
    Permissions* permissions;
    Permissions* childrenViewPermissions;
    PermissionChecker* permissionChecker;
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
	*/
    std::string path;
	/*
protected:
    void ctor(const std::string & name);

public:
    void setup(ContextManager* contextManager);

public:
    void setup();
	*/


    void setupPermissions();
	void setupMyself();

	void setupChildren() ;
    void teardown();
    void start();
    void stop();
 /*   int compareTo(Context* context);
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
	*/
    std::string getName();
    std::string getDescription();
   /*
	void setDescription(const std::string & description);
    Context* getParent();
    bool hasParent(Context* parentContext);
    Context* getRoot();
    Context* get(const std::string & contextPath, CallerController* caller);
    Context* get(const std::string & contextName);
    Permissions* getPermissions();

public:*/
    void setName(const std::string &name);
	/*
public:
    void setParent(Context* parent);

public:
    void setPermissions(Permissions* permissions);
    void setPermissionChecker(PermissionChecker* permissionChecker);
    void setFireUpdateEvents(bool fireUpdateEvents);
    bool isFireUpdateEvents();

private:
    void setContextManager(ContextManager* contextManager);

public:
    void setChildrenViewPermissions(Permissions* childrenViewPermissions);
    void setChildrenSortingEnabled(bool childrenSortingEnabled);

public:
    bool isChildrenSortingEnabled();

public:
    void setValueCheckingEnabled(bool valueCheckingEnabled);

public:
    bool isChildrenConcurrencyEnabled();

public:
    void setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled);
	void checkPermissions(Permissions* needPermissions, CallerController* caller);

public:
    bool checkPermissions(Permissions* needPermissions, CallerController* caller, Context* accessedContext);
    void addChild(Context* child);
    void addChild(Context* child, int  index);
    void removeFromParent();
    void destroy(bool moving);

public:
    void destroyChildren(bool moving);

public:
    void removeChild(Context* child);
    void removeChild(const std::string & name);

public:
    void reorderChild(Context* child, int index);

public:
    void destroyChild(Context* child, bool moving);
    void destroyChild(const std::string & name, bool moving);
    void removeAllChildren();

public:
	void movePrepare(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveInternal(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveFinalize(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName);

public:
	void move(Context* newParent, const std::string & newName);

private:
	void move(const std::string & oldPath, Context* newParent, const std::string & newName);

public:
    Context* getChild(const std::string & name, CallerController* caller);
    Context* getChild(const std::string & name);

private:
    Context* getChildWithoutCheckingPerms(const std::string & name);
*/
    std::string getPath();
	/*
private:
    const std::string & createPath();

public:
    bool addEventListener(const std::string & name, ContextEventListener* listener);
    bool addEventListener(const std::string & name, ContextEventListener* listener, bool weak);
    bool removeEventListener(const std::string & name, ContextEventListener* listener);
    std::list  getVariableDefinitions(CallerController* caller);
    std::list  getVariableDefinitions(CallerController* caller, bool includeHidden);
    std::list  getVariableDefinitions();
    std::list  getVariableDefinitions(CallerController* caller, const std::string & group);
    std::list  getVariableDefinitions(const std::string & group);
    PermissionChecker* getPermissionChecker();
    Permissions* getChildrenViewPermissions();
    ContextManager* getContextManager();
	*/
    bool isSetupComplete();
 
	bool isStarted();
    bool isInitializedInfo();
    bool isInitializedChildren();
    bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
	/*
    std::list  getFunctionDefinitions(CallerController* caller);
    std::list  getFunctionDefinitions(CallerController* caller, bool includeHidden);
    std::list  getFunctionDefinitions();
    std::list  getFunctionDefinitions(CallerController* caller, const std::string & group);
    std::list  getFunctionDefinitions(const std::string & group);

public:
    ::java::util::concurrent::locks::ReentrantReadWriteLock* getChildrenLock();

public:*/
    std::string getType();
    /*
	bool isPermissionCheckingEnabled();*/
    std::string getIconId();
    int getIndex();
	
    std::string getGroup();
    //const std::string & getLocalRoot();
    bool isProxy();
    bool isDistributed();
	
    std::string getRemoteRoot();
    std::string getRemotePath();
    /*
	const std::string & getRemotePrimaryRoot();
    void setType(const std::string & type);

public:
    void setPermissionCheckingEnabled(bool permissionCheckingEnabled);
    void setIconId(const std::string & iconId);

private:
    void contextInfoChanded();

public:
    void setIndex(int  index);
    void setGroup(const std::string & group);
    std::list  getEventDefinitions(CallerController* caller);
    std::list  getEventDefinitions(CallerController* caller, bool includeHidden);
    std::list  getEventDefinitions();
    std::list  getEventDefinitions(CallerController* caller, const std::string & group);
    std::list  getEventDefinitions(const std::string & group);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(const std::string & name);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(const std::string & name, CallerController* caller);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getDefaultActionDefinition(CallerController* caller);
    std::list  getActionDefinitions(CallerController* caller);
    void addActionDefinition(::com::tibbo::aggregate::common::action::ActionDefinition* def);
    std::list  getActionDefinitions(CallerController* caller, bool includeHidden);
    std::list  getActionDefinitions();
    void removeActionDefinition(const std::string & name);

public:
    ::com::tibbo::aggregate::common::action::ActionDefinition* actDefFromDataRecord(DataRecord* rec);

private:
	DataTable* getVariable(VariableDefinition* def, CallerController* caller, RequestController* request) ;
	DataTable* checkVariableValue(VariableDefinition* def, DataTable* val) ;
    const std::string & checkVariableValueFormat(VariableDefinition* def, DataTable* table);
	DataTable* executeGetter(VariableData* data, CallerController* caller, RequestController* request) ;
	DataTable* executeGetterMethod(VariableData* data, CallerController* caller, RequestController* request) ;

public:
	DataTable* executeDefaultGetter(const std::string & name, CallerController* caller);
	DataTable* executeDefaultGetter(const std::string & name, CallerController* caller, bool check);
	DataTable* executeDefaultGetter(const std::string & name, CallerController* caller, bool check, bool createDefault);

private:
	DataTable* executeDefaultGetter(VariableDefinition* def, CallerController* caller, bool check, bool createDefault) ;

public:
	DataTable* executeDefaultGetterImpl(VariableDefinition* vd, CallerController* caller);

public:
    int hashCode();
	bool equals(void* obj);
	DataTable* getVariable(const std::string & name, CallerController* caller, RequestController* request) ;
    DataTable* getVariable(const std::string & name, CallerController* caller) ;
    DataTable* getVariable(const std::string & name) ;

public:
    DataTable* getVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    void* getVariableObject(const std::string & name, CallerController* caller);

private:
    void setVariable(VariableDefinition* def, CallerController* caller, RequestController* request, DataTable* value) ;

public:
    void variableUpdated(VariableDefinition* def, CallerController* caller, DataTable* value) ;
    void fireUpdatedEvent(VariableDefinition* def, CallerController* caller, DataTable* value);
    void fireChangeEvent(VariableDefinition* def, CallerController* caller, Date* timestamp, DataTable* value);
    void setupVariables() ;

private:
	void executeSetter(VariableData* data, CallerController* caller, RequestController* request, DataTable* value);
	bool executeSetterMethod(VariableData* data, CallerController* caller, RequestController* request, DataTable* value);

public:
    DataTable* getDefaultValue(VariableDefinition* def);
    void executeDefaultSetter(const std::string & name, CallerController* caller, DataTable* value) ;
    void executeDefaultSetter(VariableDefinition* def, CallerController* caller, DataTable* value) ;

public:
    void executeDefaultSetterImpl(VariableDefinition* vd, CallerController* caller, DataTable* value) ;

public:
    void setVariable(const std::string & name, CallerController* caller, RequestController* request, DataTable* value) ;
    void setVariable(const std::string & name, CallerController* caller, DataTable* value) ;
    void setVariable(const std::string & name, DataTable* value) ;
	void setVariable(const std::string & name, CallerController* caller, voidArray* value) ;
	void setVariable(const std::string & name, voidArray* value) ;

public:
    bool setVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request, DataTable* value) ;

private:
    VariableDefinition* getAndCheckVariableDefinition(const std::string & name) ;

public:
    bool setVariableField(const std::string & variable, const std::string & field, void* value, CallerController* cc) ;
    bool setVariableField(const std::string & variable, const std::string & field, int record, void* value, CallerController* cc) ;
    void setVariableField(const std::string & variable, const std::string & field, void* value, const std::string & compareField, void* compareValue, CallerController* cc) ;
    void addVariableRecord(const std::string & variable, CallerController* cc, DataRecord* record) ;
	void addVariableRecord(const std::string & variable, CallerController* cc, voidArray* recordData) ;
    void removeVariableRecords(const std::string & variable, CallerController* cc, const std::string & field, void* value) ;

private:
    DataTable* callFunction(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;
	DataTable* executeImplementation(FunctionData* data, CallerController* caller, RequestController* request, DataTable* parameters) ;
	DataTable* executeImplementationMethod(FunctionData* data, CallerController* caller, RequestController* request, DataTable* parameters) ;
    DataTable* getDefaultFunctionOutput(FunctionDefinition* def);

public:
    void setupFunctions() ;

public:
    DataTable* callFunction(const std::string & name, CallerController* caller, RequestController* request, DataTable* parameters) ;
    DataTable* callFunction(const std::string & name, CallerController* caller, DataTable* parameters) ;
    DataTable* callFunction(const std::string & name, DataTable* parameters) ;
    DataTable* callFunction(const std::string & name) ;
    DataTable* callFunction(const std::string & name, CallerController* caller) ;
	DataTable* callFunction(const std::string & name, CallerController* caller, voidArray* parameters) ;
	DataTable* callFunction(const std::string & name, voidArray* parameters) ;

public:
    DataTable* callFunctionImpl(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;

private:
    FunctionDefinition* getAndCheckFunctionDefinition(const std::string & name) ;

public:
    void addVariableDefinition(VariableDefinition* def);
    void removeVariableDefinition(const std::string & name);

private:
    void removeVariableDefinition(VariableDefinition* def);

public:*/
    void addFunctionDefinition(FunctionDefinition* def);
    /*
	void removeFunctionDefinition(const std::string & name);

private:
    void removeFunctionDefinition(FunctionDefinition* def);

*/
    void addEventDefinition(EventDefinition* def);
 /*
	void removeEventDefinition(const std::string & name);

private:
    void removeEventDefinition(EventDefinition* def);

public:
    VariableData* getVariableData(const std::string & name);
    VariableDefinition* getVariableDefinition(const std::string & name);
    VariableDefinition* getVariableDefinition(const std::string & name, CallerController* caller);
    FunctionData* getFunctionData(const std::string & name);
    FunctionDefinition* getFunctionDefinition(const std::string & name);
    FunctionDefinition* getFunctionDefinition(const std::string & name, CallerController* caller);
    EventData* getEventData(const std::string & name);*/
    EventDefinition* getEventDefinition(const std::string & name);
	/*
    EventDefinition* getEventDefinition(const std::string & name, CallerController* caller);

private:
    EventDefinition* getAndCheckEventDefinition(const std::string & name);

public:
    void setupEvents();
    void postEvent(Event* ev, EventDefinition* ed, CallerController* caller, FireEventRequestController* request) ;
    void updateEvent(Event* ev, EventDefinition* ed, CallerController* caller, FireEventRequestController* request) ;
    Event* fireEvent(EventDefinition* ed, DataTable* data, int level, long  id, Date* creationtime, int  listener, CallerController* caller, FireEventRequestController* request, Permissions* permissions);
    Event* fireEvent(Event* event);

private:
    Event* fireEvent(EventDefinition* ed, Event* event, int  listener, CallerController* caller, FireEventRequestController* request);

public:
    Event* fireEvent(const std::string & name, int level, CallerController* caller, FireEventRequestController* request, Permissions* permissions, DataTable* data);
    Event* fireEvent(const std::string & name, DataTable* data, int level, long  id, Date* creationtime, int  listener, CallerController* caller, FireEventRequestController* request);
    Event* fireEvent(const std::string & name, DataTable* data);
    Event* fireEvent(const std::string & name, CallerController* caller, DataTable* data);
    Event* fireEvent(const std::string & name, int level, DataTable* data);
    Event* fireEvent(const std::string & name, int level, CallerController* caller, DataTable* data);
    Event* fireEvent(const std::string & name);
    Event* fireEvent(const std::string & name, CallerController* caller);
	*/
	Event *fireEvent(const std::string &name, void* data);
	/*
public:
    EventProcessingRule* getEventProcessingRule(Event* event);
    void processBindings(Event* event);

private:
    void processEnrichments(Event* event, EventProcessingRule* rule, CallerController* caller);

public:
    CallerController* getEventProcessingCallerController();

public:
    std::list  getEventHistory(const std::string & name);

private:
    void lock(RequestController* request, ::java::util::concurrent::locks::Lock* lock) ;

public:
    const std::string & toString();
	*/
    std::string toDetailedString();
    /*
	void accept(ContextVisitor* visitor) ;

public:
    EventDefinition* getChangeEventDefinition();

public:
    DataTable* getVvariables(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    const std::string & encodeFormat(TableFormat* format, CallerController* caller);
    TableFormat* decodeFormat(const std::string & source, CallerController* caller);
    DataRecord* varDefToDataRecord(VariableDefinition* vd);

private:
    DataRecord* varDefToDataRecord(VariableDefinition* vd, CallerController* caller);

public:
    VariableDefinition* varDefFromDataRecord(DataRecord* rec);

private:
    VariableDefinition* varDefFromDataRecord(DataRecord* rec, CallerController* caller);

public:
    DataTable* getVfunctions(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    DataRecord* funcDefToDataRecord(FunctionDefinition* fd);

private:
    DataRecord* funcDefToDataRecord(FunctionDefinition* fd, CallerController* caller);

public:
    FunctionDefinition* funcDefFromDataRecord(DataRecord* rec);

private:
    FunctionDefinition* funcDefFromDataRecord(DataRecord* rec, CallerController* caller);

public:
    DataTable* getVevents(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    DataRecord* evtDefToDataRecord(EventDefinition* ed);

private:
    DataRecord* evtDefToDataRecord(EventDefinition* ed, CallerController* caller);

public:
    EventDefinition* evtDefFromDataRecord(DataRecord* rec);

private:
    EventDefinition* evtDefFromDataRecord(DataRecord* rec, CallerController* caller);

public:
    DataTable* getVactions(VariableDefinition* def, CallerController* caller, RequestController* request) ;

public:
    DataRecord* actDefToDataRecord(::com::tibbo::aggregate::common::action::ActionDefinition* def);
    void executeTasks(std::list  tasks);
    void enableStatus() ;

public:
    ContextStatus* getStatus();
    void setStatus(int status, const std::string & comment);

public:
    void fireStatusChanged(int status, const std::string & comment, int oldStatus);
    void enableVariableStatuses(bool persistent);

private:
	DataTable* createVariableStatusesTable();
    std::map getVariableStatuses() ;
    void ensureVariableStatuses() ;

public:
    DataTable* fetchVariableStatuses() ;

public:
    void updateVariableStatus(const std::string & variable, VariableStatus* status, bool persistent) ;

public:
    void clearVariableStatuses() ;
    void saveVariableStatuses() ;
    void persistVariableStatuses(DataTable* statuses) ;

public:
    VariableStatus* getVariableStatus(const std::string & name) ;
    DataTable* getVchildren(VariableDefinition* def, CallerController* caller, RequestController* request) ;
    DataTable* getVinfo(VariableDefinition* def, CallerController* caller, RequestController* request) ;

private:
    DataTable* createContextInfoTable();

public:
    DataTable* callFgetCopyData(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;
    DataTable* callFcopy(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;
	DataTable* callFcopyToChildren(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;

public:
    DataTable* copyTo(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters, std::list  children);

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

    TableFormat*& VARIABLE_DEFINITION_FORMAT();

private:
    TableFormat*& EF_VARIABLE_ADDED();

public:
    TableFormat*& FUNCTION_DEFINITION_FORMAT();
    TableFormat*& EF_FUNCTION_ADDED();
    TableFormat*& EVENT_DEFINITION_FORMAT();
    TableFormat*& EF_EVENT_ADDED();
    TableFormat*& VFT_CHILDREN();
    TableFormat*& INFO_DEFINITION_FORMAT();
    TableFormat*& ACTION_DEF_FORMAT();
    TableFormat*& RESOURCE_MASKS_FORMAT();
    TableFormat*& FIFT_GET_COPY_DATA();
    TableFormat*& FIFT_GET_COPY_DATA_RECIPIENTS();
    TableFormat*& REPLICATE_INPUT_FORMAT();
    TableFormat*& FIFT_REPLICATE_FIELDS();
    TableFormat*& REPLICATE_OUTPUT_FORMAT();

public:
    TableFormat*& REPLICATE_TO_CHILDREN_OUTPUT_FORMAT();

public:
    TableFormat*& EF_UPDATED();
    TableFormat*& EF_CHANGE();
    TableFormat*& EFT_INFO();
    TableFormat*& EFT_VARIABLE_REMOVED();
    TableFormat*& EFT_EVENT_REMOVED();
    TableFormat*& EFT_FUNCTION_REMOVED();
    TableFormat*& EFT_CHILD_REMOVED();
    TableFormat*& EFT_CHILD_ADDED();
    TableFormat*& EFT_ACTION_REMOVED();
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
    TableFormat*& VFT_VARIABLE_STATUSES();
    static Permissions*& DEFAULT_PERMISSIONS();

public:
    std::string& CALLER_CONTROLLER_PROPERTY_DEBUG();
    std::string& CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS();
	std::string& CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS();

private:
    friend class AbstractContext_start_1;
    friend class AbstractContext_stop_2;
    friend class AbstractContext_removeChild_3;
	friend class AbstractContext_enableVariableStatuses_4;
	*/
AbstractContext();
	AbstractContext(const std::string &name);
};
#endif
