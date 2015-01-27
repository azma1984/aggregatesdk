#ifndef AbstractContextH
#define AbstractContextH

#define BOOST_THREAD_USE_LIB
#include "Context.h"
#include "Cres.h"
//#include "action/ActionDefinition.h"
//#include "action/BasicActionDefinition.h"
//#include "action/GroupIdentifier.h"
//#include "action/KeyStroke.h"
//#include "action/ResourceMask.h"
//#include "action/TreeMask.h"
#include "context/ActionConstants.h"
//#include "context/CallerController.h"
//#include "context/CompatibilityConverter.h"
//#include "context/Context.h"
//#include "context/ContextException.h"
//#include "context/ContextManager.h"
#include "context/ContextRuntimeException.h"
//#include "context/ContextSecurityException.h"
//#include "context/ContextStatus.h"
#include "context/ContextUtils.h"
//#include "context/ContextVisitor.h"
//#include "context/Contexts.h"
//#include "context/EventData.h"
#include "context/EventDefinition.h"
//#include "context/FireChangeEventRequestController.h"
//#include "context/FunctionData.h"
#include "context/FunctionDefinition.h"
//#include "context/FunctionImplementation.h"
//#include "context/RequestController.h"
//#include "context/VariableData.h"
#include "context/VariableDefinition.h"
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
//#include "datatable/TableFormat.h"
//#include "datatable/ValidationException.h"
//#include "datatable/encoding/ClassicEncodingSettings.h"
//#include "event/ContextEventListener.h"
//#include "event/Enrichment.h"
//#include "event/EventEnrichmentRule.h"
#include "event/EventLevel.h"
#include "event/EventProcessingRule.h"
//#include "event/EventUtils.h"
//#include "event/FireEventRequestController.h"
//#include "event/PersistenceOptions.h"
//#include "expression/Evaluator.h"
//#include "expression/Expression.h"
#include "security/DefaultPermissionChecker.h"
#include "security/NullPermissionChecker.h"
//#include "security/PermissionChecker.h"
//#include "security/Permissions.h"
#include "util/Icons.h"
//#include "util/StringUtils.h"
//#include "util/Util.h"
#include <boost/thread/thread.hpp>
#include <boost/thread/pthread/shared_mutex.hpp>

class TableFormat;

class AbstractContext : public Context
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
    boost::shared_ptr<Permissions> permissions;
    boost::shared_ptr<Permissions> childrenViewPermissions;
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

	bool shouldSeeChild(boost::shared_ptr<CallerController> caller, Context* cur);
    bool canSee(boost::shared_ptr<CallerController> caller, Context* con);
    void setContextManager(ContextManager* contextManager);

	void move(const std::string & oldPath, Context* newParent, const std::string & newName);
    Context* getChildWithoutCheckingPerms(const std::string & name);
	const std::string & createPath();
	VariableDefinition* getAndCheckVariableDefinition(const std::string & name) ;
	boost::shared_ptr<DataTable> executeDefaultGetter(VariableDefinition* def, boost::shared_ptr<CallerController> caller, bool check, bool createDefault) ;
	boost::shared_ptr<DataTable> getVariable(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;
	boost::shared_ptr<DataTable> checkVariableValue(VariableDefinition* def, boost::shared_ptr<DataTable> val) ;
    const std::string & checkVariableValueFormat(VariableDefinition* def, boost::shared_ptr<DataTable> table);
	boost::shared_ptr<DataTable> executeGetter(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request) ;
	boost::shared_ptr<DataTable> executeGetterMethod(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request) ;
	void contextInfoChanded();
    boost::shared_ptr<DataTable> callFunction(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters) ;
	boost::shared_ptr<DataTable> executeImplementation(FunctionData* data, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters) ;
	boost::shared_ptr<DataTable> executeImplementationMethod(FunctionData* data, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters) ;
    boost::shared_ptr<DataTable> getDefaultFunctionOutput(boost::shared_ptr<FunctionDefinition> def);
    boost::shared_ptr<FunctionDefinition> getAndCheckFunctionDefinition(const std::string & name) ;
    void removeVariableDefinition(VariableDefinition* def);
    boost::shared_ptr<EventDefinition> getAndCheckEventDefinition(const std::string & name);
    boost::shared_ptr<Event> fireEvent(boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<Event> event, int  listener, boost::shared_ptr<CallerController> caller, FireEventRequestController* request);

	void processEnrichments(boost::shared_ptr<Event> event, EventProcessingRule* rule, boost::shared_ptr<CallerController> caller);
    void lock(RequestController *request, boost::mutex lock) ;
	DataRecord* varDefToDataRecord(VariableDefinition* vd, boost::shared_ptr<CallerController> caller);
    VariableDefinition* varDefFromDataRecord(DataRecord* rec, boost::shared_ptr<CallerController> caller);

	void setVariable(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> value) ;
	void executeSetter(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> value);
	bool executeSetterMethod(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> value);
    DataRecord* funcDefToDataRecord(boost::shared_ptr<FunctionDefinition> fd, boost::shared_ptr<CallerController> caller);
    DataRecord* evtDefToDataRecord(boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<CallerController> caller);
    boost::shared_ptr<EventDefinition> evtDefFromDataRecord(DataRecord* rec, boost::shared_ptr<CallerController> caller);
	boost::shared_ptr<DataTable> createVariableStatusesTable();
    std::map<std::string, VariableStatus*> getVariableStatuses();
    void ensureVariableStatuses() ;
    boost::shared_ptr<DataTable> createContextInfoTable();
    void init();

	void removeFunctionDefinition(boost::shared_ptr<FunctionDefinition> def);
    void removeEventDefinition(boost::shared_ptr<EventDefinition> def);
    boost::shared_ptr<FunctionDefinition> funcDefFromDataRecord(DataRecord* rec, boost::shared_ptr<CallerController> caller);


	int compareTo(int a1,int a2);
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
	
	boost::shared_ptr<TableFormat> VARIABLE_DEFINITION_FORMAT;
	boost::shared_ptr<TableFormat> EF_VARIABLE_ADDED;
	boost::shared_ptr<TableFormat> FUNCTION_DEFINITION_FORMAT;
	boost::shared_ptr<TableFormat> EF_FUNCTION_ADDED;
	boost::shared_ptr<TableFormat> EVENT_DEFINITION_FORMAT;
	boost::shared_ptr<TableFormat> EF_EVENT_ADDED;
	boost::shared_ptr<TableFormat> VFT_CHILDREN;
	boost::shared_ptr<TableFormat> INFO_DEFINITION_FORMAT;
	boost::shared_ptr<TableFormat> ACTION_DEF_FORMAT;
	boost::shared_ptr<TableFormat> RESOURCE_MASKS_FORMAT;
	boost::shared_ptr<TableFormat> FIFT_GET_COPY_DATA;
	boost::shared_ptr<TableFormat> FIFT_GET_COPY_DATA_RECIPIENTS;
	boost::shared_ptr<TableFormat> REPLICATE_INPUT_FORMAT;
	boost::shared_ptr<TableFormat> FIFT_REPLICATE_FIELDS;
	boost::shared_ptr<TableFormat> REPLICATE_OUTPUT_FORMAT;
	boost::shared_ptr<TableFormat> REPLICATE_TO_CHILDREN_OUTPUT_FORMAT;
	boost::shared_ptr<TableFormat> EF_UPDATED;
	boost::shared_ptr<TableFormat> EF_CHANGE;
	boost::shared_ptr<TableFormat> EFT_INFO;
	boost::shared_ptr<TableFormat> EFT_VARIABLE_REMOVED;
	boost::shared_ptr<TableFormat> EFT_EVENT_REMOVED;
    boost::shared_ptr<TableFormat> EFT_FUNCTION_REMOVED;
    boost::shared_ptr<TableFormat> EFT_CHILD_REMOVED;
    boost::shared_ptr<TableFormat> EFT_CHILD_ADDED;
    boost::shared_ptr<TableFormat> EFT_ACTION_REMOVED;
    static VariableDefinition* VD_INFO;
    static VariableDefinition* VD_VARIABLES;
    static VariableDefinition* VD_FUNCTIONS;
    static VariableDefinition* VD_EVENTS;
    static VariableDefinition* VD_ACTIONS;
    static VariableDefinition* VD_CHILDREN;
    static boost::shared_ptr<FunctionDefinition> FD_GET_COPY_DATA;
    static boost::shared_ptr<FunctionDefinition> FD_COPY;
    static boost::shared_ptr<FunctionDefinition> FD_COPY_TO_CHILDREN;
	static boost::shared_ptr<EventDefinition> ED_INFO;
    static boost::shared_ptr<EventDefinition> ED_CHILD_ADDED;
    static boost::shared_ptr<EventDefinition> ED_CHILD_REMOVED;
    static boost::shared_ptr<EventDefinition> ED_VARIABLE_ADDED;
    static boost::shared_ptr<EventDefinition> ED_VARIABLE_REMOVED;
    static boost::shared_ptr<EventDefinition> ED_FUNCTION_ADDED;
    static boost::shared_ptr<EventDefinition> ED_FUNCTION_REMOVED;
    static boost::shared_ptr<EventDefinition> ED_EVENT_ADDED;
    static boost::shared_ptr<EventDefinition> ED_EVENT_REMOVED;
    static boost::shared_ptr<EventDefinition> ED_ACTION_ADDED;
    static boost::shared_ptr<EventDefinition> ED_ACTION_REMOVED;
    static boost::shared_ptr<EventDefinition> ED_ACTION_STATE_CHANGED;
    static boost::shared_ptr<EventDefinition> ED_INFO_CHANGED;
    static boost::shared_ptr<EventDefinition> ED_UPDATED;
    static boost::shared_ptr<EventDefinition> ED_CHANGE;
    static boost::shared_ptr<EventDefinition> ED_DESTROYED;
    boost::shared_ptr<TableFormat> VFT_VARIABLE_STATUSES;
    static const int DEFAULT_EVENT_LEVEL = -1;
    static boost::shared_ptr<Permissions> DEFAULT_PERMISSIONS;

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
    std::list<void*>  getChildren(boost::shared_ptr<CallerController> caller);


    std::list<void*>  getChildren();
    std::list<void*>  getVisibleChildren(boost::shared_ptr<CallerController> caller);
    std::list<void*>  getVisibleChildren();
    bool isMapped();
    std::list<void*>  getMappedChildren(boost::shared_ptr<CallerController> caller);
    std::list<void*>  getMappedChildren();
	
    std::string getName();
    std::string getDescription();
   
	void setDescription(const std::string & description);
    void* getParent();
    bool hasParent(Context* parentContext);
    void* getRoot();
    void* get(const std::string & contextPath, boost::shared_ptr<CallerController> caller);
    void* get(const std::string & contextName);
	boost::shared_ptr<Permissions> getPermissions();

    void setName(const std::string &name);

    void setParent(Context* parent);

    bool isChildrenSortingEnabled();

    bool isChildrenConcurrencyEnabled();

    bool checkPermissions(boost::shared_ptr<Permissions> needPermissions, boost::shared_ptr<CallerController> caller, Context* accessedContext);
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

    void* getChild(const std::string & name, boost::shared_ptr<CallerController> caller);
    void* getChild(const std::string & name);

    std::string getPath();
	
    bool addEventListener(const std::string & name, ContextEventListener* listener);
    bool addEventListener(const std::string & name, ContextEventListener* listener, bool weak);
    bool removeEventListener(const std::string & name, ContextEventListener* listener);
    std::list<VariableDefinition*> getVariableDefinitions(boost::shared_ptr<CallerController> caller);
    std::list<VariableDefinition*> getVariableDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden);
    std::list<VariableDefinition*> getVariableDefinitions();
    std::list<VariableDefinition*> getVariableDefinitions(boost::shared_ptr<CallerController> caller, const std::string & group);
    std::list<VariableDefinition*> getVariableDefinitions(const std::string & group);
    PermissionChecker* getPermissionChecker();
    boost::shared_ptr<Permissions> getChildrenViewPermissions();
    ContextManager* getContextManager();

    bool isSetupComplete();
 
	bool isStarted();
    bool isInitializedInfo();
    bool isInitializedChildren();
    bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
	
	std::list< boost::shared_ptr<FunctionDefinition> >  getFunctionDefinitions(boost::shared_ptr<CallerController> caller);
	std::list< boost::shared_ptr<FunctionDefinition> >  getFunctionDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden);
	std::list< boost::shared_ptr<FunctionDefinition> >  getFunctionDefinitions();
	std::list< boost::shared_ptr<FunctionDefinition> >  getFunctionDefinitions(boost::shared_ptr<CallerController> caller, const std::string & group);
	std::list< boost::shared_ptr<FunctionDefinition> >  getFunctionDefinitions(const std::string & group);

	boost::shared_mutex getChildrenLock();

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
	std::list< boost::shared_ptr<EventDefinition> >  getEventDefinitions(boost::shared_ptr<CallerController> caller);
	std::list< boost::shared_ptr<EventDefinition> >  getEventDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden);
	std::list< boost::shared_ptr<EventDefinition> >  getEventDefinitions();
	std::list< boost::shared_ptr<EventDefinition> >  getEventDefinitions(boost::shared_ptr<CallerController> caller, const std::string & group);
	std::list< boost::shared_ptr<EventDefinition> >  getEventDefinitions(const std::string & group);
	boost::shared_ptr<ActionDefinition> getActionDefinition(const std::string & name);
	boost::shared_ptr<ActionDefinition> getActionDefinition(const std::string & name, boost::shared_ptr<CallerController> caller);
	boost::shared_ptr<ActionDefinition> getDefaultActionDefinition(boost::shared_ptr<CallerController> caller);
	std::list< boost::shared_ptr<ActionDefinition> >  getActionDefinitions(boost::shared_ptr<CallerController> caller);
	void addActionDefinition(boost::shared_ptr<ActionDefinition> def);
	std::list< boost::shared_ptr<ActionDefinition> >  getActionDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden);
	std::list< boost::shared_ptr<ActionDefinition> >  getActionDefinitions();
	void removeActionDefinition(const std::string & name);

	boost::shared_ptr<DataTable> executeDefaultGetter(const std::string & name, boost::shared_ptr<CallerController> caller);
	boost::shared_ptr<DataTable> executeDefaultGetter(const std::string & name, boost::shared_ptr<CallerController> caller, bool check);
	boost::shared_ptr<DataTable> executeDefaultGetter(const std::string & name, boost::shared_ptr<CallerController> caller, bool check, bool createDefault);

    int hashCode();
	bool equals(void* obj);
	boost::shared_ptr<DataTable> getVariable(const std::string & name, boost::shared_ptr<CallerController> caller, RequestController* request);
	boost::shared_ptr<DataTable> getVariable(const std::string & name, boost::shared_ptr<CallerController> caller);
	boost::shared_ptr<DataTable> getVariable(const std::string & name);

    void* getVariableObject(const std::string & name, boost::shared_ptr<CallerController> caller);

    boost::shared_ptr<DataTable> getDefaultValue(VariableDefinition* def);
    void executeDefaultSetter(const std::string & name, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> value) ;
    void executeDefaultSetter(VariableDefinition* def, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> value) ;

    void setVariable(const std::string & name, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> value) ;
    void setVariable(const std::string & name, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> value) ;
    void setVariable(const std::string & name, boost::shared_ptr<DataTable> value) ;
	void setVariable(const std::string & name, boost::shared_ptr<CallerController> caller, void* value) ;
	void setVariable(const std::string & name, void* value) ;

    bool setVariableField(const std::string & variable, const std::string & field, void* value, boost::shared_ptr<CallerController> cc) ;
    bool setVariableField(const std::string & variable, const std::string & field, int record, void* value, boost::shared_ptr<CallerController> cc) ;
    void setVariableField(const std::string & variable, const std::string & field, void* value, const std::string & compareField, void* compareValue, boost::shared_ptr<CallerController> cc) ;
    void addVariableRecord(const std::string & variable, boost::shared_ptr<CallerController> cc, DataRecord* record) ;
	void addVariableRecord(const std::string & variable, boost::shared_ptr<CallerController> cc, void* recordData) ;
    void removeVariableRecords(const std::string & variable, boost::shared_ptr<CallerController> cc, const std::string & field, void* value) ;

    boost::shared_ptr<DataTable> callFunction(const std::string & name, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters) ;
    boost::shared_ptr<DataTable> callFunction(const std::string & name, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> parameters) ;
    boost::shared_ptr<DataTable> callFunction(const std::string & name, boost::shared_ptr<DataTable> parameters) ;
    boost::shared_ptr<DataTable> callFunction(const std::string & name) ;
    boost::shared_ptr<DataTable> callFunction(const std::string & name, boost::shared_ptr<CallerController> caller) ;
	boost::shared_ptr<DataTable> callFunction(const std::string & name, boost::shared_ptr<CallerController> caller, void* parameters) ;
	boost::shared_ptr<DataTable> callFunction(const std::string & name, void* parameters) ;

    void addVariableDefinition(VariableDefinition* def);
    void removeVariableDefinition(const std::string & name);

    void addFunctionDefinition(boost::shared_ptr<FunctionDefinition> def);

	void removeFunctionDefinition(const std::string & name);

    void addEventDefinition(boost::shared_ptr<EventDefinition> def);

	void removeEventDefinition(const std::string & name);


    VariableData* getVariableData(const std::string & name);
    VariableDefinition* getVariableDefinition(const std::string & name);
    VariableDefinition* getVariableDefinition(const std::string & name, boost::shared_ptr<CallerController> caller);
    FunctionData* getFunctionData(const std::string & name);
    boost::shared_ptr<FunctionDefinition> getFunctionDefinition(const std::string & name);
    boost::shared_ptr<FunctionDefinition> getFunctionDefinition(const std::string & name, boost::shared_ptr<CallerController> caller);
	EventData* getEventData(const std::string & name);
	boost::shared_ptr<EventDefinition> getEventDefinition(const std::string & name);
	boost::shared_ptr<EventDefinition> getEventDefinition(const std::string & name, boost::shared_ptr<CallerController> caller);


    boost::shared_ptr<Event> fireEvent(const std::string & name, int level, boost::shared_ptr<CallerController> caller, FireEventRequestController* request, boost::shared_ptr<Permissions> permissions, boost::shared_ptr<DataTable> data);
    boost::shared_ptr<Event> fireEvent(const std::string & name, boost::shared_ptr<DataTable> data, int level, long  id, Date* creationtime, int  listener, boost::shared_ptr<CallerController> caller, FireEventRequestController* request);
    boost::shared_ptr<Event> fireEvent(const std::string & name, boost::shared_ptr<DataTable> data);
    boost::shared_ptr<Event> fireEvent(const std::string & name, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> data);
    boost::shared_ptr<Event> fireEvent(const std::string & name, int level, boost::shared_ptr<DataTable> data);
    boost::shared_ptr<Event> fireEvent(const std::string & name, int level, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> data);
    boost::shared_ptr<Event> fireEvent(const std::string & name);
	boost::shared_ptr<Event> fireEvent(const std::string & name, boost::shared_ptr<CallerController> caller);
	boost::shared_ptr<Event> fireEvent(const std::string &name, void* data);

	std::list<Event*>  getEventHistory(const std::string & name);

    const std::string & toString();
    std::string toDetailedString();
	void accept(ContextVisitor* visitor) ;

    boost::shared_ptr<DataTable> getVvariables(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;

    boost::shared_ptr<DataTable> getVfunctions(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;

    boost::shared_ptr<DataTable> getVevents(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;

	boost::shared_ptr<DataTable> getVactions(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;

    ContextStatus* getStatus();
    void setStatus(int status, const std::string & comment);

    void updateVariableStatus(const std::string & variable, VariableStatus* status, bool persistent) ;

    VariableStatus* getVariableStatus(const std::string & name) ;
    boost::shared_ptr<DataTable> getVchildren(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;
    boost::shared_ptr<DataTable> getVinfo(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;

    boost::shared_ptr<DataTable> callFgetCopyData(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters) ;
    boost::shared_ptr<DataTable> callFcopy(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters) ;
	boost::shared_ptr<DataTable> callFcopyToChildren(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters) ;



    AbstractContext();
    AbstractContext(const std::string &name);

protected:
    void setPermissions(boost::shared_ptr<Permissions> permissions);
    void setPermissionChecker(PermissionChecker* permissionChecker);
    void setFireUpdateEvents(bool fireUpdateEvents);
    bool isFireUpdateEvents();
	void setChildrenViewPermissions(boost::shared_ptr<Permissions> childrenViewPermissions);
    void setChildrenSortingEnabled(bool childrenSortingEnabled);
	void setValueCheckingEnabled(bool valueCheckingEnabled);
	void setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled);
	void checkPermissions(boost::shared_ptr<Permissions> needPermissions, boost::shared_ptr<CallerController> caller);
	void destroyChildren(bool moving);
	void reorderChild(Context* child, int index);
	void movePrepare(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveInternal(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveFinalize(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName);
    void setPermissionCheckingEnabled(bool permissionCheckingEnabled);
    void setIconId(const std::string & iconId);
	ActionDefinition* actDefFromDataRecord(DataRecord* rec);
	boost::shared_ptr<DataTable> executeDefaultGetterImpl(VariableDefinition* vd, boost::shared_ptr<CallerController> caller);
	boost::shared_ptr<DataTable> getVariableImpl(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request) ;
	void variableUpdated(VariableDefinition* def, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> value) ;
    void fireUpdatedEvent(VariableDefinition* def, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> value);
    void fireChangeEvent(VariableDefinition* def, boost::shared_ptr<CallerController> caller, Date* timestamp, boost::shared_ptr<DataTable> value);
    void setupVariables() ;
	void executeDefaultSetterImpl(VariableDefinition* vd, boost::shared_ptr<CallerController> caller, boost::shared_ptr<DataTable> value);
    bool setVariableImpl(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> value);
    void setupFunctions();
	boost::shared_ptr<DataTable> callFunctionImpl(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters);
    void setupEvents();
    void postEvent(boost::shared_ptr<Event> ev, boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<CallerController> caller, FireEventRequestController* request) ;
    void updateEvent(boost::shared_ptr<Event> ev, boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<CallerController> caller, FireEventRequestController* request) ;
	boost::shared_ptr<Event> fireEvent(boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<DataTable> data, int level, long  id, Date* creationtime, int  listener, boost::shared_ptr<CallerController> caller, FireEventRequestController* request, boost::shared_ptr<Permissions> permissions);
    boost::shared_ptr<Event> fireEvent(boost::shared_ptr<Event> event);
	EventProcessingRule* getEventProcessingRule(boost::shared_ptr<Event> event);
	void processBindings(boost::shared_ptr<Event> event);
	boost::shared_ptr<CallerController> getEventProcessingCallerController();
    boost::shared_ptr<EventDefinition> getChangeEventDefinition();
	const std::string & encodeFormat(boost::shared_ptr<TableFormat> format, boost::shared_ptr<CallerController> caller);
	boost::shared_ptr<TableFormat> decodeFormat(const std::string & source, boost::shared_ptr<CallerController> caller);
    DataRecord* varDefToDataRecord(VariableDefinition* vd);
	VariableDefinition* varDefFromDataRecord(DataRecord* rec);
	DataRecord* funcDefToDataRecord(boost::shared_ptr<FunctionDefinition> fd);
	boost::shared_ptr<FunctionDefinition> funcDefFromDataRecord(DataRecord* rec);
	DataRecord* evtDefToDataRecord(boost::shared_ptr<EventDefinition> ed);
	boost::shared_ptr<EventDefinition> evtDefFromDataRecord(DataRecord* rec);
	DataRecord* actDefToDataRecord(ActionDefinition* def);
	void executeTasks(std::list<boost::thread*>  tasks);
	void enableStatus() ;
	void fireStatusChanged(int status, const std::string & comment, int oldStatus);
    void enableVariableStatuses(bool persistent);
	boost::shared_ptr<DataTable> fetchVariableStatuses() ;
	void clearVariableStatuses() ;
    void saveVariableStatuses() ;
	void persistVariableStatuses(boost::shared_ptr<DataTable> statuses) ;
	boost::shared_ptr<DataTable> copyTo(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, boost::shared_ptr<DataTable> parameters, std::list<void*>  children);

};
#endif
