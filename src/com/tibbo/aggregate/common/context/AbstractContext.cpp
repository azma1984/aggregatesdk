#include "AbstractContext.h"
#include "context/Contexts.h"
#include "context/VariableDefinition.h"
#include "action/BasicActionDefinition.h"
#include "context/VariableData.h"
#include "context/FunctionData.h"
#include "context/EventData.h"
#include "datatable/DataTable.h"

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


const int AbstractContext::VERY_LOW_PERFORMANCE_THRESHOLD = 120000;
const int AbstractContext::LOW_PERFORMANCE_THRESHOLD = 20000;

PermissionsPtr AbstractContext::DEFAULT_PERMISSIONS_;


AbstractContext::AbstractContext(const std::string &name)
{
//    setName(name);
//
//	permissionCheckingEnabled = true;
//	permissionChecker = new NullPermissionChecker();
//	valueCheckingEnabled = true;
//	childrenConcurrencyEnabled = false;
//	childrenSortingEnabled = true;
//	fireUpdateEvents = true;
//
//
//	VARIABLE_DEFINITION_FORMAT = TableFormatPtr(new TableFormat);
//
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_NAME + "><S>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_FORMAT + "><S><F=N>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_DESCRIPTION + "><S><F=N>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_READABLE + "><B>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_WRITABLE + "><B>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_HELP + "><S><F=N>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_GROUP + "><S><F=N>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_ICON_ID + "><S><F=N>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_HELP_ID + "><S><F=N>");
//	VARIABLE_DEFINITION_FORMAT->addField("<" + FIELD_VD_CACHE_TIME + "><L><F=N>");
//
//	EF_VARIABLE_ADDED = TableFormatPtr(VARIABLE_DEFINITION_FORMAT->clone());
//   //	EF_VARIABLE_ADDED->setMinRecords(1);  todo - not make in datatable/TableFormat.h
//   //	EF_VARIABLE_ADDED->setMaxRecords(1);  todo - not make in datatable/TableFormat.h
//
//	FUNCTION_DEFINITION_FORMAT= TableFormatPtr(new TableFormat);
//	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_NAME+"><S>");
//	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_INPUTFORMAT+"><S><F=N>");
//	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_OUTPUTFORMAT+"><S><F=N>");
//	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_DESCRIPTION+"><S><F=N>");
//	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_HELP+"><S><F=N>");
//	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_GROUP+"><S><F=N>");
//	FUNCTION_DEFINITION_FORMAT->addField("<"+FIELD_FD_ICON_ID+"><S><F=N>");
//
//	EF_FUNCTION_ADDED = TableFormatPtr(FUNCTION_DEFINITION_FORMAT->clone());
//   //	EF_FUNCTION_ADDED->setMinRecords(1);  todo - not make in datatable/TableFormat.h
//   //	EF_FUNCTION_ADDED->setMaxRecords(1);  todo - not make in datatable/TableFormat.h
//
//	EVENT_DEFINITION_FORMAT= TableFormatPtr(new TableFormat);
//	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_NAME+"><S>");
//	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_FORMAT+"><S><F=N>");
//	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_DESCRIPTION+"><S><F=N>");
//	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_HELP+"><S><F=N>");
//	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_LEVEL+"><I>");
//	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_GROUP+"><S><F=N>");
//	EVENT_DEFINITION_FORMAT->addField("<"+FIELD_ED_ICON_ID+"><S><F=N>");
//
//	EF_EVENT_ADDED = TableFormatPtr(EVENT_DEFINITION_FORMAT->clone());
//   //	EF_EVENT_ADDED->setMinRecords(1);  todo - not make in datatable/TableFormat.h
//   //	EF_EVENT_ADDED->setMaxRecords(1);  todo - not make in datatable/TableFormat.h
//
//   //	VFT_CHILDREN = FieldFormat::create("<"+VF_CHILDREN_NAME+"><S>")->wrap();  //todo - not make in datatable/FieldFormat.h
//
//	INFO_DEFINITION_FORMAT = TableFormatPtr(new TableFormat(1,1));
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_DESCRIPTION+"><S><F=N><D="+Cres::get()->getString("description")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_TYPE+"><S><D="+Cres::get()->getString("type")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_GROUP+"><S><F=N><D="+Cres::get()->getString("group")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_ICON+"><S><F=N><D="+Cres::get()->getString("conIconId")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_LOCAL_ROOT+"><S><D="+Cres::get()->getString("conLocalRoot")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_REMOTE_ROOT+"><S><F=N><D="+Cres::get()->getString("conRemoteRoot")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_REMOTE_PATH+"><S><D="+Cres::get()->getString("conRemotePath")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_REMOTE_PRIMARY_ROOT+"><S><F=N><D="+Cres::get()->getString("conRemotePrimaryRoot")+">");
//	INFO_DEFINITION_FORMAT->addField("<"+VF_INFO_MAPPED+"><B><D="+Cres::get()->getString("conMapped")+">");
//
//	ACTION_DEF_FORMAT= TableFormatPtr(new TableFormat);
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_NAME+"><S>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_DESCRIPTION+"><S><F=N>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_HELP+"><S><F=N>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_ACCELERATOR+"><S><F=N>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_DROP_SOURCES+"><T><F=N>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_HIDDEN+"><B>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_ENABLED+"><B>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_ICON_ID+"><S><F=N>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_GROUP+"><S><F=N>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_EXECUTION_GROUP+"><S><F=N>");
//	ACTION_DEF_FORMAT->addField("<"+ActionConstants::FIELD_AD_DEFAULT+"><B>");
//
//   //	RESOURCE_MASKS_FORMAT= FieldFormat::create("<"+ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK+"><S><F=N>")->wrap();//todo - not make in datatable/FieldFormat.h
//
//	FIFT_GET_COPY_DATA = TableFormatPtr(new TableFormat(1, 1));
//	FIFT_GET_COPY_DATA->addField("<"+FIF_COPY_DATA_GROUP+"><S><F=N>");
//	FIFT_GET_COPY_DATA->addField("<"+FIF_COPY_DATA_RECIPIENTS+"><T><F=N>");
//   //	FIFT_GET_COPY_DATA_RECIPIENTS = FieldFormat::create("<"+FIF_COPY_DATA_RECIPIENTS_RECIPIENT+"><S>")->wrap(); //todo - not make in datatable/FieldFormat.h
//	REPLICATE_INPUT_FORMAT= TableFormatPtr(new TableFormat);
//
//	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_NAME+"><S><F=RHK>");
//	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_DESCRIPTION+"><S><F=R><D="+Cres::get()->getString("variable")+">");
//	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_REPLICATE+"><B><A=0><D="+Cres::get()->getString("replicate")+">");
//	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_FIELDS+"><T><D="+Cres::get()->getString("fields")+">");
//	REPLICATE_INPUT_FORMAT->addField("<"+FOF_COPY_DATA_VALUE+"><T><D="+Cres::get()->getString("value")+">");
//	FIFT_REPLICATE_FIELDS= TableFormatPtr(new TableFormat);
//
//	FIFT_REPLICATE_FIELDS->addField("<"+FIF_REPLICATE_FIELDS_NAME+"><S><F=RHK>");
//	FIFT_REPLICATE_FIELDS->addField("<"+FIF_REPLICATE_FIELDS_DESCRIPTION+"><S><F=R><D="+Cres::get()->getString("field")+">");
//	FIFT_REPLICATE_FIELDS->addField("<"+FIF_REPLICATE_FIELDS_REPLICATE+"><B><A=1><D="+Cres::get()->getString("replicate")+">");
//	FIFT_REPLICATE_FIELDS->setNamingExpression("print({}, '{"+FIF_REPLICATE_FIELDS_REPLICATE+"} ? {"+FIF_REPLICATE_FIELDS_DESCRIPTION+"} : 0', ', ')");
//
//	REPLICATE_OUTPUT_FORMAT= TableFormatPtr(new TableFormat);
//	REPLICATE_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_VARIABLE+"><S><D="+Cres::get()->getString("variable") +">");
//	REPLICATE_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_SUCCESSFUL+"><B><D="+Cres::get()->getString("successful")+">");
//	REPLICATE_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_ERRORS+"><S><D="+Cres::get()->getString("errors")+">");
//
//	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT= TableFormatPtr(new TableFormat);
//	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_CONTEXT+"><S><D="+Cres::get()->getString("context")+">");
//	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_VARIABLE+"><S><D="+Cres::get()->getString("variable")+">");
//	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_SUCCESSFUL+"><B><D="+Cres::get()->getString("successful")+">");
//	REPLICATE_TO_CHILDREN_OUTPUT_FORMAT->addField("<"+FIELD_REPLICATE_ERRORS+"><S><D="+Cres::get()->getString("errors")+">");
//
//	EF_UPDATED= TableFormatPtr(new TableFormat(1,1));
//
//	EF_UPDATED->addField("<"+EF_UPDATED_VARIABLE+"><S>");
//	EF_UPDATED->addField("<"+EF_UPDATED_VALUE+"><T>");
//	EF_UPDATED->addField("<"+EF_UPDATED_USER+"><S><F=N>");
//
//	EF_CHANGE= TableFormatPtr(new TableFormat(1, 1));
//
//	EF_CHANGE->addField("<"+EF_CHANGE_VARIABLE+"><S>");
//	EF_CHANGE->addField("<"+EF_CHANGE_VALUE+"><T><F=N>");
//	EF_CHANGE->addField("<"+EF_CHANGE_DATA+"><S><F=N>");
//
//	EFT_INFO= TableFormatPtr(new TableFormat(1, 1, "<"+EF_INFO_INFO+"><S><D="+Cres::get()->getString("info")+">"));
//	EFT_VARIABLE_REMOVED= TableFormatPtr(new TableFormat(1,1, "<"+EF_VARIABLE_REMOVED_NAME+"><S>"));
//	EFT_EVENT_REMOVED= TableFormatPtr(new TableFormat(1,1, "<"+EF_EVENT_REMOVED_NAME+"><S>"));
//	EFT_FUNCTION_REMOVED= TableFormatPtr(new TableFormat(1,1, "<"+EF_FUNCTION_REMOVED_NAME+"><S>"));
//	EFT_CHILD_REMOVED= TableFormatPtr(new TableFormat(1,1, "<"+EF_CHILD_REMOVED_CHILD+"><S>"));
//	EFT_CHILD_ADDED= TableFormatPtr(new TableFormat(1,1, "<"+EF_CHILD_ADDED_CHILD+"><S>"));
//	EFT_ACTION_REMOVED= TableFormatPtr(new TableFormat(1,1, "<"+AbstractContext::EF_ACTION_REMOVED_NAME+"><S>"));
//
//	VD_INFO= new VariableDefinition(V_INFO, INFO_DEFINITION_FORMAT, true, false, Cres::get()->getString("conContextProps"), ContextUtils::GROUP_SYSTEM);
//	VD_INFO->setHidden(true);
//	VD_INFO->setReadPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	VD_VARIABLES= new VariableDefinition(V_VARIABLES, VARIABLE_DEFINITION_FORMAT, true, false, Cres::get()->getString("conVarList"));
//	VD_VARIABLES->setHidden(true);
//	VD_VARIABLES->setReadPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	VD_FUNCTIONS= new VariableDefinition(V_FUNCTIONS, FUNCTION_DEFINITION_FORMAT, true, false, Cres::get()->getString("conFuncList"));
//	VD_FUNCTIONS->setHidden(true);
//	VD_FUNCTIONS->setReadPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	VD_EVENTS= new VariableDefinition(V_EVENTS, EVENT_DEFINITION_FORMAT, true, false, Cres::get()->getString("conEvtList"));
//	VD_EVENTS->setHidden(true);
//	VD_EVENTS->setReadPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	VD_ACTIONS= new VariableDefinition(AbstractContext::V_ACTIONS, ACTION_DEF_FORMAT, true, false, Cres::get()->getString("conActionList"));
//	VD_ACTIONS->setHidden(true);
//	VD_ACTIONS->setReadPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	VD_CHILDREN= new VariableDefinition(V_CHILDREN, VFT_CHILDREN, true, false, Cres::get()->getString("conChildList"));
//	VD_CHILDREN->setHidden(true);
//	VD_CHILDREN->setReadPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	FD_GET_COPY_DATA= FunctionDefinitionPtr(new FunctionDefinition(F_GET_COPY_DATA, FIFT_GET_COPY_DATA, REPLICATE_INPUT_FORMAT));
//	FD_GET_COPY_DATA->setHidden(true);
//
//	FD_COPY= FunctionDefinitionPtr(new FunctionDefinition(F_COPY, REPLICATE_INPUT_FORMAT, REPLICATE_OUTPUT_FORMAT, Cres::get()->getString("conCopyProperties")));
//	FD_COPY->setHidden(true);
//
//	FD_COPY_TO_CHILDREN= FunctionDefinitionPtr(new FunctionDefinition(F_COPY_TO_CHILDREN, REPLICATE_INPUT_FORMAT, REPLICATE_TO_CHILDREN_OUTPUT_FORMAT, Cres::get()->getString("conCopyToChildren")));
//	FD_COPY_TO_CHILDREN->setHidden(true);
//
//	ED_INFO= EventDefinitionPtr(new EventDefinition(E_INFO, EFT_INFO, Cres::get()->getString("info"), ContextUtils::GROUP_DEFAULT));
//	ED_INFO->setLevel(EventLevel::INFO);
//	ED_INFO->setIconId(Icons::EVT_INFO);
//	ED_INFO->getPersistenceOptions()->setDedicatedTablePreferred(true);
//
//	ED_CHILD_ADDED= EventDefinitionPtr(new EventDefinition(E_CHILD_ADDED, EFT_CHILD_ADDED, Cres::get()->getString("conChildAdded"), ContextUtils::GROUP_SYSTEM));
//	ED_CHILD_ADDED->setSynchronous(true);
//	ED_CHILD_ADDED->setHidden(true);
//	ED_CHILD_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_CHILD_REMOVED= EventDefinitionPtr(new EventDefinition(E_CHILD_REMOVED, EFT_CHILD_REMOVED, Cres::get()->getString("conChildRemoved"), ContextUtils::GROUP_SYSTEM));
//	ED_CHILD_REMOVED->setSynchronous(true);
//	ED_CHILD_REMOVED->setHidden(true);
//	ED_CHILD_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_VARIABLE_ADDED= EventDefinitionPtr(new EventDefinition(E_VARIABLE_ADDED, EF_VARIABLE_ADDED, Cres::get()->getString("conVarAdded"), ContextUtils::GROUP_SYSTEM));
//	ED_VARIABLE_ADDED->setHidden(true);
//	ED_VARIABLE_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_VARIABLE_REMOVED= EventDefinitionPtr(new EventDefinition(E_VARIABLE_REMOVED, EFT_VARIABLE_REMOVED, Cres::get()->getString("conVarRemoved"), ContextUtils::GROUP_SYSTEM));
//	ED_VARIABLE_REMOVED->setHidden(true);
//	ED_VARIABLE_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_FUNCTION_ADDED= EventDefinitionPtr(new EventDefinition(E_FUNCTION_ADDED, EF_FUNCTION_ADDED, Cres::get()->getString("conFuncAdded"), ContextUtils::GROUP_SYSTEM));
//	ED_FUNCTION_ADDED->setHidden(true);
//	ED_FUNCTION_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_FUNCTION_REMOVED= EventDefinitionPtr(new EventDefinition(E_FUNCTION_REMOVED, EFT_FUNCTION_REMOVED, Cres::get()->getString("conFuncRemoved"), ContextUtils::GROUP_SYSTEM));
//	ED_FUNCTION_REMOVED->setHidden(true);
//	ED_FUNCTION_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_EVENT_ADDED= EventDefinitionPtr(new EventDefinition(E_EVENT_ADDED, EF_EVENT_ADDED, Cres::get()->getString("conEvtAdded"), ContextUtils::GROUP_SYSTEM));
//	ED_EVENT_ADDED->setHidden(true);
//	ED_EVENT_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_EVENT_REMOVED= EventDefinitionPtr(new EventDefinition(E_EVENT_REMOVED, EFT_EVENT_REMOVED, Cres::get()->getString("conEvtRemoved"), ContextUtils::GROUP_SYSTEM));
//	ED_EVENT_REMOVED->setHidden(true);
//	ED_EVENT_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//	//todo - 'setMinRecords' is not a member of 'TableFormat'
//   //	ED_ACTION_ADDED= EventDefinitionPtr(new EventDefinition(AbstractContext::E_ACTION_ADDED, ACTION_DEF_FORMAT->clone()->setMinRecords(1))->setMaxRecords(1), Cres::get()->getString("conActionAdded"));
//	ED_ACTION_ADDED->setHidden(true);
//	ED_ACTION_ADDED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_ACTION_REMOVED = EventDefinitionPtr(new EventDefinition(AbstractContext::E_ACTION_REMOVED, EFT_ACTION_REMOVED, Cres::get()->getString("conActionRemoved")));
//	ED_ACTION_REMOVED->setHidden(true);
//	ED_ACTION_REMOVED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_ACTION_STATE_CHANGED= EventDefinitionPtr(new EventDefinition(AbstractContext::E_ACTION_STATE_CHANGED, ACTION_DEF_FORMAT, Cres::get()->getString("conActionStateChanged")));
//	ED_ACTION_STATE_CHANGED->setHidden(true);
//	ED_ACTION_STATE_CHANGED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_INFO_CHANGED= EventDefinitionPtr(new EventDefinition(E_INFO_CHANGED, INFO_DEFINITION_FORMAT, Cres::get()->getString("conInfoChanged"), ContextUtils::GROUP_SYSTEM));
//	ED_INFO_CHANGED->setHidden(true);
//	ED_INFO_CHANGED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	ED_UPDATED= EventDefinitionPtr(new EventDefinition(E_UPDATED, EF_UPDATED, Cres::get()->getString("conUpdated"), ContextUtils::GROUP_SYSTEM));
//	ED_UPDATED->setHidden(true);
//
//	ED_CHANGE= EventDefinitionPtr(new EventDefinition(E_CHANGE, EF_CHANGE, Cres::get()->getString("change"), ContextUtils::GROUP_SYSTEM));
//	ED_CHANGE->setHidden(true);
//	ED_CHANGE->getPersistenceOptions()->setDedicatedTablePreferred(true);
//
//	// E2451 Undefined symbol 'EMPTY_FORMAT'
//	 //	ED_DESTROYED= EventDefinitionPtr(new EventDefinition(E_DESTROYED, TableFormat::EMPTY_FORMAT, Cres::get()->getString("conDestroyedPermanently"), ContextUtils::GROUP_SYSTEM));
//	ED_DESTROYED->setSynchronous(true);
//	ED_DESTROYED->setHidden(true);
//	ED_DESTROYED->setPermissions(DefaultPermissionChecker::getNullPermissions());
//
//	VFT_VARIABLE_STATUSES= TableFormatPtr(new TableFormat);
//	VFT_VARIABLE_STATUSES->addField("<"+VF_VARIABLE_STATUSES_NAME+"><S>");
//	VFT_VARIABLE_STATUSES->addField("<"+VF_VARIABLE_STATUSES_STATUS+"><S><F=N>");
//	VFT_VARIABLE_STATUSES->addField("<"+VF_VARIABLE_STATUSES_COMMENT+"><S><F=N>");
//	DEFAULT_PERMISSIONS = DefaultPermissionChecker::getNullPermissions();

}

void AbstractContext::setup(ContextManagerPtr contextManager)
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
//AgObjectPtr call()
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
//	std::list<AgObjectPtr>::const_iterator child1;
//	for (child1 = children.begin(); child1!= children.end(); ++child1)
//	{
//	 ContextPtr child = (ContextPtr)*child1;
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
} //todo - thread stop
  //AgObjectPtr call1()
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
//	 std::list<AgObjectPtr>::const_iterator child1;
//	 for (child1 = children.begin(); child1!= children.end(); ++child1)
//	 {
//	  ContextPtr child = (ContextPtr)*child1;
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

int AbstractContext::compareTo(ContextPtr context)
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

std::list<AgObjectPtr>  AbstractContext::getChildren(CallerControllerPtr caller)
{
    //TODO:
//    if(!checkPermissions(getChildrenViewPermissions(), caller, this)) {
//        if(Log::CONTEXT_CHILDREN())->isDebugEnabled()) {
//            Log::CONTEXT_CHILDREN())->debug("Access to child '"+name)
//+"' denied in context '")
//+getPath())
//+"'");
//        }
//        return ::java::util::Collections::emptyList();
//    }
//    std::list  childList = new ::java::util::LinkedList(children);
//    for (auto *iterator = childList)->iterator(); iterator)->hasNext(); ) {
//        auto cur = java_cast< ContextPtr >(iterator)->next());
//        if(!shouldSeeChild(caller, cur)) {
//            iterator)->remove();
//        }
//    }
//    return childList;

    std::list<AgObjectPtr> list;
    return list;
}

////bool AbstractContext::shouldSeeChild(CallerControllerPtr caller, ContextPtr cur)
////{
////    return checkPermissions(cur)->getPermissions(), caller, cur) || canSee(caller, cur);
////}
////
////bool AbstractContext::canSee(CallerControllerPtr caller, ContextPtr con)
////{
////    if(!permissionCheckingEnabled) {
////        return true;
////    }
////    return getPermissionChecker())->canSee(caller != 0 ? caller)->getPermissions() : static_cast< PermissionsPtr >(0), con)->getPath(), getContextManager());
////}
////
std::list<AgObjectPtr>  AbstractContext::getChildren()
{
    return getChildren(static_cast< CallerControllerPtr >(0));
}

std::list<AgObjectPtr>   AbstractContext::getVisibleChildren(CallerControllerPtr caller)
{
    return getChildren(caller);
}

std::list<AgObjectPtr>   AbstractContext::getVisibleChildren()
{
    return getVisibleChildren(static_cast< CallerControllerPtr >(0));
}
//
bool AbstractContext::isMapped()
{
    return false;
}

std::list<AgObjectPtr>   AbstractContext::getMappedChildren(CallerControllerPtr caller)
{
    return isMapped() ? getVisibleChildren(caller) : getChildren(caller);
//		std::list<AgObjectPtr> list;
//	return list;
}

std::list<AgObjectPtr>   AbstractContext::getMappedChildren()
{
    return getMappedChildren(static_cast< CallerControllerPtr >(0));
}

std::string AbstractContext::getName()
{
    return name;
}

std::string AbstractContext::getDescription()
{
    return description;
}

void AbstractContext::setDescription(const std::string & description)
{
    std::string old = this->description;
    this->description = description;
    if (old == description) {
        contextInfoChanded();
    }
}

AgObjectPtr AbstractContext::getParent()
{
    return static_cast<AgObjectPtr>(parent);
}

bool AbstractContext::hasParent(ContextPtr parentContext)
{
    Context* root = this;
    do {
        root = dynamic_cast<Context*>(root->getParent().get());
        if(root == parentContext.get()) {
            return true;
        }
    } while (root->getParent() != 0);

    return false;
}

AgObjectPtr AbstractContext::getRoot()
{
    //TODO:
//    Context* root = static_cast<Context*>(this);
//    while (root->getParent() != 0)
//    {
//        root = root->getParent();
//    }

//    return (AgObjectPtr)(root);
    return 0;
}

AgObjectPtr AbstractContext::get(const std::string & contextPath, CallerControllerPtr caller)
{
//    if(contextPath == 0) {
//        return 0;
//    }
//    auto relative = ContextUtils::isRelative(contextPath);
//    if(relative) {
//        contextPath = contextPath)->substring(1);
//    }
//    auto cur = relative ? java_cast< ContextPtr >(this) : java_cast< ContextPtr >(getRoot());
//    if(contextPath)->length() == 0) {
//        return cur;
//    }
//    auto lastName = java_cast< ContextPtr >(getRoot()))->getName();
//    auto names = StringUtils::split(contextPath, ContextUtils::CONTEXT_NAME_SEPARATOR())->charAt(int(0)));
//    for (auto _i = names)->iterator(); _i->hasNext(); ) {
//        const std::string & child = java_cast< const std::string & >(_i->next());
//        {
//            if(child)->length() == 0) {
//                return 0;
//            }
//            if(cur == 0) {
//                break;
//            }
//            lastName = cur)->getName();
//            cur = java_cast< ContextPtr >(java_cast< ContextPtr >(cur)->getChild(child, caller)));
//        }
//    }
//    if(cur == 0) {
//        Log::CONTEXT_CHILDREN())->debug("Context '"+contextPath)
//            +"' not found in '")
//            +getPath())
//            +"', last found: '")
//            +lastName)
//            +"'");
//    }
//    return cur;
    return 0;
}

AgObjectPtr AbstractContext::get(const std::string & contextName)
{
    return get(contextName, static_cast< CallerControllerPtr >(0));
}

PermissionsPtr AbstractContext::getPermissions()
{
    if (!permissionCheckingEnabled) {
        return DEFAULT_PERMISSIONS();
    }

    if (permissions != 0) {
        return permissions;
    }

    if (getParent() != 0) {
        return dynamic_cast<Context*>(getParent().get())->getPermissions();
    }
    return DEFAULT_PERMISSIONS();
}

void AbstractContext::setName(const std::string &name)
{
    if(!ContextUtils::isValidContextName(name))
    {
        //TODO:
        //throw new IllegalArgumentException(Cres.get().getString("conIllegalName") + name);
    }
    this->name = name;
}

void AbstractContext::setParent(ContextPtr parent)
{
    this->parent = parent;
}

void AbstractContext::setPermissions(PermissionsPtr permissions)
{
    this->permissions = permissions;
}

void AbstractContext::setPermissionChecker(PermissionCheckerPtr permissionChecker)
{
    this->permissionChecker = permissionChecker;
}

void AbstractContext::setFireUpdateEvents(bool fireUpdateEvents)
{
    this->fireUpdateEvents = fireUpdateEvents;
}

bool AbstractContext::isFireUpdateEvents()
{
    return fireUpdateEvents;
}

////void AbstractContext::setContextManager(ContextManagerPtr contextManager)
////{
////    if(java_cast< ContextManagerPtr >(this->contextManager) != 0 && java_cast< ContextManagerPtr >(this->contextManager)) != contextManager)) {
////        throw new ::java::lang::IllegalStateException("Context manager already set");
////    }
////    this->contextManager = contextManager;
////}

void AbstractContext::setChildrenViewPermissions(PermissionsPtr childrenViewPermissions)
{
    this->childrenViewPermissions = childrenViewPermissions;
}

void AbstractContext::setChildrenSortingEnabled(bool childrenSortingEnabled)
{
    this->childrenSortingEnabled = childrenSortingEnabled;
}

bool AbstractContext::isChildrenSortingEnabled()
{
    return childrenSortingEnabled;
}

void AbstractContext::setValueCheckingEnabled(bool valueCheckingEnabled)
{
    this->valueCheckingEnabled = valueCheckingEnabled;
}

bool AbstractContext::isChildrenConcurrencyEnabled()
{
    return childrenConcurrencyEnabled;
}

void AbstractContext::setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled)
{
    this->childrenConcurrencyEnabled = childrenConcurrencyEnabled;
}

////void AbstractContext::checkPermissions(PermissionsPtr needPermissions, CallerControllerPtr caller)
////{
////    if(!checkPermissions(needPermissions, caller, this)) {
////        throw new ContextSecurityException(::java::text::MessageFormat::format(Cres::get()->getString("conAccessDenied"), new voidArray({getPath()), caller != 0 ? caller)->getPermissions()) : ""), needPermissions)})));
////    }
////}
////
////bool AbstractContext::checkPermissions(PermissionsPtr needPermissions, CallerControllerPtr caller, ContextPtr accessedContext)
////{
////    if(!permissionCheckingEnabled) {
////        return true;
////    }
////    return getPermissionChecker())->has(caller, needPermissions, accessedContext);
////}

//void AbstractContext::addChild(ContextPtr child)
//{
//    addChild(child, 0);
//}

//void AbstractContext::addChild(ContextPtr child, int  index)
//{
//    auto startTime = ::java::lang::System::currentTimeMillis();
//    childrenLock)->writeLock())->lock();
//    {
//        auto finally2 = finally([&] {
//            childrenLock)->writeLock())->unlock();
//        });
//        {
//            auto existing = java_cast< ContextPtr >(getChildWithoutCheckingPerms(child)->getName()));
//            if(existing != 0) {
//                throw new ::java::lang::IllegalArgumentException(::java::text::MessageFormat::format(Cres::get()->getString("conChildExists"), new voidArray({child)->getName()), getPath())})));
//            }
//            if(index != 0) {
//                if(childrenSortingEnabled) {
//                    throw new ::java::lang::IllegalStateException("Cannot add child with pre-defined index as children sorting is enabled");
//                }
//                children)->add((index))->intValue(), child);
//            } else {
//                children)->add(child));
//            }
//            childrenMap)->put(child)->getName(), child);
//            if(childrenSortingEnabled) {
//                ::java::util::Collections::sort(children);
//            }
//        }
//    }
//
//    try {
//        child)->setParent(this);
//        child)->setup(getContextManager());
//        if(setupComplete && fireUpdateEvents) {
//            fireEvent(E_CHILD_ADDED(), new voidArray({child)->getName())}));
//        }
//        if(getContextManager() != 0) {
//            getContextManager())->contextAdded(child);
//        }
//    } catch (::java::lang::Exception* ex) {
//        childrenLock)->writeLock())->lock();
//        {
//            auto finally3 = finally([&] {
//                childrenLock)->writeLock())->unlock();
//            });
//            {
//                childrenMap)->remove(child)->getName());
//                children)->remove(child));
//                throw new ContextRuntimeException("Error adding child '"+child)->toString())
//    +"' to context '")
//    +toString())
//    +"': ")
//    +ex)->getMessage())->toString(), ex);
//            }
//        }
//
//    }
//    Log::CONTEXT_CHILDREN())->debug("Added child '"+child)->getName())
//        +"' to '")
//        +getPath())
//        +"' in ")
//        +(::java::lang::System::currentTimeMillis() - startTime))
//        +" ms");
//}
//
//void AbstractContext::removeFromParent()
//{
//    if(java_cast< ContextPtr >(getParent()) != 0) {
//        java_cast< ContextPtr >(getParent()))->removeChild(static_cast< ContextPtr >(this));
//        setParent(static_cast< ContextPtr >(0));
//    } else {
//        Log::CONTEXT_CHILDREN())->debug("Can't remove context '"+getPath())
//            +"' from its parent: no parent context was set");
//    }
//}
//
void AbstractContext::destroy(bool moving)
{
    if (!moving) {
        stop();
        destroyChildren(false);
    }

    if (fireUpdateEvents) {
        EventDefinitionPtr ed = getEventDefinition(E_DESTROYED);
        if(ed != 0) {
            fireEvent(ed->getName());
        }
    }
    EventDataLock.lock();
    try {
        //TODO:
//        auto finally4 = finally([&] {
//            EventDataPtrLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = EventDataPtr)->values())->iterator(); _i->hasNext(); ) {
//                EventDataPtr ed = java_cast< EventDataPtr >(_i->next());
//                {
//                    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//                    if(logger)->isDebugEnabled()) {
//                        logger)->debug("Removing all listeners of event '"+ed)->getDefinition())->getName())
//            +"'");
//                    }
//                    ed)->clearListeners();
//                }
//            }
//        }
    }catch(...)
    {
      EventDataLock.unlock();
    }

    removeFromParent();
}

void AbstractContext::destroyChildren(bool moving)
{
    //TODO:
//    childrenLock->lock();
//    {
//        auto finally5 = finally([&] {
//            childrenLock)->writeLock())->unlock();
//        });
//        {
//            for (auto _i = new ::java::util::ArrayList(static_cast< std::list >(children))->iterator(); _i->hasNext(); ) {
//                ContextPtr child = java_cast< ContextPtr >(_i->next());
//                {
//                    child)->destroy(moving);
//                }
//            }
//        }
//    }catch(...)//finally
//    {
//      childrenLock.writeLock().unlock();
//    }
}

void AbstractContext::removeChild(ContextPtr child)
{
//    child)->teardown();
//    childrenLock)->writeLock())->lock();
//    {
//        auto finally6 = finally([&] {
//            childrenLock)->writeLock())->unlock();
//        });
//        {
//            if(children)->contains(child))) {
//                if(getContextManager() != 0) {
//                    try {
//                        child)->accept(new AbstractContext_removeChild_3(this, child));
//                    } catch (ContextException* ex) {
//                        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
//                    }
//                }
//                childrenMap)->remove(child)->getName());
//                children)->remove(child));
//                if(setupComplete && fireUpdateEvents) {
//                    fireEvent(E_CHILD_REMOVED(), new voidArray({child)->getName())}));
//                }
//            }
//        }
//    }
//
}

void AbstractContext::removeChild(const std::string & name)
{
    //TODO:
//    auto con = java_cast< ContextPtr >(getChildWithoutCheckingPerms(name));
//    if(con != 0) {
//        removeChild(con);
//        return;
//    }
//    Log::CONTEXT_CHILDREN())->debug("Remove error: child '"+name)
//        +"' not found in context ")
//        +getPath())->toString());
}

void AbstractContext::reorderChild(ContextPtr child, int index)
{
//TODO:
//    if(childrenSortingEnabled) {
//        throw new ::java::lang::IllegalStateException("Cannot reorder children when children sorting is enabled");
//    }
//    childrenLock)->writeLock())->lock();
//    {
//        auto finally7 = finally([&] {
//            childrenLock)->writeLock())->unlock();
//        });
//        {
//            auto oi = children)->indexOf(child);
//            if(children)->remove(child))) {
//                children)->add(index - (oi < index ? int(1) : int(0)), child);
//            }
//        }
//    }

}

void AbstractContext::destroyChild(ContextPtr child, bool moving)
{
    child->destroy(moving);
}

void AbstractContext::destroyChild(const std::string & name, bool moving)
{
    ContextPtr con = getChildWithoutCheckingPerms(name);
    if (con != 0) {
        destroyChild(con, moving);
        return;
    }

//    Log::CONTEXT_CHILDREN())->warn("Destroy error: child '"+name)
//        +"' not found in context ")
//        +getPath())->toString());
}

void AbstractContext::removeAllChildren()
{
    //TODO:
//    childrenLock)->readLock())->lock();
//    {
//        auto finally8 = finally([&] {
//            childrenLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                ContextPtr child = java_cast< ContextPtr >(_i->next());
//                {
//                    removeChild(child);
//                }
//            }
//        }
//    }

}

void AbstractContext::movePrepare(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName)
{
}

void AbstractContext::moveInternal(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName)
{
    //TODO:
//    setName(newName);
//    childrenLock)->readLock())->lock();
//    {
//        auto finally9 = finally([&] {
//            childrenLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                ContextPtr child = java_cast< ContextPtr >(_i->next());
//                {
//                    (java_cast< AbstractContextPtr >(child)))->moveInternal(ContextUtils::createName(new std::stringArray({oldPath, child)->getName()})), child)->getName(), ContextUtils::createName(new std::stringArray({newPath, child)->getName()})), child)->getName());
//                }
//            }
//        }
//    }

}

void AbstractContext::moveFinalize(const std::string & oldPath, const std::string & oldName, const std::string & newPath, const std::string & newName)
{
}

void AbstractContext::move(ContextPtr newParent, const std::string & newName)
{
    move(getPath(), newParent, newName);
}

void AbstractContext::move(const std::string & oldPath, ContextPtr newParent, const std::string & newName)
{
    //TODO:
//    Log::CONTEXT())->debug("Moving context "+getPath())
//        +" to ")
//        +newParent)->getPath())
//        +" and/or renaming to ")
//        +newName)->toString());
//    auto oldName = getName();
//    auto newPath = ContextUtils::createName(new std::stringArray({newParent)->getPath(), newName}));
//    movePrepare(oldPath, oldName, newPath, newName);
//    java_cast< ContextPtr >(getParent()))->destroyChild(static_cast< ContextPtr >(this), true);
//    moveInternal(oldPath, oldName, newPath, newName);
//    newParent)->addChild(this);
//    moveFinalize(oldPath, oldName, newPath, newName);
}

AgObjectPtr AbstractContext::getChild(const std::string & name, CallerControllerPtr caller)
{
    //TODO:
//    if(!checkPermissions(getChildrenViewPermissions(), caller, this)) {
//        return 0;
//    }
//    auto child = java_cast< ContextPtr >(getChildWithoutCheckingPerms(name));
//    if(child != 0 && shouldSeeChild(caller, child)) {
//        return child;
//    }
    return 0;
}

AgObjectPtr AbstractContext::getChild(const std::string & name)
{
    //TODO:
//    return java_cast< ContextPtr >(getChild(name, static_cast< CallerControllerPtr >(0)));
    return 0;
}

ContextPtr AbstractContext::getChildWithoutCheckingPerms(const std::string & name)
{
    //TODO:
    //return java_cast< ContextPtr >(childrenMap[name]);
    return ContextPtr();
}

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

std::string AbstractContext::createPath()
{
    //TODO:
//    ContextPtr con = this;
//    auto nm = getName();
//    do {
//        con = java_cast< ContextPtr >(con)->getParent());
//        if(con != 0) {
//            if(java_cast< ContextPtr >(con)->getParent()) != 0) {
//                nm = con)->getName())+ContextUtils::CONTEXT_NAME_SEPARATOR())
//    +nm)->toString();
//            }
//        }
//    } while (con != 0);
//    return nm;
    return "";
}

bool AbstractContext::addEventListener(const std::string & name, ContextEventListenerPtr listener)
{
    return addEventListener(name, listener, false);
}

bool AbstractContext::addEventListener(const std::string & name, ContextEventListenerPtr listener, bool weak)
{
    //TODO:
//    auto ed = getEventDataPtr(name);
//    if(ed == 0) {
//        throw new ::java::lang::IllegalArgumentException(Cres::get()->getString("conEvtNotAvail"))+name)->toString());
//    }
//    {
//        synchronized synchronized_0(ed);
//        {
//            try {
//                checkPermissions(ed)->getDefinition())->getPermissions() != 0 ? ed)->getDefinition())->getPermissions() : getPermissions(), listener)->getCallerController());
//            } catch (ContextSecurityException* ex) {
//                Log::CONTEXT_EVENTS())->warn("Error adding listener '"+listener))
//    +"' of event '")
//    +ed)->getDefinition())->getName())
//    +"' in context '")
//    +getPath())
//    +"': ")
//    +ex)->getMessage())->toString(), new ::java::lang::Exception());
//                return false;
//            }
//            auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//            if(logger)->isDebugEnabled()) {
//                logger)->debug("Adding '"+listener))
//    +"' as listener of event '")
//    +ed)->getDefinition())->getName())
//    +"' in '")
//    +getPath())
//    +"'");
//            }
//            return ed)->addListener(listener, weak);
//        }
//    }
 return true;
}

bool AbstractContext::removeEventListener(const std::string & name, ContextEventListenerPtr listener)
{
    //TODO:
//    auto ed = getEventDataPtr(name);
//    if(ed == 0) {
//        Log::CONTEXT_EVENTS())->warn("Error removing listener of event '"+name)
//            +"' in context '")
//            +getPath())
//            +"': event definition not found", new ::java::lang::Exception());
//        return false;
//    }
//    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//    if(logger)->isDebugEnabled()) {
//        logger)->debug("Removing '"+listener))
//            +"' listener of event '")
//            +ed)->getDefinition())->getName())
//            +"' in '")
//            +getPath())
//            +"'");
//    }
//    {
//        synchronized synchronized_1(ed);
//        {
//            return ed)->removeListener(listener);
//        }
//    }

 return true;
}

std::list<VariableDefinitionPtr>  AbstractContext::getVariableDefinitions(CallerControllerPtr caller)
{
    //TODO:
//return getVariableDefinitions(caller, false);
std::list<VariableDefinitionPtr> list;
 return list;
}

std::list<VariableDefinitionPtr>  AbstractContext::getVariableDefinitions(CallerControllerPtr caller, bool includeHidden)
{
    //TODO:
    std::list<VariableDefinitionPtr>  list;
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    variableDataLock)->readLock())->lock();
//    {
//        auto finally10 = finally([&] {
//            variableDataLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = variableData)->values())->iterator(); _i->hasNext(); ) {
//                VariableDataPtr d = java_cast< VariableDataPtr >(_i->next());
//                {
//                    auto def = d)->getDefinition();
//                    if((caller == 0 || caller)->isPermissionCheckingEnabled()) && !includeHidden && def)->isHidden()&& !debug) {
//                        continue;
//                    }
//                    auto readAccessGranted = checkPermissions(def)->getReadPermissions() != 0 ? def)->getReadPermissions() : getPermissions(), caller, this);
//                    auto writeAccessGranted = checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller, this);
//                    if(!readAccessGranted && !writeAccessGranted) {
//                        continue;
//                    }
//                    if((def)->isReadable() == readAccessGranted) && (def)->isWritable() == writeAccessGranted)) {
//                        list)->add(def));
//                    } else {
//                        auto clone = def)->clone();
//                        clone)->setReadable(def)->isReadable() ? readAccessGranted : false);
//                        clone)->setWritable(def)->isWritable() ? writeAccessGranted : false);
//                        list)->add(clone));
//                    }
//                }
//            }
//        }
//    }
//
    return list;
}

std::list<VariableDefinitionPtr>  AbstractContext::getVariableDefinitions()
{
   return getVariableDefinitions(CallerControllerPtr(0));
}

std::list<VariableDefinitionPtr>  AbstractContext::getVariableDefinitions(CallerControllerPtr caller, const std::string & group)
{
    //TODO:
  std::list<VariableDefinitionPtr>  defs;
//    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        VariableDefinitionPtr vd = java_cast< VariableDefinitionPtr >(_i->next());
//        {
//            if(vd)->getGroup() != 0 && (Util::equals(group, vd)->getGroup()) || vd)->getGroup())->startsWith(group)+ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
//                defs)->add(vd));
//            }
//        }
//    }
  return defs;
}

std::list<VariableDefinitionPtr>  AbstractContext::getVariableDefinitions(const std::string & group)
{
   return getVariableDefinitions(0, group);
}

PermissionCheckerPtr AbstractContext::getPermissionChecker()
{
    return permissionChecker;
}

PermissionsPtr AbstractContext::getChildrenViewPermissions()
{
    return childrenViewPermissions != 0 ? childrenViewPermissions : getPermissions();
}

ContextManagerPtr AbstractContext::getContextManager()
{
    return contextManager;
}

 /*template <class C> */bool AbstractContext/*<C> */::isSetupComplete()
{
    return setupComplete;
}

bool AbstractContext::isStarted()
{
    return started;
}

bool AbstractContext ::isInitializedInfo()
{
    return setupComplete;
}

bool AbstractContext ::isInitializedChildren()
{
    return setupComplete;
}

bool AbstractContext::isInitializedVariables()
{
    return setupComplete;
}

bool AbstractContext::isInitializedFunctions()
{
    return setupComplete;
}

bool AbstractContext::isInitializedEvents()
{
    return setupComplete;
}

std::list<FunctionDefinitionPtr>  AbstractContext::getFunctionDefinitions(CallerControllerPtr caller)
{
  return getFunctionDefinitions(caller, false);
}

std::list<FunctionDefinitionPtr>  AbstractContext::getFunctionDefinitions(CallerControllerPtr caller, bool includeHidden)
{
    //TODO:
   std::list<FunctionDefinitionPtr>  list;
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    functionDataLock)->readLock())->lock();
//    {
//        auto finally11 = finally([&] {
//            functionDataLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = functionData)->values())->iterator(); _i->hasNext(); ) {
//                FunctionDataPtr d = java_cast< FunctionDataPtr >(_i->next());
//                {
//                    auto def = d)->getDefinition();
//                    if(!checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller, this)) {
//                        continue;
//                    }
//                    if((caller == 0 || caller)->isPermissionCheckingEnabled()) && !includeHidden && def)->isHidden()&& !debug) {
//                        continue;
//                    }
//                    list)->add(def));
//                }
//            }
//        }
//    }
//
    return list;
}

std::list<FunctionDefinitionPtr>  AbstractContext::getFunctionDefinitions()
{
    return getFunctionDefinitions(CallerControllerPtr(0));
}

std::list<FunctionDefinitionPtr>  AbstractContext ::getFunctionDefinitions(CallerControllerPtr caller, const std::string & group)
{
    //TODO:
  std::list<FunctionDefinitionPtr> defs;
//    for (auto _i = getFunctionDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        FunctionDefinitionPtr fd = java_cast< FunctionDefinitionPtr >(_i->next());
//        {
//            if(fd)->getGroup() != 0 && (Util::equals(group, fd)->getGroup()) || fd)->getGroup())->startsWith(group)+ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
//                defs)->add(fd));
//            }
//        }
//    }
  return defs;
}

std::list<FunctionDefinitionPtr>  /*template <class C> */AbstractContext/*<C>*/ ::getFunctionDefinitions(const std::string & group)
{
  return getFunctionDefinitions(0, group);
}

//java::util::concurrent::locks::ReentrantReadWriteLock* AbstractContext::getChildrenLock()
//{
//    return childrenLock;
//}

std::string AbstractContext::getType()
{
   // return type != 0 ? type : ContextUtils::getTypeForClass(getClass());
    return "";
}

bool AbstractContext::isPermissionCheckingEnabled()
{
    return permissionCheckingEnabled;
}

std::string AbstractContext::getIconId()
{
    return iconId;
}

int AbstractContext::getIndex()
{
    return index;
}

std::string AbstractContext::getGroup()
{
    return group;
}

std::string AbstractContext::getLocalRoot()
{
    return Contexts::CTX_ROOT;
}

bool AbstractContext::isProxy()
{
    return false;
}

bool AbstractContext::isDistributed()
{
    return false;
}

std::string AbstractContext::getRemoteRoot()
{
    return 0;
}

std::string AbstractContext::getRemotePath()
{
    return getPath();
}

std::string AbstractContext::getRemotePrimaryRoot()
{
    return 0;
}

void AbstractContext::setType(const std::string & type)
{
    //TODO:
//    if(!ContextUtils::isValidContextType(type)) {
//        throw new ::java::lang::IllegalArgumentException(Cres::get()->getString("conIllegalType"))+type)->toString());
//    }
//    auto old = this->type;
//    this->type = type;
//    if(old == 0 || !old)->equals(type))) {
//        contextInfoChanded();
//    }
}

void AbstractContext::setPermissionCheckingEnabled(bool permissionCheckingEnabled)
{
    this->permissionCheckingEnabled = permissionCheckingEnabled;
}

void AbstractContext::setIconId(const std::string & iconId)
{
    //TODO:
//    auto old = this->iconId;
//    this->iconId = iconId;
//    if(old == 0 || !old)->equals(iconId))) {
//        contextInfoChanded();
//    }
}

void AbstractContext::contextInfoChanded()
{
    //TODO:
//    if(setupComplete) {
//        auto cm = getContextManager();
//        if(cm != 0) {
//            cm)->contextInfoChanged(this);
//        }
//        if(fireUpdateEvents) {
//            auto ed = getEventDefinition(E_INFO_CHANGED());
//            if(ed != 0) {
//                fireEvent(E_INFO_CHANGED(), createContextInfoTable());
//            }
//        }
//    }
}

void AbstractContext::setIndex(int  index)
{
    this->index = index;
}

void AbstractContext::setGroup(const std::string & group)
{
    //TODO:
//    auto old = this->group;
//    this->group = group;
//    if(old == 0 || !old)->equals(group))) {
//        contextInfoChanded();
//    }
}

std::list<EventDefinitionPtr>  AbstractContext::getEventDefinitions(CallerControllerPtr caller)
{
    return getEventDefinitions(caller, false);
}

std::list<EventDefinitionPtr>  AbstractContext::getEventDefinitions(CallerControllerPtr caller, bool includeHidden)
{
    std::list<EventDefinitionPtr>  list;
    //TODO:
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    EventDataPtrLock)->readLock())->lock();
//    {
//        auto finally12 = finally([&] {
//            EventDataPtrLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = EventDataPtr)->values())->iterator(); _i->hasNext(); ) {
//                EventDataPtr d = java_cast< EventDataPtr >(_i->next());
//                {
//                    if(!checkPermissions(d)->getDefinition())->getPermissions() != 0 ? d)->getDefinition())->getPermissions() : getPermissions(), caller, this)) {
//                        continue;
//                    }
//                    if((caller == 0 || caller)->isPermissionCheckingEnabled()) && !includeHidden && d)->getDefinition())->isHidden()&& !debug) {
//                        continue;
//                    }
//                    list)->add(d)->getDefinition()));
//                }
//            }
//        }
//    }

    return list;
}

std::list<EventDefinitionPtr>  AbstractContext::getEventDefinitions()
{
    return getEventDefinitions(static_cast< CallerControllerPtr >(0));
}

std::list<EventDefinitionPtr>  AbstractContext::getEventDefinitions(CallerControllerPtr caller, const std::string & group)
{
    std::list<EventDefinitionPtr>  res;
//    for (auto _i = getEventDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        EventDefinitionPtr ed = java_cast< EventDefinitionPtr >(_i->next());
//        {
//            if(ed)->getGroup() != 0 && (Util::equals(group, ed)->getGroup()) || ed)->getGroup())->startsWith(group)+ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
//                res)->add(ed));
//            }
//        }
//    }
    return res;
}

std::list<EventDefinitionPtr>  AbstractContext::getEventDefinitions(const std::string & group)
{
    return getEventDefinitions(static_cast< CallerControllerPtr >(0), group);
}

ActionDefinitionPtr AbstractContext::getActionDefinition(const std::string & name)
{
    //TODO:
//    actionDefinitionsLock)->readLock())->lock();
//    {
//        auto finally13 = finally([&] {
//            actionDefinitionsLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = actionDefinitions)->iterator(); _i->hasNext(); ) {
//                ::com::tibbo::aggregate::common::action::ActionDefinitionPtr def = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinitionPtr >(_i->next());
//                {
//                    if(def)->getName())->equals(name))) {
//                        return def;
//                    }
//                }
//            }
//        }
//    }

    return 0;
}


ActionDefinitionPtr AbstractContext::getActionDefinition(const std::string & name, CallerControllerPtr caller)
{
//TODO:
//    for (auto _i = getActionDefinitions(caller, true))->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::action::ActionDefinitionPtr ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinitionPtr >(_i->next());
//        {
//            if(ad)->getName())->equals(name))) {
//                return ad;
//            }
//        }
//    }
    return 0;
}

ActionDefinitionPtr AbstractContext::getDefaultActionDefinition(CallerControllerPtr caller)
{
    //TODO:
//    for (auto _i = getActionDefinitions(caller, true))->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::action::ActionDefinitionPtr ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinitionPtr >(_i->next());
//        {
//            if(ad)->isDefault()) {
//                return ad;
//            }
//        }
//    }
    return 0;
}

std::list<ActionDefinitionPtr>  AbstractContext::getActionDefinitions(CallerControllerPtr caller)
{
    return getActionDefinitions(caller, false);
}

void AbstractContext::addActionDefinition(ActionDefinitionPtr def)
{
    //TODO:
//    if(def)->getName() == 0) {
//        throw new ::java::lang::NullPointerException("Action name can't be NULL");
//    }
//    if(getActionDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException("Action '"+def)->getName())
//            +"' is already defined in context '")
//            +getPath())
//            +"'");
//    }
//    actionDefinitionsLock)->writeLock())->lock();
//    {
//        auto finally14 = finally([&] {
//            actionDefinitionsLock)->writeLock())->unlock();
//        });
//        {
//            actionDefinitions)->add(def));
//            ::java::util::Collections::sort(actionDefinitions);
//            if(isSetupComplete() && isFireUpdateEvents()) {
//                auto ed = getEventDefinition(AbstractContext::E_ACTION_ADDED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), actDefToDataRecord(def))->wrap());
//                }
//            }
//        }
//    }

}

std::list<ActionDefinitionPtr>  AbstractContext::getActionDefinitions(CallerControllerPtr caller, bool includeHidden)
{
    std::list<ActionDefinitionPtr> list;
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    actionDefinitionsLock)->readLock())->lock();
//    {
//        auto finally15 = finally([&] {
//            actionDefinitionsLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = actionDefinitions)->iterator(); _i->hasNext(); ) {
//                ::com::tibbo::aggregate::common::action::ActionDefinitionPtr d = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinitionPtr >(_i->next());
//                {
//                    if(!checkPermissions(d)->getPermissions() != 0 ? d)->getPermissions() : getPermissions(), caller, this)) {
//                        continue;
//                    }
//                    if(d)->isHidden() && !debug && !includeHidden) {
//                        continue;
//                    }
//                    list)->add(d));
//                }
//            }
//        }
//    }

    return list;
}

std::list<ActionDefinitionPtr>  AbstractContext::getActionDefinitions()
{
    return getActionDefinitions(static_cast< CallerControllerPtr >(0));
}

void AbstractContext::removeActionDefinition(const std::string & name)
{
    //TODO:
//    auto def = getActionDefinition(name);
//    actionDefinitionsLock)->writeLock())->lock();
//    {
//        auto finally16 = finally([&] {
//            actionDefinitionsLock)->writeLock())->unlock();
//        });
//        {
//            if(actionDefinitions)->remove(def))) {
//                if(isSetupComplete() && isFireUpdateEvents()) {
//                    auto ed = getEventDefinition(AbstractContext::E_ACTION_REMOVED());
//                    if(ed != 0) {
//                        fireEvent(ed)->getName(), new voidArray({name)}));
//                    }
//                }
//            }
//        }
//    }

}

ActionDefinitionPtr AbstractContext::actDefFromDataRecord(DataRecordPtr rec)
{
    BasicActionDefinition* def = new BasicActionDefinition(rec->getString(ActionConstants::FIELD_AD_NAME));
    //TODO:
//    def)->setDescription(rec)->getString(ActionConstants::FIELD_AD_DESCRIPTION()));
//    def)->setHelp(rec)->getString(ActionConstants::FIELD_AD_HELP()));
//    auto accelerator = rec)->getString(ActionConstants::FIELD_AD_ACCELERATOR());
//    if(accelerator != 0) {
//        def)->setAccelerator(new ::com::tibbo::aggregate::common::action::KeyStroke(accelerator));
//    }
//    auto dropSourcesTable = rec)->getDataTable(ActionConstants::FIELD_AD_DROP_SOURCES());
//    if(dropSourcesTable != 0 && dropSourcesTable)->getRecordCount() > 0) {
//        std::list  dropSources = new ::java::util::LinkedList();
//        for (auto _i = dropSourcesTable)->iterator(); _i->hasNext(); ) {
//            ::DataRecordPtr* ds = java_cast< ::DataRecordPtr* >(_i->next());
//            {
//                dropSources->add(new TreeMask(ds)->getString(ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK()))));
//            }
//        }
//        def)->setDropSources(dropSources);
//    }
//    def)->setHidden((rec)->getBoolean(ActionConstants::FIELD_AD_HIDDEN())))->booleanValue());
//    def)->setEnabled((rec)->getBoolean(ActionConstants::FIELD_AD_ENABLED())))->booleanValue());
//    def)->setIconId(rec)->getString(ActionConstants::FIELD_AD_ICON_ID()));
//    def)->setGroup(rec)->getString(ActionConstants::FIELD_AD_GROUP()));
//    auto executionGroup = rec)->getString(ActionConstants::FIELD_AD_EXECUTION_GROUP());
//    if(executionGroup != 0) {
//        def)->setExecutionGroup(new ::com::tibbo::aggregate::common::action::GroupIdentifier(executionGroup));
//    }
//    def)->setDefault((rec)->getBoolean(ActionConstants::FIELD_AD_DEFAULT())))->booleanValue());
    return ActionDefinitionPtr(def);
}
//
DataTablePtr AbstractContext::getVariable(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
{
    //TODO:
//    auto startTime = ::java::lang::System::currentTimeMillis();
//    setupVariables();
//    auto data = getVariableData(def)->getName());
//    lock(request, data)->getReadWriteLock())->readLock());
//    {
//        auto finally17 = finally([&] {
//            data)->getReadWriteLock())->readLock())->unlock();
//            data)->registerGetOperation();
//        });
//        {
//            try {
//                checkPermissions(def)->getReadPermissions() != 0 ? def)->getReadPermissions() : getPermissions(), caller);
//                if(Log::CONTEXT_VARIABLES())->isDebugEnabled()) {
//                    Log::CONTEXT_VARIABLES())->debug("Trying to get variable '"+def)->getName())
//        +"' from context '")
//        +this->getPath())
//        +"'");
//                }
//                auto result = executeGetter(data, caller, request);
//                if(result)->isInvalid()) {
//                    throw new ContextException(result)->getInvalidationMessage());
//                }
//                result = checkVariableValue(def, result);
//                auto endTime = ::java::lang::System::currentTimeMillis();
//                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
//                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
//                    Log::PERFORMANCE())->log(level, "Getting value of variable '"+def))
//        +"' in context '")
//        +getPath())
//        +"' took ")
//        +(endTime - startTime))
//        +" milliseconds");
//                }
//                return result;
//            } catch (::java::lang::Exception* ex) {
//                throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conErrGettingVar"), new voidArray({def)->toString()), toString())})))+ex)->getMessage())->toString(), ex);
//            }
//        }
//    }
    return DataTablePtr(0);
}

////DataTablePtr AbstractContext::checkVariableValue(VariableDefinitionPtr def, ::DataTablePtr val)
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
////                CompatibilityConverterPtr converter = java_cast< CompatibilityConverterPtr >(_i->next());
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
////std::string AbstractContext::checkVariableValueFormat(VariableDefinitionPtr def, ::DataTablePtr table)
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
////DataTablePtr AbstractContext::executeGetter(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request)
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
////DataTablePtr AbstractContext::executeGetterMethod(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request)
////{
////    if(!data)->isGetterCached()) {
////        auto params = (new ::java::lang::ClassArray({
////            static_cast< AgClassPtr >(VariableDefinition::class_())
////            , static_cast< AgClassPtr >(CallerController::class_())
////            , static_cast< AgClassPtr >(RequestController::class_())
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
////            return java_cast< ::DataTablePtr >(getter)->invoke(this, new voidArray({
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
////DataTablePtr AbstractContext::executeDefaultGetter(const std::string & name, CallerControllerPtr caller)
////{
////    return executeDefaultGetter(name, caller, true);
////}
////
////DataTablePtr AbstractContext::executeDefaultGetter(const std::string & name, CallerControllerPtr caller, bool check)
////{
////    return executeDefaultGetter(name, caller, check, true);
////}
////
////DataTablePtr AbstractContext::executeDefaultGetter(const std::string & name, CallerControllerPtr caller, bool check, bool createDefault)
////{
////    auto def = getVariableDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conVarNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    return executeDefaultGetter(def, caller, check, createDefault);
////}
////
////DataTablePtr AbstractContext::executeDefaultGetter(VariableDefinitionPtr def, CallerControllerPtr caller, bool check, bool createDefault)
////{
////    auto value = executeDefaultGetterImpl(def, caller);
////    if(value == 0) {
////        return createDefault ? getDefaultValue(def) : static_cast< ::DataTablePtr >(0);
////    }
////    return check ? checkVariableValue(def, value) : value;
////}
////
////DataTablePtr AbstractContext::executeDefaultGetterImpl(VariableDefinitionPtr vd, CallerControllerPtr caller)
////{
////    auto value = getVariableData(vd)->getName()))->getValue();
////    return value != 0 ? java_cast< ::DataTablePtr >(value) : getDefaultValue(vd);
////}
////
int AbstractContext::hashCode()
{
    if(static_cast< Context* >(getParent().get()) == 0) {
        return 0;
    }

    int const prime = int(31);
    int result = int(1);
//    auto root = java_cast< ContextPtr >(getRoot());
//    auto path = getPath();
//    result = prime * result + ((root == 0) ? int(0) : root)->hashCode());
//    result = prime * result + ((path == 0) ? int(0) : path)->hashCode());
    return result;
}

bool AbstractContext::equals(AbstractContext *obj)
{
    if (this == obj) {
        return true;
    }

    if(obj == 0) {
        return false;
    }

    //TODO:
//    auto other = java_cast< AbstractContextPtr >(obj);
//    if(java_cast< ContextPtr >(getRoot())) != java_cast< ContextPtr >(other)->getRoot()))) {
//        return false;
//    }

    if (!Util::equals(getPath(), obj->getPath())) {
        return false;
    }

    return true;
}

DataTablePtr AbstractContext::getVariable(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request)
{
    return getVariable(getAndCheckVariableDefinition(name), caller, request);
}

DataTablePtr AbstractContext::getVariable(const std::string & name, CallerControllerPtr caller)
{
    return getVariable(getAndCheckVariableDefinition(name), caller, static_cast< RequestControllerPtr >(0));
}

DataTablePtr AbstractContext::getVariable(const std::string & name)
{
    return getVariable(getAndCheckVariableDefinition(name), static_cast< CallerControllerPtr >(0), static_cast< RequestControllerPtr >(0));
}

DataTablePtr AbstractContext::getVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
{
    return 0;
}

AgObjectPtr AbstractContext::getVariableObject(const std::string & name, CallerControllerPtr caller)
{
    //TODO
//    try {
//        auto def = getAndCheckVariableDefinition(name);
//        auto data = getVariableData(name);
//        data)->getReadWriteLock())->readLock())->lock();
//        {
//            auto finally19 = finally([&] {
//                data)->getReadWriteLock())->readLock())->unlock();
//            });
//            {
//                if(isSetupComplete() && data)->getValue() != 0) {
//                    return data)->getValue();
//                }
//                if(def)->getValueClass() == 0) {
//                    throw new ContextException("Value class not defined for variable: "+def)->toDetailedString())->toString());
//                }
//                AgObjectPtr value;
//                auto table = getVariable(name, caller);
//                auto list = ::DataTableConversion::beansFromTable(table, def)->getValueClass(), def)->getFormat(), true);
//                if(def)->getFormat())->isSingleRecord()) {
//                    value = java_cast< AgObjectPtr >(list)->get(0));
//                } else {
//                    value = list;
//                }
//                if(isSetupComplete() && def)->isLocalCachingEnabled() && !data)->getReadWriteLock())->isWriteLockedByCurrentThread()) {
//                    data)->setValue(value);
//                }
//                return value;
//            }
//        }

//    } catch (::java::lang::Exception* ex) {
//        throw new ContextRuntimeException(ex)->getMessage(), ex);
//    }
    return AgObjectPtr(0);
}

void AbstractContext::setVariable(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr value)
{
    //TODO:
//    auto startTime = ::java::lang::System::currentTimeMillis();
//    setupVariables();
//    auto data = getVariableData(def)->getName());
//    auto readLockedBySameThread = data)->getReadWriteLock())->getReadHoldCount() > 0;
//    if(!readLockedBySameThread) {
//        lock(request, data)->getReadWriteLock())->writeLock());
//    }
//    {
//        auto finally20 = finally([&] {
//            if(!readLockedBySameThread) {
//                data)->getReadWriteLock())->writeLock())->unlock();
//            }
//            data)->registerSetOperation();
//        });
//        {
//            if(value == 0) {
//                throw new ContextException("Value cannot be NULL");
//            }
//            auto resultingValue = value;
//            try {
//                checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller);
//                if(!def)->isWritable() && caller != 0 && caller)->isPermissionCheckingEnabled()) {
//                    throw new ContextException(Cres::get()->getString("conVarReadOnly"));
//                }
//                if(Log::CONTEXT_VARIABLES())->isDebugEnabled()) {
//                    Log::CONTEXT_VARIABLES())->debug("Trying to set variable '"+def)->getName())
//        +"' in context '")
//        +this->getPath())
//        +"'");
//                }
//                if(value)->isInvalid()) {
//                    throw new ContextException(value)->getInvalidationMessage());
//                }
//                if(def)->getFormat() != 0 && def)->getFormat())->hasReadOnlyFields() && caller != 0 && caller)->isPermissionCheckingEnabled()) {
//                    resultingValue = getVariable(def, caller, request);
//                    ::DataTableReplication::copy(value, resultingValue, false, true, true, true, true);
//                    checkVariableValueFormat(def, resultingValue);
//                }
//                auto msg = checkVariableValueFormat(def, resultingValue);
//                if(msg != 0) {
//                    Log::CONTEXT_VARIABLES())->debug("Invalid value of variable '"+def)->getName())
//        +"': ")
//        +msg)
//        +" (value: ")
//        +resultingValue))
//        +")");
//                    value = resultingValue;
//                    resultingValue = getVariable(def, caller, request);
//                    ::DataTableReplication::copy(value, resultingValue, true, true, true, true, true);
//                    checkVariableValueFormat(def, resultingValue);
//                }
//                if(def)->isLocalCachingEnabled()) {
//                    data)->setValue(0);
//                }
//                executeSetter(data, caller, request, resultingValue);
//                variableUpdated(def, caller, resultingValue);
//                auto endTime = ::java::lang::System::currentTimeMillis();
//                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
//                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
//                    Log::PERFORMANCE())->log(level, "Setting value of variable '"+def))
//        +"' in context '")
//        +getPath())
//        +"' took ")
//        +(endTime - startTime))
//        +" milliseconds");
//                }
//            } catch (::ValidationException* ex) {
//                throw ex;
//            } catch (::java::lang::Exception* ex) {
//                throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conErrSettingVar"), new voidArray({def)->toString()), toString())})))+ex)->getMessage())->toString(), ex);
//            }
//        }
//    }

}

////void AbstractContext::variableUpdated(VariableDefinitionPtr def, CallerControllerPtr caller, ::DataTablePtr value)
////{
////    fireUpdatedEvent(def, caller, value);
////    fireChangeEvent(def, caller, new Date(), value);
////}
////
////void AbstractContext::fireUpdatedEvent(VariableDefinitionPtr def, CallerControllerPtr caller, ::DataTablePtr value)
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
////void AbstractContext::fireChangeEvent(VariableDefinitionPtr def, CallerControllerPtr caller, DatePtr timestamp, ::DataTablePtr value)
////{
////    auto callerAllowsChangeEvents = caller == 0 || !caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS());
////    if(setupComplete && fireUpdateEvents && def)->isAllowUpdateEvents()&& callerAllowsChangeEvents) {
////        auto ed = getEventDefinition(E_CHANGE());
////        if(ed != 0) {
////            FireEventRequestControllerPtr fer = new FireChangeEventRequestController(def)->getChangeEventsExpirationPeriod(), def, value);
////            auto EventDataPtr = new ::DataTable(ed)->getFormat(), new voidArray({def)->getName())}));
////            fireEvent(ed, EventDataPtr, EventLevel::NONE, 0, timestamp, 0, caller, fer, 0);
////        }
////    }
////}
////
void AbstractContext::setupVariables()
{
}

////void AbstractContext::executeSetter(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr value)
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
////bool AbstractContext::executeSetterMethod(VariableDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr value)
////{
////    if(!data)->isSetterCached()) {
////        auto params = (new ::java::lang::ClassArray({
////            static_cast< AgClassPtr >(VariableDefinition::class_())
////            , static_cast< AgClassPtr >(CallerController::class_())
////            , static_cast< AgClassPtr >(RequestController::class_())
////            , static_cast< AgClassPtr >(::DataTable::class_())
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
////DataTablePtr AbstractContext::getDefaultValue(VariableDefinitionPtr def)
////{
////    if(def)->getDefaultValue() != 0) {
////        return def)->getDefaultValue();
////    }
////    return new ::DataTable(def)->getFormat(), true);
////}
////
////void AbstractContext::executeDefaultSetter(const std::string & name, CallerControllerPtr caller, ::DataTablePtr value)
////{
////    auto def = getVariableDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conVarNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    executeDefaultSetter(def, caller, value);
////}
////
////void AbstractContext::executeDefaultSetter(VariableDefinitionPtr def, CallerControllerPtr caller, ::DataTablePtr value)
////{
////    executeDefaultSetterImpl(def, caller, value);
////}
////
////void AbstractContext::executeDefaultSetterImpl(VariableDefinitionPtr vd, CallerControllerPtr caller, ::DataTablePtr value)
////{
////    getVariableData(vd)->getName()))->setValue(value);
////}
////
void AbstractContext::setVariable(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value)
{
    VariableDefinitionPtr def = getAndCheckVariableDefinition(name);
    setVariable(def, caller, request, value);
}

void AbstractContext::setVariable(const std::string & name, CallerControllerPtr caller, DataTablePtr value)
{
    setVariable(name, caller, static_cast< RequestControllerPtr >(0), value);
}

void AbstractContext::setVariable(const std::string & name, DataTablePtr value)
{
    setVariable(name, static_cast< CallerControllerPtr >(0), static_cast< RequestControllerPtr >(0), value);
}

void AbstractContext::setVariable(const std::string & name, CallerControllerPtr caller, std::list<AgObjectPtr> values)
{
    VariableDefinitionPtr def = getAndCheckVariableDefinition(name);
    setVariable(name, caller, static_cast< RequestControllerPtr >(0), DataTablePtr(new DataTable(def->getFormat(), values)));
}

void AbstractContext::setVariable(const std::string & name, std::list<AgObjectPtr> value)
{
    setVariable(name, static_cast< CallerControllerPtr >(0), value);
}

////bool AbstractContext::setVariableImpl(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr value)
////{
////    return false;
////}
////
////VariableDefinitionPtr AbstractContext::getAndCheckVariableDefinition(const std::string & name)
////{
////    setupVariables();
////    auto def = getVariableDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conVarNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    return def;
////}
////
bool AbstractContext::setVariableField(
        const std::string & variable,
        const std::string & field,
        AgObjectPtr value,
        CallerControllerPtr cc)
{
    return setVariableField(variable, field, int(0), value, cc);
}

bool AbstractContext::setVariableField(const std::string & variable, const std::string & field, int record, AgObjectPtr value, CallerControllerPtr cc)
{
    //TODO
//    auto tab = getVariable(variable, cc);
//    auto old = tab)->getRecord(record))->getValue(field);
//    tab)->getRecord(record))->setValue(field, value);
//    setVariable(variable, cc, tab);
//    return old == 0 ? value != 0 : !old)->equals(value);
    return false;
}

void AbstractContext::setVariableField(const std::string & variable, const std::string & field, AgObjectPtr value, const std::string & compareField, AgObjectPtr compareValue, CallerControllerPtr cc)
{
    //TODO:
//    auto tab = getVariable(variable, cc);
//    auto rec = tab)->select(compareField, compareValue);
//    if(rec != 0) {
//        rec)->setValue(field, value);
//    } else {
//        throw new ContextException("Record with "+compareField)
//            +"=")
//            +compareValue))
//            +" not found");
//    }
//    setVariable(variable, cc, tab);
}

////void AbstractContext::addVariableRecord(const std::string & variable, CallerControllerPtr cc, ::DataRecordPtr* record)
////{
////    auto tab = getVariable(variable, cc);
////    tab)->addRecord(record);
////    setVariable(variable, cc, tab);
////}
////
////void AbstractContext::addVariableRecord(const std::string & variable, CallerControllerPtr cc, voidArray* recordData)
////{
////    auto tab = getVariable(variable, cc);
////    auto rec = tab)->addRecord();
////    for (auto i = int(0); i < recordData)->length; i++) {
////        rec)->addValue((*recordData)[i]);
////    }
////    setVariable(variable, cc, tab);
////}
////
////void AbstractContext::removeVariableRecords(const std::string & variable, CallerControllerPtr cc, const std::string & field, AgObjectPtr value)
////{
////    auto tab = getVariable(variable, cc);
////    for (auto *i = tab)->iterator(); i)->hasNext(); ) {
////        auto rec = java_cast< ::DataRecordPtr* >(java_cast< AgObjectPtr >(i)->next()));
////        if(Util::equals(rec)->getValue(field), value)) {
////            i)->remove();
////        }
////    }
////    setVariable(variable, cc, tab);
////}
////
DataTablePtr AbstractContext::callFunction(
        FunctionDefinitionPtr def,
        CallerControllerPtr caller,
        RequestControllerPtr request,
        DataTablePtr parameters)
{
    //TODO:
//    auto startTime = ::java::lang::System::currentTimeMillis();
//    setupFunctions();
//    auto data = getFunctionData(def)->getName());
//    if(!def)->isConcurrent()) {
//        lock(request, data)->getExecutionLock());
//    }
//    {
//        auto finally22 = finally([&] {
//            if(!def)->isConcurrent()) {
//                data)->getExecutionLock())->unlock();
//            }
//            data)->registerExecution();
//        });
//        {
//            try {
//                checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller);
//                Log::CONTEXT_FUNCTIONS())->debug("Trying to call function '"+def)->getName())
//    +"' of context '")
//    +getPath())
//    +"'");
//                if(def)->getPermissions() != 0) {
//                    checkPermissions(def)->getPermissions(), caller);
//                }
//                auto requiredInputFormat = def)->getInputFormat();
//                auto requiredOutputFormat = def)->getOutputFormat();
//                if(parameters)->isInvalid()) {
//                    throw new ContextException(parameters)->getInvalidationMessage());
//                }
//                if(valueCheckingEnabled && requiredInputFormat != 0) {
//                    auto msg = parameters)->conformMessage(requiredInputFormat);
//                    if(msg != 0) {
//                        Log::CONTEXT_FUNCTIONS())->debug("Invalid input format of function '"+def)->getName())
//            +"': ")
//            +msg)->toString());
//                        auto newParameters = new ::DataTable(def)->getInputFormat(), true);
//                        ::DataTableReplication::copy(parameters, newParameters, true, true, true, true, true);
//                        parameters = newParameters;
//                        msg = parameters)->conformMessage(requiredInputFormat);
//                        if(msg != 0) {
//                            throw new ContextException("Invalid format: "+msg)->toString());
//                        }
//                    }
//                }
//                auto result = executeImplementation(data, caller, request, parameters);
//                if(result)->isInvalid()) {
//                    throw new ContextException(result)->getInvalidationMessage());
//                }
//                if(result)->getRecordCount() == 0 && result)->getFormat())->getFieldCount() == 0) {
//                    result)->setFormat(def)->getOutputFormat());
//                }
//                if(valueCheckingEnabled && requiredOutputFormat != 0) {
//                    auto msg = result)->conformMessage(requiredOutputFormat);
//                    if(msg != 0) {
//                        throw new ContextException("Function '"+def)->getName())
//            +"' of context '")
//            +getPath())
//            +"' returned value of invalid format: ")
//            +msg)->toString());
//                    }
//                }
//                auto endTime = ::java::lang::System::currentTimeMillis();
//                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
//                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
//                    Log::PERFORMANCE())->log(level, "Function '"+def))
//        +"' in context '")
//        +getPath())
//        +"' was executing for ")
//        +(endTime - startTime))
//        +" milliseconds");
//                }
//                return result;
//            } catch (ContextException* ex) {
//                throw ex;
//            } catch (::java::lang::Exception* ex) {
//                throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conErrCallingFunc"), new voidArray({def)->toString()), toString())})))+ex)->getMessage())->toString(), ex);
//            }
//        }
//    }
    return DataTablePtr(0);
}

////DataTablePtr AbstractContext::executeImplementation(FunctionDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr parameters)
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
////DataTablePtr AbstractContext::executeImplementationMethod(FunctionDataPtr data, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr parameters)
////{
////    auto def = data)->getDefinition();
////    if(!data)->isImplementationCached()) {
////        auto callerParams = (new ::java::lang::ClassArray({
////            static_cast< AgClassPtr >(FunctionDefinition::class_())
////            , static_cast< AgClassPtr >(CallerController::class_())
////            , static_cast< AgClassPtr >(RequestController::class_())
////            , static_cast< AgClassPtr >(::DataTable::class_())
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
////            auto result = java_cast< ::DataTablePtr >(implementation)->invoke(this, new voidArray({
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
////DataTablePtr AbstractContext::getDefaultFunctionOutput(FunctionDefinitionPtr def)
////{
////    auto const format = def)->getOutputFormat();
////    return format != 0 ? new ::DataTable(format, true) : new ::DataTable();
////}
////
////void AbstractContext::setupFunctions()
////{
////}
////
DataTablePtr AbstractContext::callFunction(
        const std::string & name,
        CallerControllerPtr caller,
        RequestControllerPtr request,
        DataTablePtr parameters)
{
    auto def = getAndCheckFunctionDefinition(name);
    return callFunction(def, caller, request, parameters);
}

DataTablePtr AbstractContext::callFunction(const std::string & name, CallerControllerPtr caller, ::DataTablePtr parameters)
{
    return callFunction(name, caller, static_cast< RequestControllerPtr >(0), parameters);
}

DataTablePtr AbstractContext::callFunction(const std::string & name, DataTablePtr parameters)
{
    return callFunction(getAndCheckFunctionDefinition(name), static_cast< CallerControllerPtr >(0),
                        static_cast< RequestControllerPtr >(0), parameters);
}

DataTablePtr AbstractContext::callFunction(const std::string & name)
{
    FunctionDefinitionPtr def = getAndCheckFunctionDefinition(name);
    return callFunction(def, static_cast< CallerControllerPtr >(0), static_cast< RequestControllerPtr >(0),
                        DataTablePtr(new DataTable(def->getInputFormat(), true)));
}

DataTablePtr AbstractContext::callFunction(const std::string & name, CallerControllerPtr caller)
{
    FunctionDefinitionPtr def = getAndCheckFunctionDefinition(name);
    return callFunction(def, caller, static_cast< RequestControllerPtr >(0), DataTablePtr(new DataTable(def->getInputFormat(), true)));
}

DataTablePtr AbstractContext::callFunction(const std::string & name, CallerControllerPtr caller, std::list<AgObjectPtr> parameters)
{
    FunctionDefinitionPtr def = getAndCheckFunctionDefinition(name);
    return callFunction(name, caller, DataTablePtr(new DataTable(def->getInputFormat(), parameters)));
}

DataTablePtr AbstractContext::callFunction(const std::string & name, std::list<AgObjectPtr> parameters)
{
    return callFunction(name, static_cast< CallerControllerPtr >(0), parameters);
}

////DataTablePtr AbstractContext::callFunctionImpl(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr parameters)
////{
////    return 0;
////}
////
////FunctionDefinitionPtr AbstractContext::getAndCheckFunctionDefinition(const std::string & name)
////{
////    setupFunctions();
////    auto def = getFunctionDefinition(name);
////    if(def == 0) {
////        throw new ContextException(::java::text::MessageFormat::format(Cres::get()->getString("conFuncNotAvailExt"), new voidArray({name), getPath())})));
////    }
////    return def;
////}

void AbstractContext::addVariableDefinition(VariableDefinitionPtr def)
{
    //TODO:
//    if(getVariableDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException("Variable '"+def)->getName())
//            +"' already defined in context '")
//            +getPath())
//            +"'");
//    }
//    variableDataLock)->writeLock())->lock();
//    {
//        auto finally24 = finally([&] {
//            variableDataLock)->writeLock())->unlock();
//        });
//        {
//            variableData)->put(def)->getName(), new VariableData(def));
//            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                auto ed = getEventDefinition(E_VARIABLE_ADDED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), new ::DataTable(varDefToDataRecord(def, 0)));
//                }
//            }
//            if(getContextManager() != 0) {
//                getContextManager())->variableAdded(java_cast< ContextPtr >(this), def);
//            }
//        }
//    }

}

void AbstractContext::removeVariableDefinition(const std::string & name)
{
    removeVariableDefinition(getVariableDefinition(name));
}

void AbstractContext::removeVariableDefinition(VariableDefinitionPtr def)
{
    //TODO:
//    if(def == 0) {
//        return;
//    }
//    VariableDataPtr data;
//    variableDataLock)->writeLock())->lock();
//    {
//        auto finally25 = finally([&] {
//            variableDataLock)->writeLock())->unlock();
//        });
//        {
//            data = java_cast< VariableDataPtr >(variableData)->remove(def)->getName()));
//        }
//    }

//    data)->getReadWriteLock())->writeLock())->lock();
//    {
//        auto finally26 = finally([&] {
//            data)->getReadWriteLock())->writeLock())->unlock();
//        });
//        {
//            variableStatusesLock)->writeLock())->lock();
//            {
//                auto finally27 = finally([&] {
//                    variableStatusesLock)->writeLock())->unlock();
//                });
//                {
//                    if(variableStatuses != 0) {
//                        variableStatuses)->remove(def)->getName());
//                    }
//                }
//            }

//            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                auto ed = getEventDefinition(E_VARIABLE_REMOVED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), new voidArray({def)->getName())}));
//                }
//            }
//            if(getContextManager() != 0) {
//                getContextManager())->variableRemoved(java_cast< ContextPtr >(this), def);
//            }
//        }
//    }

}

void AbstractContext::addFunctionDefinition(FunctionDefinitionPtr def)
{
    //TODO:
    /*if(getFunctionDefinition(def)->getName()) != 0) {
        throw new ::java::lang::IllegalArgumentException("Function '"+def)->getName())
            +"' already defined in context '")
            +getPath())
            +"'");
    }
    functionDataLock)->writeLock())->lock();
    {
        auto finally28 = finally([&] {
            functionDataLock)->writeLock())->unlock();
        });
        {
            functionData)->put(def)->getName(), new FunctionData(def));
            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
                auto ed = getEventDefinition(E_FUNCTION_ADDED());
                if(ed != 0) {
                    fireEvent(ed)->getName(), new ::DataTable(funcDefToDataRecord(def, 0)));
                }
            }
            if(getContextManager() != 0) {
                getContextManager())->functionAdded(java_cast< ContextPtr >(this), def);
            }
        }
    }*/

}

void AbstractContext::removeFunctionDefinition(const std::string & name)
{
    removeFunctionDefinition(getFunctionDefinition(name));
}

void AbstractContext::removeFunctionDefinition(FunctionDefinitionPtr def)
{
    //TODO:
    if(def == 0) {
        return;
    }
//    FunctionDataPtr data;
//    functionDataLock)->writeLock())->lock();
//    {
//        auto finally29 = finally([&] {
//            functionDataLock)->writeLock())->unlock();
//        });
//        {
//            data = java_cast< FunctionDataPtr >(functionData)->remove(def)->getName()));
//        }
//    }

//    data)->getExecutionLock())->lock();
//    {
//        auto finally30 = finally([&] {
//            data)->getExecutionLock())->unlock();
//        });
//        {
//            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                auto ed = getEventDefinition(E_FUNCTION_REMOVED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), new voidArray({def)->getName())}));
//                }
//            }
//            if(getContextManager() != 0) {
//                getContextManager())->functionRemoved(java_cast< ContextPtr >(this), def);
//            }
//        }
//    }

}

void AbstractContext::addEventDefinition(EventDefinitionPtr def)
{
    //TODO:
//    if(getEventDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException("Event '"+def)->getName())
//            +"' already defined in context '")
//            +getPath())
//            +"'");
//    }
//    EventDataPtrLock)->writeLock())->lock();
//    {
//        auto finally31 = finally([&] {
//            EventDataPtrLock)->writeLock())->unlock();
//        });
//        {
//            EventDataPtr)->put(def)->getName(), new EventDataPtr(def));
//            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                auto ed = getEventDefinition(E_EVENT_ADDED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), new ::DataTable(evtDefToDataRecord(def, 0)));
//                }
//            }
//            if(getContextManager() != 0) {
//                getContextManager())->eventAdded(java_cast< ContextPtr >(this), def);
//            }
//        }
//    }

}

void AbstractContext::removeEventDefinition(const std::string & name)
{
    removeEventDefinition(getEventDefinition(name));
}

void AbstractContext::removeEventDefinition(EventDefinitionPtr def)
{
    //TODO:
    if(def == 0) {
        return;
    }
//    EventDataPtrLock)->writeLock())->lock();
//    {
//        auto finally32 = finally([&] {
//            EventDataPtrLock)->writeLock())->unlock();
//        });
//        {
//            if(java_cast< EventDataPtr >(EventDataPtr)->remove(def)->getName())) != 0) {
//                if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                    auto ed = getEventDefinition(E_EVENT_REMOVED());
//                    if(ed != 0) {
//                        fireEvent(ed)->getName(), new voidArray({def)->getName())}));
//                    }
//                }
//                if(getContextManager() != 0) {
//                    getContextManager())->eventRemoved(java_cast< ContextPtr >(this), def);
//                }
//            }
//        }
//    }

}

VariableDataPtr AbstractContext::getVariableData(const std::string & name)
{
    //TODO:
//    variableDataLock)->readLock())->lock();
//    {
//        auto finally33 = finally([&] {
//            variableDataLock)->readLock())->unlock();
//        });
//        {
//            return java_cast< VariableDataPtr >(variableData)->get(name));
//        }
//    }
    return VariableDataPtr(0);
}

VariableDefinitionPtr AbstractContext::getVariableDefinition(const std::string & name)
{
    VariableDataPtr data = getVariableData(name);
    return data != 0 ? data->getDefinition() : static_cast< VariableDefinitionPtr >(0);
}

VariableDefinitionPtr AbstractContext::getVariableDefinition(const std::string & name, CallerControllerPtr caller)
{
    VariableDefinitionPtr def = getVariableDefinition(name);
    if (def == 0) {
        return 0;
    }

    //TODO:
//    auto readAccessGranted = checkPermissions(def)->getReadPermissions() != 0 ? def)->getReadPermissions() : getPermissions(), caller, this);
//    auto writeAccessGranted = checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller, this);
//    return (readAccessGranted || writeAccessGranted) ? def : static_cast< VariableDefinitionPtr >(0);

    return VariableDefinitionPtr(0);
}

FunctionDataPtr AbstractContext::getFunctionData(const std::string & name)
{
    //TODO
//    functionDataLock)->readLock())->lock();
//    {
//        auto finally34 = finally([&] {
//            functionDataLock)->readLock())->unlock();
//        });
//        {
//            return java_cast< FunctionDataPtr >(functionData)->get(name));
//        }
//    }
    return FunctionDataPtr(0);
}

FunctionDefinitionPtr AbstractContext::getFunctionDefinition(const std::string & name)
{
    FunctionDataPtr data = getFunctionData(name);
    return data != 0 ? data->getDefinition() : static_cast< FunctionDefinitionPtr >(0);
}

FunctionDefinitionPtr AbstractContext::getFunctionDefinition(const std::string & name, CallerControllerPtr caller)
{
    FunctionDefinitionPtr def = getFunctionDefinition(name);
    if (def == 0) {
        return 0;
    }
    //TODO:
    //auto accessGranted = checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller, this);
    //return accessGranted ? def : static_cast< FunctionDefinitionPtr >(0);

    return FunctionDefinitionPtr(0);
}

////EventDataPtr AbstractContext::getEventDataPtr(const std::string & name)
////{
////    EventDataPtrLock)->readLock())->lock();
////    {
////        auto finally35 = finally([&] {
////            EventDataPtrLock)->readLock())->unlock();
////        });
////        {
////            return java_cast< EventDataPtr >(EventDataPtr)->get(name));
////        }
////    }
////
////}
////
EventDefinitionPtr AbstractContext::getEventDefinition(const std::string & name)
{
    EventDataPtr ed = getEventDataPtr(name);
    return ed != 0 ? ed->getDefinition() : static_cast< EventDefinitionPtr >(0);

    return 0;
}

EventDefinitionPtr AbstractContext::getEventDefinition(const std::string & name, CallerControllerPtr caller)
{
    EventDefinitionPtr def = getEventDefinition(name);
    if (def == 0) {
        return 0;
    }
    //TODO:
    bool accessGranted = false;//checkPermissions(def->getPermissions() != 0 ? def->getPermissions() : getPermissions(), caller, this);
    return accessGranted ? def : static_cast< EventDefinitionPtr >(0);
}

////EventDefinitionPtr AbstractContext::getAndCheckEventDefinition(const std::string & name)
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
////void AbstractContext::postEvent(EventPtr ev, EventDefinitionPtr ed, CallerControllerPtr caller, FireEventRequestControllerPtr request)
////{
////}
////
////void AbstractContext::updateEvent(EventPtr ev, EventDefinitionPtr ed, CallerControllerPtr caller, FireEventRequestControllerPtr request)
////{
////}
////
EventPtr AbstractContext::fireEvent(
        EventDefinitionPtr ed,
        DataTablePtr data,
        int level, long  id,
        DatePtr creationtime,
        int  listener,
        CallerControllerPtr caller,
        FireEventRequestControllerPtr request,
        PermissionsPtr permissions)
{
//    if(id == 0) {
//        id = ::java::lang::Long::valueOf(EventUtils::generateEventId());
//    }
//    auto event = new Event(getPath(), ed, level == DEFAULT_EVENT_LEVEL ? ed)->getLevel() : level, data, id, creationtime, permissions);
//    return fireEvent(ed, event, listener, caller, request);

    return EventPtr(0);
}

EventPtr AbstractContext::fireEvent(EventPtr event)
{
    return fireEvent(getAndCheckEventDefinition(event->getName()), event, 0, 0, 0);
}

EventPtr AbstractContext::fireEvent(EventDefinitionPtr ed, EventPtr event, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request)
{
    //TODO:
//    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//    if(caller != 0) {
//        try {
//            checkPermissions(ed)->getFirePermissions() != 0 ? ed)->getFirePermissions() : getPermissions(), caller);
//        } catch (ContextSecurityException* ex) {
//            throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
//        }
//    }
//    auto rule = getEventProcessingRule(event);
//    auto prefilter = rule != 0 ? rule)->getPrefilterExpression() : static_cast< ExpressionPtr >(0);
//    if(prefilter != 0) {
//        try {
//            auto evaluator = new Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
//            if(!evaluator)->evaluateToBoolean(prefilter)) {
//                rule)->addFiltered();
//                if(logger)->isDebugEnabled()) {
//                    logger)->debug("Event '"+ed))
//        +"' in context '")
//        +getPath())
//        +"' was suppressed by pre-filter");
//                }
//                return 0;
//            }
//        } catch (::java::lang::Exception* ex) {
//            logger)->info("Error processing pre-filter expression for event '"+ed))
//+"' in context '")
//+getPath())
//+"': ")
//+ex)->getMessage())->toString(), ex);
//        }
//    }
//    if(logger)->isDebugEnabled()) {
//        logger)->debug("Event '"+ed))
//            +"' fired in context '")
//            +getPath())
//            +"': ")
//            +event))->toString());
//    }
//    event)->setListener(listener);
//    if(request != 0) {
//        event)->setOriginator(request)->getOriginator());
//    }
//    auto edata = getEventDataPtr(ed)->getName());
//    edata)->registerFiredEvent();
//    auto deduplicator = rule != 0 ? rule)->getDeduplicatorExpression() : static_cast< ExpressionPtr >(0);
//    if(deduplicator != 0) {
//        try {
//            auto evaluator = new Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
//            auto deduplicationId = evaluator)->evaluateToString(deduplicator);
//            event)->setDeduplicationId(deduplicationId);
//        } catch (::java::lang::Exception* ex) {
//            logger)->info("Error processing deduplicator expression for event '"+ed))
//+"' in context '")
//+getPath())
//+"': ")
//+ex)->getMessage())->toString(), ex);
//        }
//    }
//    if(event)->getData())->isInvalid()) {
//        throw new ContextRuntimeException(event)->getData())->getInvalidationMessage());
//    }
//    if(ed)->getFormat() != 0) {
//        auto msg = event)->getData())->conformMessage(ed)->getFormat());
//        if(msg != 0) {
//            logger)->debug("Wrong format data for event '"+ed))
//+"' in context '")
//+toString())
//+"': ")
//+msg)->toString());
//            auto newData = new ::DataTable(ed)->getFormat(), true);
//            ::DataTableReplication::copy(event)->getData(), newData);
//            event)->setData(newData);
//        }
//    }
//    processBindings(event);
//    processEnrichments(event, rule, caller);
//    long  customExpirationPeriod;
//    if(request != 0 && request)->getCustomExpirationPeriod() != 0) {
//        customExpirationPeriod = request)->getCustomExpirationPeriod();
//    }
//    if(customExpirationPeriod != 0) {
//        if((customExpirationPeriod))->longValue() > 0) {
//            event)->setExpirationtime(new Date(::java::lang::System::currentTimeMillis() + (customExpirationPeriod))->longValue()));
//        }
//    } else {
//        auto userDefinedExpirationPeriod = rule != 0 ? ::java::lang::Long::valueOf(rule)->getPeriod()) : static_cast< long  >(0);
//        if(userDefinedExpirationPeriod != 0 && (userDefinedExpirationPeriod))->longValue() > 0) {
//            event)->setExpirationtime(new Date(::java::lang::System::currentTimeMillis() + (userDefinedExpirationPeriod))->longValue()));
//        }
//    }
//    auto const customMemoryStorageSize = rule != 0 ? ((rule)->getDeduplicator() != 0 && rule)->getDeduplicator())->length() > 0) ? rule)->getQueue()) : static_cast< int  >(0)) : static_cast< int  >(0);
//    auto processed = request != 0 ? request)->process(event) : event;
//    if(processed == 0) {
//        return 0;
//    }
//    auto duplicate = edata)->store(processed, customMemoryStorageSize);
//    try {
//        if(duplicate == 0) {
//            postEvent(event, ed, caller, request);
//            if(rule != 0) {
//                rule)->addSaved();
//            }
//        } else {
//            updateEvent(duplicate, ed, caller, request);
//            if(rule != 0) {
//                rule)->addDuplicate();
//            }
//        }
//    } catch (ContextException* ex) {
//        throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
//    }
//    if(contextManager != 0 && (duplicate == 0 || rule == 0 || rule)->isDuplicateDispatching())) {
//        contextManager)->queue(edata, event);
//    }
//    return event;
    return EventPtr(0);
}

EventPtr AbstractContext::fireEvent(
        const std::string & name,
        int level,
        CallerControllerPtr caller,
        FireEventRequestControllerPtr request,
        PermissionsPtr permissions,
        DataTablePtr data)
{
    EventDefinitionPtr ed = getAndCheckEventDefinition(name);
    return fireEvent(ed, data, level, 0, 0, 0, caller, request, permissions);
}

EventPtr AbstractContext::fireEvent(
        const std::string & name,
        DataTablePtr data,
        int level,
        long  id,
        DatePtr creationtime,
        int  listener,
        CallerControllerPtr caller,
        FireEventRequestControllerPtr request)
{
    return fireEvent(getAndCheckEventDefinition(name), data, level, id, creationtime, listener, caller, request, 0);
}

EventPtr AbstractContext::fireEvent(const std::string & name, ::DataTablePtr data)
{
    return fireEvent(getAndCheckEventDefinition(name), data, DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
}

EventPtr AbstractContext::fireEvent(const std::string & name, CallerControllerPtr caller, DataTablePtr data)
{
    return fireEvent(getAndCheckEventDefinition(name), data, DEFAULT_EVENT_LEVEL, 0, 0, 0, caller, 0, 0);
}

EventPtr AbstractContext::fireEvent(const std::string & name, int level, DataTablePtr data)
{
    return fireEvent(getAndCheckEventDefinition(name), data, level, 0, 0, 0, 0, 0, 0);
}

EventPtr AbstractContext::fireEvent(const std::string & name, int level, CallerControllerPtr caller, DataTablePtr data)
{
    return fireEvent(getAndCheckEventDefinition(name), data, level, 0, 0, 0, caller, 0, 0);
}

EventPtr AbstractContext::fireEvent(const std::string & name)
{
    EventDefinitionPtr ed = getAndCheckEventDefinition(name);
    return fireEvent(ed, DataTablePtr(new DataTable(ed->getFormat(), true)), DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
}

EventPtr AbstractContext::fireEvent(const std::string & name, CallerControllerPtr caller)
{
    EventDefinitionPtr ed = getAndCheckEventDefinition(name);
    return fireEvent(ed, DataTablePtr(new DataTable(ed->getFormat(), true)), DEFAULT_EVENT_LEVEL, 0, 0, 0, caller, 0, 0);
}

EventPtr AbstractContext::fireEvent(const std::string & name, AgObjectPtr data)
{
    EventDefinitionPtr ed = getAndCheckEventDefinition(name);
    return fireEvent(ed, DataTablePtr(new DataTable(ed->getFormat(), data)), DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
    return 0;
}
////
////EventProcessingRulePtr AbstractContext::getEventProcessingRule(EventPtr event)
////{
////    return 0;
////}
////
////void AbstractContext::processBindings(EventPtr event)
////{
////}
////
////void AbstractContext::processEnrichments(EventPtr event, EventProcessingRulePtr rule, CallerControllerPtr caller)
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
////                AgObjectPtr result = evaluator)->evaluateToString(enrichmentRule)->getEnrichmentExpression());
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
////CallerControllerPtr AbstractContext::getEventProcessingCallerController()
////{
////    return getContextManager())->getCallerController();
////}

std::list<EventPtr>  AbstractContext::getEventHistory(const std::string & name)
{
    EventDataPtr ed = getEventDataPtr(name);
    if(ed == 0) {
        //TODO: exception
        //throw new ::java::lang::IllegalStateException(Cres::get()->getString("conEvtNotAvail"))+name)->toString());
    }
    return ed->getHistory();
}

////void AbstractContext::lock(RequestControllerPtr request, ::java::util::concurrent::locks::Lock* lock)
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

std::string AbstractContext::toString()
{
    std::string desc = getDescription();
    return desc.length() > 0 ? desc : getPath();
}

std::string AbstractContext::toDetailedString()
{
    //auto decription = getDescription();
    //return decription != 0 ? decription)+" (")
    //    +getPath())
    //    +")" : getPath();
    return "";
}

void AbstractContext::accept(ContextVisitorPtr visitor)
{
    //TODO:
//    if(visitor->shouldVisit(this)) {
//        visitor->visit(this);
//        childrenLock)->readLock())->lock();
//        {
//            auto finally36 = finally([&] {
//                childrenLock)->readLock())->unlock();
//            });
//            {
//                for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                    ContextPtr child = java_cast< ContextPtr >(_i->next());
//                    {
//                        child)->accept(visitor);
//                    }
//                }
//            }
//        }

//    }
}

////EventDefinitionPtr AbstractContext::getChangeEventDefinition()
////{
////    return ED_CHANGE();
////}
////
////DataTablePtr AbstractContext::getVvariables(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        VariableDefinitionPtr vardef = java_cast< VariableDefinitionPtr >(_i->next());
////        {
////            ans)->addRecord(varDefToDataRecord(vardef, caller));
////        }
////    }
////    return ans;
////}
////
////std::string AbstractContext::encodeFormat(::TableFormatPtr format, CallerControllerPtr caller)
////{
////    return format != 0 ? format)->encode(false) : static_cast< const std::string & >(0);
////}
////
////TableFormatPtr AbstractContext::decodeFormat(const std::string & source, CallerControllerPtr caller)
////{
////    return source != 0 ? new ::TableFormat(source, new ::encoding::ClassicEncodingSettings(false)) : static_cast< ::TableFormatPtr >(0);
////}
////
////DataRecordPtr* AbstractContext::varDefToDataRecord(VariableDefinitionPtr vd)
////{
////    return varDefToDataRecord(vd, 0);
////}
////
////DataRecordPtr* AbstractContext::varDefToDataRecord(VariableDefinitionPtr vd, CallerControllerPtr caller)
////{
////    return (new ::DataRecordPtr(VARIABLE_DEFINITION_FORMAT()))->addString(vd)->getName()))->addString(encodeFormat(vd)->getFormat(), caller)))->addString(vd)->getDescription()))->addBoolean(::java::lang::Boolean::valueOf(vd)->isReadable())))->addBoolean(::java::lang::Boolean::valueOf(vd)->isWritable())))->addString(vd)->getHelp()))->addString(vd)->getGroup()))->addString(vd)->getIconId()))->addString(vd)->getHelpId()))->addLong(vd)->getRemoteCacheTime());
////}
////
////VariableDefinitionPtr AbstractContext::varDefFromDataRecord(::DataRecordPtr* rec)
////{
////    return varDefFromDataRecord(rec, 0);
////}
////
////VariableDefinitionPtr AbstractContext::varDefFromDataRecord(::DataRecordPtr* rec, CallerControllerPtr caller)
////{
////    auto const variable = rec)->getString(FIELD_VD_NAME());
////    bool readable = (rec)->getBoolean(FIELD_VD_READABLE())))->booleanValue();
////    bool writable = (rec)->getBoolean(FIELD_VD_WRITABLE())))->booleanValue();
////    ::TableFormatPtr format;
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
////DataTablePtr AbstractContext::getVfunctions(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getFunctionDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        FunctionDefinitionPtr funcdef = java_cast< FunctionDefinitionPtr >(_i->next());
////        {
////            ans)->addRecord(funcDefToDataRecord(funcdef, caller));
////        }
////    }
////    return ans;
////}
////
////DataRecordPtr* AbstractContext::funcDefToDataRecord(FunctionDefinitionPtr fd)
////{
////    return funcDefToDataRecord(fd, 0);
////}
////
////DataRecordPtr* AbstractContext::funcDefToDataRecord(FunctionDefinitionPtr fd, CallerControllerPtr caller)
////{
////    return (new ::DataRecordPtr(FUNCTION_DEFINITION_FORMAT)->addString(fd)->getName()))->addString(encodeFormat(fd)->getInputFormat(), caller)))->addString(encodeFormat(fd)->getOutputFormat(), caller)))->addString(fd)->getDescription()))->addString(fd)->getHelp()))->addString(fd)->getGroup()))->addString(fd)->getIconId());
////}
////
////FunctionDefinitionPtr AbstractContext::funcDefFromDataRecord(::DataRecordPtr* rec)
////{
////    return funcDefFromDataRecord(rec, 0);
////}
////
////FunctionDefinitionPtr AbstractContext::funcDefFromDataRecord(::DataRecordPtr* rec, CallerControllerPtr caller)
////{
////    auto const function = rec)->getString(FIELD_FD_NAME());
////    ::TableFormatPtr inputFormat;
////    try {
////        inputFormat = decodeFormat(rec)->getString(FIELD_FD_INPUTFORMAT()), caller);
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException("Error decoding input format of function '"+function)
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////    }
////    ::TableFormatPtr outputFormat;
////    try {
////        outputFormat = decodeFormat(rec)->getString(FIELD_FD_OUTPUTFORMAT()), caller);
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException("Error decoding output format of function '"+function)
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////    }
////    auto def = FunctionDefinitionPtr(function, inputFormat, outputFormat, rec)->getString(FIELD_FD_DESCRIPTION()), rec)->getString(FIELD_FD_GROUP()));
////    def)->setHelp(rec)->getString(FIELD_FD_HELP()));
////    def)->setIconId(rec)->getString(FIELD_FD_ICON_ID()));
////    return def;
////}
////
////DataTablePtr AbstractContext::getVevents(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getEventDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        EventDefinitionPtr ed = java_cast< EventDefinitionPtr >(_i->next());
////        {
////            ans)->addRecord(evtDefToDataRecord(ed, caller));
////        }
////    }
////    return ans;
////}
////
////DataRecordPtr* AbstractContext::evtDefToDataRecord(EventDefinitionPtr ed)
////{
////    return evtDefToDataRecord(ed, 0);
////}
////
////DataRecordPtr* AbstractContext::evtDefToDataRecord(EventDefinitionPtr ed, CallerControllerPtr caller)
////{
////    return (new ::DataRecordPtr(EVENT_DEFINITION_FORMAT)->addString(ed)->getName()))->addString(encodeFormat(ed)->getFormat(), caller)))->addString(ed)->getDescription()))->addString(ed)->getHelp()))->addInt(ed)->getLevel())))->addString(ed)->getGroup()))->addString(ed)->getIconId());
////}
////
////EventDefinitionPtr AbstractContext::evtDefFromDataRecord(::DataRecordPtr* rec)
////{
////    return evtDefFromDataRecord(rec, 0);
////}
////
////EventDefinitionPtr AbstractContext::evtDefFromDataRecord(::DataRecordPtr* rec, CallerControllerPtr caller)
////{
////    auto const event = rec)->getString(FIELD_ED_NAME());
////    ::TableFormatPtr format;
////    try {
////        format = decodeFormat(rec)->getString(FIELD_ED_FORMAT()), caller);
////    } catch (::java::lang::Exception* ex) {
////        throw new ::java::lang::IllegalStateException("Error decoding format of event '"+event)
////            +"': ")
////            +ex)->getMessage())->toString(), ex);
////    }
////    auto def = EventDefinitionPtr(new EventDefinition(event, format, rec)->getString(FIELD_ED_DESCRIPTION()), rec)->getString(FIELD_ED_GROUP()));
////    def)->setLevel((rec)->getInt(FIELD_ED_LEVEL())))->intValue());
////    def)->setHelp(rec)->getString(FIELD_ED_HELP()));
////    def)->setIconId(rec)->getString(FIELD_ED_ICON_ID()));
////    return def;
////}
////
////DataTablePtr AbstractContext::getVactions(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getActionDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        ::com::tibbo::aggregate::common::action::ActionDefinitionPtr adef = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinitionPtr >(_i->next());
////        {
////            ans)->addRecord(actDefToDataRecord(adef));
////        }
////    }
////    return ans;
////}
////
////DataRecordPtr* AbstractContext::actDefToDataRecord(::com::tibbo::aggregate::common::action::ActionDefinitionPtr def)
////{
////    auto resourceMasks = new ::DataTable(AbstractContext::RESOURCE_MASKS_FORMAT());
////    if(def)->getDropSources() != 0) {
////        for (auto _i = def)->getDropSources())->iterator(); _i->hasNext(); ) {
////            ::com::tibbo::aggregate::common::action::ResourceMaskPtr resourceMask = java_cast< ::com::tibbo::aggregate::common::action::ResourceMaskPtr >(_i->next());
////            {
////                resourceMasks)->addRecord())->addString(resourceMask)->toString());
////            }
////        }
////    }
////    auto rec = new ::DataRecordPtr(AbstractContext::ACTION_DEF_FORMAT;
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

void AbstractContext::enableStatus()
{
    status = ContextStatusPtr(new ContextStatus());
}

ContextStatusPtr AbstractContext::getStatus()
{
    return status;
}

////void AbstractContext::setStatus(int status, const std::string & comment)
////{
////    auto statusChanged = this->status)->getStatus() != status;
////    auto commentChanged = !Util::equals(this->status)->getComment(), comment);
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
////    auto ed = EventDefinitionPtr(new EventDefinition(E_VARIABLE_STATUS_CHANGED(), VFT_VARIABLE_STATUSES());
////    addEventDefinition(ed);
////}
////
////DataTablePtr AbstractContext::createVariableStatusesTable()
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
////                    auto vs = java_cast< VariableStatusPtr >(statuses)->get(name));
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
////            ::DataRecordPtr* rec = java_cast< ::DataRecordPtr* >(_i->next());
////            {
////                variableStatuses)->put(rec)->getString(VF_VARIABLE_STATUSES_NAME()), new VariableStatus(rec)->getString(VF_VARIABLE_STATUSES_STATUS()), rec)->getString(VF_VARIABLE_STATUSES_COMMENT())));
////            }
////        }
////    }
////}
////
//DataTablePtr AbstractContext::fetchVariableStatuses()
//{
//	return DataTablePtr(new DataTable(VFT_VARIABLE_STATUSES));
//}
////
////void AbstractContext::updateVariableStatus(const std::string & variable, VariableStatusPtr status, bool persistent)
////{
////    VariableStatusPtr old;
////    variableStatusesLock)->writeLock())->lock();
////    {
////        auto finally38 = finally([&] {
////            variableStatusesLock)->writeLock())->unlock();
////        });
////        {
////            ensureVariableStatuses();
////            old = java_cast< VariableStatusPtr >(variableStatuses)->put(variable, status));
////        }
////    }
////
////    if(old == 0 || !Util::equals(old)->getStatus(), status)->getStatus())) {
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
////void AbstractContext::persistVariableStatuses(::DataTablePtr statuses)
////{
////}
////
////VariableStatusPtr AbstractContext::getVariableStatus(const std::string & name)
////{
////    variableStatusesLock)->readLock())->lock();
////    {
////        auto finally40 = finally([&] {
////            variableStatusesLock)->readLock())->unlock();
////        });
////        {
////            return java_cast< VariableStatusPtr >(getVariableStatuses())->get(name));
////        }
////    }
////
////}
////
////DataTablePtr AbstractContext::getVchildren(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
////{
////    auto ans = new ::DataTable(def)->getFormat());
////    for (auto _i = getChildren(caller))->iterator(); _i->hasNext(); ) {
////        ContextPtr con = java_cast< ContextPtr >(_i->next());
////        {
////            ans)->addRecord())->addString(con)->getName());
////        }
////    }
////    return ans;
////}
////
////DataTablePtr AbstractContext::getVinfo(VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request)
////{
////    return createContextInfoTable();
////}
////
////DataTablePtr AbstractContext::createContextInfoTable()
////{
////    return new ::DataTable(INFO_DEFINITION_FORMAT(), new voidArray({getDescription()), getType()), getGroup()), getIconId()), getLocalRoot()), getRemoteRoot()), getRemotePath()), getRemotePrimaryRoot()), ::java::lang::Boolean::valueOf(isMapped()))}));
////}
////
////DataTablePtr AbstractContext::callFgetCopyData(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr parameters)
////{
////    auto result = new ::DataTable(def)->getOutputFormat())->clone());
////    auto group = parameters)->rec())->getString(VF_INFO_GROUP());
////    std::list  recipients;
////    auto recipientsTable = parameters)->rec())->getDataTable(FIF_COPY_DATA_RECIPIENTS());
////    if(recipientsTable != 0) {
////        recipients = new ::java::util::LinkedList();
////        for (auto _i = recipientsTable)->iterator(); _i->hasNext(); ) {
////            ::DataRecordPtr* rec = java_cast< ::DataRecordPtr* >(_i->next());
////            {
////                auto recipient = java_cast< ContextPtr >(getContextManager())->get(rec)->getString(FIF_COPY_DATA_RECIPIENTS_RECIPIENT()), caller));
////                if(recipient != 0) {
////                    recipients)->add(recipient));
////                }
////            }
////        }
////    }
////    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
////        VariableDefinitionPtr vd = java_cast< VariableDefinitionPtr >(_i->next());
////        {
////            if(group != 0 && !Util::equals(ContextUtils::getBaseGroup(vd)->getGroup()), group)) {
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
////                    ContextPtr recipient = java_cast< ContextPtr >(_i->next());
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
////DataTablePtr AbstractContext::callFcopy(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr parameters)
////{
////    auto result = new ::DataTable(def)->getOutputFormat());
////    for (auto _i = parameters)->iterator(); _i->hasNext(); ) {
////        ::DataRecordPtr* rec = java_cast< ::DataRecordPtr* >(_i->next());
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
////            ::DataTablePtr tgtVal;
////            try {
////                tgtVal = getVariable(varName, caller);
////            } catch (ContextException* ex) {
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(Cres::get()->getString("conErrGettingTgtVar"))+ex)->getMessage())->toString());
////                continue;
////            }
////            std::list  fields = new ::java::util::LinkedList();
////            for (auto _i = rec)->getDataTable(FOF_COPY_DATA_FIELDS()))->iterator(); _i->hasNext(); ) {
////                ::DataRecordPtr* fieldRec = java_cast< ::DataRecordPtr* >(_i->next());
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
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(StringUtils::print(static_cast< std::list >(tableCopyErrors), "; "));
////            } else {
////                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(true));
////            }
////        }
////    }
////    return result;
////}
////
////DataTablePtr AbstractContext::callFcopyToChildren(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr parameters)
////{
////   // return copyTo(def, caller, request, parameters, getChildren(caller));
////}
////
////DataTablePtr AbstractContext::copyTo(FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, ::DataTablePtr parameters, std::list  children)
////{
////
////	auto result = new ::DataTable(def)->getOutputFormat());
////    for (auto _i = children)->iterator(); _i->hasNext(); ) {
////        ContextPtr child = java_cast< ContextPtr >(_i->next());
////        {
////            auto conDesc = child)->getDescription() != 0 ? child)->getDescription() : child)->getPath();
////            ::DataTablePtr conRes;
////            try {
////                conRes = child)->callFunction(F_COPY(), caller, request, parameters);
////            } catch (ContextException* ex) {
////                result)->addRecord())->addString(conDesc))->addString(0))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(ex)->getMessage());
////                continue;
////            }
////            for (auto _i = conRes)->iterator(); _i->hasNext(); ) {
////                ::DataRecordPtr* rec = java_cast< ::DataRecordPtr* >(_i->next());
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

PermissionsPtr AbstractContext::DEFAULT_PERMISSIONS()
{
    if (!DEFAULT_PERMISSIONS_) {
        DEFAULT_PERMISSIONS_ = DefaultPermissionChecker::getNullPermissions();
    }

    return DEFAULT_PERMISSIONS_;
}
