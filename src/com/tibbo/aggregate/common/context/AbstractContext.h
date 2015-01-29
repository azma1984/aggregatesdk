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
//#include "context/EventDataPtr.h"
#include "context/EventDefinition.h"
//#include "context/FireChangeEventRequestController.h"
//#include "context/FunctionData.h"
#include "context/FunctionDefinition.h"
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
	ContextManagerPtr contextManager;
	std::map<std::string, VariableDataPtr> variableData;
	boost::shared_mutex variableDataLock; //много читателей, один писатель
    std::map<std::string, FunctionDataPtr> functionData;
    boost::shared_mutex functionDataLock;
	std::map<std::string, EventDataPtr> EventData;
	boost::shared_mutex EventDataLock;
    std::list<ActionDefinitionPtr>  actionDefinitions;
    boost::shared_mutex actionDefinitionsLock;

    std::string name;
    std::string description;
   
	std::string type;
    std::string group;
    std::string iconId;
    AgObjectPtr parent;
	
    bool setupComplete;
	
    bool started;
    int index;

    bool permissionCheckingEnabled;
    PermissionsPtr permissions;
	PermissionsPtr childrenViewPermissions;
	PermissionCheckerPtr permissionChecker;
	std::list<AgObjectPtr>  children;
    std::map<std::string,AgObjectPtr> childrenMap;
    boost::shared_mutex childrenLock;
    bool valueCheckingEnabled;
    bool childrenConcurrencyEnabled;
    bool childrenSortingEnabled;
    bool fireUpdateEvents;
    ContextStatusPtr status;
    std::map<std::string, VariableStatusPtr> variableStatuses;
    bool variableStatusesUpdated;
    boost::shared_mutex variableStatusesLock;

    std::string path;

	bool shouldSeeChild(CallerControllerPtr caller, ContextPtr cur);
    bool canSee(CallerControllerPtr caller, ContextPtr con);
    void setContextManager(ContextManagerPtr contextManager);

	void move(const std::string & oldPath, ContextPtr newParent, const std::string & newName);
    ContextPtr getChildWithoutCheckingPerms(const std::string & name);
	const std::string & createPath();
	VariableDefinitionPtr getAndCheckVariableDefinition(const std::string & name) ;
	DataTablePtr executeDefaultGetter(VariableDefinitionPtr def, CallerControllerPtr caller, bool check, bool createDefault) ;
	DataTablePtr getVariable(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;
	DataTablePtr checkVariableValue(VariableDefinitionPtr def, DataTablePtr val) ;
    const std::string & checkVariableValueFormat(VariableDefinitionPtr def, DataTablePtr table);
	DataTablePtr executeGetter(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request) ;
	DataTablePtr executeGetterMethod(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request) ;
	void contextInfoChanded();
    DataTablePtr callFunction(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;
	DataTablePtr executeImplementation(FunctionDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;
	DataTablePtr executeImplementationMethod(FunctionDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;
    DataTablePtr getDefaultFunctionOutput(FunctionDefinitionPtr def);
    FunctionDefinitionPtr getAndCheckFunctionDefinition(const std::string & name) ;
    void removeVariableDefinition(VariableDefinitionPtr def);
    EventDefinitionPtr getAndCheckEventDefinition(const std::string & name);
    EventPtr fireEvent(EventDefinitionPtr ed, EventPtr event, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request);

	void processEnrichments(EventPtr event, EventProcessingRulePtr rule, CallerControllerPtr caller);
    void lock(RequestControllerPtrrequest, boost::mutex lock) ;
	DataRecordPtr varDefToDataRecord(VariableDefinitionPtr vd, CallerControllerPtr caller);
    VariableDefinitionPtr varDefFromDataRecord(DataRecordPtr rec, CallerControllerPtr caller);

	void setVariable(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value) ;
	void executeSetter(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value);
	bool executeSetterMethod(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value);
    DataRecordPtr funcDefToDataRecord(FunctionDefinitionPtr fd, CallerControllerPtr caller);
    DataRecordPtr evtDefToDataRecord(EventDefinitionPtr ed, CallerControllerPtr caller);
    EventDefinitionPtr evtDefFromDataRecord(DataRecordPtr rec, CallerControllerPtr caller);
	DataTablePtr createVariableStatusesTable();
    std::map<std::string, VariableStatusPtr> getVariableStatuses();
    void ensureVariableStatuses() ;
    DataTablePtr createContextInfoTable();
    void init();

	void removeFunctionDefinition(FunctionDefinitionPtr def);
    void removeEventDefinition(EventDefinitionPtr def);
    FunctionDefinitionPtr funcDefFromDataRecord(DataRecordPtr rec, CallerControllerPtr caller);


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
	
	TableFormatPtr VARIABLE_DEFINITION_FORMAT;
	TableFormatPtr EF_VARIABLE_ADDED;
	TableFormatPtr FUNCTION_DEFINITION_FORMAT;
	TableFormatPtr EF_FUNCTION_ADDED;
	TableFormatPtr EVENT_DEFINITION_FORMAT;
	TableFormatPtr EF_EVENT_ADDED;
	TableFormatPtr VFT_CHILDREN;
	TableFormatPtr INFO_DEFINITION_FORMAT;
	TableFormatPtr ACTION_DEF_FORMAT;
	TableFormatPtr RESOURCE_MASKS_FORMAT;
	TableFormatPtr FIFT_GET_COPY_DATA;
	TableFormatPtr FIFT_GET_COPY_DATA_RECIPIENTS;
	TableFormatPtr REPLICATE_INPUT_FORMAT;
	TableFormatPtr FIFT_REPLICATE_FIELDS;
	TableFormatPtr REPLICATE_OUTPUT_FORMAT;
	TableFormatPtr REPLICATE_TO_CHILDREN_OUTPUT_FORMAT;
	TableFormatPtr EF_UPDATED;
	TableFormatPtr EF_CHANGE;
	TableFormatPtr EFT_INFO;
	TableFormatPtr EFT_VARIABLE_REMOVED;
	TableFormatPtr EFT_EVENT_REMOVED;
    TableFormatPtr EFT_FUNCTION_REMOVED;
    TableFormatPtr EFT_CHILD_REMOVED;
    TableFormatPtr EFT_CHILD_ADDED;
    TableFormatPtr EFT_ACTION_REMOVED;
    static VariableDefinitionPtr VD_INFO;
    static VariableDefinitionPtr VD_VARIABLES;
    static VariableDefinitionPtr VD_FUNCTIONS;
    static VariableDefinitionPtr VD_EVENTS;
    static VariableDefinitionPtr VD_ACTIONS;
    static VariableDefinitionPtr VD_CHILDREN;
    static FunctionDefinitionPtr FD_GET_COPY_DATA;
    static FunctionDefinitionPtr FD_COPY;
    static FunctionDefinitionPtr FD_COPY_TO_CHILDREN;
	static EventDefinitionPtr ED_INFO;
    static EventDefinitionPtr ED_CHILD_ADDED;
    static EventDefinitionPtr ED_CHILD_REMOVED;
    static EventDefinitionPtr ED_VARIABLE_ADDED;
    static EventDefinitionPtr ED_VARIABLE_REMOVED;
    static EventDefinitionPtr ED_FUNCTION_ADDED;
    static EventDefinitionPtr ED_FUNCTION_REMOVED;
    static EventDefinitionPtr ED_EVENT_ADDED;
    static EventDefinitionPtr ED_EVENT_REMOVED;
    static EventDefinitionPtr ED_ACTION_ADDED;
    static EventDefinitionPtr ED_ACTION_REMOVED;
    static EventDefinitionPtr ED_ACTION_STATE_CHANGED;
    static EventDefinitionPtr ED_INFO_CHANGED;
    static EventDefinitionPtr ED_UPDATED;
    static EventDefinitionPtr ED_CHANGE;
    static EventDefinitionPtr ED_DESTROYED;
    TableFormatPtr VFT_VARIABLE_STATUSES;
    static const int DEFAULT_EVENT_LEVEL = -1;
    static PermissionsPtr DEFAULT_PERMISSIONS;

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

    void setup(ContextManagerPtr contextManager);
    void setup();

    void setupPermissions();
	void setupMyself();

	void setupChildren() ;
    void teardown();
    void start();
    void stop();
    int compareTo(ContextPtr context);
    std::list<AgObjectPtr>  getChildren(CallerControllerPtr caller);


    std::list<AgObjectPtr>  getChildren();
    std::list<AgObjectPtr>  getVisibleChildren(CallerControllerPtr caller);
    std::list<AgObjectPtr>  getVisibleChildren();
    bool isMapped();
    std::list<AgObjectPtr>  getMappedChildren(CallerControllerPtr caller);
    std::list<AgObjectPtr>  getMappedChildren();
	
    std::string getName();
    std::string getDescription();
   
	void setDescription(const std::string & description);
    AgObjectPtr getParent();
    bool hasParent(ContextPtr parentContext);
    AgObjectPtr getRoot();
    AgObjectPtr get(const std::string & contextPath, CallerControllerPtr caller);
    AgObjectPtr get(const std::string & contextName);
	PermissionsPtr getPermissions();

    void setName(const std::string &name);

    void setParent(ContextPtr parent);

    bool isChildrenSortingEnabled();

    bool isChildrenConcurrencyEnabled();

    bool checkPermissions(PermissionsPtr needPermissions, CallerControllerPtr caller, ContextPtr accessedContext);
    void addChild(ContextPtr child);
    void addChild(ContextPtr child, int  index);
    void removeFromParent();
    void destroy(bool moving);

    void removeChild(ContextPtr child);
    void removeChild(const std::string & name);


    void destroyChild(ContextPtr child, bool moving);
    void destroyChild(const std::string & name, bool moving);
    void removeAllChildren();

	void move(ContextPtr newParent, const std::string & newName);

    AgObjectPtr getChild(const std::string & name, CallerControllerPtr caller);
    AgObjectPtr getChild(const std::string & name);

    std::string getPath();
	
    bool addEventListener(const std::string & name, ContextEventListenerPtr listener);
    bool addEventListener(const std::string & name, ContextEventListenerPtr listener, bool weak);
    bool removeEventListener(const std::string & name, ContextEventListenerPtr listener);
    std::list<VariableDefinitionPtr> getVariableDefinitions(CallerControllerPtr caller);
    std::list<VariableDefinitionPtr> getVariableDefinitions(CallerControllerPtr caller, bool includeHidden);
    std::list<VariableDefinitionPtr> getVariableDefinitions();
    std::list<VariableDefinitionPtr> getVariableDefinitions(CallerControllerPtr caller, const std::string & group);
    std::list<VariableDefinitionPtr> getVariableDefinitions(const std::string & group);
    PermissionCheckerPtr getPermissionChecker();
    PermissionsPtr getChildrenViewPermissions();
	ContextManagerPtr getContextManager();

    bool isSetupComplete();
 
	bool isStarted();
    bool isInitializedInfo();
    bool isInitializedChildren();
    bool isInitializedVariables();
    bool isInitializedFunctions();
    bool isInitializedEvents();
	
	std::list< FunctionDefinitionPtr >  getFunctionDefinitions(CallerControllerPtr caller);
	std::list< FunctionDefinitionPtr >  getFunctionDefinitions(CallerControllerPtr caller, bool includeHidden);
	std::list< FunctionDefinitionPtr >  getFunctionDefinitions();
	std::list< FunctionDefinitionPtr >  getFunctionDefinitions(CallerControllerPtr caller, const std::string & group);
	std::list< FunctionDefinitionPtr >  getFunctionDefinitions(const std::string & group);

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
	std::list< EventDefinitionPtr >  getEventDefinitions(CallerControllerPtr caller);
	std::list< EventDefinitionPtr >  getEventDefinitions(CallerControllerPtr caller, bool includeHidden);
	std::list< EventDefinitionPtr >  getEventDefinitions();
	std::list< EventDefinitionPtr >  getEventDefinitions(CallerControllerPtr caller, const std::string & group);
	std::list< EventDefinitionPtr >  getEventDefinitions(const std::string & group);
	ActionDefinitionPtr getActionDefinition(const std::string & name);
	ActionDefinitionPtr getActionDefinition(const std::string & name, CallerControllerPtr caller);
	ActionDefinitionPtr getDefaultActionDefinition(CallerControllerPtr caller);
	std::list< ActionDefinitionPtr >  getActionDefinitions(CallerControllerPtr caller);
	void addActionDefinition(ActionDefinitionPtr def);
	std::list< ActionDefinitionPtr >  getActionDefinitions(CallerControllerPtr caller, bool includeHidden);
	std::list< ActionDefinitionPtr >  getActionDefinitions();
	void removeActionDefinition(const std::string & name);

	DataTablePtr executeDefaultGetter(const std::string & name, CallerControllerPtr caller);
	DataTablePtr executeDefaultGetter(const std::string & name, CallerControllerPtr caller, bool check);
	DataTablePtr executeDefaultGetter(const std::string & name, CallerControllerPtr caller, bool check, bool createDefault);

    int hashCode();
	bool equals(AgObjectPtr obj);
	DataTablePtr getVariable(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request);
	DataTablePtr getVariable(const std::string & name, CallerControllerPtr caller);
	DataTablePtr getVariable(const std::string & name);

    AgObjectPtr getVariableObject(const std::string & name, CallerControllerPtr caller);

    DataTablePtr getDefaultValue(VariableDefinitionPtr def);
    void executeDefaultSetter(const std::string & name, CallerControllerPtr caller, DataTablePtr value) ;
    void executeDefaultSetter(VariableDefinitionPtr def, CallerControllerPtr caller, DataTablePtr value) ;

    void setVariable(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value) ;
    void setVariable(const std::string & name, CallerControllerPtr caller, DataTablePtr value) ;
    void setVariable(const std::string & name, DataTablePtr value) ;
	void setVariable(const std::string & name, CallerControllerPtr caller, AgObjectPtr value) ;
	void setVariable(const std::string & name, AgObjectPtr value) ;

    bool setVariableField(const std::string & variable, const std::string & field, AgObjectPtr value, CallerControllerPtr cc) ;
    bool setVariableField(const std::string & variable, const std::string & field, int record, AgObjectPtr value, CallerControllerPtr cc) ;
    void setVariableField(const std::string & variable, const std::string & field, AgObjectPtr value, const std::string & compareField, AgObjectPtr compareValue, CallerControllerPtr cc) ;
    void addVariableRecord(const std::string & variable, CallerControllerPtr cc, DataRecordPtr record) ;
	void addVariableRecord(const std::string & variable, CallerControllerPtr cc, AgObjectPtr recordData) ;
    void removeVariableRecords(const std::string & variable, CallerControllerPtr cc, const std::string & field, AgObjectPtr value) ;

    DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;
    DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller, DataTablePtr parameters) ;
    DataTablePtr callFunction(const std::string & name, DataTablePtr parameters) ;
    DataTablePtr callFunction(const std::string & name) ;
    DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller) ;
	DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller, AgObjectPtr parameters) ;
	DataTablePtr callFunction(const std::string & name, AgObjectPtr parameters) ;

    void addVariableDefinition(VariableDefinitionPtr def);
    void removeVariableDefinition(const std::string & name);

    void addFunctionDefinition(FunctionDefinitionPtr def);

	void removeFunctionDefinition(const std::string & name);

    void addEventDefinition(EventDefinitionPtr def);

	void removeEventDefinition(const std::string & name);


	VariableDataPtr getVariableData(const std::string & name);
	VariableDefinitionPtr getVariableDefinition(const std::string & name);
    VariableDefinitionPtr getVariableDefinition(const std::string & name, CallerControllerPtr caller);
	FunctionDataPtr getFunctionData(const std::string & name);
    FunctionDefinitionPtr getFunctionDefinition(const std::string & name);
	FunctionDefinitionPtr getFunctionDefinition(const std::string & name, CallerControllerPtr caller);
	EventDataPtr getEventData(const std::string & name);
	EventDefinitionPtr getEventDefinition(const std::string & name);
	EventDefinitionPtr getEventDefinition(const std::string & name, CallerControllerPtr caller);


    EventPtr fireEvent(const std::string & name, int level, CallerControllerPtr caller, FireEventRequestControllerPtr request, PermissionsPtr permissions, DataTablePtr data);
    EventPtr fireEvent(const std::string & name, DataTablePtr data, int level, long  id, DatePtr creationtime, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request);
    EventPtr fireEvent(const std::string & name, DataTablePtr data);
    EventPtr fireEvent(const std::string & name, CallerControllerPtr caller, DataTablePtr data);
    EventPtr fireEvent(const std::string & name, int level, DataTablePtr data);
    EventPtr fireEvent(const std::string & name, int level, CallerControllerPtr caller, DataTablePtr data);
    EventPtr fireEvent(const std::string & name);
	EventPtr fireEvent(const std::string & name, CallerControllerPtr caller);
	EventPtr fireEvent(const std::string &name, AgObjectPtr data);

	std::list<EventPtr>  getEventHistory(const std::string & name);

    const std::string & toString();
    std::string toDetailedString();
	void accept(ContextVisitorPtr visitor) ;

    DataTablePtr getVvariables(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;

    DataTablePtr getVfunctions(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;

    DataTablePtr getVevents(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;

	DataTablePtr getVactions(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;

    ContextStatusPtr getStatus();
    void setStatus(int status, const std::string & comment);

    void updateVariableStatus(const std::string & variable, VariableStatusPtr status, bool persistent) ;

    VariableStatusPtr getVariableStatus(const std::string & name) ;
    DataTablePtr getVchildren(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;
    DataTablePtr getVinfo(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;

    DataTablePtr callFgetCopyData(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;
    DataTablePtr callFcopy(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;
	DataTablePtr callFcopyToChildren(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;



    AbstractContext();
    AbstractContext(const std::string &name);

protected:
    void setPermissions(PermissionsPtr permissions);
	void setPermissionChecker(PermissionCheckerPtr permissionChecker);
    void setFireUpdateEvents(bool fireUpdateEvents);
    bool isFireUpdateEvents();
	void setChildrenViewPermissions(PermissionsPtr childrenViewPermissions);
    void setChildrenSortingEnabled(bool childrenSortingEnabled);
	void setValueCheckingEnabled(bool valueCheckingEnabled);
	void setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled);
	void checkPermissions(PermissionsPtr needPermissions, CallerControllerPtr caller);
	void destroyChildren(bool moving);
	void reorderChild(ContextPtr child, int index);
	void movePrepare(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveInternal(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName) ;
	void moveFinalize(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName);
    void setPermissionCheckingEnabled(bool permissionCheckingEnabled);
    void setIconId(const std::string & iconId);
	ActionDefinitionPtr actDefFromDataRecord(DataRecordPtr rec);
	DataTablePtr executeDefaultGetterImpl(VariableDefinitionPtr vd, CallerControllerPtr caller);
	DataTablePtr getVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;
	void variableUpdated(VariableDefinitionPtr def, CallerControllerPtr caller, DataTablePtr value) ;
    void fireUpdatedEvent(VariableDefinitionPtr def, CallerControllerPtr caller, DataTablePtr value);
    void fireChangeEvent(VariableDefinitionPtr def, CallerControllerPtr caller, DatePtr timestamp, DataTablePtr value);
    void setupVariables() ;
	void executeDefaultSetterImpl(VariableDefinitionPtr vd, CallerControllerPtr caller, DataTablePtr value);
    bool setVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value);
    void setupFunctions();
	DataTablePtr callFunctionImpl(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters);
    void setupEvents();
    void postEvent(EventPtr ev, EventDefinitionPtr ed, CallerControllerPtr caller, FireEventRequestControllerPtr request) ;
    void updateEvent(EventPtr ev, EventDefinitionPtr ed, CallerControllerPtr caller, FireEventRequestControllerPtr request) ;
	EventPtr fireEvent(EventDefinitionPtr ed, DataTablePtr data, int level, long  id, DatePtr creationtime, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request, PermissionsPtr permissions);
    EventPtr fireEvent(EventPtr event);
	EventProcessingRulePtr getEventProcessingRule(EventPtr event);
	void processBindings(EventPtr event);
	CallerControllerPtr getEventProcessingCallerController();
    EventDefinitionPtr getChangeEventDefinition();
	const std::string & encodeFormat(TableFormatPtr format, CallerControllerPtr caller);
	TableFormatPtr decodeFormat(const std::string & source, CallerControllerPtr caller);
    DataRecordPtr varDefToDataRecord(VariableDefinitionPtr vd);
	VariableDefinitionPtr varDefFromDataRecord(DataRecordPtr rec);
	DataRecordPtr funcDefToDataRecord(FunctionDefinitionPtr fd);
	FunctionDefinitionPtr funcDefFromDataRecord(DataRecordPtr rec);
	DataRecordPtr evtDefToDataRecord(EventDefinitionPtr ed);
	EventDefinitionPtr evtDefFromDataRecord(DataRecordPtr rec);
	DataRecordPtr actDefToDataRecord(ActionDefinitionPtr def);
	void executeTasks(std::list<boost::thread*>  tasks);
	void enableStatus();
	void fireStatusChanged(int status, const std::string & comment, int oldStatus);
    void enableVariableStatuses(bool persistent);
	DataTablePtr fetchVariableStatuses() ;
	void clearVariableStatuses() ;
    void saveVariableStatuses() ;
	void persistVariableStatuses(DataTablePtr statuses) ;
	DataTablePtr copyTo(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters, std::list<AgObjectPtr>  children);

};
#endif
