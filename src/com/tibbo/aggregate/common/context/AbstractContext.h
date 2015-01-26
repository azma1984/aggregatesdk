#ifndef AbstractContextH
#define AbstractContextH

#include "Context.h"
#include "Cres.h"
//#include "action/ActionDefinition.h"
//#include "action/BasicActionDefinition.h"
//#include "action/GroupIdentifier.h"
//#include "action/KeyStroke.h"
//#include "action/ResourceMask.h"
//#include "action/TreeMask.h"
//#include "context/ActionConstants.h"
//#include "context/CallerController.h"
//#include "context/CompatibilityConverter.h"
//#include "context/Context.h"
//#include "context/ContextException.h"
//#include "context/ContextManager.h"
//#include "context/ContextRuntimeException.h"
//#include "context/ContextSecurityException.h"
//#include "context/ContextStatus.h"
//#include "context/ContextUtils.h"
//#include "context/ContextVisitor.h"
//#include "context/Contexts.h"
//#include "context/EventData.h"
//#include "context/EventDefinition.h"
//#include "context/FireChangeEventRequestController.h"
//#include "context/FunctionData.h"
//#include "context/FunctionDefinition.h"
//#include "context/FunctionImplementation.h"
//#include "context/RequestController.h"
//#include "context/VariableData.h"
//#include "context/VariableDefinition.h"
//#include "context/VariableGetter.h"
//#include "context/VariableSetter.h"
#include "context/VariableStatus.h"
//#include "data/Event.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/DataTableConversion.h"
//#include "datatable/DataTableReplication.h"
//#include "datatable/DataTableUtils.h"
//#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
//#include "datatable/ValidationException.h"
//#include "datatable/encoding/ClassicEncodingSettings.h"
//#include "event/ContextEventListener.h"
//#include "event/Enrichment.h"
//#include "event/EventEnrichmentRule.h"
//#include "event/EventLevel.h"
//#include "event/EventProcessingRule.h"
//#include "event/EventUtils.h"
//#include "event/FireEventRequestController.h"
//#include "event/PersistenceOptions.h"
//#include "expression/Evaluator.h"
//#include "expression/Expression.h"
//#include "security/DefaultPermissionChecker.h"
//#include "security/NullPermissionChecker.h"
//#include "security/PermissionChecker.h"
//#include "security/Permissions.h"
//#include "util/Icons.h"
//#include "util/StringUtils.h"
//#include "util/Util.h"
#include "synchronized.h"
#include <boost/thread/thread.hpp>

//todo - class stub

/*template <class C>*/ class AbstractContext : public Context//<C>
{
private:
	static const std::string IMPLEMENTATION_METHOD_PREFIX;
	static const std::string SETTER_METHOD_PREFIX;
	static const std::string GETTER_METHOD_PREFIX;

	static const int VERY_LOW_PERFORMANCE_THRESHOLD = 120000;
    static const int LOW_PERFORMANCE_THRESHOLD = 20000;
    ContextManager* contextManager;
    std::map<std::string, VariableData*> variableData;
    boost::shared_mutex variableDataLock; //много читателей, один писатель
    std::map<std::string, FunctionData*> functionData;
    boost::shared_mutex functionDataLock;
    std::map<std::string, EventData*> eventData;
    boost::shared_mutex eventDataLock;
    std::list<ActionDefinition*>  actionDefinitions;
    boost::shared_mutex actionDefinitionsLock;

    std::string name;
    std::string description;
   
	std::string type;
    std::string group;
    std::string iconId;
    void* parent;
	
    bool setupComplete;
	
    bool started;
    int index;

    bool permissionCheckingEnabled;
    Permissions* permissions;
    Permissions* childrenViewPermissions;
    PermissionChecker* permissionChecker;
    std::list<void*>  children;
    std::map<std::string,void*> childrenMap;
    boost::shared_mutex childrenLock;
    bool valueCheckingEnabled;
    bool childrenConcurrencyEnabled;
    bool childrenSortingEnabled;
    bool fireUpdateEvents;
    ContextStatus* status;
    std::map<std::string, VariableStatus*> variableStatuses;
    bool variableStatusesUpdated;
    boost::shared_mutex variableStatusesLock;

    std::string path;

	bool shouldSeeChild(CallerController* caller, Context* cur);
    bool canSee(CallerController* caller, Context* con);
    void setContextManager(ContextManager* contextManager);

	void move(const std::string & oldPath, Context* newParent, const std::string & newName);
    Context* getChildWithoutCheckingPerms(const std::string & name);
	const std::string & createPath();
	VariableDefinition* getAndCheckVariableDefinition(const std::string & name) ;
	DataTable* executeDefaultGetter(VariableDefinition* def, CallerController* caller, bool check, bool createDefault) ;
	DataTable* getVariable(VariableDefinition* def, CallerController* caller, RequestController* request) ;
	DataTable* checkVariableValue(VariableDefinition* def, DataTable* val) ;
    const std::string & checkVariableValueFormat(VariableDefinition* def, DataTable* table);
	DataTable* executeGetter(VariableData* data, CallerController* caller, RequestController* request) ;
	DataTable* executeGetterMethod(VariableData* data, CallerController* caller, RequestController* request) ;
	void contextInfoChanded();
    DataTable* callFunction(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;
	DataTable* executeImplementation(FunctionData* data, CallerController* caller, RequestController* request, DataTable* parameters) ;
	DataTable* executeImplementationMethod(FunctionData* data, CallerController* caller, RequestController* request, DataTable* parameters) ;
    DataTable* getDefaultFunctionOutput(FunctionDefinition* def);
    FunctionDefinition* getAndCheckFunctionDefinition(const std::string & name) ;
    void removeVariableDefinition(VariableDefinition* def);
    EventDefinition* getAndCheckEventDefinition(const std::string & name);
    Event* fireEvent(EventDefinition* ed, Event* event, int  listener, CallerController* caller, FireEventRequestController* request);

//    void processEnrichments(Event* event, EventProcessingRule* rule, CallerController* caller);//todo - require Reference.h
    void lock(RequestController *request, boost::mutex lock) ;
    DataRecord* varDefToDataRecord(VariableDefinition* vd, CallerController* caller);
    VariableDefinition* varDefFromDataRecord(DataRecord* rec, CallerController* caller);

	void setVariable(VariableDefinition* def, CallerController* caller, RequestController* request, DataTable* value) ;
	void executeSetter(VariableData* data, CallerController* caller, RequestController* request, DataTable* value);
	bool executeSetterMethod(VariableData* data, CallerController* caller, RequestController* request, DataTable* value);
    DataRecord* funcDefToDataRecord(FunctionDefinition* fd, CallerController* caller);
    DataRecord* evtDefToDataRecord(EventDefinition* ed, CallerController* caller);
    EventDefinition* evtDefFromDataRecord(DataRecord* rec, CallerController* caller);
	DataTable* createVariableStatusesTable();
    std::map<std::string, VariableStatus*> getVariableStatuses();
    void ensureVariableStatuses() ;
    DataTable* createContextInfoTable();
    void init();

	void removeFunctionDefinition(FunctionDefinition* def);
    void removeEventDefinition(EventDefinition* def);
    FunctionDefinition* funcDefFromDataRecord(DataRecord* rec, CallerController* caller);

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
    static const int DEFAULT_EVENT_LEVEL = -1;
    static Permissions* DEFAULT_PERMISSIONS;

    static const std::string CALLER_CONTROLLER_PROPERTY_DEBUG;
    static const std::string CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS;
	static const std::string CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS;


    static const int INDEX_HIGHEST = 400;
    static const int INDEX_VERY_HIGH = 300;
    static const int INDEX_HIGH = 200;
    static const int INDEX_HIGHER = 100;
    static const int INDEX_NORMAL;
    static const int INDEX_LOWER = -100;
    static const int INDEX_LOW = -200;
    static const int INDEX_VERY_LOW = -300;
    static const int INDEX_LOWEST = -400;
    static const int DELTA_HIGHEST = 40;
    static const int DELTA_VERY_HIGH = 30;
    static const int DELTA_HIGH = 20;
    static const int DELTA_HIGHER = 10;
    static const int DELTA_LOWER = -10;
    static const int DELTA_LOW = -20;
    static const int DELTA_VERY_LOW = -30;
    static const int DELTA_LOWEST = -400;

    void setup(ContextManager* contextManager);
    void setup();

    void setupPermissions();
	void setupMyself();

	void setupChildren() ;
    void teardown();
    void start();
    void stop();
    int compareTo(Context* context);
    std::list<void*>  getChildren(CallerController* caller);


    std::list<void*>  getChildren();
    std::list<void*>  getVisibleChildren(CallerController* caller);
    std::list<void*>  getVisibleChildren();
    bool isMapped();
    std::list<void*>  getMappedChildren(CallerController* caller);
    std::list<void*>  getMappedChildren();
	
    std::string getName();
    std::string getDescription();
   
	void setDescription(const std::string & description);
    void* getParent();
    bool hasParent(Context* parentContext);
    void* getRoot();
    void* get(const std::string & contextPath, CallerController* caller);
    void* get(const std::string & contextName);
    Permissions* getPermissions();

    void setName(const std::string &name);

    void setParent(Context* parent);

    bool isChildrenSortingEnabled();

    bool isChildrenConcurrencyEnabled();

    bool checkPermissions(Permissions* needPermissions, CallerController* caller, Context* accessedContext);
    void addChild(Context* child);
    void addChild(Context* child, int  index);
    void removeFromParent();
    void destroy(bool moving);

    void removeChild(Context* child);
    void removeChild(const std::string & name);


    void destroyChild(Context* child, bool moving);
    void destroyChild(const std::string & name, bool moving);
    void removeAllChildren();

	void move(Context* newParent, const std::string & newName);

    void* getChild(const std::string & name, CallerController* caller);
    void* getChild(const std::string & name);

    std::string getPath();
	
    bool addEventListener(const std::string & name, ContextEventListener* listener);
    bool addEventListener(const std::string & name, ContextEventListener* listener, bool weak);
    bool removeEventListener(const std::string & name, ContextEventListener* listener);
    std::list<VariableDefinition*> getVariableDefinitions(CallerController* caller);
    std::list<VariableDefinition*> getVariableDefinitions(CallerController* caller, bool includeHidden);
    std::list<VariableDefinition*> getVariableDefinitions();
    std::list<VariableDefinition*> getVariableDefinitions(CallerController* caller, const std::string & group);
    std::list<VariableDefinition*> getVariableDefinitions(const std::string & group);
    PermissionChecker* getPermissionChecker();
    Permissions* getChildrenViewPermissions();
    ContextManager* getContextManager();

    bool isSetupComplete();
 
	bool isStarted();
    bool isInitializedInfo();
    bool isInitializedChildren();
    bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
	
    std::list<FunctionDefinition*>  getFunctionDefinitions(CallerController* caller);
    std::list<FunctionDefinition*>  getFunctionDefinitions(CallerController* caller, bool includeHidden);
    std::list<FunctionDefinition*>  getFunctionDefinitions();
    std::list<FunctionDefinition*>  getFunctionDefinitions(CallerController* caller, const std::string & group);
    std::list<FunctionDefinition*>  getFunctionDefinitions(const std::string & group);

 //   boost::shared_mutex getChildrenLock();

    std::string getType();
 
	bool isPermissionCheckingEnabled();
    std::string getIconId();
    int getIndex();
	
    std::string getGroup();
    const std::string & getLocalRoot();
    bool isProxy();
    bool isDistributed();
	
    std::string getRemoteRoot();
    std::string getRemotePath();
   
	const std::string & getRemotePrimaryRoot();
    void setType(const std::string & type);

    void setIndex(int  index);
    void setGroup(const std::string & group);
    //std::list<EventDefinition*>  getEventDefinitions(CallerController* caller);
    //std::list<EventDefinition*>  getEventDefinitions(CallerController* caller, bool includeHidden);
    //std::list<EventDefinition*>  getEventDefinitions();
    //std::list<EventDefinition*>  getEventDefinitions(CallerController* caller, const std::string & group);
    //std::list<EventDefinition*>  getEventDefinitions(const std::string & group);
    ActionDefinition* getActionDefinition(const std::string & name);
    ActionDefinition* getActionDefinition(const std::string & name, CallerController* caller);
    ActionDefinition* getDefaultActionDefinition(CallerController* caller);
    //std::list<ActionDefinition*>  getActionDefinitions(CallerController* caller);
    //void addActionDefinition(ActionDefinition* def);
    //std::list<ActionDefinition*>  getActionDefinitions(CallerController* caller, bool includeHidden);
    //std::list<ActionDefinition*>  getActionDefinitions();
    void removeActionDefinition(const std::string & name);

	DataTable* executeDefaultGetter(const std::string & name, CallerController* caller);
	DataTable* executeDefaultGetter(const std::string & name, CallerController* caller, bool check);
	DataTable* executeDefaultGetter(const std::string & name, CallerController* caller, bool check, bool createDefault);

    int hashCode();
	bool equals(void* obj);
	//DataTable* getVariable(const std::string & name, CallerController* caller, RequestController* request);
 //   DataTable* getVariable(const std::string & name, CallerController* caller);
 //   DataTable* getVariable(const std::string & name);

    void* getVariableObject(const std::string & name, CallerController* caller);
//
//    DataTable* getDefaultValue(VariableDefinition* def);
//    void executeDefaultSetter(const std::string & name, CallerController* caller, DataTable* value) ;
//    void executeDefaultSetter(VariableDefinition* def, CallerController* caller, DataTable* value) ;
//
//    void setVariable(const std::string & name, CallerController* caller, RequestController* request, DataTable* value) ;
//    void setVariable(const std::string & name, CallerController* caller, DataTable* value) ;
//    void setVariable(const std::string & name, DataTable* value) ;
//	void setVariable(const std::string & name, CallerController* caller, voidArray* value) ;
//	void setVariable(const std::string & name, voidArray* value) ;
//
//    bool setVariableField(const std::string & variable, const std::string & field, void* value, CallerController* cc) ;
//    bool setVariableField(const std::string & variable, const std::string & field, int record, void* value, CallerController* cc) ;
//    void setVariableField(const std::string & variable, const std::string & field, void* value, const std::string & compareField, void* compareValue, CallerController* cc) ;
//    void addVariableRecord(const std::string & variable, CallerController* cc, DataRecord* record) ;
//	void addVariableRecord(const std::string & variable, CallerController* cc, voidArray* recordData) ;
//    void removeVariableRecords(const std::string & variable, CallerController* cc, const std::string & field, void* value) ;
//
//    DataTable* callFunction(const std::string & name, CallerController* caller, RequestController* request, DataTable* parameters) ;
//    DataTable* callFunction(const std::string & name, CallerController* caller, DataTable* parameters) ;
//    DataTable* callFunction(const std::string & name, DataTable* parameters) ;
//    DataTable* callFunction(const std::string & name) ;
//    DataTable* callFunction(const std::string & name, CallerController* caller) ;
//	DataTable* callFunction(const std::string & name, CallerController* caller, voidArray* parameters) ;
//	DataTable* callFunction(const std::string & name, voidArray* parameters) ;
//
//    void addVariableDefinition(VariableDefinition* def);
//    void removeVariableDefinition(const std::string & name);
//
//    void addFunctionDefinition(FunctionDefinition* def);
// 
//	void removeFunctionDefinition(const std::string & name);
//
//    void addEventDefinition(EventDefinition* def);
//
//	void removeEventDefinition(const std::string & name);
//
//
//    VariableData* getVariableData(const std::string & name);
//    VariableDefinition* getVariableDefinition(const std::string & name);
//    VariableDefinition* getVariableDefinition(const std::string & name, CallerController* caller);
//    FunctionData* getFunctionData(const std::string & name);
//    FunctionDefinition* getFunctionDefinition(const std::string & name);
//    FunctionDefinition* getFunctionDefinition(const std::string & name, CallerController* caller);
//    EventData* getEventData(const std::string & name);*/
//    EventDefinition* getEventDefinition(const std::string & name);
//	EventDefinition* getEventDefinition(const std::string & name, CallerController* caller);
//
//
//    Event* fireEvent(const std::string & name, int level, CallerController* caller, FireEventRequestController* request, Permissions* permissions, DataTable* data);
//    Event* fireEvent(const std::string & name, DataTable* data, int level, long  id, Date* creationtime, int  listener, CallerController* caller, FireEventRequestController* request);
//    Event* fireEvent(const std::string & name, DataTable* data);
//    Event* fireEvent(const std::string & name, CallerController* caller, DataTable* data);
//    Event* fireEvent(const std::string & name, int level, DataTable* data);
//    Event* fireEvent(const std::string & name, int level, CallerController* caller, DataTable* data);
//    Event* fireEvent(const std::string & name);
//    Event* fireEvent(const std::string & name, CallerController* caller);
//	Event *fireEvent(const std::string &name, void* data);
//
//    std::list<Event>  getEventHistory(const std::string & name);
//
//    const std::string & toString();
//    std::string toDetailedString();
//	void accept(ContextVisitor* visitor) ;
//
//    DataTable* getVvariables(VariableDefinition* def, CallerController* caller, RequestController* request) ;
//
//    DataTable* getVfunctions(VariableDefinition* def, CallerController* caller, RequestController* request) ;
//
//    DataTable* getVevents(VariableDefinition* def, CallerController* caller, RequestController* request) ;
//
//	DataTable* getVactions(VariableDefinition* def, CallerController* caller, RequestController* request) ;
//
//    ContextStatus* getStatus();
//    void setStatus(int status, const std::string & comment);
//
//    void updateVariableStatus(const std::string & variable, VariableStatus* status, bool persistent) ;
//
//    VariableStatus* getVariableStatus(const std::string & name) ;
//    DataTable* getVchildren(VariableDefinition* def, CallerController* caller, RequestController* request) ;
//    DataTable* getVinfo(VariableDefinition* def, CallerController* caller, RequestController* request) ;
//
//    DataTable* callFgetCopyData(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;
//    DataTable* callFcopy(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;
//	DataTable* callFcopyToChildren(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters) ;
//
//    int compareTo(void* arg0);
//
    AbstractContext();
    AbstractContext(const std::string &name);

protected:
    void setPermissions(Permissions* permissions);
    void setPermissionChecker(PermissionChecker* permissionChecker);
    void setFireUpdateEvents(bool fireUpdateEvents);
    bool isFireUpdateEvents();
	void setChildrenViewPermissions(Permissions* childrenViewPermissions);
    void setChildrenSortingEnabled(bool childrenSortingEnabled);
	void setValueCheckingEnabled(bool valueCheckingEnabled);
	void setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled);
	void checkPermissions(Permissions* needPermissions, CallerController* caller);
	void destroyChildren(bool moving);
	void reorderChild(Context* child, int index);
	void movePrepare(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveInternal(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveFinalize(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName);
    void setPermissionCheckingEnabled(bool permissionCheckingEnabled);
    void setIconId(const std::string & iconId);
	ActionDefinition* actDefFromDataRecord(DataRecord* rec);
	DataTable* executeDefaultGetterImpl(VariableDefinition* vd, CallerController* caller);
	DataTable* getVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request) ;
	void variableUpdated(VariableDefinition* def, CallerController* caller, DataTable* value) ;
    void fireUpdatedEvent(VariableDefinition* def, CallerController* caller, DataTable* value);
    void fireChangeEvent(VariableDefinition* def, CallerController* caller, Date* timestamp, DataTable* value);
    void setupVariables() ;
	void executeDefaultSetterImpl(VariableDefinition* vd, CallerController* caller, DataTable* value);
    bool setVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request, DataTable* value);
    void setupFunctions();
	DataTable* callFunctionImpl(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters);
    void setupEvents();
    void postEvent(Event* ev, EventDefinition* ed, CallerController* caller, FireEventRequestController* request) ;
    void updateEvent(Event* ev, EventDefinition* ed, CallerController* caller, FireEventRequestController* request) ;
    Event* fireEvent(EventDefinition* ed, DataTable* data, int level, long  id, Date* creationtime, int  listener, CallerController* caller, FireEventRequestController* request, Permissions* permissions);
    Event* fireEvent(Event* event);
//	EventProcessingRule* getEventProcessingRule(Event* event);
    void processBindings(Event* event);    
	CallerController* getEventProcessingCallerController();
    EventDefinition* getChangeEventDefinition();
	const std::string & encodeFormat(TableFormat* format, CallerController* caller);
    TableFormat* decodeFormat(const std::string & source, CallerController* caller);
    DataRecord* varDefToDataRecord(VariableDefinition* vd);
	VariableDefinition* varDefFromDataRecord(DataRecord* rec);
	DataRecord* funcDefToDataRecord(FunctionDefinition* fd);
	FunctionDefinition* funcDefFromDataRecord(DataRecord* rec);
	DataRecord* evtDefToDataRecord(EventDefinition* ed);
	EventDefinition* evtDefFromDataRecord(DataRecord* rec);
	DataRecord* actDefToDataRecord(ActionDefinition* def);
   // void executeTasks(std::list  tasks);
    void enableStatus() ;
	void fireStatusChanged(int status, const std::string & comment, int oldStatus);
    void enableVariableStatuses(bool persistent);
	DataTable* fetchVariableStatuses() ;
	void clearVariableStatuses() ;
    void saveVariableStatuses() ;
    void persistVariableStatuses(DataTable* statuses) ;
    DataTable* copyTo(FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters, std::list<void*>  children);

};
#endif
