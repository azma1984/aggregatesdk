#include "AbstractContext.h"

const std::string AbstractContext::IMPLEMENTATION_METHOD_PREFIX = "callF";
const std::string AbstractContext::SETTER_METHOD_PREFIX = "setV";
const std::string AbstractContext::GETTER_METHOD_PREFIX = "getV";

const std::string AbstractContext::V_INFO= "info";
const std::string AbstractContext::V_CHILDREN= "children";
const std::string AbstractContext::V_VARIABLES= "variables";
const std::string AbstractContext::V_FUNCTIONS= "functions";
const std::string AbstractContext::V_EVENTS= "events";
const std::string AbstractContext::V_ACTIONS= "actions";
const std::string AbstractContext::V_VARIABLE_STATUSES= "variableStatuses";
const std::string AbstractContext::F_GET_COPY_DATA= "getCopyData";
const std::string AbstractContext::F_COPY= "copy";
const std::string AbstractContext::F_COPY_TO_CHILDREN= "copyToChildren";
const std::string AbstractContext::E_INFO= "info";
const std::string AbstractContext::E_UPDATED= "updated";
const std::string AbstractContext::E_CHANGE= "change";
const std::string AbstractContext::E_DESTROYED= "destroyed";
const std::string AbstractContext::E_INFO_CHANGED= "infoChanged";
const std::string AbstractContext::E_VARIABLE_ADDED= "variableAdded";
const std::string AbstractContext::E_VARIABLE_REMOVED= "variableRemoved";
const std::string AbstractContext::E_FUNCTION_ADDED= "functionAdded";
const std::string AbstractContext::E_FUNCTION_REMOVED= "functionRemoved";
const std::string AbstractContext::E_EVENT_ADDED= "eventAdded";
const std::string AbstractContext::E_EVENT_REMOVED= "eventRemoved";
const std::string AbstractContext::E_ACTION_ADDED= "actionAdded";
const std::string AbstractContext::E_ACTION_REMOVED= "actionRemoved";
const std::string AbstractContext::E_ACTION_STATE_CHANGED= "actionStateChanged";
const std::string AbstractContext::E_CHILD_REMOVED= "childRemoved";
const std::string AbstractContext::E_CHILD_ADDED= "childAdded";
const std::string AbstractContext::E_VARIABLE_STATUS_CHANGED= "variableStatusChanged";
const std::string AbstractContext::VF_INFO_DESCRIPTION= "description";
const std::string AbstractContext::VF_INFO_TYPE= "type";
const std::string AbstractContext::VF_INFO_GROUP= "group";
const std::string AbstractContext::VF_INFO_ICON= "icon";
const std::string AbstractContext::VF_INFO_LOCAL_ROOT= "localRoot";
const std::string AbstractContext::VF_INFO_REMOTE_ROOT= "remoteRoot";
const std::string AbstractContext::VF_INFO_REMOTE_PATH= "remotePath";
const std::string AbstractContext::VF_INFO_REMOTE_PRIMARY_ROOT= "remotePrimaryRoot";
const std::string AbstractContext::VF_INFO_MAPPED= "mapped";
const std::string AbstractContext::VF_CHILDREN_NAME= "name";
const std::string AbstractContext::VF_VARIABLE_STATUSES_COMMENT= "comment";
const std::string AbstractContext::VF_VARIABLE_STATUSES_STATUS= "status";
const std::string AbstractContext::VF_VARIABLE_STATUSES_NAME= "name";
const std::string AbstractContext::FIF_COPY_DATA_RECIPIENTS= "recipients";
const std::string AbstractContext::FIF_COPY_DATA_GROUP= "group";
const std::string AbstractContext::FOF_COPY_DATA_NAME= "name";
const std::string AbstractContext::FOF_COPY_DATA_DESCRIPTION= "description";
const std::string AbstractContext::FOF_COPY_DATA_REPLICATE= "replicate";
const std::string AbstractContext::FOF_COPY_DATA_FIELDS= "fields";
const std::string AbstractContext::FOF_COPY_DATA_VALUE= "value";
const std::string AbstractContext::FIF_REPLICATE_FIELDS_NAME= "name";
const std::string AbstractContext::FIF_REPLICATE_FIELDS_DESCRIPTION= "description";
const std::string AbstractContext::FIF_REPLICATE_FIELDS_REPLICATE= "replicate";
const std::string AbstractContext::FIF_COPY_DATA_RECIPIENTS_RECIPIENT= "recipient";
const std::string AbstractContext::EF_INFO_INFO= "info";
const std::string AbstractContext::EF_EVENT_REMOVED_NAME= "name";
const std::string AbstractContext::EF_FUNCTION_REMOVED_NAME= "name";
const std::string AbstractContext::EF_VARIABLE_REMOVED_NAME= "name";
const std::string AbstractContext::EF_ACTION_REMOVED_NAME= "name";
const std::string AbstractContext::EF_CHILD_REMOVED_CHILD= "child";
const std::string AbstractContext::EF_CHILD_ADDED_CHILD= "child";
const std::string AbstractContext::FIELD_REPLICATE_CONTEXT= "context";
const std::string AbstractContext::FIELD_REPLICATE_VARIABLE= "variable";
const std::string AbstractContext::FIELD_REPLICATE_SUCCESSFUL= "successful";
const std::string AbstractContext::FIELD_REPLICATE_ERRORS= "errors";
const std::string AbstractContext::EF_UPDATED_VARIABLE= "variable";
const std::string AbstractContext::EF_UPDATED_VALUE= "value";
const std::string AbstractContext::EF_UPDATED_USER= "user";
const std::string AbstractContext::EF_CHANGE_VARIABLE= "variable";
const std::string AbstractContext::EF_CHANGE_VALUE= "value";
const std::string AbstractContext::EF_CHANGE_DATA= "data";
const std::string AbstractContext::FIELD_VD_NAME= "name";
const std::string AbstractContext::FIELD_VD_FORMAT= "format";
const std::string AbstractContext::FIELD_VD_DESCRIPTION= "description";
const std::string AbstractContext::FIELD_VD_READABLE= "readable";
const std::string AbstractContext::FIELD_VD_WRITABLE= "writable";
const std::string AbstractContext::FIELD_VD_HELP= "help";
const std::string AbstractContext::FIELD_VD_GROUP= "group";
const std::string AbstractContext::FIELD_VD_ICON_ID= "iconId";
const std::string AbstractContext::FIELD_VD_HELP_ID= "helpId";
const std::string AbstractContext::FIELD_VD_CACHE_TIME= "cacheTime";
const std::string AbstractContext::FIELD_FD_NAME= "name";
const std::string AbstractContext::FIELD_FD_INPUTFORMAT= "inputformat";
const std::string AbstractContext::FIELD_FD_OUTPUTFORMAT= "outputformat";
const std::string AbstractContext::FIELD_FD_DESCRIPTION= "description";
const std::string AbstractContext::FIELD_FD_HELP= "help";
const std::string AbstractContext::FIELD_FD_GROUP= "group";
const std::string AbstractContext::FIELD_FD_ICON_ID= "iconId";
const std::string AbstractContext::FIELD_ED_NAME= "name";
const std::string AbstractContext::FIELD_ED_FORMAT= "format";
const std::string AbstractContext::FIELD_ED_DESCRIPTION= "description";
const std::string AbstractContext::FIELD_ED_HELP= "help";
const std::string AbstractContext::FIELD_ED_LEVEL= "level";
const std::string AbstractContext::FIELD_ED_GROUP= "group";
const std::string AbstractContext::FIELD_ED_ICON_ID= "iconId";

const std::string AbstractContext::CALLER_CONTROLLER_PROPERTY_DEBUG= "debug";
const std::string AbstractContext::CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS= "no_updated_events";
const std::string AbstractContext::CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS= "no_change_events";

AbstractContext::AbstractContext(const std::string &name)
{
    setName(name);

	permissionCheckingEnabled = true;
	permissionChecker = new NullPermissionChecker();
	valueCheckingEnabled = true;
	childrenConcurrencyEnabled = false;
	childrenSortingEnabled = true;
	fireUpdateEvents = true;


	VARIABLE_DEFINITION_FORMAT = boost::shared_ptr<TableFormat>(new TableFormat);

	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_NAME + "><S>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_FORMAT + "><S><F=N>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_DESCRIPTION + "><S><F=N>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_READABLE + "><B>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_WRITABLE + "><B>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_HELP + "><S><F=N>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_GROUP + "><S><F=N>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_ICON_ID + "><S><F=N>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_HELP_ID + "><S><F=N>");
	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_CACHE_TIME + "><L><F=N>");

	EF_VARIABLE_ADDED = boost::shared_ptr<TableFormat>(VARIABLE_DEFINITION_FORMAT->clone());
   //	EF_VARIABLE_ADDED->setMinRecords(1);  todo - not make in datatable/TableFormat.h
   //	EF_VARIABLE_ADDED->setMaxRecords(1);  todo - not make in datatable/TableFormat.h

	FUNCTION_DEFINITION_FORMAT= boost::shared_ptr<TableFormat>(new TableFormat);
	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_NAME+"><S>");
	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_INPUTFORMAT+"><S><F=N>");
	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_OUTPUTFORMAT+"><S><F=N>");
	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_DESCRIPTION+"><S><F=N>");
	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_HELP+"><S><F=N>");
	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_GROUP+"><S><F=N>");
	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_ICON_ID+"><S><F=N>");

	EF_FUNCTION_ADDED = boost::shared_ptr<TableFormat>(FUNCTION_DEFINITION_FORMAT->clone());
   //	EF_FUNCTION_ADDED->setMinRecords(1);  todo - not make in datatable/TableFormat.h
   //	EF_FUNCTION_ADDED->setMaxRecords(1);  todo - not make in datatable/TableFormat.h

	EVENT_DEFINITION_FORMAT= boost::shared_ptr<TableFormat>(new TableFormat);
	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_NAME+"><S>");
	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_FORMAT+"><S><F=N>");
	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_DESCRIPTION+"><S><F=N>");
	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_HELP+"><S><F=N>");
	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_LEVEL+"><I>");
	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_GROUP+"><S><F=N>");
	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_ICON_ID+"><S><F=N>");

	EF_EVENT_ADDED = boost::shared_ptr<TableFormat>(EVENT_DEFINITION_FORMAT->clone());
   //	EF_EVENT_ADDED->setMinRecords(1);  todo - not make in datatable/TableFormat.h
   //	EF_EVENT_ADDED->setMaxRecords(1);  todo - not make in datatable/TableFormat.h

   //	VFT_CHILDREN = FieldFormat::create("<"+VF_CHILDREN_NAME+"><S>")->wrap();  //todo - not make in datatable/FieldFormat.h

	INFO_DEFINITION_FORMAT = boost::shared_ptr<TableFormat>(new TableFormat(1,1));
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_DESCRIPTION+"><S><F=N><D="+Cres::get()->getString("description")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_TYPE+"><S><D="+Cres::get()->getString("type")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_GROUP+"><S><F=N><D="+Cres::get()->getString("group")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_ICON+"><S><F=N><D="+Cres::get()->getString("conIconId")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_LOCAL_ROOT+"><S><D="+Cres::get()->getString("conLocalRoot")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_REMOTE_ROOT+"><S><F=N><D="+Cres::get()->getString("conRemoteRoot")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_REMOTE_PATH+"><S><D="+Cres::get()->getString("conRemotePath")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_REMOTE_PRIMARY_ROOT+"><S><F=N><D="+Cres::get()->getString("conRemotePrimaryRoot")+">");
	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_MAPPED+"><B><D="+Cres::get()->getString("conMapped")+">");

	ACTION_DEF_FORMAT= boost::shared_ptr<TableFormat>(new TableFormat);
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_NAME+"><S>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_DESCRIPTION+"><S><F=N>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_HELP+"><S><F=N>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_ACCELERATOR+"><S><F=N>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_DROP_SOURCES+"><T><F=N>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_HIDDEN+"><B>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_ENABLED+"><B>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_ICON_ID+"><S><F=N>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_GROUP+"><S><F=N>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_EXECUTION_GROUP+"><S><F=N>");
	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_DEFAULT+"><B>");

   //	RESOURCE_MASKS_FORMAT= FieldFormat::create("<"+ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK+"><S><F=N>")->wrap();//todo - not make in datatable/FieldFormat.h

	FIFT_GET_COPY_DATA = boost::shared_ptr<TableFormat>(new TableFormat(1, 1));
	FIFT_GET_COPY_DATA->addField("<"+FIF_COPY_DATA_GROUP+"><S><F=N>");
	FIFT_GET_COPY_DATA->addField("<"+FIF_COPY_DATA_RECIPIENTS+"><T><F=N>");
   //	FIFT_GET_COPY_DATA_RECIPIENTS = FieldFormat::create("<"+FIF_COPY_DATA_RECIPIENTS_RECIPIENT+"><S>")->wrap(); //todo - not make in datatable/FieldFormat.h
	REPLICATE_INPUT_FORMAT= boost::shared_ptr<TableFormat>(new TableFormat);

	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_NAME+"><S><F=RHK>");
	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_DESCRIPTION+"><S><F=R><D="+Cres::get()->getString("variable")+">");
	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_REPLICATE+"><B><A=0><D="+Cres::get()->getString("replicate")+">");
	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_FIELDS+"><T><D="+Cres::get()->getString("fields")+">");
	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_VALUE+"><T><D="+Cres::get()->getString("value")+">");
	FIFT_REPLICATE_FIELDS= boost::shared_ptr<TableFormat>(new TableFormat);

	FIFT_REPLICATE_FIELDS->addField("<"+FIF_REPLICATE_FIELDS_NAME+"><S><F=RHK>");
	FIFT_REPLICATE_FIELDS->addField("<"+FIF_REPLICATE_FIELDS_DESCRIPTION+"><S><F=R><D="+Cres::get()->getString("field")+">");
	FIFT_REPLICATE_FIELDS->addField("<"+FIF_REPLICATE_FIELDS_REPLICATE+"><B><A=1><D="+Cres::get()->getString("replicate")+">");
	FIFT_REPLICATE_FIELDS->setNamingExpression("print({}, '{"+FIF_REPLICATE_FIELDS_REPLICATE+"} ? {"+FIF_REPLICATE_FIELDS_DESCRIPTION+"} : 0', ', ')");

	REPLICATE_OUTPUT_FORMAT= boost::shared_ptr<TableFormat>(new TableFormat);
	REPLICATE_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_VARIABLE+"><S><D="+Cres::get()->getString("variable") +">");
	REPLICATE_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_SUCCESSFUL+"><B><D="+Cres::get()->getString("successful")+">");
	REPLICATE_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_ERRORS+"><S><D="+Cres::get()->getString("errors")+">");

	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT= boost::shared_ptr<TableFormat>(new TableFormat);
	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_CONTEXT+"><S><D="+Cres::get()->getString("context")+">");
	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_VARIABLE+"><S><D="+Cres::get()->getString("variable")+">");
	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_SUCCESSFUL+"><B><D="+Cres::get()->getString("successful")+">");
	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_ERRORS+"><S><D="+Cres::get()->getString("errors")+">");

	EF_UPDATED= boost::shared_ptr<TableFormat>(new TableFormat(1,1));

	EF_UPDATED->addField("<"+EF_UPDATED_VARIABLE+"><S>");
	EF_UPDATED->addField("<"+EF_UPDATED_VALUE+"><T>");
	EF_UPDATED->addField("<"+EF_UPDATED_USER+"><S><F=N>");

	EF_CHANGE= boost::shared_ptr<TableFormat>(new TableFormat(1, 1));

	EF_CHANGE->addField("<"+EF_CHANGE_VARIABLE+"><S>");
	EF_CHANGE->addField("<"+EF_CHANGE_VALUE+"><T><F=N>");
	EF_CHANGE->addField("<"+EF_CHANGE_DATA+"><S><F=N>");

	EFT_INFO= boost::shared_ptr<TableFormat>(new TableFormat(1, 1, "<"+EF_INFO_INFO+"><S><D="+Cres::get()->getString("info")+">"));
	EFT_VARIABLE_REMOVED= boost::shared_ptr<TableFormat>(new TableFormat(1,1, "<"+EF_VARIABLE_REMOVED_NAME+"><S>"));
	EFT_EVENT_REMOVED= boost::shared_ptr<TableFormat>(new TableFormat(1,1, "<"+EF_EVENT_REMOVED_NAME+"><S>"));
	EFT_FUNCTION_REMOVED= boost::shared_ptr<TableFormat>(new TableFormat(1,1, "<"+EF_FUNCTION_REMOVED_NAME+"><S>"));
	EFT_CHILD_REMOVED= boost::shared_ptr<TableFormat>(new TableFormat(1,1, "<"+EF_CHILD_REMOVED_CHILD+"><S>"));
	EFT_CHILD_ADDED= boost::shared_ptr<TableFormat>(new TableFormat(1,1, "<"+EF_CHILD_ADDED_CHILD+"><S>"));
	EFT_ACTION_REMOVED= boost::shared_ptr<TableFormat>(new TableFormat(1,1, "<"+AbstractContext::EF_ACTION_REMOVED_NAME+"><S>"));

	VD_INFO= new VariableDefinition(V_INFO, INFO_DEFINITION_FORMAT, true, false, Cres::get()->getString("conContextProps"), ContextUtils::GROUP_SYSTEM);
	VD_INFO->setHidden(true);
	VD_INFO->setReadPermissions(DefaultPermissionChecker::getNullPermissions());

	VD_VARIABLES= new VariableDefinition(V_VARIABLES, VARIABLE_DEFINITION_FORMAT, true, false, Cres::get()->getString("conVarList"));
	VD_VARIABLES->setHidden(true);
	VD_VARIABLES->setReadPermissions(DefaultPermissionChecker::getNullPermissions());

	VD_FUNCTIONS= new VariableDefinition(V_FUNCTIONS, FUNCTION_DEFINITION_FORMAT, true, false, Cres::get()->getString("conFuncList"));
	VD_FUNCTIONS->setHidden(true);
	VD_FUNCTIONS->setReadPermissions(DefaultPermissionChecker::getNullPermissions());

	VD_EVENTS= new VariableDefinition(V_EVENTS, EVENT_DEFINITION_FORMAT, true, false, Cres::get()->getString("conEvtList"));
	VD_EVENTS->setHidden(true);
	VD_EVENTS->setReadPermissions(DefaultPermissionChecker::getNullPermissions());

	VD_ACTIONS= new VariableDefinition(AbstractContext::V_ACTIONS, ACTION_DEF_FORMAT, true, false, Cres::get()->getString("conActionList"));
	VD_ACTIONS->setHidden(true);
	VD_ACTIONS->setReadPermissions(DefaultPermissionChecker::getNullPermissions());

	VD_CHILDREN= new VariableDefinition(V_CHILDREN, VFT_CHILDREN, true, false, Cres::get()->getString("conChildList"));
	VD_CHILDREN->setHidden(true);
	VD_CHILDREN->setReadPermissions(DefaultPermissionChecker::getNullPermissions());

	FD_GET_COPY_DATA= boost::shared_ptr<FunctionDefinition>(new FunctionDefinition(F_GET_COPY_DATA, FIFT_GET_COPY_DATA, REPLICATE_INPUT_FORMAT));
	FD_GET_COPY_DATA->setHidden(true);

	FD_COPY= boost::shared_ptr<FunctionDefinition>(new FunctionDefinition(F_COPY, REPLICATE_INPUT_FORMAT, REPLICATE_OUTPUT_FORMAT, Cres::get()->getString("conCopyProperties")));
	FD_COPY->setHidden(true);

	FD_COPY_TO_CHILDREN= boost::shared_ptr<FunctionDefinition>(new FunctionDefinition(F_COPY_TO_CHILDREN, REPLICATE_INPUT_FORMAT, REPLICATE_TO_CHILDREN_OUTPUT_FORMAT, Cres::get()->getString("conCopyToChildren")));
	FD_COPY_TO_CHILDREN->setHidden(true);

	ED_INFO= boost::shared_ptr<EventDefinition>(new EventDefinition(E_INFO, EFT_INFO, Cres::get()->getString("info"), ContextUtils::GROUP_DEFAULT));
	ED_INFO->setLevel(EventLevel::INFO);
	ED_INFO->setIconId(Icons::EVT_INFO);
	ED_INFO->getPersistenceOptions()->setDedicatedTablePreferred(true);

	ED_CHILD_ADDED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_CHILD_ADDED, EFT_CHILD_ADDED, Cres::get()->getString("conChildAdded"), ContextUtils::GROUP_SYSTEM));
	ED_CHILD_ADDED->setSynchronous(true);
	ED_CHILD_ADDED->setHidden(true);
	ED_CHILD_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_CHILD_REMOVED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_CHILD_REMOVED, EFT_CHILD_REMOVED, Cres::get()->getString("conChildRemoved"), ContextUtils::GROUP_SYSTEM));
	ED_CHILD_REMOVED->setSynchronous(true);
	ED_CHILD_REMOVED->setHidden(true);
	ED_CHILD_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_VARIABLE_ADDED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_VARIABLE_ADDED, EF_VARIABLE_ADDED, Cres::get()->getString("conVarAdded"), ContextUtils::GROUP_SYSTEM));
	ED_VARIABLE_ADDED->setHidden(true);
	ED_VARIABLE_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_VARIABLE_REMOVED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_VARIABLE_REMOVED, EFT_VARIABLE_REMOVED, Cres::get()->getString("conVarRemoved"), ContextUtils::GROUP_SYSTEM));
	ED_VARIABLE_REMOVED->setHidden(true);
	ED_VARIABLE_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_FUNCTION_ADDED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_FUNCTION_ADDED, EF_FUNCTION_ADDED, Cres::get()->getString("conFuncAdded"), ContextUtils::GROUP_SYSTEM));
	ED_FUNCTION_ADDED->setHidden(true);
	ED_FUNCTION_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_FUNCTION_REMOVED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_FUNCTION_REMOVED, EFT_FUNCTION_REMOVED, Cres::get()->getString("conFuncRemoved"), ContextUtils::GROUP_SYSTEM));
	ED_FUNCTION_REMOVED->setHidden(true);
	ED_FUNCTION_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_EVENT_ADDED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_EVENT_ADDED, EF_EVENT_ADDED, Cres::get()->getString("conEvtAdded"), ContextUtils::GROUP_SYSTEM));
	ED_EVENT_ADDED->setHidden(true);
	ED_EVENT_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_EVENT_REMOVED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_EVENT_REMOVED, EFT_EVENT_REMOVED, Cres::get()->getString("conEvtRemoved"), ContextUtils::GROUP_SYSTEM));
	ED_EVENT_REMOVED->setHidden(true);
	ED_EVENT_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());
	//todo - 'setMinRecords' is not a member of 'TableFormat'
   //	ED_ACTION_ADDED= boost::shared_ptr<EventDefinition>(new EventDefinition(AbstractContext::E_ACTION_ADDED, ACTION_DEF_FORMAT->clone()->setMinRecords(1))->setMaxRecords(1), Cres::get()->getString("conActionAdded"));
	ED_ACTION_ADDED->setHidden(true);
	ED_ACTION_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_ACTION_REMOVED = boost::shared_ptr<EventDefinition>(new EventDefinition(AbstractContext::E_ACTION_REMOVED, EFT_ACTION_REMOVED, Cres::get()->getString("conActionRemoved")));
	ED_ACTION_REMOVED->setHidden(true);
	ED_ACTION_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_ACTION_STATE_CHANGED= boost::shared_ptr<EventDefinition>(new EventDefinition(AbstractContext::E_ACTION_STATE_CHANGED, ACTION_DEF_FORMAT, Cres::get()->getString("conActionStateChanged")));
	ED_ACTION_STATE_CHANGED->setHidden(true);
	ED_ACTION_STATE_CHANGED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_INFO_CHANGED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_INFO_CHANGED, INFO_DEFINITION_FORMAT, Cres::get()->getString("conInfoChanged"), ContextUtils::GROUP_SYSTEM));
	ED_INFO_CHANGED->setHidden(true);
	ED_INFO_CHANGED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	ED_UPDATED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_UPDATED, EF_UPDATED, Cres::get()->getString("conUpdated"), ContextUtils::GROUP_SYSTEM));
	ED_UPDATED->setHidden(true);

	ED_CHANGE= boost::shared_ptr<EventDefinition>(new EventDefinition(E_CHANGE, EF_CHANGE, Cres::get()->getString("change"), ContextUtils::GROUP_SYSTEM));
	ED_CHANGE->setHidden(true);
	ED_CHANGE->getPersistenceOptions()->setDedicatedTablePreferred(true);

	// E2451 Undefined symbol 'EMPTY_FORMAT'
	 //	ED_DESTROYED= boost::shared_ptr<EventDefinition>(new EventDefinition(E_DESTROYED, TableFormat::EMPTY_FORMAT, Cres::get()->getString("conDestroyedPermanently"), ContextUtils::GROUP_SYSTEM));
	ED_DESTROYED->setSynchronous(true);
	ED_DESTROYED->setHidden(true);
	ED_DESTROYED->setPermissions(DefaultPermissionChecker::getNullPermissions());

	VFT_VARIABLE_STATUSES= boost::shared_ptr<TableFormat>(new TableFormat);
	VFT_VARIABLE_STATUSES->addField("<"+VF_VARIABLE_STATUSES_NAME+"><S>");
	VFT_VARIABLE_STATUSES->addField("<"+VF_VARIABLE_STATUSES_STATUS+"><S><F=N>");
	VFT_VARIABLE_STATUSES->addField("<"+VF_VARIABLE_STATUSES_COMMENT+"><S><F=N>");
	DEFAULT_PERMISSIONS = DefaultPermissionChecker::getNullPermissions();

}

void AbstractContext::setup(ContextManager* contextManager)
{
	setContextManager(contextManager);
	setup();
}

void AbstractContext::setup()
{
	try
	{
	 if(setupComplete)
	 {
	  return;
	 }
	 setupPermissions();
	 setupMyself();
	 setupComplete = true;
	 setupChildren();
	}
	catch (std::exception &ex)
	{
	 throw new ContextRuntimeException("Error setting up context '" + toString() + "': " +ex.what() , ex);
	}
}

void AbstractContext::setupPermissions()
{
}


void AbstractContext::setupMyself()
{
	addVariableDefinition(VD_INFO);
    addVariableDefinition(VD_VARIABLES);
    addVariableDefinition(VD_FUNCTIONS);
	addVariableDefinition(VD_EVENTS);
    addVariableDefinition(VD_ACTIONS);
    addVariableDefinition(VD_CHILDREN);
    addFunctionDefinition(FD_GET_COPY_DATA);
    addFunctionDefinition(FD_COPY);
    addFunctionDefinition(FD_COPY_TO_CHILDREN);
    addEventDefinition(ED_INFO);
    addEventDefinition(ED_CHILD_ADDED);
    addEventDefinition(ED_CHILD_REMOVED);
    addEventDefinition(ED_VARIABLE_ADDED);
    addEventDefinition(ED_VARIABLE_REMOVED);
    addEventDefinition(ED_FUNCTION_ADDED);
    addEventDefinition(ED_FUNCTION_REMOVED);
    addEventDefinition(ED_EVENT_ADDED);
    addEventDefinition(ED_EVENT_REMOVED);
    addEventDefinition(ED_ACTION_ADDED);
    addEventDefinition(ED_ACTION_REMOVED);
    addEventDefinition(ED_ACTION_STATE_CHANGED);
    addEventDefinition(ED_INFO_CHANGED);
    addEventDefinition(ED_UPDATED);
    addEventDefinition(getChangeEventDefinition());
	addEventDefinition(ED_DESTROYED);
}

void AbstractContext::setupChildren()
{
}

void AbstractContext::teardown()
{
}

//todo - thread start
//void* call()
// {
//  //long startTime = std::time System.currentTimeMillis(); //todo - std current time?
//
//  //child.start();
//   //	std::cout<< "Started context  '" + child.getPath() + "' in " + (System.currentTimeMillis() - startTime) + " ms";
//
//  return 0;
//}
//
void AbstractContext::start()
{
//  std::list<boost::thread*> tasks;
//  childrenLock.lock_shared();
//  try
//   {
//	std::list<void*>::const_iterator child1;
//	for (child1 = children.begin(); child1!= children.end(); ++child1)
//	{
//	 Context* child = (Context*)*child1;
//
//	 boost::thread task(call());
//
//	 tasks.push_front(&task);
//
//
//	}
//  }
//  __finally
//  {
//   childrenLock.unlock_shared();
//  }
//
//  executeTasks(tasks);
//  started = true;
} //todo - thread stop
  //void* call1()
//   {
 //	long startTime = System.currentTimeMillis();

 //	child.stop();

 //	 std::cout<<"Stopped context  '" + child.getPath() + "' in " + (System.currentTimeMillis() - startTime) + " ms");

 //	 return 0;
//   }

void AbstractContext::stop()
{
//    std::list<boost::thread*> tasks;
//	childrenLock.lock_shared();
//	try
//	{
//	 std::list<void*>::const_iterator child1;
//	 for (child1 = children.begin(); child1!= children.end(); ++child1)
//	 {
//	  Context* child = (Context*)*child1;
//
//	  boost::thread task(call1());
//
//	  tasks.push_front(&task);
//	 }
//	}
//	__finally
//	{
//	  childrenLock.unlock_shared();
//	}
//
//	executeTasks(tasks);
//	started = false;
}

int AbstractContext::compareTo(int a1,int a2)
{
 if (a1==a2) return 0;
 if (a1<a2) return -1;
 if (a1>a2) return 1;
}

int AbstractContext::compareTo(Context* context)
{
	if(getIndex() != 0 || context->getIndex() != 0)
	{
	  int my = getIndex() != 0 ? getIndex() : 0;
	  int other = context->getIndex() != 0 ? context->getIndex() : 0;
	  return compareTo(other,my);
	}
	else
	{
	 return getName().compare(context->getName());
	}
}

//std::list<void*>  AbstractContext::getChildren(boost::shared_ptr<CallerController> caller)
//{
////    if(!checkPermissions(getChildrenViewPermissions(), caller, this)) {
////        if(Log::CONTEXT_CHILDREN())->isDebugEnabled()) {
////            Log::CONTEXT_CHILDREN())->debug("Access to child '"+name)
////+"' denied in context '")
////+getPath())
////+"'");
////        }
////        return ::java::util::Collections::emptyList();
////    }
////    std::list  childList = new ::java::util::LinkedList(children);
////    for (auto *iterator = childList)->iterator(); iterator)->hasNext(); ) {
////        auto cur = java_cast< Context* >(iterator)->next());
////        if(!shouldSeeChild(caller, cur)) {
////            iterator)->remove();
////        }
////    }
////    return childList;
//
//	std::list<void*> list;
//	return list;
//}
//
////bool AbstractContext::shouldSeeChild(boost::shared_ptr<CallerController> caller, Context* cur)
////{
////    return checkPermissions(cur)->getPermissions(), caller, cur) || canSee(caller, cur);
////}
////
////bool AbstractContext::canSee(boost::shared_ptr<CallerController> caller, Context* con)
////{
////    if(!permissionCheckingEnabled) {
////        return true;
////    }
////    return getPermissionChecker())->canSee(caller != 0 ? caller)->getPermissions() : static_cast< boost::shared_ptr<Permissions> >(0), con)->getPath(), getContextManager());
////}
////
//std::list<void*>  AbstractContext::getChildren()
//{
////    return getChildren(static_cast< boost::shared_ptr<CallerController> >(0));
//	std::list<void*> list;
//	return list;
//}
////
//std::list<void*>   AbstractContext::getVisibleChildren(boost::shared_ptr<CallerController> caller)
//{
////    return getChildren(caller);
//		std::list<void*> list;
//	return list;
//}
////
//std::list<void*>   AbstractContext::getVisibleChildren()
//{
////    return getVisibleChildren(static_cast< boost::shared_ptr<CallerController> >(0));
//		std::list<void*> list;
//	return list;
//}
//
//bool AbstractContext::isMapped()
//{
//    return false;
//}
//
//std::list<void*>   AbstractContext::getMappedChildren(boost::shared_ptr<CallerController> caller)
//{
////    return isMapped() ? getVisibleChildren(caller) : getChildren(caller);
//		std::list<void*> list;
//	return list;
//}
//
//std::list<void*>   AbstractContext::getMappedChildren()
//{
////    return getMappedChildren(static_cast< boost::shared_ptr<CallerController> >(0));
//		std::list<void*> list;
//	return list;
//}
//
//std::string AbstractContext::getName()
//{
//    return name;
//}
//
//std::string AbstractContext::getDescription()
//{
//    return description;
//}
////
////void AbstractContext::setDescription(const std::string & description)
////{
////    auto old = this->description;
////    this->description = description;
////    if(old == 0 || !old)->equals(description))) {
////        contextInfoChanded();
////    }
////}
////
//void* AbstractContext::getParent()
//{
//    return (void*)parent;
//}
////
////bool AbstractContext::hasParent(Context* parentContext)
////{
////    Context* root = this;
////    do {
////        root = java_cast< Context* >(root)->getParent());
////        if(root == static_cast< Context* >(parentContext)) {
////            return true;
////        }
////    } while (java_cast< Context* >(root)->getParent()) != 0);
////    return false;
////}
////
//void* AbstractContext::getRoot()
//{
//    Context* root = this;
//    while (root->getParent() != 0) 
//	{
//     root =  (Context*)root->getParent();
//    }
//    return (void*)(root);
//}
//
//void* AbstractContext::get(const std::string & contextPath, boost::shared_ptr<CallerController> caller)
//{
////    if(contextPath == 0) {
////        return 0;
////    }
////    auto relative = ContextUtils::isRelative(contextPath);
////    if(relative) {
////        contextPath = contextPath)->substring(1);
////    }
////    auto cur = relative ? java_cast< Context* >(this) : java_cast< Context* >(getRoot());
////    if(contextPath)->length() == 0) {
////        return cur;
////    }
////    auto lastName = java_cast< Context* >(getRoot()))->getName();
////    auto names = ::com::tibbo::aggregate::common::util::StringUtils::split(contextPath, ContextUtils::CONTEXT_NAME_SEPARATOR())->charAt(int(0)));
////    for (auto _i = names)->iterator(); _i->hasNext(); ) {
////        const std::string & child = java_cast< const std::string & >(_i->next());
////        {
////            if(child)->length() == 0) {
////                return 0;
////            }
////            if(cur == 0) {
////                break;
////            }
////            lastName = cur)->getName();
////            cur = java_cast< Context* >(java_cast< Context* >(cur)->getChild(child, caller)));
////        }
////    }
////    if(cur == 0) {
////        Log::CONTEXT_CHILDREN())->debug("Context '"+contextPath)
////            +"' not found in '")
////            +getPath())
////            +"', last found: '")
////            +lastName)
////            +"'");
////    }
////    return cur;
//	return 0;
//}
//
//void* AbstractContext::get(const std::string & contextName)
//{
////    return java_cast< Context* >(get(contextName, static_cast< boost::shared_ptr<CallerController> >(0)));
//	return 0;
//}
//
//boost::shared_ptr<Permissions> AbstractContext::getPermissions()
//{
////    if(!permissionCheckingEnabled) {
////        return DEFAULT_PERMISSIONS();
////    }
////    if(permissions != 0) {
////        return permissions;
////    }
////    if(java_cast< Context* >(getParent()) != 0) {
////        return java_cast< Context* >(getParent()))->getPermissions();
////    }
////    return DEFAULT_PERMISSIONS();
//
//	return 0;
//}
//
//void AbstractContext::setName(const std::string &name)
//{
//   // path;
//   // if(!ContextUtils::isValidContextName(name)) 
//	//{
//   //     throw new ::java::lang::IllegalArgumentException(Cres::get()->getString("conIllegalName"))+name)->toString());
//   // }
//    this->name = name;
//}
////
////void AbstractContext::setParent(Context* parent)
////{
////    this->parent = parent;
////}
////
////void AbstractContext::setPermissions(boost::shared_ptr<Permissions> permissions)
////{
////    this->permissions = permissions;
////}
////
////void AbstractContext::setPermissionChecker(PermissionChecker* permissionChecker)
////{
////    this->permissionChecker = permissionChecker;
////}
////
////void AbstractContext::setFireUpdateEvents(bool fireUpdateEvents)
////{
////    this->fireUpdateEvents = fireUpdateEvents;
////}
////
////bool AbstractContext::isFireUpdateEvents()
////{
////    return fireUpdateEvents;
////}
////
////void AbstractContext::setContextManager(ContextManager* contextManager)
////{
////    if(java_cast< ContextManager* >(this->contextManager) != 0 && java_cast< ContextManager* >(this->contextManager)) != contextManager)) {
////        throw new ::java::lang::IllegalStateException("Context manager already set");
////    }
////    this->contextManager = contextManager;
////}
////
////void AbstractContext::setChildrenViewPermissions(boost::shared_ptr<Permissions> childrenViewPermissions)
////{
////    this->childrenViewPermissions = childrenViewPermissions;
////}
////
////void AbstractContext::setChildrenSortingEnabled(bool childrenSortingEnabled)
////{
////    this->childrenSortingEnabled = childrenSortingEnabled;
////}
////
////bool AbstractContext::isChildrenSortingEnabled()
////{
////    return childrenSortingEnabled;
////}
////
////void AbstractContext::setValueCheckingEnabled(bool valueCheckingEnabled)
////{
////    this->valueCheckingEnabled = valueCheckingEnabled;
////}
////
////bool AbstractContext::isChildrenConcurrencyEnabled()
////{
////    return childrenConcurrencyEnabled;
////}
////
////void AbstractContext::setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled)
////{
////    this->childrenConcurrencyEnabled = childrenConcurrencyEnabled;
////}
////
////void AbstractContext::checkPermissions(boost::shared_ptr<Permissions> needPermissions, boost::shared_ptr<CallerController> caller)
////{
////    if(!checkPermissions(needPermissions, caller, this)) {
////        throw new ContextSecurityException(::java::text::MessageFormat::format(Cres::get()->getString("conAccessDenied"), new voidArray({getPath()), caller != 0 ? caller)->getPermissions()) : ""), needPermissions)})));
////    }
////}
////
////bool AbstractContext::checkPermissions(boost::shared_ptr<Permissions> needPermissions, boost::shared_ptr<CallerController> caller, Context* accessedContext)
////{
////    if(!permissionCheckingEnabled) {
////        return true;
////    }
////    return getPermissionChecker())->has(caller, needPermissions, accessedContext);
////}
////
////void AbstractContext::addChild(Context* child)
////{
////    addChild(child, 0);
////}
////
////void AbstractContext::addChild(Context* child, int  index)
////{
////    auto startTime = ::java::lang::System::currentTimeMillis();
////    childrenLock)->writeLock())->lock();
////    {
////        auto finally2 = finally([&] {
////            childrenLock)->writeLock())->unlock();
////        });
////        {
////            auto existing = java_cast< Context* >(getChildWithoutCheckingPerms(child)->getName()));
////            if(existing != 0) {
////                throw new ::java::lang::IllegalArgumentException(::java::text::MessageFormat::format(Cres::get()->getString("conChildExists"), new voidArray({child)->getName()), getPath())})));
////            }
////            if(index != 0) {
////                if(childrenSortingEnabled) {
////                    throw new ::java::lang::IllegalStateException("Cannot add child with pre-defined index as children sorting is enabled");
////                }
////                children)->add((index))->intValue(), child);
////            } else {
////                children)->add(child));
////            }
////            childrenMap)->put(child)->getName(), child);
////            if(childrenSortingEnabled) {
////                ::java::util::Collections::sort(children);
////            }
////        }
////    }
////
////    try {
////        child)->setParent(this);
////        child)->setup(getContextManager());
////        if(setupComplete && fireUpdateEvents) {
////            fireEvent(E_CHILD_ADDED(), new voidArray({child)->getName())}));
////        }
////        if(getContextManager() != 0) {
////            getContextManager())->contextAdded(child);
////        }
////    } catch (::java::lang::Exception* ex) {
////        childrenLock)->writeLock())->lock();
////        {
////            auto finally3 = finally([&] {
////                childrenLock)->writeLock())->unlock();
////            });
////            {
////                childrenMap)->remove(child)->getName());
////                children)->remove(child));
////                throw new ContextRuntimeException("Error adding child '"+child)->toString())
////    +"' to context '")
////    +toString())
////    +"': ")
////    +ex)->getMessage())->toString(), ex);
////            }
////        }
////
////    }
////    Log::CONTEXT_CHILDREN())->debug("Added child '"+child)->getName())
////        +"' to '")
////        +getPath())
////        +"' in ")
////        +(::java::lang::System::currentTimeMillis() - startTime))
////        +" ms");
////}
////
////void AbstractContext::removeFromParent()
////{
////    if(java_cast< Context* >(getParent()) != 0) {
////        java_cast< Context* >(getParent()))->removeChild(static_cast< Context* >(this));
////        setParent(static_cast< Context* >(0));
////    } else {
////        Log::CONTEXT_CHILDREN())->debug("Can't remove context '"+getPath())
////            +"' from its parent: no parent context was set");
////    }
////}
////
//void AbstractContext::destroy(bool moving)
//{
////    if(!moving) {
////        stop();
////        destroyChildren(false);
////    }
////    if(fireUpdateEvents) {
////        auto ed = getEventDefinition(E_DESTROYED());
////        if(ed != 0) {
////            fireEvent(ed)->getName());
////        }
////    }
////    eventDataLock)->readLock())->lock();
////    {
////        auto finally4 = finally([&] {
////            eventDataLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = eventData)->values())->iterator(); _i->hasNext(); ) {
////                EventData* ed = java_cast< EventData* >(_i->next());
////                {
////                    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
////                    if(logger)->isDebugEnabled()) {
////                        logger)->debug("Removing all listeners of event '"+ed)->getDefinition())->getName())
////            +"'");
////                    }
////                    ed)->clearListeners();
////                }
////            }
////        }
////    }
////
////    removeFromParent();
//}
////
////void AbstractContext::destroyChildren(bool moving)
////{
////    childrenLock)->writeLock())->lock();
////    {
////        auto finally5 = finally([&] {
////            childrenLock)->writeLock())->unlock();
////        });
////        {
////            for (auto _i = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children))->iterator(); _i->hasNext(); ) {
////                Context* child = java_cast< Context* >(_i->next());
////                {
////                    child)->destroy(moving);
////                }
////            }
////        }
////    }
////
////}
////
//void AbstractContext::removeChild(Context* child)
//{
////    child)->teardown();
////    childrenLock)->writeLock())->lock();
////    {
////        auto finally6 = finally([&] {
////            childrenLock)->writeLock())->unlock();
////        });
////        {
////            if(children)->contains(child))) {
////                if(getContextManager() != 0) {
////                    try {
////                        child)->accept(new AbstractContext_removeChild_3(this, child));
////                    } catch (ContextException* ex) {
////                        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
////                    }
////                }
////                childrenMap)->remove(child)->getName());
////                children)->remove(child));
////                if(setupComplete && fireUpdateEvents) {
////                    fireEvent(E_CHILD_REMOVED(), new voidArray({child)->getName())}));
////                }
////            }
////        }
////    }
////
//}
//
//void AbstractContext::removeChild(const std::string & name)
//{
////    auto con = java_cast< Context* >(getChildWithoutCheckingPerms(name));
////    if(con != 0) {
////        removeChild(con);
////        return;
////    }
////    Log::CONTEXT_CHILDREN())->debug("Remove error: child '"+name)
////        +"' not found in context ")
////        +getPath())->toString());
//}
////
////void AbstractContext::reorderChild(Context* child, int index)
////{
////    if(childrenSortingEnabled) {
////        throw new ::java::lang::IllegalStateException("Cannot reorder children when children sorting is enabled");
////    }
////    childrenLock)->writeLock())->lock();
////    {
////        auto finally7 = finally([&] {
////            childrenLock)->writeLock())->unlock();
////        });
////        {
////            auto oi = children)->indexOf(child);
////            if(children)->remove(child))) {
////                children)->add(index - (oi < index ? int(1) : int(0)), child);
////            }
////        }
////    }
////
////}
////
//void AbstractContext::destroyChild(Context* child, bool moving)
//{
////    child)->destroy(moving);
//}
////
//void AbstractContext::destroyChild(const std::string & name, bool moving)
//{
////    auto con = java_cast< Context* >(getChildWithoutCheckingPerms(name));
////    if(con != 0) {
////        destroyChild(con, moving);
////        return;
////    }
////    Log::CONTEXT_CHILDREN())->warn("Destroy error: child '"+name)
////        +"' not found in context ")
////        +getPath())->toString());
//}
////
////void AbstractContext::removeAllChildren()
////{
////    childrenLock)->readLock())->lock();
////    {
////        auto finally8 = finally([&] {
////            childrenLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = children)->iterator(); _i->hasNext(); ) {
////                Context* child = java_cast< Context* >(_i->next());
////                {
////                    removeChild(child);
////                }
////            }
////        }
////    }
////
////}
////
////void AbstractContext::movePrepare(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName)
////{
////}
////
////void AbstractContext::moveInternal(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName)
////{
////    setName(newName);
////    childrenLock)->readLock())->lock();
////    {
////        auto finally9 = finally([&] {
////            childrenLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = children)->iterator(); _i->hasNext(); ) {
////                Context* child = java_cast< Context* >(_i->next());
////                {
////                    (java_cast< AbstractContext* >(child)))->moveInternal(ContextUtils::createName(new std::stringArray({oldPath, child)->getName()})), child)->getName(), ContextUtils::createName(new std::stringArray({newPath, child)->getName()})), child)->getName());
////                }
////            }
////        }
////    }
////
////}
////
////void AbstractContext::moveFinalize(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName)
////{
////}
////
////void AbstractContext::move(Context* newParent, const std::string & newName)
////{
////    move(getPath(), newParent, newName);
////}
////
////void AbstractContext::move(const std::string & oldPath, Context* newParent, const std::string & newName)
////{
////    Log::CONTEXT())->debug("Moving context "+getPath())
////        +" to ")
////        +newParent)->getPath())
////        +" and/or renaming to ")
////        +newName)->toString());
////    auto oldName = getName();
////    auto newPath = ContextUtils::createName(new std::stringArray({newParent)->getPath(), newName}));
////    movePrepare(oldPath, oldName, newPath, newName);
////    java_cast< Context* >(getParent()))->destroyChild(static_cast< Context* >(this), true);
////    moveInternal(oldPath, oldName, newPath, newName);
////    newParent)->addChild(this);
////    moveFinalize(oldPath, oldName, newPath, newName);
////}
////
//void* AbstractContext::getChild(const std::string & name, boost::shared_ptr<CallerController> caller)
//{
////    if(!checkPermissions(getChildrenViewPermissions(), caller, this)) {
////        return 0;
////    }
////    auto child = java_cast< Context* >(getChildWithoutCheckingPerms(name));
////    if(child != 0 && shouldSeeChild(caller, child)) {
////        return child;
////    }
//    return 0;
//}
//
//void* AbstractContext::getChild(const std::string & name)
//{
////    return java_cast< Context* >(getChild(name, static_cast< boost::shared_ptr<CallerController> >(0)));
//	return 0;
//}
//
////Context* AbstractContext::getChildWithoutCheckingPerms(const std::string & name)
////{
////    return java_cast< Context* >(childrenMap)->get(name));
////}
////
////std::string AbstractContext::getPath()
////{
////    if(java_cast< Context* >(getParent()) == 0) {
////        return createPath();
////    }
////    if(path == 0) {
////        path = createPath();
////    }
////    return path;
////}
////
////std::string AbstractContext::createPath()
////{
////    Context* con = this;
////    auto nm = getName();
////    do {
////        con = java_cast< Context* >(con)->getParent());
////        if(con != 0) {
////            if(java_cast< Context* >(con)->getParent()) != 0) {
////                nm = con)->getName())+ContextUtils::CONTEXT_NAME_SEPARATOR())
////    +nm)->toString();
////            }
////        }
////    } while (con != 0);
////    return nm;
////}
////
//bool AbstractContext::addEventListener(const std::string & name, ContextEventListener* listener)
//{
//    return addEventListener(name, listener, false);
//}
//
//bool AbstractContext::addEventListener(const std::string & name, ContextEventListener* listener, bool weak)
//{
////    auto ed = getEventData(name);
////    if(ed == 0) {
////        throw new ::java::lang::IllegalArgumentException(Cres::get()->getString("conEvtNotAvail"))+name)->toString());
////    }
////    {
////        synchronized synchronized_0(ed);
////        {
////            try {
////                checkPermissions(ed)->getDefinition())->getPermissions() != 0 ? ed)->getDefinition())->getPermissions() : getPermissions(), listener)->getCallerController());
////            } catch (ContextSecurityException* ex) {
////                Log::CONTEXT_EVENTS())->warn("Error adding listener '"+listener))
////    +"' of event '")
////    +ed)->getDefinition())->getName())
////    +"' in context '")
////    +getPath())
////    +"': ")
////    +ex)->getMessage())->toString(), new ::java::lang::Exception());
////                return false;
////            }
////            auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
////            if(logger)->isDebugEnabled()) {
////                logger)->debug("Adding '"+listener))
////    +"' as listener of event '")
////    +ed)->getDefinition())->getName())
////    +"' in '")
////    +getPath())
////    +"'");
////            }
////            return ed)->addListener(listener, weak);
////        }
////    }
// return true;
//}
//
//bool AbstractContext::removeEventListener(const std::string & name, ContextEventListener* listener)
//{
////    auto ed = getEventData(name);
////    if(ed == 0) {
////        Log::CONTEXT_EVENTS())->warn("Error removing listener of event '"+name)
////            +"' in context '")
////            +getPath())
////            +"': event definition not found", new ::java::lang::Exception());
////        return false;
////    }
////    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
////    if(logger)->isDebugEnabled()) {
////        logger)->debug("Removing '"+listener))
////            +"' listener of event '")
////            +ed)->getDefinition())->getName())
////            +"' in '")
////            +getPath())
////            +"'");
////    }
////    {
////        synchronized synchronized_1(ed);
////        {
////            return ed)->removeListener(listener);
////        }
////    }
//
// return true;
//}
//
//std::list<VariableDefinition*>  AbstractContext::getVariableDefinitions(boost::shared_ptr<CallerController> caller)
//{
////return getVariableDefinitions(caller, false);
//std::list<VariableDefinition*> list;
// return list;
//}
//
//std::list<VariableDefinition*>  AbstractContext::getVariableDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden)
//{
//    std::list<VariableDefinition*>  list;
////    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
////    variableDataLock)->readLock())->lock();
////    {
////        auto finally10 = finally([&] {
////            variableDataLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = variableData)->values())->iterator(); _i->hasNext(); ) {
////                VariableData* d = java_cast< VariableData* >(_i->next());
////                {
////                    auto def = d)->getDefinition();
////                    if((caller == 0 || caller)->isPermissionCheckingEnabled()) && !includeHidden && def)->isHidden()&& !debug) {
////                        continue;
////                    }
////                    auto readAccessGranted = checkPermissions(def)->getReadPermissions() != 0 ? def)->getReadPermissions() : getPermissions(), caller, this);
////                    auto writeAccessGranted = checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller, this);
////                    if(!readAccessGranted && !writeAccessGranted) {
////                        continue;
////                    }
////                    if((def)->isReadable() == readAccessGranted) && (def)->isWritable() == writeAccessGranted)) {
////                        list)->add(def));
////                    } else {
////                        auto clone = def)->clone();
////                        clone)->setReadable(def)->isReadable() ? readAccessGranted : false);
////                        clone)->setWritable(def)->isWritable() ? writeAccessGranted : false);
////                        list)->add(clone));
////                    }
////                }
////            }
////        }
////    }
////
//    return list;
//}
//
//std::list<VariableDefinition*>  AbstractContext::getVariableDefinitions()
//{
//   return getVariableDefinitions(0);
//}
//
//std::list<VariableDefinition*>  AbstractContext::getVariableDefinitions(boost::shared_ptr<CallerController> caller, const std::string & group)
//{
//  std::list<VariableDefinition*>  defs;
////    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        VariableDefinition* vd = java_cast< VariableDefinition* >(_i->next());
////        {
////            if(vd)->getGroup() != 0 && (::com::tibbo::aggregate::common::util::Util::equals(group, vd)->getGroup()) || vd)->getGroup())->startsWith(group)+ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
////                defs)->add(vd));
////            }
////        }
////    }
//  return defs;
//}
//
//std::list<VariableDefinition*>  AbstractContext::getVariableDefinitions(const std::string & group)
//{
//   return getVariableDefinitions(0, group);
//}
////
////PermissionChecker* AbstractContext::getPermissionChecker()
////{
////    return permissionChecker;
////}
////
//boost::shared_ptr<Permissions> AbstractContext::getChildrenViewPermissions()
//{
//    return childrenViewPermissions != 0 ? childrenViewPermissions : getPermissions();
//}
////
//ContextManager* AbstractContext::getContextManager()
//{
//    return contextManager;
//}
//
// /*template <class C> */bool AbstractContext/*<C> */::isSetupComplete()
//{
//    return setupComplete;
//}
//
//bool AbstractContext::isStarted()
//{
//    return started;
//}
//
//bool AbstractContext ::isInitializedInfo()
//{
//    return setupComplete;
//}
//
//bool AbstractContext ::isInitializedChildren()
//{
//    return setupComplete;
//}
//
//bool AbstractContext::isInitializedVariables()
//{
//    return setupComplete;
//}
//
//bool AbstractContext::isInitializedFunctions()
//{
//    return setupComplete;
//}
//
//bool AbstractContext::isInitializedEvents()
//{
//    return setupComplete;
//}
//
//std::list<boost::shared_ptr<FunctionDefinition>>  AbstractContext::getFunctionDefinitions(boost::shared_ptr<CallerController> caller)
//{
//  return getFunctionDefinitions(caller, false);
//}
//
//std::list<boost::shared_ptr<FunctionDefinition>>  AbstractContext::getFunctionDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden)
//{
//   std::list<boost::shared_ptr<FunctionDefinition>>  list;
////    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
////    functionDataLock)->readLock())->lock();
////    {
////        auto finally11 = finally([&] {
////            functionDataLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = functionData)->values())->iterator(); _i->hasNext(); ) {
////                FunctionData* d = java_cast< FunctionData* >(_i->next());
////                {
////                    auto def = d)->getDefinition();
////                    if(!checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller, this)) {
////                        continue;
////                    }
////                    if((caller == 0 || caller)->isPermissionCheckingEnabled()) && !includeHidden && def)->isHidden()&& !debug) {
////                        continue;
////                    }
////                    list)->add(def));
////                }
////            }
////        }
////    }
////
//    return list;
//}
//
//std::list<boost::shared_ptr<FunctionDefinition>>  AbstractContext::getFunctionDefinitions()
//{
//    return getFunctionDefinitions(0);
//}
//
//std::list<boost::shared_ptr<FunctionDefinition>>  AbstractContext ::getFunctionDefinitions(boost::shared_ptr<CallerController> caller, const std::string & group)
//{
//  std::list<boost::shared_ptr<FunctionDefinition>> defs;
////    for (auto _i = getFunctionDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        boost::shared_ptr<FunctionDefinition> fd = java_cast< boost::shared_ptr<FunctionDefinition> >(_i->next());
////        {
////            if(fd)->getGroup() != 0 && (::com::tibbo::aggregate::common::util::Util::equals(group, fd)->getGroup()) || fd)->getGroup())->startsWith(group)+ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
////                defs)->add(fd));
////            }
////        }
////    }
//  return defs;
//}
//
//std::list<boost::shared_ptr<FunctionDefinition>>  /*template <class C> */AbstractContext/*<C>*/ ::getFunctionDefinitions(const std::string & group)
//{
//  return getFunctionDefinitions(0, group);
//}
//
////java::util::concurrent::locks::ReentrantReadWriteLock* AbstractContext::getChildrenLock()
////{
////    return childrenLock;
////}
//
//std::string AbstractContext::getType()
//{
//   // return type != 0 ? type : ContextUtils::getTypeForClass(getClass());
//	return "";
//}
//
////bool AbstractContext::isPermissionCheckingEnabled()
////{
////    return permissionCheckingEnabled;
////}
////
//std::string AbstractContext::getIconId()
//{
//    return iconId;
//}
//
//int AbstractContext::getIndex()
//{
//    return index;
//}
//
//std::string AbstractContext::getGroup()
//{
//    return group;
//}
////
////std::string AbstractContext::getLocalRoot()
////{
////    return Contexts::CTX_ROOT();
////}
////
//bool AbstractContext::isProxy()
//{
//    return false;
//}
//
//bool AbstractContext::isDistributed()
//{
//    return false;
//}
//
//std::string AbstractContext::getRemoteRoot()
//{
//    return 0;
//}
//
//std::string AbstractContext::getRemotePath()
//{
//    return getPath();
//}
//
////std::string AbstractContext::getRemotePrimaryRoot()
////{
////    return 0;
////}
////
////void AbstractContext::setType(const std::string & type)
////{
////    if(!ContextUtils::isValidContextType(type)) {
////        throw new ::java::lang::IllegalArgumentException(Cres::get()->getString("conIllegalType"))+type)->toString());
////    }
////    auto old = this->type;
////    this->type = type;
////    if(old == 0 || !old)->equals(type))) {
////        contextInfoChanded();
////    }
////}
////
////void AbstractContext::setPermissionCheckingEnabled(bool permissionCheckingEnabled)
////{
////    this->permissionCheckingEnabled = permissionCheckingEnabled;
////}
////
////void AbstractContext::setIconId(const std::string & iconId)
////{
////    auto old = this->iconId;
////    this->iconId = iconId;
////    if(old == 0 || !old)->equals(iconId))) {
////        contextInfoChanded();
////    }
////}
////
////void AbstractContext::contextInfoChanded()
////{
////    if(setupComplete) {
////        auto cm = getContextManager();
////        if(cm != 0) {
////            cm)->contextInfoChanged(this);
////        }
////        if(fireUpdateEvents) {
////            auto ed = getEventDefinition(E_INFO_CHANGED());
////            if(ed != 0) {
////                fireEvent(E_INFO_CHANGED(), createContextInfoTable());
////            }
////        }
////    }
////}
////
////void AbstractContext::setIndex(int  index)
////{
////    this->index = index;
////}
////
////void AbstractContext::setGroup(const std::string & group)
////{
////    auto old = this->group;
////    this->group = group;
////    if(old == 0 || !old)->equals(group))) {
////        contextInfoChanded();
////    }
////}
////
////std::list  AbstractContext::getEventDefinitions(boost::shared_ptr<CallerController> caller)
////{
////    return getEventDefinitions(caller, false);
////}
////
////std::list  AbstractContext::getEventDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden)
////{
////    std::list  list = new ::java::util::LinkedList();
////    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
////    eventDataLock)->readLock())->lock();
////    {
////        auto finally12 = finally([&] {
////            eventDataLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = eventData)->values())->iterator(); _i->hasNext(); ) {
////                EventData* d = java_cast< EventData* >(_i->next());
////                {
////                    if(!checkPermissions(d)->getDefinition())->getPermissions() != 0 ? d)->getDefinition())->getPermissions() : getPermissions(), caller, this)) {
////                        continue;
////                    }
////                    if((caller == 0 || caller)->isPermissionCheckingEnabled()) && !includeHidden && d)->getDefinition())->isHidden()&& !debug) {
////                        continue;
////                    }
////                    list)->add(d)->getDefinition()));
////                }
////            }
////        }
////    }
////
////    return list;
////}
////
////std::list  AbstractContext::getEventDefinitions()
////{
////    return getEventDefinitions(static_cast< boost::shared_ptr<CallerController> >(0));
////}
////
////std::list  AbstractContext::getEventDefinitions(boost::shared_ptr<CallerController> caller, const std::string & group)
////{
////    std::list  res = new ::java::util::LinkedList();
////    for (auto _i = getEventDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        boost::shared_ptr<EventDefinition> ed = java_cast< boost::shared_ptr<EventDefinition> >(_i->next());
////        {
////            if(ed)->getGroup() != 0 && (::com::tibbo::aggregate::common::util::Util::equals(group, ed)->getGroup()) || ed)->getGroup())->startsWith(group)+ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
////                res)->add(ed));
////            }
////        }
////    }
////    return res;
////}
////
////std::list  AbstractContext::getEventDefinitions(const std::string & group)
////{
////    return getEventDefinitions(static_cast< boost::shared_ptr<CallerController> >(0), group);
////}
////
////com::tibbo::aggregate::common::action::ActionDefinition* AbstractContext::getActionDefinition(const std::string & name)
////{
////    actionDefinitionsLock)->readLock())->lock();
////    {
////        auto finally13 = finally([&] {
////            actionDefinitionsLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = actionDefinitions)->iterator(); _i->hasNext(); ) {
////                ::com::tibbo::aggregate::common::action::ActionDefinition* def = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
////                {
////                    if(def)->getName())->equals(name))) {
////                        return def;
////                    }
////                }
////            }
////        }
////    }
////
////    return 0;
////}
////
////com::tibbo::aggregate::common::action::ActionDefinition* AbstractContext::getActionDefinition(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    for (auto _i = getActionDefinitions(caller, true))->iterator(); _i->hasNext(); ) {
////        ::com::tibbo::aggregate::common::action::ActionDefinition* ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
////        {
////            if(ad)->getName())->equals(name))) {
////                return ad;
////            }
////        }
////    }
////    return 0;
////}
////
////com::tibbo::aggregate::common::action::ActionDefinition* AbstractContext::getDefaultActionDefinition(boost::shared_ptr<CallerController> caller)
////{
////    for (auto _i = getActionDefinitions(caller, true))->iterator(); _i->hasNext(); ) {
////        ::com::tibbo::aggregate::common::action::ActionDefinition* ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
////        {
////            if(ad)->isDefault()) {
////                return ad;
////            }
////        }
////    }
////    return 0;
////}
////
////std::list  AbstractContext::getActionDefinitions(boost::shared_ptr<CallerController> caller)
////{
////    return getActionDefinitions(caller, false);
////}
////
////void AbstractContext::addActionDefinition(::com::tibbo::aggregate::common::action::ActionDefinition* def)
////{
////    if(def)->getName() == 0) {
////        throw new ::java::lang::NullPointerException("Action name can't be NULL");
////    }
////    if(getActionDefinition(def)->getName()) != 0) {
////        throw new ::java::lang::IllegalArgumentException("Action '"+def)->getName())
////            +"' is already defined in context '")
////            +getPath())
////            +"'");
////    }
////    actionDefinitionsLock)->writeLock())->lock();
////    {
////        auto finally14 = finally([&] {
////            actionDefinitionsLock)->writeLock())->unlock();
////        });
////        {
////            actionDefinitions)->add(def));
////            ::java::util::Collections::sort(actionDefinitions);
////            if(isSetupComplete() && isFireUpdateEvents()) {
////                auto ed = getEventDefinition(AbstractContext::E_ACTION_ADDED());
////                if(ed != 0) {
////                    fireEvent(ed)->getName(), actDefToDataRecord(def))->wrap());
////                }
////            }
////        }
////    }
////
////}
////
////std::list  AbstractContext::getActionDefinitions(boost::shared_ptr<CallerController> caller, bool includeHidden)
////{
////    std::list  list = new ::java::util::LinkedList();
////    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
////    actionDefinitionsLock)->readLock())->lock();
////    {
////        auto finally15 = finally([&] {
////            actionDefinitionsLock)->readLock())->unlock();
////        });
////        {
////            for (auto _i = actionDefinitions)->iterator(); _i->hasNext(); ) {
////                ::com::tibbo::aggregate::common::action::ActionDefinition* d = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
////                {
////                    if(!checkPermissions(d)->getPermissions() != 0 ? d)->getPermissions() : getPermissions(), caller, this)) {
////                        continue;
////                    }
////                    if(d)->isHidden() && !debug && !includeHidden) {
////                        continue;
////                    }
////                    list)->add(d));
////                }
////            }
////        }
////    }
////
////    return list;
////}
////
////std::list  AbstractContext::getActionDefinitions()
////{
////    return getActionDefinitions(static_cast< boost::shared_ptr<CallerController> >(0));
////}
////
////void AbstractContext::removeActionDefinition(const std::string & name)
////{
////    auto def = getActionDefinition(name);
////    actionDefinitionsLock)->writeLock())->lock();
////    {
////        auto finally16 = finally([&] {
////            actionDefinitionsLock)->writeLock())->unlock();
////        });
////        {
////            if(actionDefinitions)->remove(def))) {
////                if(isSetupComplete() && isFireUpdateEvents()) {
////                    auto ed = getEventDefinition(AbstractContext::E_ACTION_REMOVED());
////                    if(ed != 0) {
////                        fireEvent(ed)->getName(), new voidArray({name)}));
////                    }
////                }
////            }
////        }
////    }
////
////}
////
////com::tibbo::aggregate::common::action::ActionDefinition* AbstractContext::actDefFromDataRecord(::DataRecord* rec)
////{
////    auto def = new ::com::tibbo::aggregate::common::action::BasicActionDefinition(rec)->getString(ActionConstants::FIELD_AD_NAME()));
////    def)->setDescription(rec)->getString(ActionConstants::FIELD_AD_DESCRIPTION()));
////    def)->setHelp(rec)->getString(ActionConstants::FIELD_AD_HELP()));
////    auto accelerator = rec)->getString(ActionConstants::FIELD_AD_ACCELERATOR());
////    if(accelerator != 0) {
////        def)->setAccelerator(new ::com::tibbo::aggregate::common::action::KeyStroke(accelerator));
////    }
////    auto dropSourcesTable = rec)->getDataTable(ActionConstants::FIELD_AD_DROP_SOURCES());
////    if(dropSourcesTable != 0 && dropSourcesTable)->getRecordCount() > 0) {
////        std::list  dropSources = new ::java::util::LinkedList();
////        for (auto _i = dropSourcesTable)->iterator(); _i->hasNext(); ) {
////            ::DataRecord* ds = java_cast< ::DataRecord* >(_i->next());
////            {
////                dropSources)->add(new ::com::tibbo::aggregate::common::action::TreeMask(ds)->getString(ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK()))));
////            }
////        }
////        def)->setDropSources(dropSources);
////    }
////    def)->setHidden((rec)->getBoolean(ActionConstants::FIELD_AD_HIDDEN())))->booleanValue());
////    def)->setEnabled((rec)->getBoolean(ActionConstants::FIELD_AD_ENABLED())))->booleanValue());
////    def)->setIconId(rec)->getString(ActionConstants::FIELD_AD_ICON_ID()));
////    def)->setGroup(rec)->getString(ActionConstants::FIELD_AD_GROUP()));
////    auto executionGroup = rec)->getString(ActionConstants::FIELD_AD_EXECUTION_GROUP());
////    if(executionGroup != 0) {
////        def)->setExecutionGroup(new ::com::tibbo::aggregate::common::action::GroupIdentifier(executionGroup));
////    }
////    def)->setDefault((rec)->getBoolean(ActionConstants::FIELD_AD_DEFAULT())))->booleanValue());
////    return def;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVariable(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    auto startTime = ::java::lang::System::currentTimeMillis();
////    setupVariables();
////    auto data = getVariableData(def)->getName());
////    lock(request, data)->getReadWriteLock())->readLock());
////    {
////        auto finally17 = finally([&] {
////            data)->getReadWriteLock())->readLock())->unlock();
////            data)->registerGetOperation();
////        });
////        {
////            try {
////                checkPermissions(def)->getReadPermissions() != 0 ? def)->getReadPermissions() : getPermissions(), caller);
////                if(Log::CONTEXT_VARIABLES())->isDebugEnabled()) {
////                    Log::CONTEXT_VARIABLES())->debug("Trying to get variable '"+def)->getName())
////        +"' from context '")
////        +this->getPath())
////        +"'");
////                }
////                auto result = executeGetter(data, caller, request);
////                if(result)->isInvalid()) {
////                    throw new ContextException(result)->getInvalidationMessage());
////                }
////                result = checkVariableValue(def, result);
////                auto endTime = ::java::lang::System::currentTimeMillis();
////                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
////                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
////                    Log::PERFORMANCE())->log(level, "Getting value of variable '"+def))
////        +"' in context '")
////        +getPath())
////        +"' took ")
////        +(endTime - startTime))
////        +" milliseconds");
////                }
////                return result;
////            } catch (::java::lang::Exception* ex) {
////                throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conErrGettingVar"), new voidArray({def)->toString()), toString())})))+ex)->getMessage())->toString(), ex);
////            }
////        }
////    }
////
////}
////
////boost::shared_ptr<DataTable> AbstractContext::checkVariableValue(VariableDefinition* def, ::boost::shared_ptr<DataTable> val)
////{
////    if(!valueCheckingEnabled) {
////        return val;
////    }
////    auto value = val;
////    auto msg = checkVariableValueFormat(def, value);
////    if(msg != 0) {
////        Log::CONTEXT_VARIABLES())->debug("Invalid value of variable '"+def)->getName())
////            +"': ")
////            +msg)->toString());
////        auto newValue = getDefaultValue(def);
////        ::DataTableReplication::copy(value, newValue, true, true, true, true, true);
////        auto converters = def)->getCompatibilityConverters();
////        if(converters != 0) {
////            for (auto _i = converters)->iterator(); _i->hasNext(); ) {
////                CompatibilityConverter* converter = java_cast< CompatibilityConverter* >(_i->next());
////                {
////                    try {
////                        newValue = converter)->convert(value, newValue);
////                    } catch (::java::lang::Exception* ex) {
////                        Log::CONTEXT_VARIABLES())->warn("Error converting value of variable '"+def)->getName())
////            +"' by '")
////            +converter))
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////                    }
////                }
////            }
////        }
////        value = newValue;
////        checkVariableValueFormat(def, value);
////    }
////    return value;
////}
////
////std::string AbstractContext::checkVariableValueFormat(VariableDefinition* def, ::boost::shared_ptr<DataTable> table)
////{
////    if(!valueCheckingEnabled) {
////        return 0;
////    }
////    auto requiredFormat = def)->getFormat();
////    if(requiredFormat != 0) {
////        auto msg = table)->conformMessage(requiredFormat);
////        if(msg != 0) {
////            return "Invalid format: "+msg)->toString();
////        }
////    }
////    return 0;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeGetter(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    auto result = executeGetterMethod(data, caller, request);
////    if(result != 0) {
////        return result;
////    }
////    auto def = data)->getDefinition();
////    if(def)->getGetter() != 0) {
////        result = def)->getGetter())->get(this, def, caller, request);
////    }
////    if(result != 0) {
////        return result;
////    }
////    result = getVariableImpl(def, caller, request);
////    if(result != 0) {
////        return result;
////    }
////    return executeDefaultGetter(def, caller, false, true);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeGetterMethod(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    if(!data)->isGetterCached()) {
////        auto params = (new ::java::lang::ClassArray({
////            static_cast< ::java::lang::Class* >(VariableDefinition::class_())
////            , static_cast< ::java::lang::Class* >(CallerController::class_())
////            , static_cast< ::java::lang::Class* >(RequestController::class_())
////        }));
////        {
////            auto finally18 = finally([&] {
////                data)->setGetterCached(true);
////            });
////            try {
////                auto getter = getClass())->getMethod(GETTER_METHOD_PREFIX())+data)->getDefinition())->getName())->toString(), params);
////                data)->setGetterMethod(getter);
////            } catch (::java::lang::NoSuchMethodException* ex) {
////                return 0;
////            }
////        }
////    }
////    auto getter = data)->getGetterMethod();
////    if(getter != 0) {
////        try {
////            return java_cast< ::boost::shared_ptr<DataTable> >(getter)->invoke(this, new voidArray({
////                data)->getDefinition())
////                , caller)
////                , request)
////            })));
////        } catch (::java::lang::reflect::InvocationTargetException* ex) {
////            throw new ContextException(ex)->getCause())->getMessage(), ex)->getCause());
////        }
////    }
////    return 0;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeDefaultGetter(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    return executeDefaultGetter(name, caller, true);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeDefaultGetter(const std::string & name, boost::shared_ptr<CallerController> caller, bool check)
////{
////    return executeDefaultGetter(name, caller, check, true);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeDefaultGetter(const std::string & name, boost::shared_ptr<CallerController> caller, bool check, bool createDefault)
////{
////    auto def = getVariableDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conVarNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    return executeDefaultGetter(def, caller, check, createDefault);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeDefaultGetter(VariableDefinition* def, boost::shared_ptr<CallerController> caller, bool check, bool createDefault)
////{
////    auto value = executeDefaultGetterImpl(def, caller);
////    if(value == 0) {
////        return createDefault ? getDefaultValue(def) : static_cast< ::boost::shared_ptr<DataTable> >(0);
////    }
////    return check ? checkVariableValue(def, value) : value;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeDefaultGetterImpl(VariableDefinition* vd, boost::shared_ptr<CallerController> caller)
////{
////    auto value = getVariableData(vd)->getName()))->getValue();
////    return value != 0 ? java_cast< ::boost::shared_ptr<DataTable> >(value) : getDefaultValue(vd);
////}
////
////int AbstractContext::hashCode()
////{
////    if(java_cast< Context* >(getParent()) == 0) {
////        return super::hashCode();
////    }
////    auto const prime = int(31);
////    auto result = int(1);
////    auto root = java_cast< Context* >(getRoot());
////    auto path = getPath();
////    result = prime * result + ((root == 0) ? int(0) : root)->hashCode());
////    result = prime * result + ((path == 0) ? int(0) : path)->hashCode());
////    return result;
////}
////
////bool AbstractContext::equals(void* obj)
////{
////    if(this) == obj) {
////        return true;
////    }
////    if(obj == 0) {
////        return false;
////    }
////    auto other = java_cast< AbstractContext* >(obj);
////    if(java_cast< Context* >(getRoot())) != java_cast< Context* >(other)->getRoot()))) {
////        return false;
////    }
////    if(!::com::tibbo::aggregate::common::util::Util::equals(getPath(), other)->getPath())) {
////        return false;
////    }
////    return true;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVariable(const std::string & name, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    return getVariable(getAndCheckVariableDefinition(name), caller, request);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVariable(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    return getVariable(getAndCheckVariableDefinition(name), caller, static_cast< RequestController* >(0));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVariable(const std::string & name)
////{
////    return getVariable(getAndCheckVariableDefinition(name), static_cast< boost::shared_ptr<CallerController> >(0), static_cast< RequestController* >(0));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVariableImpl(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    return 0;
////}
////
////void* AbstractContext::getVariableObject(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    try {
////        auto def = getAndCheckVariableDefinition(name);
////        auto data = getVariableData(name);
////        data)->getReadWriteLock())->readLock())->lock();
////        {
////            auto finally19 = finally([&] {
////                data)->getReadWriteLock())->readLock())->unlock();
////            });
////            {
////                if(isSetupComplete() && data)->getValue() != 0) {
////                    return data)->getValue();
////                }
////                if(def)->getValueClass() == 0) {
////                    throw new ContextException("Value class not defined for variable: "+def)->toDetailedString())->toString());
////                }
////                void* value;
////                auto table = getVariable(name, caller);
////                auto list = ::DataTableConversion::beansFromTable(table, def)->getValueClass(), def)->getFormat(), true);
////                if(def)->getFormat())->isSingleRecord()) {
////                    value = java_cast< void* >(list)->get(0));
////                } else {
////                    value = list;
////                }
////                if(isSetupComplete() && def)->isLocalCachingEnabled() && !data)->getReadWriteLock())->isWriteLockedByCurrentThread()) {
////                    data)->setValue(value);
////                }
////                return value;
////            }
////        }
////
////    } catch (::java::lang::Exception* ex) {
////        throw new ContextRuntimeException(ex)->getMessage(), ex);
////    }
////}
////
////void AbstractContext::setVariable(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> value)
////{
////    auto startTime = ::java::lang::System::currentTimeMillis();
////    setupVariables();
////    auto data = getVariableData(def)->getName());
////    auto readLockedBySameThread = data)->getReadWriteLock())->getReadHoldCount() > 0;
////    if(!readLockedBySameThread) {
////        lock(request, data)->getReadWriteLock())->writeLock());
////    }
////    {
////        auto finally20 = finally([&] {
////            if(!readLockedBySameThread) {
////                data)->getReadWriteLock())->writeLock())->unlock();
////            }
////            data)->registerSetOperation();
////        });
////        {
////            if(value == 0) {
////                throw new ContextException("Value cannot be NULL");
////            }
////            auto resultingValue = value;
////            try {
////                checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller);
////                if(!def)->isWritable() && caller != 0 && caller)->isPermissionCheckingEnabled()) {
////                    throw new ContextException(Cres::get()->getString("conVarReadOnly"));
////                }
////                if(Log::CONTEXT_VARIABLES())->isDebugEnabled()) {
////                    Log::CONTEXT_VARIABLES())->debug("Trying to set variable '"+def)->getName())
////        +"' in context '")
////        +this->getPath())
////        +"'");
////                }
////                if(value)->isInvalid()) {
////                    throw new ContextException(value)->getInvalidationMessage());
////                }
////                if(def)->getFormat() != 0 && def)->getFormat())->hasReadOnlyFields() && caller != 0 && caller)->isPermissionCheckingEnabled()) {
////                    resultingValue = getVariable(def, caller, request);
////                    ::DataTableReplication::copy(value, resultingValue, false, true, true, true, true);
////                    checkVariableValueFormat(def, resultingValue);
////                }
////                auto msg = checkVariableValueFormat(def, resultingValue);
////                if(msg != 0) {
////                    Log::CONTEXT_VARIABLES())->debug("Invalid value of variable '"+def)->getName())
////        +"': ")
////        +msg)
////        +" (value: ")
////        +resultingValue))
////        +")");
////                    value = resultingValue;
////                    resultingValue = getVariable(def, caller, request);
////                    ::DataTableReplication::copy(value, resultingValue, true, true, true, true, true);
////                    checkVariableValueFormat(def, resultingValue);
////                }
////                if(def)->isLocalCachingEnabled()) {
////                    data)->setValue(0);
////                }
////                executeSetter(data, caller, request, resultingValue);
////                variableUpdated(def, caller, resultingValue);
////                auto endTime = ::java::lang::System::currentTimeMillis();
////                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
////                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
////                    Log::PERFORMANCE())->log(level, "Setting value of variable '"+def))
////        +"' in context '")
////        +getPath())
////        +"' took ")
////        +(endTime - startTime))
////        +" milliseconds");
////                }
////            } catch (::ValidationException* ex) {
////                throw ex;
////            } catch (::java::lang::Exception* ex) {
////                throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conErrSettingVar"), new voidArray({def)->toString()), toString())})))+ex)->getMessage())->toString(), ex);
////            }
////        }
////    }
////
////}
////
////void AbstractContext::variableUpdated(VariableDefinition* def, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> value)
////{
////    fireUpdatedEvent(def, caller, value);
////    fireChangeEvent(def, caller, new Date(), value);
////}
////
////void AbstractContext::fireUpdatedEvent(VariableDefinition* def, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> value)
////{
////    auto callerAllowsUpdatedEvents = caller == 0 || !caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS());
////    if(setupComplete && fireUpdateEvents && def)->isAllowUpdateEvents()&& callerAllowsUpdatedEvents) {
////        auto ed = getEventDefinition(E_UPDATED());
////        if(ed != 0) {
////            fireEvent(E_UPDATED(), new voidArray({def)->getName()), value), caller != 0 ? caller)->getUsername()) : 0)}));
////        }
////    }
////}
////
////void AbstractContext::fireChangeEvent(VariableDefinition* def, boost::shared_ptr<CallerController> caller, Date* timestamp, ::boost::shared_ptr<DataTable> value)
////{
////    auto callerAllowsChangeEvents = caller == 0 || !caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS());
////    if(setupComplete && fireUpdateEvents && def)->isAllowUpdateEvents()&& callerAllowsChangeEvents) {
////        auto ed = getEventDefinition(E_CHANGE());
////        if(ed != 0) {
////            FireEventRequestController* fer = new FireChangeEventRequestController(def)->getChangeEventsExpirationPeriod(), def, value);
////            auto eventData = new ::DataTable(ed)->getFormat(), new voidArray({def)->getName())}));
////            fireEvent(ed, eventData, EventLevel::NONE, 0, timestamp, 0, caller, fer, 0);
////        }
////    }
////}
////
////void AbstractContext::setupVariables()
////{
////}
////
////void AbstractContext::executeSetter(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> value)
////{
////    auto def = data)->getDefinition();
////    if(executeSetterMethod(data, caller, request, value)) {
////        return;
////    }
////    if(def)->getSetter() != 0) {
////        if(def)->getSetter())->set(this, def, caller, request, value)) {
////            return;
////        }
////    }
////    if(setVariableImpl(def, caller, request, value)) {
////        return;
////    }
////    executeDefaultSetter(def, caller, value);
////}
////
////bool AbstractContext::executeSetterMethod(VariableData* data, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> value)
////{
////    if(!data)->isSetterCached()) {
////        auto params = (new ::java::lang::ClassArray({
////            static_cast< ::java::lang::Class* >(VariableDefinition::class_())
////            , static_cast< ::java::lang::Class* >(CallerController::class_())
////            , static_cast< ::java::lang::Class* >(RequestController::class_())
////            , static_cast< ::java::lang::Class* >(::DataTable::class_())
////        }));
////        {
////            auto finally21 = finally([&] {
////                data)->setSetterCached(true);
////            });
////            try {
////                auto setter = getClass())->getMethod(SETTER_METHOD_PREFIX())+data)->getDefinition())->getName())->toString(), params);
////                data)->setSetterMethod(setter);
////            } catch (::java::lang::NoSuchMethodException* ex) {
////                return false;
////            }
////        }
////    }
////    auto setter = data)->getSetterMethod();
////    if(setter != 0) {
////        try {
////            setter)->invoke(this, new voidArray({
////                data)->getDefinition())
////                , caller)
////                , request)
////                , value)
////            }));
////            return true;
////        } catch (::java::lang::reflect::InvocationTargetException* ex) {
////            throw new ContextException(ex)->getCause())->getMessage(), ex)->getCause());
////        }
////    }
////    return false;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getDefaultValue(VariableDefinition* def)
////{
////    if(def)->getDefaultValue() != 0) {
////        return def)->getDefaultValue();
////    }
////    return new ::DataTable(def)->getFormat(), true);
////}
////
////void AbstractContext::executeDefaultSetter(const std::string & name, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> value)
////{
////    auto def = getVariableDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conVarNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    executeDefaultSetter(def, caller, value);
////}
////
////void AbstractContext::executeDefaultSetter(VariableDefinition* def, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> value)
////{
////    executeDefaultSetterImpl(def, caller, value);
////}
////
////void AbstractContext::executeDefaultSetterImpl(VariableDefinition* vd, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> value)
////{
////    getVariableData(vd)->getName()))->setValue(value);
////}
////
////void AbstractContext::setVariable(const std::string & name, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> value)
////{
////    auto def = getAndCheckVariableDefinition(name);
////    setVariable(def, caller, request, value);
////}
////
////void AbstractContext::setVariable(const std::string & name, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> value)
////{
////    setVariable(name, caller, static_cast< RequestController* >(0), value);
////}
////
////void AbstractContext::setVariable(const std::string & name, ::boost::shared_ptr<DataTable> value)
////{
////    setVariable(name, static_cast< boost::shared_ptr<CallerController> >(0), static_cast< RequestController* >(0), value);
////}
////
////void AbstractContext::setVariable(const std::string & name, boost::shared_ptr<CallerController> caller, voidArray* value)
////{
////    auto def = getAndCheckVariableDefinition(name);
////    setVariable(name, caller, static_cast< RequestController* >(0), new ::DataTable(def)->getFormat(), value));
////}
////
////void AbstractContext::setVariable(const std::string & name, voidArray* value)
////{
////    setVariable(name, static_cast< boost::shared_ptr<CallerController> >(0), value);
////}
////
////bool AbstractContext::setVariableImpl(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> value)
////{
////    return false;
////}
////
////VariableDefinition* AbstractContext::getAndCheckVariableDefinition(const std::string & name)
////{
////    setupVariables();
////    auto def = getVariableDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conVarNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    return def;
////}
////
////bool AbstractContext::setVariableField(const std::string & variable, const std::string & field, void* value, boost::shared_ptr<CallerController> cc)
////{
////    return setVariableField(variable, field, int(0), value, cc);
////}
////
////bool AbstractContext::setVariableField(const std::string & variable, const std::string & field, int record, void* value, boost::shared_ptr<CallerController> cc)
////{
////    auto tab = getVariable(variable, cc);
////    auto old = tab)->getRecord(record))->getValue(field);
////    tab)->getRecord(record))->setValue(field, value);
////    setVariable(variable, cc, tab);
////    return old == 0 ? value != 0 : !old)->equals(value);
////}
////
////void AbstractContext::setVariableField(const std::string & variable, const std::string & field, void* value, const std::string & compareField, void* compareValue, boost::shared_ptr<CallerController> cc)
////{
////    auto tab = getVariable(variable, cc);
////    auto rec = tab)->select(compareField, compareValue);
////    if(rec != 0) {
////        rec)->setValue(field, value);
////    } else {
////        throw new ContextException("Record with "+compareField)
////            +"=")
////            +compareValue))
////            +" not found");
////    }
////    setVariable(variable, cc, tab);
////}
////
////void AbstractContext::addVariableRecord(const std::string & variable, boost::shared_ptr<CallerController> cc, ::DataRecord* record)
////{
////    auto tab = getVariable(variable, cc);
////    tab)->addRecord(record);
////    setVariable(variable, cc, tab);
////}
////
////void AbstractContext::addVariableRecord(const std::string & variable, boost::shared_ptr<CallerController> cc, voidArray* recordData)
////{
////    auto tab = getVariable(variable, cc);
////    auto rec = tab)->addRecord();
////    for (auto i = int(0); i < recordData)->length; i++) {
////        rec)->addValue((*recordData)[i]);
////    }
////    setVariable(variable, cc, tab);
////}
////
////void AbstractContext::removeVariableRecords(const std::string & variable, boost::shared_ptr<CallerController> cc, const std::string & field, void* value)
////{
////    auto tab = getVariable(variable, cc);
////    for (auto *i = tab)->iterator(); i)->hasNext(); ) {
////        auto rec = java_cast< ::DataRecord* >(java_cast< void* >(i)->next()));
////        if(::com::tibbo::aggregate::common::util::Util::equals(rec)->getValue(field), value)) {
////            i)->remove();
////        }
////    }
////    setVariable(variable, cc, tab);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////    auto startTime = ::java::lang::System::currentTimeMillis();
////    setupFunctions();
////    auto data = getFunctionData(def)->getName());
////    if(!def)->isConcurrent()) {
////        lock(request, data)->getExecutionLock());
////    }
////    {
////        auto finally22 = finally([&] {
////            if(!def)->isConcurrent()) {
////                data)->getExecutionLock())->unlock();
////            }
////            data)->registerExecution();
////        });
////        {
////            try {
////                checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller);
////                Log::CONTEXT_FUNCTIONS())->debug("Trying to call function '"+def)->getName())
////    +"' of context '")
////    +getPath())
////    +"'");
////                if(def)->getPermissions() != 0) {
////                    checkPermissions(def)->getPermissions(), caller);
////                }
////                auto requiredInputFormat = def)->getInputFormat();
////                auto requiredOutputFormat = def)->getOutputFormat();
////                if(parameters)->isInvalid()) {
////                    throw new ContextException(parameters)->getInvalidationMessage());
////                }
////                if(valueCheckingEnabled && requiredInputFormat != 0) {
////                    auto msg = parameters)->conformMessage(requiredInputFormat);
////                    if(msg != 0) {
////                        Log::CONTEXT_FUNCTIONS())->debug("Invalid input format of function '"+def)->getName())
////            +"': ")
////            +msg)->toString());
////                        auto newParameters = new ::DataTable(def)->getInputFormat(), true);
////                        ::DataTableReplication::copy(parameters, newParameters, true, true, true, true, true);
////                        parameters = newParameters;
////                        msg = parameters)->conformMessage(requiredInputFormat);
////                        if(msg != 0) {
////                            throw new ContextException("Invalid format: "+msg)->toString());
////                        }
////                    }
////                }
////                auto result = executeImplementation(data, caller, request, parameters);
////                if(result)->isInvalid()) {
////                    throw new ContextException(result)->getInvalidationMessage());
////                }
////                if(result)->getRecordCount() == 0 && result)->getFormat())->getFieldCount() == 0) {
////                    result)->setFormat(def)->getOutputFormat());
////                }
////                if(valueCheckingEnabled && requiredOutputFormat != 0) {
////                    auto msg = result)->conformMessage(requiredOutputFormat);
////                    if(msg != 0) {
////                        throw new ContextException("Function '"+def)->getName())
////            +"' of context '")
////            +getPath())
////            +"' returned value of invalid format: ")
////            +msg)->toString());
////                    }
////                }
////                auto endTime = ::java::lang::System::currentTimeMillis();
////                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
////                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
////                    Log::PERFORMANCE())->log(level, "Function '"+def))
////        +"' in context '")
////        +getPath())
////        +"' was executing for ")
////        +(endTime - startTime))
////        +" milliseconds");
////                }
////                return result;
////            } catch (ContextException* ex) {
////                throw ex;
////            } catch (::java::lang::Exception* ex) {
////                throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conErrCallingFunc"), new voidArray({def)->toString()), toString())})))+ex)->getMessage())->toString(), ex);
////            }
////        }
////    }
////
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeImplementation(FunctionData* data, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////    auto result = executeImplementationMethod(data, caller, request, parameters);
////    if(result != 0) {
////        return result;
////    }
////    auto def = data)->getDefinition();
////    if(def)->getImplementation() != 0) {
////        result = def)->getImplementation())->execute(this, def, caller, request, parameters);
////        if(result != 0) {
////            return result;
////        }
////        return getDefaultFunctionOutput(def);
////    }
////    result = callFunctionImpl(def, caller, request, parameters);
////    if(result != 0) {
////        return result;
////    }
////    throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conFuncNotImpl"), new voidArray({def)->getName()), getPath())})));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::executeImplementationMethod(FunctionData* data, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////    auto def = data)->getDefinition();
////    if(!data)->isImplementationCached()) {
////        auto callerParams = (new ::java::lang::ClassArray({
////            static_cast< ::java::lang::Class* >(FunctionDefinition::class_())
////            , static_cast< ::java::lang::Class* >(CallerController::class_())
////            , static_cast< ::java::lang::Class* >(RequestController::class_())
////            , static_cast< ::java::lang::Class* >(::DataTable::class_())
////        }));
////        {
////            auto finally23 = finally([&] {
////                data)->setImplementationCached(true);
////            });
////            try {
////                auto implementation = getClass())->getMethod(IMPLEMENTATION_METHOD_PREFIX())+def)->getName())->toString(), callerParams);
////                data)->setImplementationMethod(implementation);
////            } catch (::java::lang::NoSuchMethodException* ex) {
////                return 0;
////            }
////        }
////    }
////    auto implementation = data)->getImplementationMethod();
////    if(implementation != 0) {
////        try {
////            auto result = java_cast< ::boost::shared_ptr<DataTable> >(implementation)->invoke(this, new voidArray({
////                def)
////                , caller)
////                , request)
////                , parameters)
////            })));
////            if(result != 0) {
////                return result;
////            }
////            return getDefaultFunctionOutput(def);
////        } catch (::java::lang::reflect::InvocationTargetException* ex) {
////            auto cause = ex)->getCause();
////            throw new ContextException(cause)->getMessage(), cause);
////        }
////    }
////    return 0;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getDefaultFunctionOutput(boost::shared_ptr<FunctionDefinition> def)
////{
////    auto const format = def)->getOutputFormat();
////    return format != 0 ? new ::DataTable(format, true) : new ::DataTable();
////}
////
////void AbstractContext::setupFunctions()
////{
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(const std::string & name, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////    auto def = getAndCheckFunctionDefinition(name);
////    return callFunction(def, caller, request, parameters);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(const std::string & name, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> parameters)
////{
////    return callFunction(name, caller, static_cast< RequestController* >(0), parameters);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(const std::string & name, ::boost::shared_ptr<DataTable> parameters)
////{
////    return callFunction(getAndCheckFunctionDefinition(name), static_cast< boost::shared_ptr<CallerController> >(0), static_cast< RequestController* >(0), parameters);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(const std::string & name)
////{
////    auto def = getAndCheckFunctionDefinition(name);
////    return callFunction(def, static_cast< boost::shared_ptr<CallerController> >(0), static_cast< RequestController* >(0), new ::DataTable(def)->getInputFormat(), true));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    auto def = getAndCheckFunctionDefinition(name);
////    return callFunction(def, caller, static_cast< RequestController* >(0), new ::DataTable(def)->getInputFormat(), true));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(const std::string & name, boost::shared_ptr<CallerController> caller, voidArray* parameters)
////{
////    auto def = getAndCheckFunctionDefinition(name);
////    return callFunction(name, caller, new ::DataTable(def)->getInputFormat(), parameters));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunction(const std::string & name, voidArray* parameters)
////{
////    return callFunction(name, static_cast< boost::shared_ptr<CallerController> >(0), parameters);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFunctionImpl(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////    return 0;
////}
////
////boost::shared_ptr<FunctionDefinition> AbstractContext::getAndCheckFunctionDefinition(const std::string & name)
////{
////    setupFunctions();
////    auto def = getFunctionDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conFuncNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    return def;
////}
////
////void AbstractContext::addVariableDefinition(VariableDefinition* def)
////{
////    if(getVariableDefinition(def)->getName()) != 0) {
////        throw new ::java::lang::IllegalArgumentException("Variable '"+def)->getName())
////            +"' already defined in context '")
////            +getPath())
////            +"'");
////    }
////    variableDataLock)->writeLock())->lock();
////    {
////        auto finally24 = finally([&] {
////            variableDataLock)->writeLock())->unlock();
////        });
////        {
////            variableData)->put(def)->getName(), new VariableData(def));
////            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
////                auto ed = getEventDefinition(E_VARIABLE_ADDED());
////                if(ed != 0) {
////                    fireEvent(ed)->getName(), new ::DataTable(varDefToDataRecord(def, 0)));
////                }
////            }
////            if(getContextManager() != 0) {
////                getContextManager())->variableAdded(java_cast< Context* >(this), def);
////            }
////        }
////    }
////
////}
////
////void AbstractContext::removeVariableDefinition(const std::string & name)
////{
////    removeVariableDefinition(getVariableDefinition(name));
////}
////
////void AbstractContext::removeVariableDefinition(VariableDefinition* def)
////{
////    if(def == 0) {
////        return;
////    }
////    VariableData* data;
////    variableDataLock)->writeLock())->lock();
////    {
////        auto finally25 = finally([&] {
////            variableDataLock)->writeLock())->unlock();
////        });
////        {
////            data = java_cast< VariableData* >(variableData)->remove(def)->getName()));
////        }
////    }
////
////    data)->getReadWriteLock())->writeLock())->lock();
////    {
////        auto finally26 = finally([&] {
////            data)->getReadWriteLock())->writeLock())->unlock();
////        });
////        {
////            variableStatusesLock)->writeLock())->lock();
////            {
////                auto finally27 = finally([&] {
////                    variableStatusesLock)->writeLock())->unlock();
////                });
////                {
////                    if(variableStatuses != 0) {
////                        variableStatuses)->remove(def)->getName());
////                    }
////                }
////            }
////
////            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
////                auto ed = getEventDefinition(E_VARIABLE_REMOVED());
////                if(ed != 0) {
////                    fireEvent(ed)->getName(), new voidArray({def)->getName())}));
////                }
////            }
////            if(getContextManager() != 0) {
////                getContextManager())->variableRemoved(java_cast< Context* >(this), def);
////            }
////        }
////    }
////
////}
////
//void AbstractContext::addFunctionDefinition(boost::shared_ptr<FunctionDefinition> def)
//{
//    /*if(getFunctionDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException("Function '"+def)->getName())
//            +"' already defined in context '")
//            +getPath())
//            +"'");
//    }
//    functionDataLock)->writeLock())->lock();
//    {
//        auto finally28 = finally([&] {
//            functionDataLock)->writeLock())->unlock();
//        });
//        {
//            functionData)->put(def)->getName(), new FunctionData(def));
//            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                auto ed = getEventDefinition(E_FUNCTION_ADDED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), new ::DataTable(funcDefToDataRecord(def, 0)));
//                }
//            }
//            if(getContextManager() != 0) {
//                getContextManager())->functionAdded(java_cast< Context* >(this), def);
//            }
//        }
//    }*/
//
//}
////
////void AbstractContext::removeFunctionDefinition(const std::string & name)
////{
////    removeFunctionDefinition(getFunctionDefinition(name));
////}
////
////void AbstractContext::removeFunctionDefinition(boost::shared_ptr<FunctionDefinition> def)
////{
////    if(def == 0) {
////        return;
////    }
////    FunctionData* data;
////    functionDataLock)->writeLock())->lock();
////    {
////        auto finally29 = finally([&] {
////            functionDataLock)->writeLock())->unlock();
////        });
////        {
////            data = java_cast< FunctionData* >(functionData)->remove(def)->getName()));
////        }
////    }
////
////    data)->getExecutionLock())->lock();
////    {
////        auto finally30 = finally([&] {
////            data)->getExecutionLock())->unlock();
////        });
////        {
////            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
////                auto ed = getEventDefinition(E_FUNCTION_REMOVED());
////                if(ed != 0) {
////                    fireEvent(ed)->getName(), new voidArray({def)->getName())}));
////                }
////            }
////            if(getContextManager() != 0) {
////                getContextManager())->functionRemoved(java_cast< Context* >(this), def);
////            }
////        }
////    }
////
////}
////
//void AbstractContext::addEventDefinition(boost::shared_ptr<EventDefinition> def)
//{
////    if(getEventDefinition(def)->getName()) != 0) {
////        throw new ::java::lang::IllegalArgumentException("Event '"+def)->getName())
////            +"' already defined in context '")
////            +getPath())
////            +"'");
////    }
////    eventDataLock)->writeLock())->lock();
////    {
////        auto finally31 = finally([&] {
////            eventDataLock)->writeLock())->unlock();
////        });
////        {
////            eventData)->put(def)->getName(), new EventData(def));
////            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
////                auto ed = getEventDefinition(E_EVENT_ADDED());
////                if(ed != 0) {
////                    fireEvent(ed)->getName(), new ::DataTable(evtDefToDataRecord(def, 0)));
////                }
////            }
////            if(getContextManager() != 0) {
////                getContextManager())->eventAdded(java_cast< Context* >(this), def);
////            }
////        }
////    }
//
//}
////
////void AbstractContext::removeEventDefinition(const std::string & name)
////{
////    removeEventDefinition(getEventDefinition(name));
////}
////
////void AbstractContext::removeEventDefinition(boost::shared_ptr<EventDefinition> def)
////{
////    if(def == 0) {
////        return;
////    }
////    eventDataLock)->writeLock())->lock();
////    {
////        auto finally32 = finally([&] {
////            eventDataLock)->writeLock())->unlock();
////        });
////        {
////            if(java_cast< EventData* >(eventData)->remove(def)->getName())) != 0) {
////                if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
////                    auto ed = getEventDefinition(E_EVENT_REMOVED());
////                    if(ed != 0) {
////                        fireEvent(ed)->getName(), new voidArray({def)->getName())}));
////                    }
////                }
////                if(getContextManager() != 0) {
////                    getContextManager())->eventRemoved(java_cast< Context* >(this), def);
////                }
////            }
////        }
////    }
////
////}
////
////VariableData* AbstractContext::getVariableData(const std::string & name)
////{
////    variableDataLock)->readLock())->lock();
////    {
////        auto finally33 = finally([&] {
////            variableDataLock)->readLock())->unlock();
////        });
////        {
////            return java_cast< VariableData* >(variableData)->get(name));
////        }
////    }
////
////}
////
////VariableDefinition* AbstractContext::getVariableDefinition(const std::string & name)
////{
////    auto data = getVariableData(name);
////    return data != 0 ? data)->getDefinition() : static_cast< VariableDefinition* >(0);
////}
////
////VariableDefinition* AbstractContext::getVariableDefinition(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    auto def = getVariableDefinition(name);
////    if(def == 0) {
////        return 0;
////    }
////    auto readAccessGranted = checkPermissions(def)->getReadPermissions() != 0 ? def)->getReadPermissions() : getPermissions(), caller, this);
////    auto writeAccessGranted = checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller, this);
////    return (readAccessGranted || writeAccessGranted) ? def : static_cast< VariableDefinition* >(0);
////}
////
////FunctionData* AbstractContext::getFunctionData(const std::string & name)
////{
////    functionDataLock)->readLock())->lock();
////    {
////        auto finally34 = finally([&] {
////            functionDataLock)->readLock())->unlock();
////        });
////        {
////            return java_cast< FunctionData* >(functionData)->get(name));
////        }
////    }
////
////}
////
////boost::shared_ptr<FunctionDefinition> AbstractContext::getFunctionDefinition(const std::string & name)
////{
////    auto data = getFunctionData(name);
////    return data != 0 ? data)->getDefinition() : static_cast< boost::shared_ptr<FunctionDefinition> >(0);
////}
////
////boost::shared_ptr<FunctionDefinition> AbstractContext::getFunctionDefinition(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    auto def = getFunctionDefinition(name);
////    if(def == 0) {
////        return 0;
////    }
////    auto accessGranted = checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller, this);
////    return accessGranted ? def : static_cast< boost::shared_ptr<FunctionDefinition> >(0);
////}
////
////EventData* AbstractContext::getEventData(const std::string & name)
////{
////    eventDataLock)->readLock())->lock();
////    {
////        auto finally35 = finally([&] {
////            eventDataLock)->readLock())->unlock();
////        });
////        {
////            return java_cast< EventData* >(eventData)->get(name));
////        }
////    }
////
////}
////
//boost::shared_ptr<EventDefinition> AbstractContext::getEventDefinition(const std::string & name)
//{
////    auto ed = getEventData(name);
////    return ed != 0 ? ed)->getDefinition() : static_cast< boost::shared_ptr<EventDefinition> >(0);
//
//	return 0;
//}
////
////boost::shared_ptr<EventDefinition> AbstractContext::getEventDefinition(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    auto def = getEventDefinition(name);
////    if(def == 0) {
////        return 0;
////    }
////    auto accessGranted = checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller, this);
////    return accessGranted ? def : static_cast< boost::shared_ptr<EventDefinition> >(0);
////}
////
////boost::shared_ptr<EventDefinition> AbstractContext::getAndCheckEventDefinition(const std::string & name)
////{
////    setupEvents();
////    auto def = getEventDefinition(name);
////    if(def == 0) {
////        throw new ContextRuntimeException(::java::text::MessageFormat::format(Cres::get()->getString("conEvtNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    return def;
////}
////
////void AbstractContext::setupEvents()
////{
////}
////
////void AbstractContext::postEvent(boost::shared_ptr<Event> ev, boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<CallerController> caller, FireEventRequestController* request)
////{
////}
////
////void AbstractContext::updateEvent(boost::shared_ptr<Event> ev, boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<CallerController> caller, FireEventRequestController* request)
////{
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(boost::shared_ptr<EventDefinition> ed, ::boost::shared_ptr<DataTable> data, int level, long  id, Date* creationtime, int  listener, boost::shared_ptr<CallerController> caller, FireEventRequestController* request, boost::shared_ptr<Permissions> permissions)
////{
////    if(id == 0) {
////        id = ::java::lang::Long::valueOf(EventUtils::generateEventId());
////    }
////    auto event = new Event(getPath(), ed, level == DEFAULT_EVENT_LEVEL ? ed)->getLevel() : level, data, id, creationtime, permissions);
////    return fireEvent(ed, event, listener, caller, request);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(boost::shared_ptr<Event> event)
////{
////    return fireEvent(getAndCheckEventDefinition(event)->getName()), event, 0, 0, 0);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<Event> event, int  listener, boost::shared_ptr<CallerController> caller, FireEventRequestController* request)
////{
////    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
////    if(caller != 0) {
////        try {
////            checkPermissions(ed)->getFirePermissions() != 0 ? ed)->getFirePermissions() : getPermissions(), caller);
////        } catch (ContextSecurityException* ex) {
////            throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
////        }
////    }
////    auto rule = getEventProcessingRule(event);
////    auto prefilter = rule != 0 ? rule)->getPrefilterExpression() : static_cast< Expression* >(0);
////    if(prefilter != 0) {
////        try {
////            auto evaluator = new Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
////            if(!evaluator)->evaluateToBoolean(prefilter)) {
////                rule)->addFiltered();
////                if(logger)->isDebugEnabled()) {
////                    logger)->debug("Event '"+ed))
////        +"' in context '")
////        +getPath())
////        +"' was suppressed by pre-filter");
////                }
////                return 0;
////            }
////        } catch (::java::lang::Exception* ex) {
////            logger)->info("Error processing pre-filter expression for event '"+ed))
////+"' in context '")
////+getPath())
////+"': ")
////+ex)->getMessage())->toString(), ex);
////        }
////    }
////    if(logger)->isDebugEnabled()) {
////        logger)->debug("Event '"+ed))
////            +"' fired in context '")
////            +getPath())
////            +"': ")
////            +event))->toString());
////    }
////    event)->setListener(listener);
////    if(request != 0) {
////        event)->setOriginator(request)->getOriginator());
////    }
////    auto edata = getEventData(ed)->getName());
////    edata)->registerFiredEvent();
////    auto deduplicator = rule != 0 ? rule)->getDeduplicatorExpression() : static_cast< Expression* >(0);
////    if(deduplicator != 0) {
////        try {
////            auto evaluator = new Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
////            auto deduplicationId = evaluator)->evaluateToString(deduplicator);
////            event)->setDeduplicationId(deduplicationId);
////        } catch (::java::lang::Exception* ex) {
////            logger)->info("Error processing deduplicator expression for event '"+ed))
////+"' in context '")
////+getPath())
////+"': ")
////+ex)->getMessage())->toString(), ex);
////        }
////    }
////    if(event)->getData())->isInvalid()) {
////        throw new ContextRuntimeException(event)->getData())->getInvalidationMessage());
////    }
////    if(ed)->getFormat() != 0) {
////        auto msg = event)->getData())->conformMessage(ed)->getFormat());
////        if(msg != 0) {
////            logger)->debug("Wrong format data for event '"+ed))
////+"' in context '")
////+toString())
////+"': ")
////+msg)->toString());
////            auto newData = new ::DataTable(ed)->getFormat(), true);
////            ::DataTableReplication::copy(event)->getData(), newData);
////            event)->setData(newData);
////        }
////    }
////    processBindings(event);
////    processEnrichments(event, rule, caller);
////    long  customExpirationPeriod;
////    if(request != 0 && request)->getCustomExpirationPeriod() != 0) {
////        customExpirationPeriod = request)->getCustomExpirationPeriod();
////    }
////    if(customExpirationPeriod != 0) {
////        if((customExpirationPeriod))->longValue() > 0) {
////            event)->setExpirationtime(new Date(::java::lang::System::currentTimeMillis() + (customExpirationPeriod))->longValue()));
////        }
////    } else {
////        auto userDefinedExpirationPeriod = rule != 0 ? ::java::lang::Long::valueOf(rule)->getPeriod()) : static_cast< long  >(0);
////        if(userDefinedExpirationPeriod != 0 && (userDefinedExpirationPeriod))->longValue() > 0) {
////            event)->setExpirationtime(new Date(::java::lang::System::currentTimeMillis() + (userDefinedExpirationPeriod))->longValue()));
////        }
////    }
////    auto const customMemoryStorageSize = rule != 0 ? ((rule)->getDeduplicator() != 0 && rule)->getDeduplicator())->length() > 0) ? rule)->getQueue()) : static_cast< int  >(0)) : static_cast< int  >(0);
////    auto processed = request != 0 ? request)->process(event) : event;
////    if(processed == 0) {
////        return 0;
////    }
////    auto duplicate = edata)->store(processed, customMemoryStorageSize);
////    try {
////        if(duplicate == 0) {
////            postEvent(event, ed, caller, request);
////            if(rule != 0) {
////                rule)->addSaved();
////            }
////        } else {
////            updateEvent(duplicate, ed, caller, request);
////            if(rule != 0) {
////                rule)->addDuplicate();
////            }
////        }
////    } catch (ContextException* ex) {
////        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
////    }
////    if(contextManager != 0 && (duplicate == 0 || rule == 0 || rule)->isDuplicateDispatching())) {
////        contextManager)->queue(edata, event);
////    }
////    return event;
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, int level, boost::shared_ptr<CallerController> caller, FireEventRequestController* request, boost::shared_ptr<Permissions> permissions, ::boost::shared_ptr<DataTable> data)
////{
////    auto ed = getAndCheckEventDefinition(name);
////    return fireEvent(ed, data, level, 0, 0, 0, caller, request, permissions);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, ::boost::shared_ptr<DataTable> data, int level, long  id, Date* creationtime, int  listener, boost::shared_ptr<CallerController> caller, FireEventRequestController* request)
////{
////    return fireEvent(getAndCheckEventDefinition(name), data, level, id, creationtime, listener, caller, request, 0);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, ::boost::shared_ptr<DataTable> data)
////{
////    return fireEvent(getAndCheckEventDefinition(name), data, DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> data)
////{
////    return fireEvent(getAndCheckEventDefinition(name), data, DEFAULT_EVENT_LEVEL, 0, 0, 0, caller, 0, 0);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, int level, ::boost::shared_ptr<DataTable> data)
////{
////    return fireEvent(getAndCheckEventDefinition(name), data, level, 0, 0, 0, 0, 0, 0);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, int level, boost::shared_ptr<CallerController> caller, ::boost::shared_ptr<DataTable> data)
////{
////    return fireEvent(getAndCheckEventDefinition(name), data, level, 0, 0, 0, caller, 0, 0);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name)
////{
////    auto ed = getAndCheckEventDefinition(name);
////    return fireEvent(ed, new ::DataTable(ed)->getFormat(), true), DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
////}
////
////boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, boost::shared_ptr<CallerController> caller)
////{
////    auto ed = getAndCheckEventDefinition(name);
////    return fireEvent(ed, new ::DataTable(ed)->getFormat(), true), DEFAULT_EVENT_LEVEL, 0, 0, 0, caller, 0, 0);
////}
////
//boost::shared_ptr<Event> AbstractContext::fireEvent(const std::string & name, void* data)
//{
////    auto ed = getAndCheckEventDefinition(name);
////    return fireEvent(ed, new ::DataTable(ed)->getFormat(), data), DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
//	return 0;
//}
////
////EventProcessingRule* AbstractContext::getEventProcessingRule(boost::shared_ptr<Event> event)
////{
////    return 0;
////}
////
////void AbstractContext::processBindings(boost::shared_ptr<Event> event)
////{
////}
////
////void AbstractContext::processEnrichments(boost::shared_ptr<Event> event, EventProcessingRule* rule, boost::shared_ptr<CallerController> caller)
////{
////    if(rule == 0 || rule)->getEnrichments() == 0) {
////        return;
////    }
////    auto evaluator = new Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
////    for (auto _i = rule)->getEnrichments())->iterator(); _i->hasNext(); ) {
////        EventEnrichmentRule* enrichmentRule = java_cast< EventEnrichmentRule* >(_i->next());
////        {
////            auto name = enrichmentRule)->getName();
////            try {
////                void* result = evaluator)->evaluateToString(enrichmentRule)->getEnrichmentExpression());
////                if(result == 0) {
////                    continue;
////                }
////                event)->addEnrichment(new Enrichment(name, result)->toString(), new Date(), caller != 0 ? caller)->getUsername() : static_cast< const std::string & >(0)));
////            } catch (::java::lang::Exception* ex) {
////                Log::CONTEXT_EVENTS())->error("Error adding enrichment '"+name)
////    +"' to event '")
////    +event))
////    +"': ")
////    +ex))->toString());
////            }
////        }
////    }
////}
////
////boost::shared_ptr<CallerController> AbstractContext::getEventProcessingCallerController()
////{
////    return getContextManager())->getCallerController();
////}
////
////std::list  AbstractContext::getEventHistory(const std::string & name)
////{
////    auto ed = getEventData(name);
////    if(ed == 0) {
////        throw new ::java::lang::IllegalStateException(Cres::get()->getString("conEvtNotAvail"))+name)->toString());
////    }
////    return ed)->getHistory();
////}
////
////void AbstractContext::lock(RequestController* request, ::java::util::concurrent::locks::Lock* lock)
////{
////    auto lockTimeout = (request != 0 && request)->getLockTimeout() != 0) ? request)->getLockTimeout() : static_cast< long  >(0);
////    if(lockTimeout != 0) {
////        try {
////            if(!lock)->tryLock((lockTimeout))->longValue(), ::java::util::concurrent::TimeUnit::MILLISECONDS)) {
////                throw new ContextException(Cres::get()->getString("conLockFailed"));
////            }
////        } catch (::java::lang::InterruptedException* ex) {
////            throw new ContextException(Cres::get()->getString("interrupted"));
////        }
////    } else {
////        lock)->lock();
////    }
////}
////
////std::string AbstractContext::toString()
////{
////    auto desc = getDescription();
////    return desc != 0 ? desc : getPath();
////}
////
//std::string AbstractContext::toDetailedString()
//{
//    //auto decription = getDescription();
//    //return decription != 0 ? decription)+" (")
//    //    +getPath())
//    //    +")" : getPath();
//	return "";
//}
//
////void AbstractContext::accept(ContextVisitor* visitor)
////{
////    if(visitor->shouldVisit(this)) {
////        visitor->visit(this);
////        childrenLock)->readLock())->lock();
////        {
////            auto finally36 = finally([&] {
////                childrenLock)->readLock())->unlock();
////            });
////            {
////                for (auto _i = children)->iterator(); _i->hasNext(); ) {
////                    Context* child = java_cast< Context* >(_i->next());
////                    {
////                        child)->accept(visitor);
////                    }
////                }
////            }
////        }
////
////    }
////}
////
////boost::shared_ptr<EventDefinition> AbstractContext::getChangeEventDefinition()
////{
////    return ED_CHANGE();
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVvariables(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        VariableDefinition* vardef = java_cast< VariableDefinition* >(_i->next());
////        {
////            ans)->addRecord(varDefToDataRecord(vardef, caller));
////        }
////    }
////    return ans;
////}
////
////std::string AbstractContext::encodeFormat(::TableFormat* format, boost::shared_ptr<CallerController> caller)
////{
////    return format != 0 ? format)->encode(false) : static_cast< const std::string & >(0);
////}
////
////TableFormat* AbstractContext::decodeFormat(const std::string & source, boost::shared_ptr<CallerController> caller)
////{
////    return source != 0 ? new ::TableFormat(source, new ::encoding::ClassicEncodingSettings(false)) : static_cast< ::TableFormat* >(0);
////}
////
////DataRecord* AbstractContext::varDefToDataRecord(VariableDefinition* vd)
////{
////    return varDefToDataRecord(vd, 0);
////}
////
////DataRecord* AbstractContext::varDefToDataRecord(VariableDefinition* vd, boost::shared_ptr<CallerController> caller)
////{
////    return (new ::DataRecord(VARIABLE_DEFINITION_FORMAT()))->addString(vd)->getName()))->addString(encodeFormat(vd)->getFormat(), caller)))->addString(vd)->getDescription()))->addBoolean(::java::lang::Boolean::valueOf(vd)->isReadable())))->addBoolean(::java::lang::Boolean::valueOf(vd)->isWritable())))->addString(vd)->getHelp()))->addString(vd)->getGroup()))->addString(vd)->getIconId()))->addString(vd)->getHelpId()))->addLong(vd)->getRemoteCacheTime());
////}
////
////VariableDefinition* AbstractContext::varDefFromDataRecord(::DataRecord* rec)
////{
////    return varDefFromDataRecord(rec, 0);
////}
////
////VariableDefinition* AbstractContext::varDefFromDataRecord(::DataRecord* rec, boost::shared_ptr<CallerController> caller)
////{
////    auto const variable = rec)->getString(FIELD_VD_NAME());
////    bool readable = (rec)->getBoolean(FIELD_VD_READABLE())))->booleanValue();
////    bool writable = (rec)->getBoolean(FIELD_VD_WRITABLE())))->booleanValue();
////    ::TableFormat* format;
////    try {
////        format = decodeFormat(rec)->getString(FIELD_VD_FORMAT()), caller);
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException("Error decoding format of variable '"+variable)
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////    }
////    auto def = new VariableDefinition(variable, format, readable, writable, rec)->getString(FIELD_VD_DESCRIPTION()), rec)->getString(FIELD_VD_GROUP()));
////    def)->setHelp(rec)->getString(FIELD_VD_HELP()));
////    def)->setIconId(rec)->getString(FIELD_VD_ICON_ID()));
////    if(rec)->hasField(FIELD_VD_HELP_ID())) {
////        def)->setHelpId(rec)->getString(FIELD_VD_HELP_ID()));
////    }
////    if(rec)->hasField(FIELD_VD_CACHE_TIME())) {
////        def)->setRemoteCacheTime(rec)->getLong(FIELD_VD_CACHE_TIME()));
////    }
////    return def;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVfunctions(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getFunctionDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        boost::shared_ptr<FunctionDefinition> funcdef = java_cast< boost::shared_ptr<FunctionDefinition> >(_i->next());
////        {
////            ans)->addRecord(funcDefToDataRecord(funcdef, caller));
////        }
////    }
////    return ans;
////}
////
////DataRecord* AbstractContext::funcDefToDataRecord(boost::shared_ptr<FunctionDefinition> fd)
////{
////    return funcDefToDataRecord(fd, 0);
////}
////
////DataRecord* AbstractContext::funcDefToDataRecord(boost::shared_ptr<FunctionDefinition> fd, boost::shared_ptr<CallerController> caller)
////{
////    return (new ::DataRecord(FUNCTION_DEFINITION_FORMAT)->addString(fd)->getName()))->addString(encodeFormat(fd)->getInputFormat(), caller)))->addString(encodeFormat(fd)->getOutputFormat(), caller)))->addString(fd)->getDescription()))->addString(fd)->getHelp()))->addString(fd)->getGroup()))->addString(fd)->getIconId());
////}
////
////boost::shared_ptr<FunctionDefinition> AbstractContext::funcDefFromDataRecord(::DataRecord* rec)
////{
////    return funcDefFromDataRecord(rec, 0);
////}
////
////boost::shared_ptr<FunctionDefinition> AbstractContext::funcDefFromDataRecord(::DataRecord* rec, boost::shared_ptr<CallerController> caller)
////{
////    auto const function = rec)->getString(FIELD_FD_NAME());
////    ::TableFormat* inputFormat;
////    try {
////        inputFormat = decodeFormat(rec)->getString(FIELD_FD_INPUTFORMAT()), caller);
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException("Error decoding input format of function '"+function)
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////    }
////    ::TableFormat* outputFormat;
////    try {
////        outputFormat = decodeFormat(rec)->getString(FIELD_FD_OUTPUTFORMAT()), caller);
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException("Error decoding output format of function '"+function)
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////    }
////    auto def = boost::shared_ptr<FunctionDefinition>(function, inputFormat, outputFormat, rec)->getString(FIELD_FD_DESCRIPTION()), rec)->getString(FIELD_FD_GROUP()));
////    def)->setHelp(rec)->getString(FIELD_FD_HELP()));
////    def)->setIconId(rec)->getString(FIELD_FD_ICON_ID()));
////    return def;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVevents(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getEventDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        boost::shared_ptr<EventDefinition> ed = java_cast< boost::shared_ptr<EventDefinition> >(_i->next());
////        {
////            ans)->addRecord(evtDefToDataRecord(ed, caller));
////        }
////    }
////    return ans;
////}
////
////DataRecord* AbstractContext::evtDefToDataRecord(boost::shared_ptr<EventDefinition> ed)
////{
////    return evtDefToDataRecord(ed, 0);
////}
////
////DataRecord* AbstractContext::evtDefToDataRecord(boost::shared_ptr<EventDefinition> ed, boost::shared_ptr<CallerController> caller)
////{
////    return (new ::DataRecord(EVENT_DEFINITION_FORMAT)->addString(ed)->getName()))->addString(encodeFormat(ed)->getFormat(), caller)))->addString(ed)->getDescription()))->addString(ed)->getHelp()))->addInt(ed)->getLevel())))->addString(ed)->getGroup()))->addString(ed)->getIconId());
////}
////
////boost::shared_ptr<EventDefinition> AbstractContext::evtDefFromDataRecord(::DataRecord* rec)
////{
////    return evtDefFromDataRecord(rec, 0);
////}
////
////boost::shared_ptr<EventDefinition> AbstractContext::evtDefFromDataRecord(::DataRecord* rec, boost::shared_ptr<CallerController> caller)
////{
////    auto const event = rec)->getString(FIELD_ED_NAME());
////    ::TableFormat* format;
////    try {
////        format = decodeFormat(rec)->getString(FIELD_ED_FORMAT()), caller);
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException("Error decoding format of event '"+event)
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////    }
////    auto def = boost::shared_ptr<EventDefinition>(new EventDefinition(event, format, rec)->getString(FIELD_ED_DESCRIPTION()), rec)->getString(FIELD_ED_GROUP()));
////    def)->setLevel((rec)->getInt(FIELD_ED_LEVEL())))->intValue());
////    def)->setHelp(rec)->getString(FIELD_ED_HELP()));
////    def)->setIconId(rec)->getString(FIELD_ED_ICON_ID()));
////    return def;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVactions(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getActionDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        ::com::tibbo::aggregate::common::action::ActionDefinition* adef = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
////        {
////            ans)->addRecord(actDefToDataRecord(adef));
////        }
////    }
////    return ans;
////}
////
////DataRecord* AbstractContext::actDefToDataRecord(::com::tibbo::aggregate::common::action::ActionDefinition* def)
////{
////    auto resourceMasks = new ::DataTable(AbstractContext::RESOURCE_MASKS_FORMAT());
////    if(def)->getDropSources() != 0) {
////        for (auto _i = def)->getDropSources())->iterator(); _i->hasNext(); ) {
////            ::com::tibbo::aggregate::common::action::ResourceMask* resourceMask = java_cast< ::com::tibbo::aggregate::common::action::ResourceMask* >(_i->next());
////            {
////                resourceMasks)->addRecord())->addString(resourceMask)->toString());
////            }
////        }
////    }
////    auto rec = new ::DataRecord(AbstractContext::ACTION_DEF_FORMAT;
////    rec)->addString(def)->getName());
////    rec)->addString(def)->getDescription());
////    rec)->addString(def)->getHelp());
////    rec)->addString(def)->getAccelerator() == 0 ? static_cast< const std::string & >(0) : def)->getAccelerator())->toString());
////    rec)->addDataTable(resourceMasks);
////    rec)->addBoolean(::java::lang::Boolean::valueOf(def)->isHidden()));
////    rec)->addBoolean(::java::lang::Boolean::valueOf(def)->isEnabled()));
////    rec)->addString(def)->getIconId());
////    rec)->addString(def)->getGroup());
////    rec)->addString(def)->getExecutionGroup() == 0 ? static_cast< const std::string & >(0) : def)->getExecutionGroup())->toString());
////    rec)->addBoolean(::java::lang::Boolean::valueOf(def)->isDefault()));
////    return rec;
////}
////
////void AbstractContext::executeTasks(std::list  tasks)
////{
////    try {
////        if(isChildrenConcurrencyEnabled()) {
////            getContextManager())->getExecutorService())->invokeAll(tasks);
////        } else {
////            for (auto _i = tasks)->iterator(); _i->hasNext(); ) {
////                ::java::util::concurrent::Callable* task = java_cast< ::java::util::concurrent::Callable* >(_i->next());
////                {
////                    task)->call();
////                }
////            }
////        }
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
////    }
////}
////
////void AbstractContext::enableStatus()
////{
////    status = new ContextStatus();
////}
////
////ContextStatus* AbstractContext::getStatus()
////{
////    return status;
////}
////
////void AbstractContext::setStatus(int status, const std::string & comment)
////{
////    auto statusChanged = this->status)->getStatus() != status;
////    auto commentChanged = !::com::tibbo::aggregate::common::util::Util::equals(this->status)->getComment(), comment);
////    auto oldStatus = this->status)->getStatus();
////    this->status)->setStatus(status);
////    this->status)->setComment(comment);
////    if(statusChanged || commentChanged) {
////        fireStatusChanged(status, comment, oldStatus);
////    }
////}
////
////void AbstractContext::fireStatusChanged(int status, const std::string & comment, int oldStatus)
////{
////}
////
////void AbstractContext::enableVariableStatuses(bool persistent)
////{
////    auto vd = new VariableDefinition(V_VARIABLE_STATUSES(), VFT_VARIABLE_STATUSES(), true, true);
////    vd)->setPersistent(persistent);
////    vd)->setLocalCachingEnabled(false);
////    vd)->setGetter(new AbstractContext_enableVariableStatuses_4(this));
////    addVariableDefinition(vd);
////    auto ed = boost::shared_ptr<EventDefinition>(new EventDefinition(E_VARIABLE_STATUS_CHANGED(), VFT_VARIABLE_STATUSES());
////    addEventDefinition(ed);
////}
////
////boost::shared_ptr<DataTable> AbstractContext::createVariableStatusesTable()
////{
////    variableStatusesLock)->readLock())->lock();
////    {
////        auto finally37 = finally([&] {
////            variableStatusesLock)->readLock())->unlock();
////		});
////        {
////            auto table = new ::DataTable(VFT_VARIABLE_STATUSES());
////            auto statuses = getVariableStatuses();
////            for (auto _i = statuses)->keySet())->iterator(); _i->hasNext(); ) {
////                const std::string & name = java_cast< const std::string & >(_i->next());
////                {
////                    auto vs = java_cast< VariableStatus* >(statuses)->get(name));
////                    table)->addRecord())->addString(name))->addString(vs)->getStatus()))->addString(vs)->getComment());
////                }
////            }
////            return table;
////        }
////    }
////
////}
////
////java::util::Map* AbstractContext::getVariableStatuses()
////{
////    ensureVariableStatuses();
////    return ::java::util::Collections::unmodifiableMap(variableStatuses);
////}
////
////void AbstractContext::ensureVariableStatuses()
////{
////    if(variableStatuses == 0) {
////        variableStatuses = ::java::util::Collections::synchronizedMap(new ::java::util::LinkedHashMap());
////        auto statuses = fetchVariableStatuses();
////        for (auto _i = statuses)->iterator(); _i->hasNext(); ) {
////            ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
////            {
////                variableStatuses)->put(rec)->getString(VF_VARIABLE_STATUSES_NAME()), new VariableStatus(rec)->getString(VF_VARIABLE_STATUSES_STATUS()), rec)->getString(VF_VARIABLE_STATUSES_COMMENT())));
////            }
////        }
////    }
////}
////
//boost::shared_ptr<DataTable> AbstractContext::fetchVariableStatuses()
//{
//	return boost::shared_ptr<DataTable>(new DataTable(VFT_VARIABLE_STATUSES));
//}
////
////void AbstractContext::updateVariableStatus(const std::string & variable, VariableStatus* status, bool persistent)
////{
////    VariableStatus* old;
////    variableStatusesLock)->writeLock())->lock();
////    {
////        auto finally38 = finally([&] {
////            variableStatusesLock)->writeLock())->unlock();
////        });
////        {
////            ensureVariableStatuses();
////            old = java_cast< VariableStatus* >(variableStatuses)->put(variable, status));
////        }
////    }
////
////    if(old == 0 || !::com::tibbo::aggregate::common::util::Util::equals(old)->getStatus(), status)->getStatus())) {
////        variableStatusesUpdated = true;
////        fireEvent(E_VARIABLE_STATUS_CHANGED(), new voidArray({variable), status)->getStatus()), status)->getComment())}));
////    }
////    if(persistent) {
////        saveVariableStatuses();
////    }
////}
////
////void AbstractContext::clearVariableStatuses()
////{
////    variableStatusesLock)->writeLock())->lock();
////    {
////        auto finally39 = finally([&] {
////            variableStatusesLock)->writeLock())->unlock();
////        });
////        {
////            if(variableStatuses != 0) {
////                variableStatuses)->clear();
////            }
////        }
////    }
////
////    saveVariableStatuses();
////}
////
////void AbstractContext::saveVariableStatuses()
////{
////    if(variableStatusesUpdated) {
////        persistVariableStatuses(createVariableStatusesTable());
////    }
////    variableStatusesUpdated = false;
////}
////
////void AbstractContext::persistVariableStatuses(::boost::shared_ptr<DataTable> statuses)
////{
////}
////
////VariableStatus* AbstractContext::getVariableStatus(const std::string & name)
////{
////    variableStatusesLock)->readLock())->lock();
////    {
////        auto finally40 = finally([&] {
////            variableStatusesLock)->readLock())->unlock();
////        });
////        {
////            return java_cast< VariableStatus* >(getVariableStatuses())->get(name));
////        }
////    }
////
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVchildren(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getChildren(caller))->iterator(); _i->hasNext(); ) {
////        Context* con = java_cast< Context* >(_i->next());
////        {
////            ans)->addRecord())->addString(con)->getName());
////        }
////    }
////    return ans;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::getVinfo(VariableDefinition* def, boost::shared_ptr<CallerController> caller, RequestController* request)
////{
////    return createContextInfoTable();
////}
////
////boost::shared_ptr<DataTable> AbstractContext::createContextInfoTable()
////{
////    return new ::DataTable(INFO_DEFINITION_FORMAT(), new voidArray({getDescription()), getType()), getGroup()), getIconId()), getLocalRoot()), getRemoteRoot()), getRemotePath()), getRemotePrimaryRoot()), ::java::lang::Boolean::valueOf(isMapped()))}));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFgetCopyData(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////    auto result = new ::DataTable(def)->getOutputFormat())->clone());
////    auto group = parameters)->rec())->getString(VF_INFO_GROUP());
////    std::list  recipients;
////    auto recipientsTable = parameters)->rec())->getDataTable(FIF_COPY_DATA_RECIPIENTS());
////    if(recipientsTable != 0) {
////        recipients = new ::java::util::LinkedList();
////        for (auto _i = recipientsTable)->iterator(); _i->hasNext(); ) {
////            ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
////            {
////                auto recipient = java_cast< Context* >(getContextManager())->get(rec)->getString(FIF_COPY_DATA_RECIPIENTS_RECIPIENT()), caller));
////                if(recipient != 0) {
////                    recipients)->add(recipient));
////                }
////            }
////        }
////    }
////    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        VariableDefinition* vd = java_cast< VariableDefinition* >(_i->next());
////        {
////            if(group != 0 && !::com::tibbo::aggregate::common::util::Util::equals(ContextUtils::getBaseGroup(vd)->getGroup()), group)) {
////                continue;
////            }
////            if(group == 0 && vd)->getGroup() == 0) {
////                continue;
////            }
////            if(!vd)->isReadable()) {
////                continue;
////            }
////            if(vd)->getFormat() == 0 || !vd)->getFormat())->isReplicated()) {
////                continue;
////            }
////            if(recipients != 0) {
////                auto skip = true;
////                for (auto _i = recipients)->iterator(); _i->hasNext(); ) {
////                    Context* recipient = java_cast< Context* >(_i->next());
////                    {
////                        auto rvd = recipient)->getVariableDefinition(vd)->getName());
////                        if(rvd != 0 && rvd)->isWritable() && (rvd)->getFormat() == 0 || rvd)->getFormat())->isReplicated())) {
////                            skip = false;
////                        }
////                    }
////                }
////                if(skip) {
////                    continue;
////                }
////            }
////            auto value = getVariable(vd)->getName(), caller);
////            auto format = value)->getFormat())->clone();
////            auto fields = new ::DataTable(FIFT_REPLICATE_FIELDS());
////            for (auto _i = format)->iterator(); _i->hasNext(); ) {
////                ::FieldFormat* ff = java_cast< ::FieldFormat* >(_i->next());
////                {
////                    if(ff)->isNotReplicated()) {
////                        ff)->setReadonly(true);
////                    }
////                    if(!ff)->isHidden() && !ff)->isReadonly() && !ff)->isNotReplicated()) {
////                        fields)->addRecord())->addString(ff)->getName()))->addString(ff)->toString()))->addBoolean(::java::lang::Boolean::valueOf(true));
////                    }
////                }
////            }
////            result)->addRecord())->addString(vd)->getName()))->addString(vd)->getDescription()))->addBoolean(::java::lang::Boolean::valueOf(false)))->addDataTable(fields))->addDataTable(value);
////        }
////    }
////    result)->fixRecords();
////    return result;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFcopy(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////    auto result = new ::DataTable(def)->getOutputFormat());
////    for (auto _i = parameters)->iterator(); _i->hasNext(); ) {
////        ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
////        {
////            if(!(rec)->getBoolean(FOF_COPY_DATA_REPLICATE())))->booleanValue()) {
////                continue;
////            }
////            auto varName = rec)->getString(FOF_COPY_DATA_NAME());
////            auto providedDesc = rec)->getString(FOF_COPY_DATA_DESCRIPTION());
////            auto varValue = rec)->getDataTable(FOF_COPY_DATA_VALUE());
////            auto targetVd = getVariableDefinition(varName, caller);
////            if(targetVd == 0) {
////                result)->addRecord())->addString(providedDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(Cres::get()->getString("conVarNotAvailInTgt"));
////                continue;
////            }
////            auto varDesc = targetVd)->getDescription();
////            if(!targetVd)->isWritable()) {
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(Cres::get()->getString("conVarNotWritableInTgt"));
////                continue;
////            }
////            ::boost::shared_ptr<DataTable> tgtVal;
////            try {
////                tgtVal = getVariable(varName, caller);
////            } catch (ContextException* ex) {
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(Cres::get()->getString("conErrGettingTgtVar"))+ex)->getMessage())->toString());
////                continue;
////            }
////            std::list  fields = new ::java::util::LinkedList();
////            for (auto _i = rec)->getDataTable(FOF_COPY_DATA_FIELDS()))->iterator(); _i->hasNext(); ) {
////                ::DataRecord* fieldRec = java_cast< ::DataRecord* >(_i->next());
////                {
////                    if((fieldRec)->getBoolean(FIF_REPLICATE_FIELDS_REPLICATE())))->booleanValue()) {
////                        fields)->add(fieldRec)->getString(FIF_REPLICATE_FIELDS_NAME())));
////                    }
////                }
////            }
////            auto tableCopyErrors = ::DataTableReplication::copy(varValue, tgtVal, false, false, true, true, false, fields);
////            ::DataTableUtils::inlineData(tgtVal, getContextManager(), caller);
////            try {
////                setVariable(targetVd, caller, request, tgtVal);
////            } catch (ContextException* ex) {
////                Log::CONTEXT_FUNCTIONS())->warn("Error setting variable during context copy", ex);
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(Cres::get()->getString("conErrSettingTgtVar"))+ex)->getMessage())->toString());
////                continue;
////            }
////            if(tableCopyErrors)->size() > 0) {
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(::com::tibbo::aggregate::common::util::StringUtils::print(static_cast< ::java::util::Collection* >(tableCopyErrors), "; "));
////            } else {
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(true));
////            }
////        }
////    }
////    return result;
////}
////
////boost::shared_ptr<DataTable> AbstractContext::callFcopyToChildren(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters)
////{
////   // return copyTo(def, caller, request, parameters, getChildren(caller));
////}
////
////boost::shared_ptr<DataTable> AbstractContext::copyTo(boost::shared_ptr<FunctionDefinition> def, boost::shared_ptr<CallerController> caller, RequestController* request, ::boost::shared_ptr<DataTable> parameters, std::list  children)
////{
////
////	auto result = new ::DataTable(def)->getOutputFormat());
////    for (auto _i = children)->iterator(); _i->hasNext(); ) {
////        Context* child = java_cast< Context* >(_i->next());
////        {
////            auto conDesc = child)->getDescription() != 0 ? child)->getDescription() : child)->getPath();
////            ::boost::shared_ptr<DataTable> conRes;
////            try {
////                conRes = child)->callFunction(F_COPY(), caller, request, parameters);
////            } catch (ContextException* ex) {
////                result)->addRecord())->addString(conDesc))->addString(0))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(ex)->getMessage());
////                continue;
////            }
////            for (auto _i = conRes)->iterator(); _i->hasNext(); ) {
////                ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
////				{
////					result)->addRecord())->addString(conDesc))->addString(rec)->getString(FIELD_REPLICATE_VARIABLE())))->addBoolean(rec)->getBoolean(FIELD_REPLICATE_SUCCESSFUL())))->addString(rec)->getString(FIELD_REPLICATE_ERRORS()));
////                }
////			}
////		}
////	}
////	return result;
////}
////
////
////
////
//
//
std::string AbstractContext::getPath()
  {

	if (getParent() == 0)
	{
      return createPath();
    }

	if (path.empty() == true)
    {
      path = createPath();
    }

    return path;
  }
