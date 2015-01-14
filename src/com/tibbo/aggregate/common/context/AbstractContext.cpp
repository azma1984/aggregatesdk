//// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractContext.java

#include "AbstractContext.h"

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
//#include <com/tibbo/aggregate/common/context/EventDefinition.h"
//#include <com/tibbo/aggregate/common/context/FireChangeEventRequestController.h"
//#include <com/tibbo/aggregate/common/context/FunctionData.h"
//#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
//#include <com/tibbo/aggregate/common/context/FunctionImplementation.h"
//#include <com/tibbo/aggregate/common/context/RequestController.h"
//#include <com/tibbo/aggregate/common/context/VariableData.h"
//#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
//#include <com/tibbo/aggregate/common/context/VariableGetter.h"
//#include <com/tibbo/aggregate/common/context/VariableSetter.h"
//#include <com/tibbo/aggregate/common/context/VariableStatus.h"
//#include <com/tibbo/aggregate/common/data/Event.h"
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

	/*template <class C> */AbstractContext/*<C> */::AbstractContext()
{
	
	}
/*template <class C> */AbstractContext/*<C> */::AbstractContext(const std::string &name)
{
	

    setName(name);




	 /*
	variableData = ::java::util::Collections::synchronizedMap(new ::java::util::LinkedHashMap());
	variableDataLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
	functionData = ::java::util::Collections::synchronizedMap(new ::java::util::LinkedHashMap());
	functionDataLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
	eventData = ::java::util::Collections::synchronizedMap(new ::java::util::LinkedHashMap());
	eventDataLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
	actionDefinitions = ::java::util::Collections::synchronizedList(new ::java::util::ArrayList());
	actionDefinitionsLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
	permissionCheckingEnabled = true;
	permissionChecker = new ::com::tibbo::aggregate::common::security::NullPermissionChecker();
	children = new ::java::util::ArrayList();
	childrenMap = new ::java::util::HashMap();
	childrenLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
	valueCheckingEnabled = true;
	childrenConcurrencyEnabled = false;
	childrenSortingEnabled = true;
	fireUpdateEvents = true;
	variableStatusesLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();


		in_cl_init = true;
		VARIABLE_DEFINITION_FORMAT= new ::TableFormat();
		{
			VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_NAME())
				->append("><S>"_j)->toString());
			VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_FORMAT())
				->append("><S><F=N>"_j)->toString());
			VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_DESCRIPTION())
				->append("><S><F=N>"_j)->toString());
			VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_READABLE())
                ->append("><B>"_j)->toString());
            VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_WRITABLE())
                ->append("><B>"_j)->toString());
            VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_HELP())
				->append("><S><F=N>"_j)->toString());
            VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_GROUP())
                ->append("><S><F=N>"_j)->toString());
            VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_ICON_ID())
                ->append("><S><F=N>"_j)->toString());
			VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_HELP_ID())
                ->append("><S><F=N>"_j)->toString());
            VARIABLE_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_VD_CACHE_TIME())
                ->append("><L><F=N>"_j)->toString());
        }
		EF_VARIABLE_ADDED= VARIABLE_DEFINITION_FORMAT())->clone();
        {
            EF_VARIABLE_ADDED())->setMinRecords(1);
            EF_VARIABLE_ADDED())->setMaxRecords(1);
        }
		FUNCTION_DEFINITION_FORMAT= new ::TableFormat();
        {
            FUNCTION_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_FD_NAME())
                ->append("><S>"_j)->toString());
            FUNCTION_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_FD_INPUTFORMAT())
				->append("><S><F=N>"_j)->toString());
            FUNCTION_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_FD_OUTPUTFORMAT())
                ->append("><S><F=N>"_j)->toString());
            FUNCTION_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_FD_DESCRIPTION())
                ->append("><S><F=N>"_j)->toString());
			FUNCTION_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_FD_HELP())
                ->append("><S><F=N>"_j)->toString());
            FUNCTION_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_FD_GROUP())
                ->append("><S><F=N>"_j)->toString());
            FUNCTION_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_FD_ICON_ID())
				->append("><S><F=N>"_j)->toString());
        }
        EF_FUNCTION_ADDED= FUNCTION_DEFINITION_FORMAT())->clone();
        {
            EF_FUNCTION_ADDED())->setMinRecords(1);
			EF_FUNCTION_ADDED())->setMaxRecords(1);
        }
        EVENT_DEFINITION_FORMAT= new ::TableFormat();
        {
            EVENT_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_ED_NAME())
				->append("><S>"_j)->toString());
            EVENT_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_ED_FORMAT())
                ->append("><S><F=N>"_j)->toString());
            EVENT_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_ED_DESCRIPTION())
                ->append("><S><F=N>"_j)->toString());
			EVENT_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_ED_HELP())
                ->append("><S><F=N>"_j)->toString());
            EVENT_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_ED_LEVEL())
                ->append("><I>"_j)->toString());
            EVENT_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_ED_GROUP())
				->append("><S><F=N>"_j)->toString());
            EVENT_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_ED_ICON_ID())
                ->append("><S><F=N>"_j)->toString());
        }
        EF_EVENT_ADDED= EVENT_DEFINITION_FORMAT())->clone();
		{
            EF_EVENT_ADDED())->setMinRecords(1);
            EF_EVENT_ADDED())->setMaxRecords(1);
        }
        VFT_CHILDREN= datatable::FieldFormat::create(std::stringBuilder().append("<"_j)->append(VF_CHILDREN_NAME())
			->append("><S>"_j)->toString()))->wrap();
        INFO_DEFINITION_FORMAT= new ::TableFormat(int(1), int(1));
        {
            INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_DESCRIPTION())
                ->append("><S><F=N><D="_j)
				->append(Cres::get())->getString("description"_j))
                ->append(">"_j)->toString());
            INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_TYPE())
                ->append("><S><D="_j)
                ->append(Cres::get())->getString("type"_j))
				->append(">"_j)->toString());
            INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_GROUP())
                ->append("><S><F=N><D="_j)
                ->append(Cres::get())->getString("group"_j))
                ->append(">"_j)->toString());
			INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_ICON())
                ->append("><S><F=N><D="_j)
                ->append(Cres::get())->getString("conIconId"_j))
                ->append(">"_j)->toString());
            INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_LOCAL_ROOT())
				->append("><S><D="_j)
                ->append(Cres::get())->getString("conLocalRoot"_j))
                ->append(">"_j)->toString());
            INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_REMOTE_ROOT())
                ->append("><S><F=N><D="_j)
				->append(Cres::get())->getString("conRemoteRoot"_j))
                ->append(">"_j)->toString());
            INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_REMOTE_PATH())
                ->append("><S><D="_j)
                ->append(Cres::get())->getString("conRemotePath"_j))
				->append(">"_j)->toString());
            INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_REMOTE_PRIMARY_ROOT())
                ->append("><S><F=N><D="_j)
                ->append(Cres::get())->getString("conRemotePrimaryRoot"_j))
                ->append(">"_j)->toString());
			INFO_DEFINITION_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(VF_INFO_MAPPED())
                ->append("><B><D="_j)
                ->append(Cres::get())->getString("conMapped"_j))
                ->append(">"_j)->toString());
        }
		ACTION_DEF_FORMAT= new ::TableFormat();
        {
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_NAME())
                ->append("><S>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_DESCRIPTION())
				->append("><S><F=N>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_HELP())
                ->append("><S><F=N>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_ACCELERATOR())
                ->append("><S><F=N>"_j)->toString());
			ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_DROP_SOURCES())
                ->append("><T><F=N>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_HIDDEN())
                ->append("><B>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_ENABLED())
				->append("><B>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_ICON_ID())
                ->append("><S><F=N>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_GROUP())
                ->append("><S><F=N>"_j)->toString());
			ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_EXECUTION_GROUP())
                ->append("><S><F=N>"_j)->toString());
            ACTION_DEF_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_DEFAULT())
                ->append("><B>"_j)->toString());
        }
		RESOURCE_MASKS_FORMAT= datatable::FieldFormat::create(std::stringBuilder().append("<"_j)->append(ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK())
            ->append("><S><F=N>"_j)->toString()))->wrap();
        FIFT_GET_COPY_DATA= new ::TableFormat(int(1), int(1));
        {
            FIFT_GET_COPY_DATA())->addField(std::stringBuilder().append("<"_j)->append(FIF_COPY_DATA_GROUP())
				->append("><S><F=N>"_j)->toString());
            FIFT_GET_COPY_DATA())->addField(std::stringBuilder().append("<"_j)->append(FIF_COPY_DATA_RECIPIENTS())
                ->append("><T><F=N>"_j)->toString());
        }
        FIFT_GET_COPY_DATA_RECIPIENTS= datatable::FieldFormat::create(std::stringBuilder().append("<"_j)->append(FIF_COPY_DATA_RECIPIENTS_RECIPIENT())
			->append("><S>"_j)->toString()))->wrap();
        REPLICATE_INPUT_FORMAT= new ::TableFormat();
        {
            REPLICATE_INPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FOF_COPY_DATA_NAME())
                ->append("><S><F=RHK>"_j)->toString());
			REPLICATE_INPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FOF_COPY_DATA_DESCRIPTION())
                ->append("><S><F=R><D="_j)
                ->append(Cres::get())->getString("variable"_j))
                ->append(">"_j)->toString());
            REPLICATE_INPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FOF_COPY_DATA_REPLICATE())
				->append("><B><A=0><D="_j)
                ->append(Cres::get())->getString("replicate"_j))
                ->append(">"_j)->toString());
            REPLICATE_INPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FOF_COPY_DATA_FIELDS())
                ->append("><T><D="_j)
				->append(Cres::get())->getString("fields"_j))
                ->append(">"_j)->toString());
            REPLICATE_INPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FOF_COPY_DATA_VALUE())
                ->append("><T><D="_j)
                ->append(Cres::get())->getString("value"_j))
				->append(">"_j)->toString());
        }
        FIFT_REPLICATE_FIELDS= new ::TableFormat();
        {
            FIFT_REPLICATE_FIELDS())->addField(std::stringBuilder().append("<"_j)->append(FIF_REPLICATE_FIELDS_NAME())
				->append("><S><F=RHK>"_j)->toString());
            FIFT_REPLICATE_FIELDS())->addField(std::stringBuilder().append("<"_j)->append(FIF_REPLICATE_FIELDS_DESCRIPTION())
                ->append("><S><F=R><D="_j)
                ->append(Cres::get())->getString("field"_j))
                ->append(">"_j)->toString());
			FIFT_REPLICATE_FIELDS())->addField(std::stringBuilder().append("<"_j)->append(FIF_REPLICATE_FIELDS_REPLICATE())
                ->append("><B><A=1><D="_j)
                ->append(Cres::get())->getString("replicate"_j))
                ->append(">"_j)->toString());
            FIFT_REPLICATE_FIELDS())->setNamingExpression(std::stringBuilder().append("print({}, '{"_j)->append(FIF_REPLICATE_FIELDS_REPLICATE())
				->append("} ? {"_j)
                ->append(FIF_REPLICATE_FIELDS_DESCRIPTION())
                ->append("} : null', ', ')"_j)->toString());
        }
        REPLICATE_OUTPUT_FORMAT= new ::TableFormat();
		{
            REPLICATE_OUTPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_REPLICATE_VARIABLE())
                ->append("><S><D="_j)
                ->append(Cres::get())->getString("variable"_j))
                ->append(">"_j)->toString());
			REPLICATE_OUTPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_REPLICATE_SUCCESSFUL())
                ->append("><B><D="_j)
                ->append(Cres::get())->getString("successful"_j))
                ->append(">"_j)->toString());
            REPLICATE_OUTPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_REPLICATE_ERRORS())
				->append("><S><D="_j)
                ->append(Cres::get())->getString("errors"_j))
                ->append(">"_j)->toString());
        }
        REPLICATE_TO_CHILDREN_OUTPUT_FORMAT= new ::TableFormat();
		{
            REPLICATE_TO_CHILDREN_OUTPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_REPLICATE_CONTEXT())
                ->append("><S><D="_j)
                ->append(Cres::get())->getString("context"_j))
                ->append(">"_j)->toString());
			REPLICATE_TO_CHILDREN_OUTPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_REPLICATE_VARIABLE())
                ->append("><S><D="_j)
                ->append(Cres::get())->getString("variable"_j))
                ->append(">"_j)->toString());
            REPLICATE_TO_CHILDREN_OUTPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_REPLICATE_SUCCESSFUL())
				->append("><B><D="_j)
                ->append(Cres::get())->getString("successful"_j))
                ->append(">"_j)->toString());
            REPLICATE_TO_CHILDREN_OUTPUT_FORMAT())->addField(std::stringBuilder().append("<"_j)->append(FIELD_REPLICATE_ERRORS())
                ->append("><S><D="_j)
				->append(Cres::get())->getString("errors"_j))
                ->append(">"_j)->toString());
        }
        EF_UPDATED= new ::TableFormat(int(1), int(1));
        {
			EF_UPDATED())->addField(std::stringBuilder().append("<"_j)->append(EF_UPDATED_VARIABLE())
                ->append("><S>"_j)->toString());
            EF_UPDATED())->addField(std::stringBuilder().append("<"_j)->append(EF_UPDATED_VALUE())
                ->append("><T>"_j)->toString());
            EF_UPDATED())->addField(std::stringBuilder().append("<"_j)->append(EF_UPDATED_USER())
				->append("><S><F=N>"_j)->toString());
        }
        EF_CHANGE= new ::TableFormat(int(1), int(1));
        {
            EF_CHANGE())->addField(std::stringBuilder().append("<"_j)->append(EF_CHANGE_VARIABLE())
				->append("><S>"_j)->toString());
            EF_CHANGE())->addField(std::stringBuilder().append("<"_j)->append(EF_CHANGE_VALUE())
                ->append("><T><F=N>"_j)->toString());
            EF_CHANGE())->addField(std::stringBuilder().append("<"_j)->append(EF_CHANGE_DATA())
                ->append("><S><F=N>"_j)->toString());
		}
        EFT_INFO= new ::TableFormat(int(1), int(1), std::stringBuilder().append("<"_j)->append(EF_INFO_INFO())
            ->append("><S><D="_j)
            ->append(Cres::get())->getString("info"_j))
            ->append(">"_j)->toString());
		EFT_VARIABLE_REMOVED= new ::TableFormat(int(1), int(1), std::stringBuilder().append("<"_j)->append(EF_VARIABLE_REMOVED_NAME())
            ->append("><S>"_j)->toString());
        EFT_EVENT_REMOVED= new ::TableFormat(int(1), int(1), std::stringBuilder().append("<"_j)->append(EF_EVENT_REMOVED_NAME())
            ->append("><S>"_j)->toString());
        EFT_FUNCTION_REMOVED= new ::TableFormat(int(1), int(1), std::stringBuilder().append("<"_j)->append(EF_FUNCTION_REMOVED_NAME())
			->append("><S>"_j)->toString());
        EFT_CHILD_REMOVED= new ::TableFormat(int(1), int(1), std::stringBuilder().append("<"_j)->append(EF_CHILD_REMOVED_CHILD())
            ->append("><S>"_j)->toString());
        EFT_CHILD_ADDED= new ::TableFormat(int(1), int(1), std::stringBuilder().append("<"_j)->append(EF_CHILD_ADDED_CHILD())
            ->append("><S>"_j)->toString());
		EFT_ACTION_REMOVED= new ::TableFormat(int(1), int(1), std::stringBuilder().append("<"_j)->append(AbstractContext::EF_ACTION_REMOVED_NAME())
            ->append("><S>"_j)->toString());
        VD_INFO= new VariableDefinition(V_INFO(), INFO_DEFINITION_FORMAT(), true, false, Cres::get())->getString("conContextProps"_j), ContextUtils::GROUP_SYSTEM());
        {
            VD_INFO())->setHidden(true);
			VD_INFO())->setReadPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        VD_VARIABLES= new VariableDefinition(V_VARIABLES(), VARIABLE_DEFINITION_FORMAT(), true, false, Cres::get())->getString("conVarList"_j));
        {
            VD_VARIABLES())->setHidden(true);
			VD_VARIABLES())->setReadPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        VD_FUNCTIONS= new VariableDefinition(V_FUNCTIONS(), FUNCTION_DEFINITION_FORMAT(), true, false, Cres::get())->getString("conFuncList"_j));
        {
            VD_FUNCTIONS())->setHidden(true);
			VD_FUNCTIONS())->setReadPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        VD_EVENTS= new VariableDefinition(V_EVENTS(), EVENT_DEFINITION_FORMAT(), true, false, Cres::get())->getString("conEvtList"_j));
        {
            VD_EVENTS())->setHidden(true);
			VD_EVENTS())->setReadPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        VD_ACTIONS= new VariableDefinition(AbstractContext::V_ACTIONS(), ACTION_DEF_FORMAT(), true, false, Cres::get())->getString("conActionList"_j));
        {
            VD_ACTIONS())->setHidden(true);
			VD_ACTIONS())->setReadPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        VD_CHILDREN= new VariableDefinition(V_CHILDREN(), VFT_CHILDREN(), true, false, Cres::get())->getString("conChildList"_j));
        {
            VD_CHILDREN())->setHidden(true);
			VD_CHILDREN())->setReadPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        FD_GET_COPY_DATA= new FunctionDefinition(F_GET_COPY_DATA(), FIFT_GET_COPY_DATA(), REPLICATE_INPUT_FORMAT());
        {
            FD_GET_COPY_DATA())->setHidden(true);
		}
        FD_COPY= new FunctionDefinition(F_COPY(), REPLICATE_INPUT_FORMAT(), REPLICATE_OUTPUT_FORMAT(), Cres::get())->getString("conCopyProperties"_j));
        {
            FD_COPY())->setHidden(true);
        }
		FD_COPY_TO_CHILDREN= new FunctionDefinition(F_COPY_TO_CHILDREN(), REPLICATE_INPUT_FORMAT(), REPLICATE_TO_CHILDREN_OUTPUT_FORMAT(), Cres::get())->getString("conCopyToChildren"_j));
        {
            FD_COPY_TO_CHILDREN())->setHidden(true);
        }
        ED_INFO= new EventDefinition(E_INFO(), EFT_INFO(), Cres::get())->getString("info"_j), ContextUtils::GROUP_DEFAULT());
		{
            ED_INFO())->setLevel(::com::tibbo::aggregate::common::event::EventLevel::INFO);
            ED_INFO())->setIconId(::com::tibbo::aggregate::common::util::Icons::EVT_INFO());
            ED_INFO())->getPersistenceOptions())->setDedicatedTablePreferred(true);
        }
		ED_CHILD_ADDED= new EventDefinition(E_CHILD_ADDED(), EFT_CHILD_ADDED(), Cres::get())->getString("conChildAdded"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_CHILD_ADDED())->setSynchronous(true);
            ED_CHILD_ADDED())->setHidden(true);
            ED_CHILD_ADDED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
		}
        ED_CHILD_REMOVED= new EventDefinition(E_CHILD_REMOVED(), EFT_CHILD_REMOVED(), Cres::get())->getString("conChildRemoved"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_CHILD_REMOVED())->setSynchronous(true);
            ED_CHILD_REMOVED())->setHidden(true);
			ED_CHILD_REMOVED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_VARIABLE_ADDED= new EventDefinition(E_VARIABLE_ADDED(), EF_VARIABLE_ADDED(), Cres::get())->getString("conVarAdded"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_VARIABLE_ADDED())->setHidden(true);
			ED_VARIABLE_ADDED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_VARIABLE_REMOVED= new EventDefinition(E_VARIABLE_REMOVED(), EFT_VARIABLE_REMOVED(), Cres::get())->getString("conVarRemoved"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_VARIABLE_REMOVED())->setHidden(true);
			ED_VARIABLE_REMOVED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_FUNCTION_ADDED= new EventDefinition(E_FUNCTION_ADDED(), EF_FUNCTION_ADDED(), Cres::get())->getString("conFuncAdded"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_FUNCTION_ADDED())->setHidden(true);
			ED_FUNCTION_ADDED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_FUNCTION_REMOVED= new EventDefinition(E_FUNCTION_REMOVED(), EFT_FUNCTION_REMOVED(), Cres::get())->getString("conFuncRemoved"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_FUNCTION_REMOVED())->setHidden(true);
			ED_FUNCTION_REMOVED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_EVENT_ADDED= new EventDefinition(E_EVENT_ADDED(), EF_EVENT_ADDED(), Cres::get())->getString("conEvtAdded"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_EVENT_ADDED())->setHidden(true);
			ED_EVENT_ADDED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_EVENT_REMOVED= new EventDefinition(E_EVENT_REMOVED(), EFT_EVENT_REMOVED(), Cres::get())->getString("conEvtRemoved"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_EVENT_REMOVED())->setHidden(true);
			ED_EVENT_REMOVED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_ACTION_ADDED= new EventDefinition(AbstractContext::E_ACTION_ADDED(), ACTION_DEF_FORMAT())->clone())->setMinRecords(1))->setMaxRecords(1), Cres::get())->getString("conActionAdded"_j));
        {
            ED_ACTION_ADDED())->setHidden(true);
			ED_ACTION_ADDED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_ACTION_REMOVED= new EventDefinition(AbstractContext::E_ACTION_REMOVED(), EFT_ACTION_REMOVED(), Cres::get())->getString("conActionRemoved"_j));
        {
            ED_ACTION_REMOVED())->setHidden(true);
			ED_ACTION_REMOVED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_ACTION_STATE_CHANGED= new EventDefinition(AbstractContext::E_ACTION_STATE_CHANGED(), ACTION_DEF_FORMAT(), Cres::get())->getString("conActionStateChanged"_j));
        {
            ED_ACTION_STATE_CHANGED())->setHidden(true);
			ED_ACTION_STATE_CHANGED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_INFO_CHANGED= new EventDefinition(E_INFO_CHANGED(), INFO_DEFINITION_FORMAT(), Cres::get())->getString("conInfoChanged"_j), ContextUtils::GROUP_SYSTEM());
        {
            ED_INFO_CHANGED())->setHidden(true);
			ED_INFO_CHANGED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
        }
        ED_UPDATED= new EventDefinition(E_UPDATED(), EF_UPDATED(), Cres::get())->getString("conUpdated"_j), ContextUtils::GROUP_SYSTEM());
        {
			ED_UPDATED())->setHidden(true);
        }
        ED_CHANGE= new EventDefinition(E_CHANGE(), EF_CHANGE(), Cres::get())->getString("change"_j), ContextUtils::GROUP_SYSTEM());
        {
			ED_CHANGE())->setHidden(true);
            ED_CHANGE())->getPersistenceOptions())->setDedicatedTablePreferred(true);
		}
		ED_DESTROYED= new EventDefinition(E_DESTROYED(), ::TableFormat::EMPTY_FORMAT(), Cres::get())->getString("conDestroyedPermanently"_j), ContextUtils::GROUP_SYSTEM());
		{
			ED_DESTROYED())->setSynchronous(true);
			ED_DESTROYED())->setHidden(true);
			ED_DESTROYED())->setPermissions(::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions());
		}
		VFT_VARIABLE_STATUSES= new ::TableFormat();
		{
			VFT_VARIABLE_STATUSES())->addField(std::stringBuilder().append("<"_j)->append(VF_VARIABLE_STATUSES_NAME())
				->append("><S>"_j)->toString());
			VFT_VARIABLE_STATUSES())->addField(std::stringBuilder().append("<"_j)->append(VF_VARIABLE_STATUSES_STATUS())
                ->append("><S><F=N>"_j)->toString());
			VFT_VARIABLE_STATUSES())->addField(std::stringBuilder().append("<"_j)->append(VF_VARIABLE_STATUSES_COMMENT())
                ->append("><S><F=N>"_j)->toString());
		}
		DEFAULT_PERMISSIONS= ::com::tibbo::aggregate::common::security::DefaultPermissionChecker::getNullPermissions();
	*/
}

///*
//std::string& /*template <class C> */AbstractContext/*<C> */::IMPLEMENTATION_METHOD_PREFIX()
//{
//    
//    return IMPLEMENTATION_METHOD_PREFIX_;
//}
//std::string /*template <class C> */AbstractContext/*<C> */::IMPLEMENTATION_METHOD_PREFIX_;
//
//std::string& /*template <class C> */AbstractContext/*<C> */::SETTER_METHOD_PREFIX()
//{
//    
//    return SETTER_METHOD_PREFIX_;
//}
//std::string /*template <class C> */AbstractContext/*<C> */::SETTER_METHOD_PREFIX_;
//
//std::string& /*template <class C> */AbstractContext/*<C> */::GETTER_METHOD_PREFIX()
//{
//    
//    return GETTER_METHOD_PREFIX_;
//}
//std::string /*template <class C> */AbstractContext/*<C> */::GETTER_METHOD_PREFIX_;
//

//TableFormat*& /*template <class C> */AbstractContext/*<C> */::VARIABLE_DEFINITION_FORMAT()
//{
//    
//    return VARIABLE_DEFINITION_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::VARIABLE_DEFINITION_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EF_VARIABLE_ADDED()
//{
//    
//    return EF_VARIABLE_ADDED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EF_VARIABLE_ADDED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::FUNCTION_DEFINITION_FORMAT()
//{
//    
//    return FUNCTION_DEFINITION_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::FUNCTION_DEFINITION_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EF_FUNCTION_ADDED()
//{
//    
//    return EF_FUNCTION_ADDED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EF_FUNCTION_ADDED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EVENT_DEFINITION_FORMAT()
//{
//    
//    return EVENT_DEFINITION_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EVENT_DEFINITION_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EF_EVENT_ADDED()
//{
//    
//    return EF_EVENT_ADDED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EF_EVENT_ADDED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::VFT_CHILDREN()
//{
//    
//    return VFT_CHILDREN_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::VFT_CHILDREN_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::INFO_DEFINITION_FORMAT()
//{
//    
//    return INFO_DEFINITION_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::INFO_DEFINITION_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::ACTION_DEF_FORMAT()
//{
//    
//    return ACTION_DEF_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::ACTION_DEF_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::RESOURCE_MASKS_FORMAT()
//{
//    
//    return RESOURCE_MASKS_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::RESOURCE_MASKS_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::FIFT_GET_COPY_DATA()
//{
//    
//    return FIFT_GET_COPY_DATA_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::FIFT_GET_COPY_DATA_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::FIFT_GET_COPY_DATA_RECIPIENTS()
//{
//    
//    return FIFT_GET_COPY_DATA_RECIPIENTS_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::FIFT_GET_COPY_DATA_RECIPIENTS_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::REPLICATE_INPUT_FORMAT()
//{
//    
//    return REPLICATE_INPUT_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::REPLICATE_INPUT_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::FIFT_REPLICATE_FIELDS()
//{
//    
//    return FIFT_REPLICATE_FIELDS_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::FIFT_REPLICATE_FIELDS_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::REPLICATE_OUTPUT_FORMAT()
//{
//    
//    return REPLICATE_OUTPUT_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::REPLICATE_OUTPUT_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::REPLICATE_TO_CHILDREN_OUTPUT_FORMAT()
//{
//    
//    return REPLICATE_TO_CHILDREN_OUTPUT_FORMAT_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::REPLICATE_TO_CHILDREN_OUTPUT_FORMAT_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EF_UPDATED()
//{
//    
//    return EF_UPDATED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EF_UPDATED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EF_CHANGE()
//{
//    
//    return EF_CHANGE_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EF_CHANGE_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EFT_INFO()
//{
//    
//    return EFT_INFO_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EFT_INFO_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EFT_VARIABLE_REMOVED()
//{
//    
//    return EFT_VARIABLE_REMOVED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EFT_VARIABLE_REMOVED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EFT_EVENT_REMOVED()
//{
//    
//    return EFT_EVENT_REMOVED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EFT_EVENT_REMOVED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EFT_FUNCTION_REMOVED()
//{
//    
//    return EFT_FUNCTION_REMOVED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EFT_FUNCTION_REMOVED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EFT_CHILD_REMOVED()
//{
//    
//    return EFT_CHILD_REMOVED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EFT_CHILD_REMOVED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EFT_CHILD_ADDED()
//{
//    
//    return EFT_CHILD_ADDED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EFT_CHILD_ADDED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::EFT_ACTION_REMOVED()
//{
//    
//    return EFT_ACTION_REMOVED_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::EFT_ACTION_REMOVED_;
//
//VariableDefinition*& /*template <class C> */AbstractContext/*<C> */::VD_INFO()
//{
//    
//    return VD_INFO_;
//}
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::VD_INFO_;
//
//VariableDefinition*& /*template <class C> */AbstractContext/*<C> */::VD_VARIABLES()
//{
//    
//    return VD_VARIABLES_;
//}
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::VD_VARIABLES_;
//
//VariableDefinition*& /*template <class C> */AbstractContext/*<C> */::VD_FUNCTIONS()
//{
//    
//    return VD_FUNCTIONS_;
//}
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::VD_FUNCTIONS_;
//
//VariableDefinition*& /*template <class C> */AbstractContext/*<C> */::VD_EVENTS()
//{
//    
//    return VD_EVENTS_;
//}
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::VD_EVENTS_;
//
//VariableDefinition*& /*template <class C> */AbstractContext/*<C> */::VD_ACTIONS()
//{
//    
//    return VD_ACTIONS_;
//}
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::VD_ACTIONS_;
//
//VariableDefinition*& /*template <class C> */AbstractContext/*<C> */::VD_CHILDREN()
//{
//    
//    return VD_CHILDREN_;
//}
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::VD_CHILDREN_;
//
//FunctionDefinition*& /*template <class C> */AbstractContext/*<C> */::FD_GET_COPY_DATA()
//{
//    
//    return FD_GET_COPY_DATA_;
//}
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::FD_GET_COPY_DATA_;
//
//FunctionDefinition*& /*template <class C> */AbstractContext/*<C> */::FD_COPY()
//{
//    
//    return FD_COPY_;
//}
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::FD_COPY_;
//
//FunctionDefinition*& /*template <class C> */AbstractContext/*<C> */::FD_COPY_TO_CHILDREN()
//{
//    
//    return FD_COPY_TO_CHILDREN_;
//}
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::FD_COPY_TO_CHILDREN_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_INFO()
//{
//    
//    return ED_INFO_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_INFO_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_CHILD_ADDED()
//{
//    
//    return ED_CHILD_ADDED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_CHILD_ADDED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_CHILD_REMOVED()
//{
//    
//    return ED_CHILD_REMOVED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_CHILD_REMOVED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_VARIABLE_ADDED()
//{
//    
//    return ED_VARIABLE_ADDED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_VARIABLE_ADDED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_VARIABLE_REMOVED()
//{
//    
//    return ED_VARIABLE_REMOVED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_VARIABLE_REMOVED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_FUNCTION_ADDED()
//{
//    
//    return ED_FUNCTION_ADDED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_FUNCTION_ADDED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_FUNCTION_REMOVED()
//{
//    
//    return ED_FUNCTION_REMOVED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_FUNCTION_REMOVED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_EVENT_ADDED()
//{
//    
//    return ED_EVENT_ADDED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_EVENT_ADDED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_EVENT_REMOVED()
//{
//    
//    return ED_EVENT_REMOVED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_EVENT_REMOVED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_ACTION_ADDED()
//{
//    
//    return ED_ACTION_ADDED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_ACTION_ADDED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_ACTION_REMOVED()
//{
//    
//    return ED_ACTION_REMOVED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_ACTION_REMOVED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_ACTION_STATE_CHANGED()
//{
//    
//    return ED_ACTION_STATE_CHANGED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_ACTION_STATE_CHANGED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_INFO_CHANGED()
//{
//    
//    return ED_INFO_CHANGED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_INFO_CHANGED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_UPDATED()
//{
//    
//    return ED_UPDATED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_UPDATED_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_CHANGE()
//{
//    
//    return ED_CHANGE_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_CHANGE_;
//
//EventDefinition*& /*template <class C> */AbstractContext/*<C> */::ED_DESTROYED()
//{
//    
//    return ED_DESTROYED_;
//}
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::ED_DESTROYED_;
//
//TableFormat*& /*template <class C> */AbstractContext/*<C> */::VFT_VARIABLE_STATUSES()
//{
//    
//    return VFT_VARIABLE_STATUSES_;
//}
//TableFormat* /*template <class C> */AbstractContext/*<C> */::VFT_VARIABLE_STATUSES_;
//
//const int /*template <class C> */AbstractContext/*<C> */::DEFAULT_EVENT_LEVEL;
//
//com::tibbo::aggregate::common::security::Permissions*& /*template <class C> */AbstractContext/*<C> */::DEFAULT_PERMISSIONS()
//{
//    
//    return DEFAULT_PERMISSIONS_;
//}
//com::tibbo::aggregate::common::security::Permissions* /*template <class C> */AbstractContext/*<C> */::DEFAULT_PERMISSIONS_;
//
//std::string& /*template <class C> */AbstractContext/*<C> */::CALLER_CONTROLLER_PROPERTY_DEBUG()
//{
//    
//    return CALLER_CONTROLLER_PROPERTY_DEBUG_;
//}
//std::string /*template <class C> */AbstractContext/*<C> */::CALLER_CONTROLLER_PROPERTY_DEBUG_;
//
//std::string& /*template <class C> */AbstractContext/*<C> */::CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS()
//{
//    
//    return CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS_;
//}
//std::string /*template <class C> */AbstractContext/*<C> */::CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS_;
//
//std::string& /*template <class C> */AbstractContext/*<C> */::CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS()
//{
//    
//    return CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS_;
//}
//std::string /*template <class C> */AbstractContext/*<C> */::CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS_;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_HIGHEST;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_VERY_HIGH;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_HIGH;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_HIGHER;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_NORMAL;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_LOWER;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_LOW;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_VERY_LOW;
//
//const int /*template <class C> */AbstractContext/*<C> */::INDEX_LOWEST;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_HIGHEST;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_VERY_HIGH;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_HIGH;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_HIGHER;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_LOWER;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_LOW;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_VERY_LOW;
//
//const int /*template <class C> */AbstractContext/*<C> */::DELTA_LOWEST;
//
//const int /*template <class C> */AbstractContext/*<C> */::VERY_LOW_PERFORMANCE_THRESHOLD;
//
//const int /*template <class C> */AbstractContext/*<C> */::LOW_PERFORMANCE_THRESHOLD;
//

//void /*template <class C> */AbstractContext/*<C> */::setup(ContextManager* contextManager)
//{
//    setContextManager(contextManager);
//    setup();
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setup()
//{
//    try {
//        if(setupComplete) {
//            return;
//        }
//        setupPermissions();
//        setupMyself();
//        setupComplete = true;
//        setupChildren();
//    } catch (::java::lang::Exception* ex) {
//        throw new ContextRuntimeException(std::stringBuilder().append("Error setting up context '"_j)->append(toString())
//            ->append("': "_j)
//            ->append(ex)->getMessage())->toString(), ex);
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setupPermissions()
//{
//}
//*/
//
/*template <class C> */ void AbstractContext/*<C> */::setupMyself()
{
	/*
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
    addEventDefinition(getChangeEventDefinition);
    addEventDefinition(ED_DESTROYED);*/

}
//
///*/*template <class C> */*/void AbstractContext/*<C> */::setupChildren()
//{
//}
//
/*template <class C> */void AbstractContext/*<C>*/::teardown()
{
}

void /*template <class C> */AbstractContext/*<C>*/::start()
{
//    std::list  tasks = new ::java::util::LinkedList();
//    childrenLock)->readLock())->lock();
//    {
//        auto finally0 = finally([&] {
//            childrenLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                Context* child = java_cast< Context* >(_i->next());
//                {
//                    ::java::util::concurrent::Callable* task = new AbstractContext_start_1(this, child);
//                    tasks)->add(task));
//                }
//            }
//        }
//    }
//
//    executeTasks(tasks);
//    started = true;
}
//
void /*template <class C> */AbstractContext/*<C>*/::stop()
{
//    std::list  tasks = new ::java::util::LinkedList();
//    childrenLock)->readLock())->lock();
//    {
//        auto finally1 = finally([&] {
//            childrenLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                Context* child = java_cast< Context* >(_i->next());
//                {
//                    ::java::util::concurrent::Callable* task = new AbstractContext_stop_2(this, child);
//                    tasks)->add(task));
//                }
//            }
//        }
//    }
//
//    executeTasks(tasks);
//    started = false;
}
//
//int /*/*template <class C> */*/AbstractContext/*<C> */::compareTo(Context* context)
//{
//    if(getIndex() != 0 || context)->getIndex() != 0) {
//        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
//        auto other = context)->getIndex() != 0 ? context)->getIndex() : new ::java::lang::Integer(int(0));
//        return other)->compareTo(my);
//    } else {
//        return getName())->compareTo(context)->getName());
//    }
//}
//
//int /*/*template <class C> */*/AbstractContext/*<C> */::compareTo(void* arg0)
//{ 
//    return compareTo(dynamic_cast< Context* >(arg0));
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getChildren(CallerController* caller)
//{
//    if(!checkPermissions(getChildrenViewPermissions(), caller, this)) {
//        if(Log::CONTEXT_CHILDREN())->isDebugEnabled()) {
//            Log::CONTEXT_CHILDREN())->debug(std::stringBuilder().append("Access to child '"_j)->append(name)
//                ->append("' denied in context '"_j)
//                ->append(getPath())
//                ->append("'"_j)->toString());
//        }
//        return ::java::util::Collections::emptyList();
//    }
//    std::list  childList = new ::java::util::LinkedList(children);
//    for (auto *iterator = childList)->iterator(); iterator)->hasNext(); ) {
//        auto cur = java_cast< Context* >(iterator)->next());
//        if(!shouldSeeChild(caller, cur)) {
//            iterator)->remove();
//        }
//    }
//    return childList;
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::shouldSeeChild(CallerController* caller, Context* cur)
//{
//    return checkPermissions(cur)->getPermissions(), caller, cur) || canSee(caller, cur);
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::canSee(CallerController* caller, Context* con)
//{
//    if(!permissionCheckingEnabled) {
//        return true;
//    }
//    return getPermissionChecker())->canSee(caller != 0 ? caller)->getPermissions() : static_cast< ::com::tibbo::aggregate::common::security::Permissions* >(0), con)->getPath(), getContextManager());
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getChildren()
//{
//    return getChildren(static_cast< CallerController* >(0));
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getVisibleChildren(CallerController* caller)
//{
//    return getChildren(caller);
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getVisibleChildren()
//{
//    return getVisibleChildren(static_cast< CallerController* >(0));
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::isMapped()
//{
//    return false;
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getMappedChildren(CallerController* caller)
//{
//    return isMapped() ? getVisibleChildren(caller) : getChildren(caller);
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getMappedChildren()
//{
//    return getMappedChildren(static_cast< CallerController* >(0));
//}
//
std::string /*template <class C> */AbstractContext/*<C> */::getName()
{
    return name;
}

std::string /*template <class C> */AbstractContext/*<C> */::getDescription()
{
    return description;
}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setDescription(std::string* description)
//{
//    auto old = this->description;
//    this->description = description;
//    if(old == 0 || !old)->equals(description))) {
//        contextInfoChanded();
//    }
//}
//
//Context* /*/*template <class C> */*/AbstractContext/*<C> */::getParent()
//{
//    return java_cast< Context* >(parent);
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::hasParent(Context* parentContext)
//{
//    Context* root = this;
//    do {
//        root = java_cast< Context* >(root)->getParent());
//        if(root == static_cast< Context* >(parentContext)) {
//            return true;
//        }
//    } while (java_cast< Context* >(root)->getParent()) != 0);
//    return false;
//}
//
//Context* /*/*template <class C> */*/AbstractContext/*<C> */::getRoot()
//{
//    Context* root = this;
//    while (java_cast< Context* >(root)->getParent()) != 0) {
//        root = java_cast< Context* >(root)->getParent());
//    }
//    return java_cast< Context* >(root);
//}
//
//Context* /*/*template <class C> */*/AbstractContext/*<C> */::get(std::string* contextPath, CallerController* caller)
//{
//    if(contextPath == 0) {
//        return 0;
//    }
//    auto relative = ContextUtils::isRelative(contextPath);
//    if(relative) {
//        contextPath = contextPath)->substring(1);
//    }
//    auto cur = relative ? java_cast< Context* >(this) : java_cast< Context* >(getRoot());
//    if(contextPath)->length() == 0) {
//        return cur;
//    }
//    auto lastName = java_cast< Context* >(getRoot()))->getName();
//    auto names = ::com::tibbo::aggregate::common::util::StringUtils::split(contextPath, ContextUtils::CONTEXT_NAME_SEPARATOR())->charAt(int(0)));
//    for (auto _i = names)->iterator(); _i->hasNext(); ) {
//        std::string* child = java_cast< std::string* >(_i->next());
//        {
//            if(child)->length() == 0) {
//                return 0;
//            }
//            if(cur == 0) {
//                break;
//            }
//            lastName = cur)->getName();
//            cur = java_cast< Context* >(java_cast< Context* >(cur)->getChild(child, caller)));
//        }
//    }
//    if(cur == 0) {
//        Log::CONTEXT_CHILDREN())->debug(std::stringBuilder().append("Context '"_j)->append(contextPath)
//            ->append("' not found in '"_j)
//            ->append(getPath())
//            ->append("', last found: '"_j)
//            ->append(lastName)
//            ->append("'"_j)->toString());
//    }
//    return cur;
//}
//
//Context* /*/*template <class C> */*/AbstractContext/*<C> */::get(std::string* contextName)
//{
//    return java_cast< Context* >(get(contextName, static_cast< CallerController* >(0)));
//}
//
//com::tibbo::aggregate::common::security::Permissions* /*/*template <class C> */*/AbstractContext/*<C> */::getPermissions()
//{
//    if(!permissionCheckingEnabled) {
//        return DEFAULT_PERMISSIONS();
//    }
//    if(permissions != 0) {
//        return permissions;
//    }
//    if(java_cast< Context* >(getParent()) != 0) {
//        return java_cast< Context* >(getParent()))->getPermissions();
//    }
//    return DEFAULT_PERMISSIONS();
//}
//
void /*/*template <class C> */AbstractContext/*<C> */::setName(const std::string &name)
{
   // path;
   // if(!ContextUtils::isValidContextName(name)) 
	//{
   //     throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(Cres::get())->getString("conIllegalName"_j))->append(name)->toString());
   // }
    this->name = name;
}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setParent(Context* parent)
//{
//    this->parent = parent;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setPermissions(::com::tibbo::aggregate::common::security::Permissions* permissions)
//{
//    this->permissions = permissions;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setPermissionChecker(::com::tibbo::aggregate::common::security::PermissionChecker* permissionChecker)
//{
//    this->permissionChecker = permissionChecker;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setFireUpdateEvents(bool fireUpdateEvents)
//{
//    this->fireUpdateEvents = fireUpdateEvents;
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::isFireUpdateEvents()
//{
//    return fireUpdateEvents;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setContextManager(ContextManager* contextManager)
//{
//    if(java_cast< ContextManager* >(this->contextManager) != 0 && java_cast< ContextManager* >(this->contextManager)) != contextManager)) {
//        throw new ::java::lang::IllegalStateException("Context manager already set"_j);
//    }
//    this->contextManager = contextManager;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setChildrenViewPermissions(::com::tibbo::aggregate::common::security::Permissions* childrenViewPermissions)
//{
//    this->childrenViewPermissions = childrenViewPermissions;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setChildrenSortingEnabled(bool childrenSortingEnabled)
//{
//    this->childrenSortingEnabled = childrenSortingEnabled;
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::isChildrenSortingEnabled()
//{
//    return childrenSortingEnabled;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setValueCheckingEnabled(bool valueCheckingEnabled)
//{
//    this->valueCheckingEnabled = valueCheckingEnabled;
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::isChildrenConcurrencyEnabled()
//{
//    return childrenConcurrencyEnabled;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::setChildrenConcurrencyEnabled(bool childrenConcurrencyEnabled)
//{
//    this->childrenConcurrencyEnabled = childrenConcurrencyEnabled;
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::checkPermissions(::com::tibbo::aggregate::common::security::Permissions* needPermissions, CallerController* caller)
//{
//    if(!checkPermissions(needPermissions, caller, this)) {
//        throw new ContextSecurityException(::java::text::MessageFormat::format(Cres::get())->getString("conAccessDenied"_j), new voidArray({getPath()), caller != 0 ? caller)->getPermissions()) : ""_j), needPermissions)})));
//    }
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::checkPermissions(::com::tibbo::aggregate::common::security::Permissions* needPermissions, CallerController* caller, Context* accessedContext)
//{
//    if(!permissionCheckingEnabled) {
//        return true;
//    }
//    return getPermissionChecker())->has(caller, needPermissions, accessedContext);
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::addChild(Context* child)
//{
//    addChild(child, 0);
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::addChild(Context* child, ::java::lang::Integer* index)
//{
//    auto startTime = ::java::lang::System::currentTimeMillis();
//    childrenLock)->writeLock())->lock();
//    {
//        auto finally2 = finally([&] {
//            childrenLock)->writeLock())->unlock();
//        });
//        {
//            auto existing = java_cast< Context* >(getChildWithoutCheckingPerms(child)->getName()));
//            if(existing != 0) {
//                throw new ::java::lang::IllegalArgumentException(::java::text::MessageFormat::format(Cres::get())->getString("conChildExists"_j), new voidArray({child)->getName()), getPath())})));
//            }
//            if(index != 0) {
//                if(childrenSortingEnabled) {
//                    throw new ::java::lang::IllegalStateException("Cannot add child with pre-defined index as children sorting is enabled"_j);
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
//                throw new ContextRuntimeException(std::stringBuilder().append("Error adding child '"_j)->append(child)->toString())
//                    ->append("' to context '"_j)
//                    ->append(toString())
//                    ->append("': "_j)
//                    ->append(ex)->getMessage())->toString(), ex);
//            }
//        }
//
//    }
//    Log::CONTEXT_CHILDREN())->debug(std::stringBuilder().append("Added child '"_j)->append(child)->getName())
//        ->append("' to '"_j)
//        ->append(getPath())
//        ->append("' in "_j)
//        ->append((::java::lang::System::currentTimeMillis() - startTime))
//        ->append(" ms"_j)->toString());
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::removeFromParent()
//{
//    if(java_cast< Context* >(getParent()) != 0) {
//        java_cast< Context* >(getParent()))->removeChild(static_cast< Context* >(this));
//        setParent(static_cast< Context* >(0));
//    } else {
//        Log::CONTEXT_CHILDREN())->debug(std::stringBuilder().append("Can't remove context '"_j)->append(getPath())
//            ->append("' from its parent: no parent context was set"_j)->toString());
//    }
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::destroy(bool moving)
//{
//    if(!moving) {
//        stop();
//        destroyChildren(false);
//    }
//    if(fireUpdateEvents) {
//        auto ed = getEventDefinition(E_DESTROYED());
//        if(ed != 0) {
//            fireEvent(ed)->getName());
//        }
//    }
//    eventDataLock)->readLock())->lock();
//    {
//        auto finally4 = finally([&] {
//            eventDataLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = eventData)->values())->iterator(); _i->hasNext(); ) {
//                EventData* ed = java_cast< EventData* >(_i->next());
//                {
//                    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//                    if(logger)->isDebugEnabled()) {
//                        logger)->debug(std::stringBuilder().append("Removing all listeners of event '"_j)->append(ed)->getDefinition())->getName())
//                            ->append("'"_j)->toString());
//                    }
//                    ed)->clearListeners();
//                }
//            }
//        }
//    }
//
//    removeFromParent();
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::destroyChildren(bool moving)
//{
//    childrenLock)->writeLock())->lock();
//    {
//        auto finally5 = finally([&] {
//            childrenLock)->writeLock())->unlock();
//        });
//        {
//            for (auto _i = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(children))->iterator(); _i->hasNext(); ) {
//                Context* child = java_cast< Context* >(_i->next());
//                {
//                    child)->destroy(moving);
//                }
//            }
//        }
//    }
//
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::removeChild(Context* child)
//{
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
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::removeChild(std::string* name)
//{
//    auto con = java_cast< Context* >(getChildWithoutCheckingPerms(name));
//    if(con != 0) {
//        removeChild(con);
//        return;
//    }
//    Log::CONTEXT_CHILDREN())->debug(std::stringBuilder().append("Remove error: child '"_j)->append(name)
//        ->append("' not found in context "_j)
//        ->append(getPath())->toString());
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::reorderChild(Context* child, int index)
//{
//    if(childrenSortingEnabled) {
//        throw new ::java::lang::IllegalStateException("Cannot reorder children when children sorting is enabled"_j);
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
//
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::destroyChild(Context* child, bool moving)
//{
//    child)->destroy(moving);
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::destroyChild(std::string* name, bool moving)
//{
//    auto con = java_cast< Context* >(getChildWithoutCheckingPerms(name));
//    if(con != 0) {
//        destroyChild(con, moving);
//        return;
//    }
//    Log::CONTEXT_CHILDREN())->warn(std::stringBuilder().append("Destroy error: child '"_j)->append(name)
//        ->append("' not found in context "_j)
//        ->append(getPath())->toString());
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::removeAllChildren()
//{
//    childrenLock)->readLock())->lock();
//    {
//        auto finally8 = finally([&] {
//            childrenLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                Context* child = java_cast< Context* >(_i->next());
//                {
//                    removeChild(child);
//                }
//            }
//        }
//    }
//
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::movePrepare(std::string* oldPath, std::string* oldName, std::string* newPath, std::string* newName)
//{
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::moveInternal(std::string* oldPath, std::string* oldName, std::string* newPath, std::string* newName)
//{
//    setName(newName);
//    childrenLock)->readLock())->lock();
//    {
//        auto finally9 = finally([&] {
//            childrenLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                Context* child = java_cast< Context* >(_i->next());
//                {
//                    (java_cast< AbstractContext* >(child)))->moveInternal(ContextUtils::createName(new std::stringArray({oldPath, child)->getName()})), child)->getName(), ContextUtils::createName(new std::stringArray({newPath, child)->getName()})), child)->getName());
//                }
//            }
//        }
//    }
//
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::moveFinalize(std::string* oldPath, std::string* oldName, std::string* newPath, std::string* newName)
//{
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::move(Context* newParent, std::string* newName)
//{
//    move(getPath(), newParent, newName);
//}
//
//void /*/*template <class C> */*/AbstractContext/*<C> */::move(std::string* oldPath, Context* newParent, std::string* newName)
//{
//    Log::CONTEXT())->debug(std::stringBuilder().append("Moving context "_j)->append(getPath())
//        ->append(" to "_j)
//        ->append(newParent)->getPath())
//        ->append(" and/or renaming to "_j)
//        ->append(newName)->toString());
//    auto oldName = getName();
//    auto newPath = ContextUtils::createName(new std::stringArray({newParent)->getPath(), newName}));
//    movePrepare(oldPath, oldName, newPath, newName);
//    java_cast< Context* >(getParent()))->destroyChild(static_cast< Context* >(this), true);
//    moveInternal(oldPath, oldName, newPath, newName);
//    newParent)->addChild(this);
//    moveFinalize(oldPath, oldName, newPath, newName);
//}
//
//Context* /*/*template <class C> */*/AbstractContext/*<C> */::getChild(std::string* name, CallerController* caller)
//{
//    if(!checkPermissions(getChildrenViewPermissions(), caller, this)) {
//        return 0;
//    }
//    auto child = java_cast< Context* >(getChildWithoutCheckingPerms(name));
//    if(child != 0 && shouldSeeChild(caller, child)) {
//        return child;
//    }
//    return 0;
//}
//
//Context* /*/*template <class C> */*/AbstractContext/*<C> */::getChild(std::string* name)
//{
//    return java_cast< Context* >(getChild(name, static_cast< CallerController* >(0)));
//}
//
//Context* /*/*template <class C> */*/AbstractContext/*<C> */::getChildWithoutCheckingPerms(std::string* name)
//{
//    return java_cast< Context* >(childrenMap)->get(name));
//}
//
//std::string /*/*template <class C> */*/AbstractContext/*<C> */::getPath()
//{
//    if(java_cast< Context* >(getParent()) == 0) {
//        return createPath();
//    }
//    if(path == 0) {
//        path = createPath();
//    }
//    return path;
//}
//
//std::string /*/*template <class C> */*/AbstractContext/*<C> */::createPath()
//{
//    Context* con = this;
//    auto nm = getName();
//    do {
//        con = java_cast< Context* >(con)->getParent());
//        if(con != 0) {
//            if(java_cast< Context* >(con)->getParent()) != 0) {
//                nm = std::stringBuilder().append(con)->getName())->append(ContextUtils::CONTEXT_NAME_SEPARATOR())
//                    ->append(nm)->toString();
//            }
//        }
//    } while (con != 0);
//    return nm;
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener)
//{
//    return addEventListener(name, listener, false);
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool weak)
//{
//    auto ed = getEventData(name);
//    if(ed == 0) {
//        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(Cres::get())->getString("conEvtNotAvail"_j))->append(name)->toString());
//    }
//    {
//        synchronized synchronized_0(ed);
//        {
//            try {
//                checkPermissions(ed)->getDefinition())->getPermissions() != 0 ? ed)->getDefinition())->getPermissions() : getPermissions(), listener)->getCallerController());
//            } catch (ContextSecurityException* ex) {
//                Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append("Error adding listener '"_j)->append(listener))
//                    ->append("' of event '"_j)
//                    ->append(ed)->getDefinition())->getName())
//                    ->append("' in context '"_j)
//                    ->append(getPath())
//                    ->append("': "_j)
//                    ->append(ex)->getMessage())->toString(), new ::java::lang::Exception());
//                return false;
//            }
//            auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//            if(logger)->isDebugEnabled()) {
//                logger)->debug(std::stringBuilder().append("Adding '"_j)->append(listener))
//                    ->append("' as listener of event '"_j)
//                    ->append(ed)->getDefinition())->getName())
//                    ->append("' in '"_j)
//                    ->append(getPath())
//                    ->append("'"_j)->toString());
//            }
//            return ed)->addListener(listener, weak);
//        }
//    }
//}
//
//bool /*/*template <class C> */*/AbstractContext/*<C> */::removeEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener)
//{
//    auto ed = getEventData(name);
//    if(ed == 0) {
//        Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append("Error removing listener of event '"_j)->append(name)
//            ->append("' in context '"_j)
//            ->append(getPath())
//            ->append("': event definition not found"_j)->toString(), new ::java::lang::Exception());
//        return false;
//    }
//    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//    if(logger)->isDebugEnabled()) {
//        logger)->debug(std::stringBuilder().append("Removing '"_j)->append(listener))
//            ->append("' listener of event '"_j)
//            ->append(ed)->getDefinition())->getName())
//            ->append("' in '"_j)
//            ->append(getPath())
//            ->append("'"_j)->toString());
//    }
//    {
//        synchronized synchronized_1(ed);
//        {
//            return ed)->removeListener(listener);
//        }
//    }
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getVariableDefinitions(CallerController* caller)
//{
//    return getVariableDefinitions(caller, false);
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getVariableDefinitions(CallerController* caller, bool includeHidden)
//{
//    std::list  list = new ::java::util::LinkedList();
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    variableDataLock)->readLock())->lock();
//    {
//        auto finally10 = finally([&] {
//            variableDataLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = variableData)->values())->iterator(); _i->hasNext(); ) {
//                VariableData* d = java_cast< VariableData* >(_i->next());
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
//    return list;
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getVariableDefinitions()
//{
//    return getVariableDefinitions(static_cast< CallerController* >(0));
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getVariableDefinitions(CallerController* caller, std::string* group)
//{
//    std::list  defs = new ::java::util::LinkedList();
//    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        VariableDefinition* vd = java_cast< VariableDefinition* >(_i->next());
//        {
//            if(vd)->getGroup() != 0 && (::com::tibbo::aggregate::common::util::Util::equals(group, vd)->getGroup()) || vd)->getGroup())->startsWith(std::stringBuilder().append(group)->append(ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
//                defs)->add(vd));
//            }
//        }
//    }
//    return defs;
//}
//
//java::util::List* /*/*template <class C> */*/AbstractContext/*<C> */::getVariableDefinitions(std::string* group)
//{
//    return getVariableDefinitions(static_cast< CallerController* >(0), group);
//}
//
//com::tibbo::aggregate::common::security::PermissionChecker* /*/*template <class C> */*/AbstractContext/*<C> */::getPermissionChecker()
//{
//    return permissionChecker;
//}
//
//com::tibbo::aggregate::common::security::Permissions* /*/*template <class C> */*/AbstractContext/*<C> */::getChildrenViewPermissions()
//{
//    return childrenViewPermissions != 0 ? childrenViewPermissions : getPermissions();
//}
//
//ContextManager* /*/*template <class C> */*/AbstractContext/*<C> */::getContextManager()
//{
//    return contextManager;
//}

 /*template <class C> */bool AbstractContext/*<C> */::isSetupComplete()
{
    return setupComplete;
}

bool /*template <class C> */AbstractContext/*<C> */::isStarted()
{
    return started;
}

bool /*template <class C> */AbstractContext/*<C> */ ::isInitializedInfo()
{
    return setupComplete;
}

bool /*template <class C> */AbstractContext/*<C> */ ::isInitializedChildren()
{
    return setupComplete;
}

bool /*template <class C> */AbstractContext/*<C> */::isInitializedVariables()
{
    return setupComplete;
}

bool /*template <class C> */AbstractContext/*<C> */::isInitializedFunctions()
{
    return setupComplete;
}

bool /*template <class C> */AbstractContext/*<C> */::isInitializedEvents()
{
    return setupComplete;
}

//java::util::List* /*template <class C> */AbstractContext/*/*<C> */ */::getFunctionDefinitions(CallerController* caller)
//{
//    return getFunctionDefinitions(caller, false);
//}
//
//java::util::List* /*template <class C> */AbstractContext/*/*<C> */ */::getFunctionDefinitions(CallerController* caller, bool includeHidden)
//{
//    std::list  list = new ::java::util::LinkedList();
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    functionDataLock)->readLock())->lock();
//    {
//        auto finally11 = finally([&] {
//            functionDataLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = functionData)->values())->iterator(); _i->hasNext(); ) {
//                FunctionData* d = java_cast< FunctionData* >(_i->next());
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
//    return list;
//}
//
//java::util::List* /*template <class C> */AbstractContext/*/*<C> */ */::getFunctionDefinitions()
//{
//    return getFunctionDefinitions(static_cast< CallerController* >(0));
//}
//
//java::util::List* /*template <class C> */AbstractContext/*/*<C> */ */::getFunctionDefinitions(CallerController* caller, std::string* group)
//{
//    std::list  defs = new ::java::util::LinkedList();
//    for (auto _i = getFunctionDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        FunctionDefinition* fd = java_cast< FunctionDefinition* >(_i->next());
//        {
//            if(fd)->getGroup() != 0 && (::com::tibbo::aggregate::common::util::Util::equals(group, fd)->getGroup()) || fd)->getGroup())->startsWith(std::stringBuilder().append(group)->append(ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
//                defs)->add(fd));
//            }
//        }
//    }
//    return defs;
//}
//
//java::util::List* /*template <class C> */AbstractContext/*/*<C> */ */::getFunctionDefinitions(std::string* group)
//{
//    return getFunctionDefinitions(static_cast< CallerController* >(0), group);
//}
//
//java::util::concurrent::locks::ReentrantReadWriteLock* /*template <class C> */AbstractContext/*<C> */::getChildrenLock()
//{
//    return childrenLock;
//}
//
std::string /*template <class C> */AbstractContext/*<C> */::getType()
{
   // return type != 0 ? type : ContextUtils::getTypeForClass(getClass());
	return "";
}

//bool /*template <class C> */AbstractContext/*<C> */::isPermissionCheckingEnabled()
//{
//    return permissionCheckingEnabled;
//}
//
std::string /*template <class C> */AbstractContext/*<C> */::getIconId()
{
    return iconId;
}

int /*template <class C> */AbstractContext/*<C> */::getIndex()
{
    return index;
}

std::string /*template <class C> */AbstractContext/*<C> */::getGroup()
{
    return group;
}
//
//std::string /*template <class C> */AbstractContext/*<C> */::getLocalRoot()
//{
//    return Contexts::CTX_ROOT();
//}
//
bool /*template <class C> */AbstractContext/*<C> */::isProxy()
{
    return false;
}

bool /*template <class C> */AbstractContext/*<C> */::isDistributed()
{
    return false;
}

std::string /*template <class C> */AbstractContext/*<C> */::getRemoteRoot()
{
    return 0;
}

std::string /*template <class C> */AbstractContext/*<C> */::getRemotePath()
{
    return getPath();
}

//std::string /*template <class C> */AbstractContext/*<C> */::getRemotePrimaryRoot()
//{
//    return 0;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setType(std::string* type)
//{
//    if(!ContextUtils::isValidContextType(type)) {
//        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(Cres::get())->getString("conIllegalType"_j))->append(type)->toString());
//    }
//    auto old = this->type;
//    this->type = type;
//    if(old == 0 || !old)->equals(type))) {
//        contextInfoChanded();
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setPermissionCheckingEnabled(bool permissionCheckingEnabled)
//{
//    this->permissionCheckingEnabled = permissionCheckingEnabled;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setIconId(std::string* iconId)
//{
//    auto old = this->iconId;
//    this->iconId = iconId;
//    if(old == 0 || !old)->equals(iconId))) {
//        contextInfoChanded();
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::contextInfoChanded()
//{
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
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setIndex(::java::lang::Integer* index)
//{
//    this->index = index;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setGroup(std::string* group)
//{
//    auto old = this->group;
//    this->group = group;
//    if(old == 0 || !old)->equals(group))) {
//        contextInfoChanded();
//    }
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getEventDefinitions(CallerController* caller)
//{
//    return getEventDefinitions(caller, false);
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getEventDefinitions(CallerController* caller, bool includeHidden)
//{
//    std::list  list = new ::java::util::LinkedList();
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    eventDataLock)->readLock())->lock();
//    {
//        auto finally12 = finally([&] {
//            eventDataLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = eventData)->values())->iterator(); _i->hasNext(); ) {
//                EventData* d = java_cast< EventData* >(_i->next());
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
//
//    return list;
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getEventDefinitions()
//{
//    return getEventDefinitions(static_cast< CallerController* >(0));
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getEventDefinitions(CallerController* caller, std::string* group)
//{
//    std::list  res = new ::java::util::LinkedList();
//    for (auto _i = getEventDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        EventDefinition* ed = java_cast< EventDefinition* >(_i->next());
//        {
//            if(ed)->getGroup() != 0 && (::com::tibbo::aggregate::common::util::Util::equals(group, ed)->getGroup()) || ed)->getGroup())->startsWith(std::stringBuilder().append(group)->append(ContextUtils::ENTITY_GROUP_SEPARATOR())->toString()))) {
//                res)->add(ed));
//            }
//        }
//    }
//    return res;
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getEventDefinitions(std::string* group)
//{
//    return getEventDefinitions(static_cast< CallerController* >(0), group);
//}
//
//com::tibbo::aggregate::common::action::ActionDefinition* /*template <class C> */AbstractContext/*<C> */::getActionDefinition(std::string* name)
//{
//    actionDefinitionsLock)->readLock())->lock();
//    {
//        auto finally13 = finally([&] {
//            actionDefinitionsLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = actionDefinitions)->iterator(); _i->hasNext(); ) {
//                ::com::tibbo::aggregate::common::action::ActionDefinition* def = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
//                {
//                    if(def)->getName())->equals(name))) {
//                        return def;
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}
//
//com::tibbo::aggregate::common::action::ActionDefinition* /*template <class C> */AbstractContext/*<C> */::getActionDefinition(std::string* name, CallerController* caller)
//{
//    for (auto _i = getActionDefinitions(caller, true))->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::action::ActionDefinition* ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
//        {
//            if(ad)->getName())->equals(name))) {
//                return ad;
//            }
//        }
//    }
//    return 0;
//}
//
//com::tibbo::aggregate::common::action::ActionDefinition* /*template <class C> */AbstractContext/*<C> */::getDefaultActionDefinition(CallerController* caller)
//{
//    for (auto _i = getActionDefinitions(caller, true))->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::action::ActionDefinition* ad = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
//        {
//            if(ad)->isDefault()) {
//                return ad;
//            }
//        }
//    }
//    return 0;
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getActionDefinitions(CallerController* caller)
//{
//    return getActionDefinitions(caller, false);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::addActionDefinition(::com::tibbo::aggregate::common::action::ActionDefinition* def)
//{
//    if(def)->getName() == 0) {
//        throw new ::java::lang::NullPointerException("Action name can't be NULL"_j);
//    }
//    if(getActionDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append("Action '"_j)->append(def)->getName())
//            ->append("' is already defined in context '"_j)
//            ->append(getPath())
//            ->append("'"_j)->toString());
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
//                auto ed = getEventDefinition(/*template <class C> */AbstractContext/*<C> */::E_ACTION_ADDED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), actDefToDataRecord(def))->wrap());
//                }
//            }
//        }
//    }
//
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getActionDefinitions(CallerController* caller, bool includeHidden)
//{
//    std::list  list = new ::java::util::LinkedList();
//    auto debug = caller != 0 ? caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_DEBUG()) : false;
//    actionDefinitionsLock)->readLock())->lock();
//    {
//        auto finally15 = finally([&] {
//            actionDefinitionsLock)->readLock())->unlock();
//        });
//        {
//            for (auto _i = actionDefinitions)->iterator(); _i->hasNext(); ) {
//                ::com::tibbo::aggregate::common::action::ActionDefinition* d = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
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
//
//    return list;
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getActionDefinitions()
//{
//    return getActionDefinitions(static_cast< CallerController* >(0));
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeActionDefinition(std::string* name)
//{
//    auto def = getActionDefinition(name);
//    actionDefinitionsLock)->writeLock())->lock();
//    {
//        auto finally16 = finally([&] {
//            actionDefinitionsLock)->writeLock())->unlock();
//        });
//        {
//            if(actionDefinitions)->remove(def))) {
//                if(isSetupComplete() && isFireUpdateEvents()) {
//                    auto ed = getEventDefinition(/*template <class C> */AbstractContext/*<C> */::E_ACTION_REMOVED());
//                    if(ed != 0) {
//                        fireEvent(ed)->getName(), new voidArray({name)}));
//                    }
//                }
//            }
//        }
//    }
//
//}
//
//com::tibbo::aggregate::common::action::ActionDefinition* /*template <class C> */AbstractContext/*<C> */::actDefFromDataRecord(::DataRecord* rec)
//{
//    auto def = new ::com::tibbo::aggregate::common::action::BasicActionDefinition(rec)->getString(ActionConstants::FIELD_AD_NAME()));
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
//            ::DataRecord* ds = java_cast< ::DataRecord* >(_i->next());
//            {
//                dropSources)->add(new ::com::tibbo::aggregate::common::action::TreeMask(ds)->getString(ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK()))));
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
//    return def;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVariable(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
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
//                    Log::CONTEXT_VARIABLES())->debug(std::stringBuilder().append("Trying to get variable '"_j)->append(def)->getName())
//                        ->append("' from context '"_j)
//                        ->append(this->getPath())
//                        ->append("'"_j)->toString());
//                }
//                auto result = executeGetter(data, caller, request);
//                if(result)->isInvalid()) {
//                    throw new ContextException(result)->getInvalidationMessage());
//                }
//                result = checkVariableValue(def, result);
//                auto endTime = ::java::lang::System::currentTimeMillis();
//                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
//                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
//                    Log::PERFORMANCE())->log(level, std::stringBuilder().append("Getting value of variable '"_j)->append(def))
//                        ->append("' in context '"_j)
//                        ->append(getPath())
//                        ->append("' took "_j)
//                        ->append((endTime - startTime))
//                        ->append(" milliseconds"_j)->toString());
//                }
//                return result;
//            } catch (::java::lang::Exception* ex) {
//                throw new ContextException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString("conErrGettingVar"_j), new voidArray({def)->toString()), toString())})))->append(ex)->getMessage())->toString(), ex);
//            }
//        }
//    }
//
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::checkVariableValue(VariableDefinition* def, ::DataTable* val)
//{
//    if(!valueCheckingEnabled) {
//        return val;
//    }
//    auto value = val;
//    auto msg = checkVariableValueFormat(def, value);
//    if(msg != 0) {
//        Log::CONTEXT_VARIABLES())->debug(std::stringBuilder().append("Invalid value of variable '"_j)->append(def)->getName())
//            ->append("': "_j)
//            ->append(msg)->toString());
//        auto newValue = getDefaultValue(def);
//        ::DataTableReplication::copy(value, newValue, true, true, true, true, true);
//        auto converters = def)->getCompatibilityConverters();
//        if(converters != 0) {
//            for (auto _i = converters)->iterator(); _i->hasNext(); ) {
//                CompatibilityConverter* converter = java_cast< CompatibilityConverter* >(_i->next());
//                {
//                    try {
//                        newValue = converter)->convert(value, newValue);
//                    } catch (::java::lang::Exception* ex) {
//                        Log::CONTEXT_VARIABLES())->warn(std::stringBuilder().append("Error converting value of variable '"_j)->append(def)->getName())
//                            ->append("' by '"_j)
//                            ->append(converter))
//                            ->append("': "_j)
//                            ->append(ex)->getMessage())->toString(), ex);
//                    }
//                }
//            }
//        }
//        value = newValue;
//        checkVariableValueFormat(def, value);
//    }
//    return value;
//}
//
//std::string /*template <class C> */AbstractContext/*<C> */::checkVariableValueFormat(VariableDefinition* def, ::DataTable* table)
//{
//    if(!valueCheckingEnabled) {
//        return 0;
//    }
//    auto requiredFormat = def)->getFormat();
//    if(requiredFormat != 0) {
//        auto msg = table)->conformMessage(requiredFormat);
//        if(msg != 0) {
//            return std::stringBuilder().append("Invalid format: "_j)->append(msg)->toString();
//        }
//    }
//    return 0;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeGetter(VariableData* data, CallerController* caller, RequestController* request)
//{
//    auto result = executeGetterMethod(data, caller, request);
//    if(result != 0) {
//        return result;
//    }
//    auto def = data)->getDefinition();
//    if(def)->getGetter() != 0) {
//        result = def)->getGetter())->get(this, def, caller, request);
//    }
//    if(result != 0) {
//        return result;
//    }
//    result = getVariableImpl(def, caller, request);
//    if(result != 0) {
//        return result;
//    }
//    return executeDefaultGetter(def, caller, false, true);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeGetterMethod(VariableData* data, CallerController* caller, RequestController* request)
//{
//    if(!data)->isGetterCached()) {
//        auto params = (new ::java::lang::ClassArray({
//            static_cast< ::java::lang::Class* >(VariableDefinition::class_())
//            , static_cast< ::java::lang::Class* >(CallerController::class_())
//            , static_cast< ::java::lang::Class* >(RequestController::class_())
//        }));
//        {
//            auto finally18 = finally([&] {
//                data)->setGetterCached(true);
//            });
//            try {
//                auto getter = getClass())->getMethod(std::stringBuilder().append(GETTER_METHOD_PREFIX())->append(data)->getDefinition())->getName())->toString(), params);
//                data)->setGetterMethod(getter);
//            } catch (::java::lang::NoSuchMethodException* ex) {
//                return 0;
//            }
//        }
//    }
//    auto getter = data)->getGetterMethod();
//    if(getter != 0) {
//        try {
//            return java_cast< ::DataTable* >(getter)->invoke(this, new voidArray({
//                data)->getDefinition())
//                , caller)
//                , request)
//            })));
//        } catch (::java::lang::reflect::InvocationTargetException* ex) {
//            throw new ContextException(ex)->getCause())->getMessage(), ex)->getCause());
//        }
//    }
//    return 0;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeDefaultGetter(std::string* name, CallerController* caller)
//{
//    return executeDefaultGetter(name, caller, true);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeDefaultGetter(std::string* name, CallerController* caller, bool check)
//{
//    return executeDefaultGetter(name, caller, check, true);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeDefaultGetter(std::string* name, CallerController* caller, bool check, bool createDefault)
//{
//    auto def = getVariableDefinition(name);
//    if(def == 0) {
//        throw new ContextException(::java::text::MessageFormat::format(Cres::get())->getString("conVarNotAvailExt"_j), new voidArray({name), getPath())})));
//    }
//    return executeDefaultGetter(def, caller, check, createDefault);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeDefaultGetter(VariableDefinition* def, CallerController* caller, bool check, bool createDefault)
//{
//    auto value = executeDefaultGetterImpl(def, caller);
//    if(value == 0) {
//        return createDefault ? getDefaultValue(def) : static_cast< ::DataTable* >(0);
//    }
//    return check ? checkVariableValue(def, value) : value;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeDefaultGetterImpl(VariableDefinition* vd, CallerController* caller)
//{
//    auto value = getVariableData(vd)->getName()))->getValue();
//    return value != 0 ? java_cast< ::DataTable* >(value) : getDefaultValue(vd);
//}
//
//int /*template <class C> */AbstractContext/*<C> */::hashCode()
//{
//    if(java_cast< Context* >(getParent()) == 0) {
//        return super::hashCode();
//    }
//    auto const prime = int(31);
//    auto result = int(1);
//    auto root = java_cast< Context* >(getRoot());
//    auto path = getPath();
//    result = prime * result + ((root == 0) ? int(0) : root)->hashCode());
//    result = prime * result + ((path == 0) ? int(0) : path)->hashCode());
//    return result;
//}
//
//bool /*template <class C> */AbstractContext/*<C> */::equals(void* obj)
//{
//    if(this) == obj) {
//        return true;
//    }
//    if(obj == 0) {
//        return false;
//    }
//    auto other = java_cast< /*template <class C> */AbstractContext/*<C> */* >(obj);
//    if(java_cast< Context* >(getRoot())) != java_cast< Context* >(other)->getRoot()))) {
//        return false;
//    }
//    if(!::com::tibbo::aggregate::common::util::Util::equals(getPath(), other)->getPath())) {
//        return false;
//    }
//    return true;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVariable(std::string* name, CallerController* caller, RequestController* request)
//{
//    return getVariable(getAndCheckVariableDefinition(name), caller, request);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVariable(std::string* name, CallerController* caller)
//{
//    return getVariable(getAndCheckVariableDefinition(name), caller, static_cast< RequestController* >(0));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVariable(std::string* name)
//{
//    return getVariable(getAndCheckVariableDefinition(name), static_cast< CallerController* >(0), static_cast< RequestController* >(0));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
//    return 0;
//}
//
//void* /*template <class C> */AbstractContext/*<C> */::getVariableObject(std::string* name, CallerController* caller)
//{
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
//                    throw new ContextException(std::stringBuilder().append("Value class not defined for variable: "_j)->append(def)->toDetailedString())->toString());
//                }
//                void* value;
//                auto table = getVariable(name, caller);
//                auto list = ::DataTableConversion::beansFromTable(table, def)->getValueClass(), def)->getFormat(), true);
//                if(def)->getFormat())->isSingleRecord()) {
//                    value = java_cast< void* >(list)->get(0));
//                } else {
//                    value = list;
//                }
//                if(isSetupComplete() && def)->isLocalCachingEnabled() && !data)->getReadWriteLock())->isWriteLockedByCurrentThread()) {
//                    data)->setValue(value);
//                }
//                return value;
//            }
//        }
//
//    } catch (::java::lang::Exception* ex) {
//        throw new ContextRuntimeException(ex)->getMessage(), ex);
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setVariable(VariableDefinition* def, CallerController* caller, RequestController* request, ::DataTable* value)
//{
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
//                throw new ContextException("Value cannot be NULL"_j);
//            }
//            auto resultingValue = value;
//            try {
//                checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller);
//                if(!def)->isWritable() && caller != 0 && caller)->isPermissionCheckingEnabled()) {
//                    throw new ContextException(Cres::get())->getString("conVarReadOnly"_j));
//                }
//                if(Log::CONTEXT_VARIABLES())->isDebugEnabled()) {
//                    Log::CONTEXT_VARIABLES())->debug(std::stringBuilder().append("Trying to set variable '"_j)->append(def)->getName())
//                        ->append("' in context '"_j)
//                        ->append(this->getPath())
//                        ->append("'"_j)->toString());
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
//                    Log::CONTEXT_VARIABLES())->debug(std::stringBuilder().append("Invalid value of variable '"_j)->append(def)->getName())
//                        ->append("': "_j)
//                        ->append(msg)
//                        ->append(" (value: "_j)
//                        ->append(resultingValue))
//                        ->append(")"_j)->toString());
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
//                    Log::PERFORMANCE())->log(level, std::stringBuilder().append("Setting value of variable '"_j)->append(def))
//                        ->append("' in context '"_j)
//                        ->append(getPath())
//                        ->append("' took "_j)
//                        ->append((endTime - startTime))
//                        ->append(" milliseconds"_j)->toString());
//                }
//            } catch (::ValidationException* ex) {
//                throw ex;
//            } catch (::java::lang::Exception* ex) {
//                throw new ContextException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString("conErrSettingVar"_j), new voidArray({def)->toString()), toString())})))->append(ex)->getMessage())->toString(), ex);
//            }
//        }
//    }
//
//}
//
//void /*template <class C> */AbstractContext/*<C> */::variableUpdated(VariableDefinition* def, CallerController* caller, ::DataTable* value)
//{
//    fireUpdatedEvent(def, caller, value);
//    fireChangeEvent(def, caller, new ::java::util::Date(), value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::fireUpdatedEvent(VariableDefinition* def, CallerController* caller, ::DataTable* value)
//{
//    auto callerAllowsUpdatedEvents = caller == 0 || !caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_NO_UPDATED_EVENTS());
//    if(setupComplete && fireUpdateEvents && def)->isAllowUpdateEvents()&& callerAllowsUpdatedEvents) {
//        auto ed = getEventDefinition(E_UPDATED());
//        if(ed != 0) {
//            fireEvent(E_UPDATED(), new voidArray({def)->getName()), value), caller != 0 ? caller)->getUsername()) : 0)}));
//        }
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::fireChangeEvent(VariableDefinition* def, CallerController* caller, ::java::util::Date* timestamp, ::DataTable* value)
//{
//    auto callerAllowsChangeEvents = caller == 0 || !caller)->getProperties())->containsKey(CALLER_CONTROLLER_PROPERTY_NO_CHANGE_EVENTS());
//    if(setupComplete && fireUpdateEvents && def)->isAllowUpdateEvents()&& callerAllowsChangeEvents) {
//        auto ed = getEventDefinition(E_CHANGE());
//        if(ed != 0) {
//            ::com::tibbo::aggregate::common::event::FireEventRequestController* fer = new FireChangeEventRequestController(def)->getChangeEventsExpirationPeriod(), def, value);
//            auto eventData = new ::DataTable(ed)->getFormat(), new voidArray({def)->getName())}));
//            fireEvent(ed, eventData, ::com::tibbo::aggregate::common::event::EventLevel::NONE, 0, timestamp, 0, caller, fer, 0);
//        }
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setupVariables()
//{
//}
//
//void /*template <class C> */AbstractContext/*<C> */::executeSetter(VariableData* data, CallerController* caller, RequestController* request, ::DataTable* value)
//{
//    auto def = data)->getDefinition();
//    if(executeSetterMethod(data, caller, request, value)) {
//        return;
//    }
//    if(def)->getSetter() != 0) {
//        if(def)->getSetter())->set(this, def, caller, request, value)) {
//            return;
//        }
//    }
//    if(setVariableImpl(def, caller, request, value)) {
//        return;
//    }
//    executeDefaultSetter(def, caller, value);
//}
//
//bool /*template <class C> */AbstractContext/*<C> */::executeSetterMethod(VariableData* data, CallerController* caller, RequestController* request, ::DataTable* value)
//{
//    if(!data)->isSetterCached()) {
//        auto params = (new ::java::lang::ClassArray({
//            static_cast< ::java::lang::Class* >(VariableDefinition::class_())
//            , static_cast< ::java::lang::Class* >(CallerController::class_())
//            , static_cast< ::java::lang::Class* >(RequestController::class_())
//            , static_cast< ::java::lang::Class* >(::DataTable::class_())
//        }));
//        {
//            auto finally21 = finally([&] {
//                data)->setSetterCached(true);
//            });
//            try {
//                auto setter = getClass())->getMethod(std::stringBuilder().append(SETTER_METHOD_PREFIX())->append(data)->getDefinition())->getName())->toString(), params);
//                data)->setSetterMethod(setter);
//            } catch (::java::lang::NoSuchMethodException* ex) {
//                return false;
//            }
//        }
//    }
//    auto setter = data)->getSetterMethod();
//    if(setter != 0) {
//        try {
//            setter)->invoke(this, new voidArray({
//                data)->getDefinition())
//                , caller)
//                , request)
//                , value)
//            }));
//            return true;
//        } catch (::java::lang::reflect::InvocationTargetException* ex) {
//            throw new ContextException(ex)->getCause())->getMessage(), ex)->getCause());
//        }
//    }
//    return false;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getDefaultValue(VariableDefinition* def)
//{
//    if(def)->getDefaultValue() != 0) {
//        return def)->getDefaultValue();
//    }
//    return new ::DataTable(def)->getFormat(), true);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::executeDefaultSetter(std::string* name, CallerController* caller, ::DataTable* value)
//{
//    auto def = getVariableDefinition(name);
//    if(def == 0) {
//        throw new ContextException(::java::text::MessageFormat::format(Cres::get())->getString("conVarNotAvailExt"_j), new voidArray({name), getPath())})));
//    }
//    executeDefaultSetter(def, caller, value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::executeDefaultSetter(VariableDefinition* def, CallerController* caller, ::DataTable* value)
//{
//    executeDefaultSetterImpl(def, caller, value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::executeDefaultSetterImpl(VariableDefinition* vd, CallerController* caller, ::DataTable* value)
//{
//    getVariableData(vd)->getName()))->setValue(value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setVariable(std::string* name, CallerController* caller, RequestController* request, ::DataTable* value)
//{
//    auto def = getAndCheckVariableDefinition(name);
//    setVariable(def, caller, request, value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setVariable(std::string* name, CallerController* caller, ::DataTable* value)
//{
//    setVariable(name, caller, static_cast< RequestController* >(0), value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setVariable(std::string* name, ::DataTable* value)
//{
//    setVariable(name, static_cast< CallerController* >(0), static_cast< RequestController* >(0), value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setVariable(std::string* name, CallerController* caller, voidArray* value)
//{
//    auto def = getAndCheckVariableDefinition(name);
//    setVariable(name, caller, static_cast< RequestController* >(0), new ::DataTable(def)->getFormat(), value));
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setVariable(std::string* name, voidArray* value)
//{
//    setVariable(name, static_cast< CallerController* >(0), value);
//}
//
//bool /*template <class C> */AbstractContext/*<C> */::setVariableImpl(VariableDefinition* def, CallerController* caller, RequestController* request, ::DataTable* value)
//{
//    return false;
//}
//
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::getAndCheckVariableDefinition(std::string* name)
//{
//    setupVariables();
//    auto def = getVariableDefinition(name);
//    if(def == 0) {
//        throw new ContextException(::java::text::MessageFormat::format(Cres::get())->getString("conVarNotAvailExt"_j), new voidArray({name), getPath())})));
//    }
//    return def;
//}
//
//bool /*template <class C> */AbstractContext/*<C> */::setVariableField(std::string* variable, std::string* field, void* value, CallerController* cc)
//{
//    return setVariableField(variable, field, int(0), value, cc);
//}
//
//bool /*template <class C> */AbstractContext/*<C> */::setVariableField(std::string* variable, std::string* field, int record, void* value, CallerController* cc)
//{
//    auto tab = getVariable(variable, cc);
//    auto old = tab)->getRecord(record))->getValue(field);
//    tab)->getRecord(record))->setValue(field, value);
//    setVariable(variable, cc, tab);
//    return old == 0 ? value != 0 : !old)->equals(value);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setVariableField(std::string* variable, std::string* field, void* value, std::string* compareField, void* compareValue, CallerController* cc)
//{
//    auto tab = getVariable(variable, cc);
//    auto rec = tab)->select(compareField, compareValue);
//    if(rec != 0) {
//        rec)->setValue(field, value);
//    } else {
//        throw new ContextException(std::stringBuilder().append("Record with "_j)->append(compareField)
//            ->append("="_j)
//            ->append(compareValue))
//            ->append(" not found"_j)->toString());
//    }
//    setVariable(variable, cc, tab);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::addVariableRecord(std::string* variable, CallerController* cc, ::DataRecord* record)
//{
//    auto tab = getVariable(variable, cc);
//    tab)->addRecord(record);
//    setVariable(variable, cc, tab);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::addVariableRecord(std::string* variable, CallerController* cc, voidArray* recordData)
//{
//    auto tab = getVariable(variable, cc);
//    auto rec = tab)->addRecord();
//    for (auto i = int(0); i < recordData)->length; i++) {
//        rec)->addValue((*recordData)[i]);
//    }
//    setVariable(variable, cc, tab);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeVariableRecords(std::string* variable, CallerController* cc, std::string* field, void* value)
//{
//    auto tab = getVariable(variable, cc);
//    for (auto *i = tab)->iterator(); i)->hasNext(); ) {
//        auto rec = java_cast< ::DataRecord* >(java_cast< void* >(i)->next()));
//        if(::com::tibbo::aggregate::common::util::Util::equals(rec)->getValue(field), value)) {
//            i)->remove();
//        }
//    }
//    setVariable(variable, cc, tab);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(FunctionDefinition* def, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
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
//                Log::CONTEXT_FUNCTIONS())->debug(std::stringBuilder().append("Trying to call function '"_j)->append(def)->getName())
//                    ->append("' of context '"_j)
//                    ->append(getPath())
//                    ->append("'"_j)->toString());
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
//                        Log::CONTEXT_FUNCTIONS())->debug(std::stringBuilder().append("Invalid input format of function '"_j)->append(def)->getName())
//                            ->append("': "_j)
//                            ->append(msg)->toString());
//                        auto newParameters = new ::DataTable(def)->getInputFormat(), true);
//                        ::DataTableReplication::copy(parameters, newParameters, true, true, true, true, true);
//                        parameters = newParameters;
//                        msg = parameters)->conformMessage(requiredInputFormat);
//                        if(msg != 0) {
//                            throw new ContextException(std::stringBuilder().append("Invalid format: "_j)->append(msg)->toString());
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
//                        throw new ContextException(std::stringBuilder().append("Function '"_j)->append(def)->getName())
//                            ->append("' of context '"_j)
//                            ->append(getPath())
//                            ->append("' returned value of invalid format: "_j)
//                            ->append(msg)->toString());
//                    }
//                }
//                auto endTime = ::java::lang::System::currentTimeMillis();
//                if(endTime - startTime > LOW_PERFORMANCE_THRESHOLD) {
//                    auto level = endTime - startTime > VERY_LOW_PERFORMANCE_THRESHOLD ? ::org::apache::log4j::Level::INFO() : ::org::apache::log4j::Level::DEBUG();
//                    Log::PERFORMANCE())->log(level, std::stringBuilder().append("Function '"_j)->append(def))
//                        ->append("' in context '"_j)
//                        ->append(getPath())
//                        ->append("' was executing for "_j)
//                        ->append((endTime - startTime))
//                        ->append(" milliseconds"_j)->toString());
//                }
//                return result;
//            } catch (ContextException* ex) {
//                throw ex;
//            } catch (::java::lang::Exception* ex) {
//                throw new ContextException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString("conErrCallingFunc"_j), new voidArray({def)->toString()), toString())})))->append(ex)->getMessage())->toString(), ex);
//            }
//        }
//    }
//
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeImplementation(FunctionData* data, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
//    auto result = executeImplementationMethod(data, caller, request, parameters);
//    if(result != 0) {
//        return result;
//    }
//    auto def = data)->getDefinition();
//    if(def)->getImplementation() != 0) {
//        result = def)->getImplementation())->execute(this, def, caller, request, parameters);
//        if(result != 0) {
//            return result;
//        }
//        return getDefaultFunctionOutput(def);
//    }
//    result = callFunctionImpl(def, caller, request, parameters);
//    if(result != 0) {
//        return result;
//    }
//    throw new ContextException(::java::text::MessageFormat::format(Cres::get())->getString("conFuncNotImpl"_j), new voidArray({def)->getName()), getPath())})));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::executeImplementationMethod(FunctionData* data, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
//    auto def = data)->getDefinition();
//    if(!data)->isImplementationCached()) {
//        auto callerParams = (new ::java::lang::ClassArray({
//            static_cast< ::java::lang::Class* >(FunctionDefinition::class_())
//            , static_cast< ::java::lang::Class* >(CallerController::class_())
//            , static_cast< ::java::lang::Class* >(RequestController::class_())
//            , static_cast< ::java::lang::Class* >(::DataTable::class_())
//        }));
//        {
//            auto finally23 = finally([&] {
//                data)->setImplementationCached(true);
//            });
//            try {
//                auto implementation = getClass())->getMethod(std::stringBuilder().append(IMPLEMENTATION_METHOD_PREFIX())->append(def)->getName())->toString(), callerParams);
//                data)->setImplementationMethod(implementation);
//            } catch (::java::lang::NoSuchMethodException* ex) {
//                return 0;
//            }
//        }
//    }
//    auto implementation = data)->getImplementationMethod();
//    if(implementation != 0) {
//        try {
//            auto result = java_cast< ::DataTable* >(implementation)->invoke(this, new voidArray({
//                def)
//                , caller)
//                , request)
//                , parameters)
//            })));
//            if(result != 0) {
//                return result;
//            }
//            return getDefaultFunctionOutput(def);
//        } catch (::java::lang::reflect::InvocationTargetException* ex) {
//            auto cause = ex)->getCause();
//            throw new ContextException(cause)->getMessage(), cause);
//        }
//    }
//    return 0;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getDefaultFunctionOutput(FunctionDefinition* def)
//{
//    auto const format = def)->getOutputFormat();
//    return format != 0 ? new ::DataTable(format, true) : new ::DataTable();
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setupFunctions()
//{
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(std::string* name, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
//    auto def = getAndCheckFunctionDefinition(name);
//    return callFunction(def, caller, request, parameters);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(std::string* name, CallerController* caller, ::DataTable* parameters)
//{
//    return callFunction(name, caller, static_cast< RequestController* >(0), parameters);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(std::string* name, ::DataTable* parameters)
//{
//    return callFunction(getAndCheckFunctionDefinition(name), static_cast< CallerController* >(0), static_cast< RequestController* >(0), parameters);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(std::string* name)
//{
//    auto def = getAndCheckFunctionDefinition(name);
//    return callFunction(def, static_cast< CallerController* >(0), static_cast< RequestController* >(0), new ::DataTable(def)->getInputFormat(), true));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(std::string* name, CallerController* caller)
//{
//    auto def = getAndCheckFunctionDefinition(name);
//    return callFunction(def, caller, static_cast< RequestController* >(0), new ::DataTable(def)->getInputFormat(), true));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(std::string* name, CallerController* caller, voidArray* parameters)
//{
//    auto def = getAndCheckFunctionDefinition(name);
//    return callFunction(name, caller, new ::DataTable(def)->getInputFormat(), parameters));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunction(std::string* name, voidArray* parameters)
//{
//    return callFunction(name, static_cast< CallerController* >(0), parameters);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFunctionImpl(FunctionDefinition* def, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
//    return 0;
//}
//
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::getAndCheckFunctionDefinition(std::string* name)
//{
//    setupFunctions();
//    auto def = getFunctionDefinition(name);
//    if(def == 0) {
//        throw new ContextException(::java::text::MessageFormat::format(Cres::get())->getString("conFuncNotAvailExt"_j), new voidArray({name), getPath())})));
//    }
//    return def;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::addVariableDefinition(VariableDefinition* def)
//{
//    if(getVariableDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append("Variable '"_j)->append(def)->getName())
//            ->append("' already defined in context '"_j)
//            ->append(getPath())
//            ->append("'"_j)->toString());
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
//                getContextManager())->variableAdded(java_cast< Context* >(this), def);
//            }
//        }
//    }
//
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeVariableDefinition(std::string* name)
//{
//    removeVariableDefinition(getVariableDefinition(name));
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeVariableDefinition(VariableDefinition* def)
//{
//    if(def == 0) {
//        return;
//    }
//    VariableData* data;
//    variableDataLock)->writeLock())->lock();
//    {
//        auto finally25 = finally([&] {
//            variableDataLock)->writeLock())->unlock();
//        });
//        {
//            data = java_cast< VariableData* >(variableData)->remove(def)->getName()));
//        }
//    }
//
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
//
//            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                auto ed = getEventDefinition(E_VARIABLE_REMOVED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), new voidArray({def)->getName())}));
//                }
//            }
//            if(getContextManager() != 0) {
//                getContextManager())->variableRemoved(java_cast< Context* >(this), def);
//            }
//        }
//    }
//
//}
//
//void /*template <class C> */AbstractContext/*<C> */::addFunctionDefinition(FunctionDefinition* def)
//{
//    if(getFunctionDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append("Function '"_j)->append(def)->getName())
//            ->append("' already defined in context '"_j)
//            ->append(getPath())
//            ->append("'"_j)->toString());
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
//    }
//
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeFunctionDefinition(std::string* name)
//{
//    removeFunctionDefinition(getFunctionDefinition(name));
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeFunctionDefinition(FunctionDefinition* def)
//{
//    if(def == 0) {
//        return;
//    }
//    FunctionData* data;
//    functionDataLock)->writeLock())->lock();
//    {
//        auto finally29 = finally([&] {
//            functionDataLock)->writeLock())->unlock();
//        });
//        {
//            data = java_cast< FunctionData* >(functionData)->remove(def)->getName()));
//        }
//    }
//
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
//                getContextManager())->functionRemoved(java_cast< Context* >(this), def);
//            }
//        }
//    }
//
//}
//
//void /*template <class C> */AbstractContext/*<C> */::addEventDefinition(EventDefinition* def)
//{
//    if(getEventDefinition(def)->getName()) != 0) {
//        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append("Event '"_j)->append(def)->getName())
//            ->append("' already defined in context '"_j)
//            ->append(getPath())
//            ->append("'"_j)->toString());
//    }
//    eventDataLock)->writeLock())->lock();
//    {
//        auto finally31 = finally([&] {
//            eventDataLock)->writeLock())->unlock();
//        });
//        {
//            eventData)->put(def)->getName(), new EventData(def));
//            if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                auto ed = getEventDefinition(E_EVENT_ADDED());
//                if(ed != 0) {
//                    fireEvent(ed)->getName(), new ::DataTable(evtDefToDataRecord(def, 0)));
//                }
//            }
//            if(getContextManager() != 0) {
//                getContextManager())->eventAdded(java_cast< Context* >(this), def);
//            }
//        }
//    }
//
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeEventDefinition(std::string* name)
//{
//    removeEventDefinition(getEventDefinition(name));
//}
//
//void /*template <class C> */AbstractContext/*<C> */::removeEventDefinition(EventDefinition* def)
//{
//    if(def == 0) {
//        return;
//    }
//    eventDataLock)->writeLock())->lock();
//    {
//        auto finally32 = finally([&] {
//            eventDataLock)->writeLock())->unlock();
//        });
//        {
//            if(java_cast< EventData* >(eventData)->remove(def)->getName())) != 0) {
//                if(setupComplete && fireUpdateEvents && !def)->isHidden()) {
//                    auto ed = getEventDefinition(E_EVENT_REMOVED());
//                    if(ed != 0) {
//                        fireEvent(ed)->getName(), new voidArray({def)->getName())}));
//                    }
//                }
//                if(getContextManager() != 0) {
//                    getContextManager())->eventRemoved(java_cast< Context* >(this), def);
//                }
//            }
//        }
//    }
//
//}
//
//VariableData* /*template <class C> */AbstractContext/*<C> */::getVariableData(std::string* name)
//{
//    variableDataLock)->readLock())->lock();
//    {
//        auto finally33 = finally([&] {
//            variableDataLock)->readLock())->unlock();
//        });
//        {
//            return java_cast< VariableData* >(variableData)->get(name));
//        }
//    }
//
//}
//
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::getVariableDefinition(std::string* name)
//{
//    auto data = getVariableData(name);
//    return data != 0 ? data)->getDefinition() : static_cast< VariableDefinition* >(0);
//}
//
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::getVariableDefinition(std::string* name, CallerController* caller)
//{
//    auto def = getVariableDefinition(name);
//    if(def == 0) {
//        return 0;
//    }
//    auto readAccessGranted = checkPermissions(def)->getReadPermissions() != 0 ? def)->getReadPermissions() : getPermissions(), caller, this);
//    auto writeAccessGranted = checkPermissions(def)->getWritePermissions() != 0 ? def)->getWritePermissions() : getPermissions(), caller, this);
//    return (readAccessGranted || writeAccessGranted) ? def : static_cast< VariableDefinition* >(0);
//}
//
//FunctionData* /*template <class C> */AbstractContext/*<C> */::getFunctionData(std::string* name)
//{
//    functionDataLock)->readLock())->lock();
//    {
//        auto finally34 = finally([&] {
//            functionDataLock)->readLock())->unlock();
//        });
//        {
//            return java_cast< FunctionData* >(functionData)->get(name));
//        }
//    }
//
//}
//
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::getFunctionDefinition(std::string* name)
//{
//    auto data = getFunctionData(name);
//    return data != 0 ? data)->getDefinition() : static_cast< FunctionDefinition* >(0);
//}
//
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::getFunctionDefinition(std::string* name, CallerController* caller)
//{
//    auto def = getFunctionDefinition(name);
//    if(def == 0) {
//        return 0;
//    }
//    auto accessGranted = checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller, this);
//    return accessGranted ? def : static_cast< FunctionDefinition* >(0);
//}
//
//EventData* /*template <class C> */AbstractContext/*<C> */::getEventData(std::string* name)
//{
//    eventDataLock)->readLock())->lock();
//    {
//        auto finally35 = finally([&] {
//            eventDataLock)->readLock())->unlock();
//        });
//        {
//            return java_cast< EventData* >(eventData)->get(name));
//        }
//    }
//
//}
//
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::getEventDefinition(std::string* name)
//{
//    auto ed = getEventData(name);
//    return ed != 0 ? ed)->getDefinition() : static_cast< EventDefinition* >(0);
//}
//
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::getEventDefinition(std::string* name, CallerController* caller)
//{
//    auto def = getEventDefinition(name);
//    if(def == 0) {
//        return 0;
//    }
//    auto accessGranted = checkPermissions(def)->getPermissions() != 0 ? def)->getPermissions() : getPermissions(), caller, this);
//    return accessGranted ? def : static_cast< EventDefinition* >(0);
//}
//
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::getAndCheckEventDefinition(std::string* name)
//{
//    setupEvents();
//    auto def = getEventDefinition(name);
//    if(def == 0) {
//        throw new ContextRuntimeException(::java::text::MessageFormat::format(Cres::get())->getString("conEvtNotAvailExt"_j), new voidArray({name), getPath())})));
//    }
//    return def;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setupEvents()
//{
//}
//
//void /*template <class C> */AbstractContext/*<C> */::postEvent(::com::tibbo::aggregate::common::data::Event* ev, EventDefinition* ed, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request)
//{
//}
//
//void /*template <class C> */AbstractContext/*<C> */::updateEvent(::com::tibbo::aggregate::common::data::Event* ev, EventDefinition* ed, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request)
//{
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(EventDefinition* ed, ::DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, ::java::lang::Integer* listener, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request, ::com::tibbo::aggregate::common::security::Permissions* permissions)
//{
//    if(id == 0) {
//        id = ::java::lang::Long::valueOf(::com::tibbo::aggregate::common::event::EventUtils::generateEventId());
//    }
//    auto event = new ::com::tibbo::aggregate::common::data::Event(getPath(), ed, level == DEFAULT_EVENT_LEVEL ? ed)->getLevel() : level, data, id, creationtime, permissions);
//    return fireEvent(ed, event, listener, caller, request);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(::com::tibbo::aggregate::common::data::Event* event)
//{
//    return fireEvent(getAndCheckEventDefinition(event)->getName()), event, 0, 0, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(EventDefinition* ed, ::com::tibbo::aggregate::common::data::Event* event, ::java::lang::Integer* listener, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request)
//{
//    auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//    if(caller != 0) {
//        try {
//            checkPermissions(ed)->getFirePermissions() != 0 ? ed)->getFirePermissions() : getPermissions(), caller);
//        } catch (ContextSecurityException* ex) {
//            throw new ContextRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
//        }
//    }
//    auto rule = getEventProcessingRule(event);
//    auto prefilter = rule != 0 ? rule)->getPrefilterExpression() : static_cast< ::com::tibbo::aggregate::common::expression::Expression* >(0);
//    if(prefilter != 0) {
//        try {
//            auto evaluator = new ::com::tibbo::aggregate::common::expression::Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
//            if(!evaluator)->evaluateToBoolean(prefilter)) {
//                rule)->addFiltered();
//                if(logger)->isDebugEnabled()) {
//                    logger)->debug(std::stringBuilder().append("Event '"_j)->append(ed))
//                        ->append("' in context '"_j)
//                        ->append(getPath())
//                        ->append("' was suppressed by pre-filter"_j)->toString());
//                }
//                return 0;
//            }
//        } catch (::java::lang::Exception* ex) {
//            logger)->info(std::stringBuilder().append("Error processing pre-filter expression for event '"_j)->append(ed))
//                ->append("' in context '"_j)
//                ->append(getPath())
//                ->append("': "_j)
//                ->append(ex)->getMessage())->toString(), ex);
//        }
//    }
//    if(logger)->isDebugEnabled()) {
//        logger)->debug(std::stringBuilder().append("Event '"_j)->append(ed))
//            ->append("' fired in context '"_j)
//            ->append(getPath())
//            ->append("': "_j)
//            ->append(event))->toString());
//    }
//    event)->setListener(listener);
//    if(request != 0) {
//        event)->setOriginator(request)->getOriginator());
//    }
//    auto edata = getEventData(ed)->getName());
//    edata)->registerFiredEvent();
//    auto deduplicator = rule != 0 ? rule)->getDeduplicatorExpression() : static_cast< ::com::tibbo::aggregate::common::expression::Expression* >(0);
//    if(deduplicator != 0) {
//        try {
//            auto evaluator = new ::com::tibbo::aggregate::common::expression::Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
//            auto deduplicationId = evaluator)->evaluateToString(deduplicator);
//            event)->setDeduplicationId(deduplicationId);
//        } catch (::java::lang::Exception* ex) {
//            logger)->info(std::stringBuilder().append("Error processing deduplicator expression for event '"_j)->append(ed))
//                ->append("' in context '"_j)
//                ->append(getPath())
//                ->append("': "_j)
//                ->append(ex)->getMessage())->toString(), ex);
//        }
//    }
//    if(event)->getData())->isInvalid()) {
//        throw new ContextRuntimeException(event)->getData())->getInvalidationMessage());
//    }
//    if(ed)->getFormat() != 0) {
//        auto msg = event)->getData())->conformMessage(ed)->getFormat());
//        if(msg != 0) {
//            logger)->debug(std::stringBuilder().append("Wrong format data for event '"_j)->append(ed))
//                ->append("' in context '"_j)
//                ->append(toString())
//                ->append("': "_j)
//                ->append(msg)->toString());
//            auto newData = new ::DataTable(ed)->getFormat(), true);
//            ::DataTableReplication::copy(event)->getData(), newData);
//            event)->setData(newData);
//        }
//    }
//    processBindings(event);
//    processEnrichments(event, rule, caller);
//    ::java::lang::Long* customExpirationPeriod;
//    if(request != 0 && request)->getCustomExpirationPeriod() != 0) {
//        customExpirationPeriod = request)->getCustomExpirationPeriod();
//    }
//    if(customExpirationPeriod != 0) {
//        if((customExpirationPeriod))->longValue() > 0) {
//            event)->setExpirationtime(new ::java::util::Date(::java::lang::System::currentTimeMillis() + (customExpirationPeriod))->longValue()));
//        }
//    } else {
//        auto userDefinedExpirationPeriod = rule != 0 ? ::java::lang::Long::valueOf(rule)->getPeriod()) : static_cast< ::java::lang::Long* >(0);
//        if(userDefinedExpirationPeriod != 0 && (userDefinedExpirationPeriod))->longValue() > 0) {
//            event)->setExpirationtime(new ::java::util::Date(::java::lang::System::currentTimeMillis() + (userDefinedExpirationPeriod))->longValue()));
//        }
//    }
//    auto const customMemoryStorageSize = rule != 0 ? ((rule)->getDeduplicator() != 0 && rule)->getDeduplicator())->length() > 0) ? rule)->getQueue()) : static_cast< ::java::lang::Integer* >(0)) : static_cast< ::java::lang::Integer* >(0);
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
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, int level, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request, ::com::tibbo::aggregate::common::security::Permissions* permissions, ::DataTable* data)
//{
//    auto ed = getAndCheckEventDefinition(name);
//    return fireEvent(ed, data, level, 0, 0, 0, caller, request, permissions);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, ::DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, ::java::lang::Integer* listener, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request)
//{
//    return fireEvent(getAndCheckEventDefinition(name), data, level, id, creationtime, listener, caller, request, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, ::DataTable* data)
//{
//    return fireEvent(getAndCheckEventDefinition(name), data, DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, CallerController* caller, ::DataTable* data)
//{
//    return fireEvent(getAndCheckEventDefinition(name), data, DEFAULT_EVENT_LEVEL, 0, 0, 0, caller, 0, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, int level, ::DataTable* data)
//{
//    return fireEvent(getAndCheckEventDefinition(name), data, level, 0, 0, 0, 0, 0, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, int level, CallerController* caller, ::DataTable* data)
//{
//    return fireEvent(getAndCheckEventDefinition(name), data, level, 0, 0, 0, caller, 0, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name)
//{
//    auto ed = getAndCheckEventDefinition(name);
//    return fireEvent(ed, new ::DataTable(ed)->getFormat(), true), DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, CallerController* caller)
//{
//    auto ed = getAndCheckEventDefinition(name);
//    return fireEvent(ed, new ::DataTable(ed)->getFormat(), true), DEFAULT_EVENT_LEVEL, 0, 0, 0, caller, 0, 0);
//}
//
//com::tibbo::aggregate::common::data::Event* /*template <class C> */AbstractContext/*<C> */::fireEvent(std::string* name, voidArray* data)
//{
//    auto ed = getAndCheckEventDefinition(name);
//    return fireEvent(ed, new ::DataTable(ed)->getFormat(), data), DEFAULT_EVENT_LEVEL, 0, 0, 0, 0, 0, 0);
//}
//
//com::tibbo::aggregate::common::event::EventProcessingRule* /*template <class C> */AbstractContext/*<C> */::getEventProcessingRule(::com::tibbo::aggregate::common::data::Event* event)
//{
//    return 0;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::processBindings(::com::tibbo::aggregate::common::data::Event* event)
//{
//}
//
//void /*template <class C> */AbstractContext/*<C> */::processEnrichments(::com::tibbo::aggregate::common::data::Event* event, ::com::tibbo::aggregate::common::event::EventProcessingRule* rule, CallerController* caller)
//{
//    if(rule == 0 || rule)->getEnrichments() == 0) {
//        return;
//    }
//    auto evaluator = new ::com::tibbo::aggregate::common::expression::Evaluator(getContextManager(), this, event)->getData(), getEventProcessingCallerController());
//    for (auto _i = rule)->getEnrichments())->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::event::EventEnrichmentRule* enrichmentRule = java_cast< ::com::tibbo::aggregate::common::event::EventEnrichmentRule* >(_i->next());
//        {
//            auto name = enrichmentRule)->getName();
//            try {
//                void* result = evaluator)->evaluateToString(enrichmentRule)->getEnrichmentExpression());
//                if(result == 0) {
//                    continue;
//                }
//                event)->addEnrichment(new ::com::tibbo::aggregate::common::event::Enrichment(name, result)->toString(), new ::java::util::Date(), caller != 0 ? caller)->getUsername() : static_cast< std::string* >(0)));
//            } catch (::java::lang::Exception* ex) {
//                Log::CONTEXT_EVENTS())->error(std::stringBuilder().append("Error adding enrichment '"_j)->append(name)
//                    ->append("' to event '"_j)
//                    ->append(event))
//                    ->append("': "_j)
//                    ->append(ex))->toString());
//            }
//        }
//    }
//}
//
//CallerController* /*template <class C> */AbstractContext/*<C> */::getEventProcessingCallerController()
//{
//    return getContextManager())->getCallerController();
//}
//
//java::util::List* /*template <class C> */AbstractContext/*<C> */::getEventHistory(std::string* name)
//{
//    auto ed = getEventData(name);
//    if(ed == 0) {
//        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(Cres::get())->getString("conEvtNotAvail"_j))->append(name)->toString());
//    }
//    return ed)->getHistory();
//}
//
//void /*template <class C> */AbstractContext/*<C> */::lock(RequestController* request, ::java::util::concurrent::locks::Lock* lock)
//{
//    auto lockTimeout = (request != 0 && request)->getLockTimeout() != 0) ? request)->getLockTimeout() : static_cast< ::java::lang::Long* >(0);
//    if(lockTimeout != 0) {
//        try {
//            if(!lock)->tryLock((lockTimeout))->longValue(), ::java::util::concurrent::TimeUnit::MILLISECONDS)) {
//                throw new ContextException(Cres::get())->getString("conLockFailed"_j));
//            }
//        } catch (::java::lang::InterruptedException* ex) {
//            throw new ContextException(Cres::get())->getString("interrupted"_j));
//        }
//    } else {
//        lock)->lock();
//    }
//}
//
//std::string /*template <class C> */AbstractContext/*<C> */::toString()
//{
//    auto desc = getDescription();
//    return desc != 0 ? desc : getPath();
//}
//
std::string /*template <class C> */AbstractContext/*<C> */::toDetailedString()
{
    //auto decription = getDescription();
    //return decription != 0 ? std::stringBuilder().append(decription)->append(" ("_j)
    //    ->append(getPath())
    //    ->append(")"_j)->toString() : getPath();
	return "";
}

//void /*template <class C> */AbstractContext/*<C> */::accept(ContextVisitor* visitor)
//{
//    if(visitor->shouldVisit(this)) {
//        visitor->visit(this);
//        childrenLock)->readLock())->lock();
//        {
//            auto finally36 = finally([&] {
//                childrenLock)->readLock())->unlock();
//            });
//            {
//                for (auto _i = children)->iterator(); _i->hasNext(); ) {
//                    Context* child = java_cast< Context* >(_i->next());
//                    {
//                        child)->accept(visitor);
//                    }
//                }
//            }
//        }
//
//    }
//}
//
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::getChangeEventDefinition()
//{
//    return ED_CHANGE();
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVvariables(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
//    auto ans = new ::DataTable(def)->getFormat());
//    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        VariableDefinition* vardef = java_cast< VariableDefinition* >(_i->next());
//        {
//            ans)->addRecord(varDefToDataRecord(vardef, caller));
//        }
//    }
//    return ans;
//}
//
//std::string /*template <class C> */AbstractContext/*<C> */::encodeFormat(::TableFormat* format, CallerController* caller)
//{
//    return format != 0 ? format)->encode(false) : static_cast< std::string* >(0);
//}
//
//TableFormat* /*template <class C> */AbstractContext/*<C> */::decodeFormat(std::string* source, CallerController* caller)
//{
//    return source != 0 ? new ::TableFormat(source, new ::encoding::ClassicEncodingSettings(false)) : static_cast< ::TableFormat* >(0);
//}
//
//DataRecord* /*template <class C> */AbstractContext/*<C> */::varDefToDataRecord(VariableDefinition* vd)
//{
//    return varDefToDataRecord(vd, 0);
//}
//
//DataRecord* /*template <class C> */AbstractContext/*<C> */::varDefToDataRecord(VariableDefinition* vd, CallerController* caller)
//{
//    return (new ::DataRecord(VARIABLE_DEFINITION_FORMAT()))->addString(vd)->getName()))->addString(encodeFormat(vd)->getFormat(), caller)))->addString(vd)->getDescription()))->addBoolean(::java::lang::Boolean::valueOf(vd)->isReadable())))->addBoolean(::java::lang::Boolean::valueOf(vd)->isWritable())))->addString(vd)->getHelp()))->addString(vd)->getGroup()))->addString(vd)->getIconId()))->addString(vd)->getHelpId()))->addLong(vd)->getRemoteCacheTime());
//}
//
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::varDefFromDataRecord(::DataRecord* rec)
//{
//    return varDefFromDataRecord(rec, 0);
//}
//
//VariableDefinition* /*template <class C> */AbstractContext/*<C> */::varDefFromDataRecord(::DataRecord* rec, CallerController* caller)
//{
//    auto const variable = rec)->getString(FIELD_VD_NAME());
//    bool readable = (rec)->getBoolean(FIELD_VD_READABLE())))->booleanValue();
//    bool writable = (rec)->getBoolean(FIELD_VD_WRITABLE())))->booleanValue();
//    ::TableFormat* format;
//    try {
//        format = decodeFormat(rec)->getString(FIELD_VD_FORMAT()), caller);
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalStateException(std::stringBuilder().append("Error decoding format of variable '"_j)->append(variable)
//            ->append("': "_j)
//            ->append(ex)->getMessage())->toString(), ex);
//    }
//    auto def = new VariableDefinition(variable, format, readable, writable, rec)->getString(FIELD_VD_DESCRIPTION()), rec)->getString(FIELD_VD_GROUP()));
//    def)->setHelp(rec)->getString(FIELD_VD_HELP()));
//    def)->setIconId(rec)->getString(FIELD_VD_ICON_ID()));
//    if(rec)->hasField(FIELD_VD_HELP_ID())) {
//        def)->setHelpId(rec)->getString(FIELD_VD_HELP_ID()));
//    }
//    if(rec)->hasField(FIELD_VD_CACHE_TIME())) {
//        def)->setRemoteCacheTime(rec)->getLong(FIELD_VD_CACHE_TIME()));
//    }
//    return def;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVfunctions(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
//    auto ans = new ::DataTable(def)->getFormat());
//    for (auto _i = getFunctionDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        FunctionDefinition* funcdef = java_cast< FunctionDefinition* >(_i->next());
//        {
//            ans)->addRecord(funcDefToDataRecord(funcdef, caller));
//        }
//    }
//    return ans;
//}
//
//DataRecord* /*template <class C> */AbstractContext/*<C> */::funcDefToDataRecord(FunctionDefinition* fd)
//{
//    return funcDefToDataRecord(fd, 0);
//}
//
//DataRecord* /*template <class C> */AbstractContext/*<C> */::funcDefToDataRecord(FunctionDefinition* fd, CallerController* caller)
//{
//    return (new ::DataRecord(FUNCTION_DEFINITION_FORMAT()))->addString(fd)->getName()))->addString(encodeFormat(fd)->getInputFormat(), caller)))->addString(encodeFormat(fd)->getOutputFormat(), caller)))->addString(fd)->getDescription()))->addString(fd)->getHelp()))->addString(fd)->getGroup()))->addString(fd)->getIconId());
//}
//
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::funcDefFromDataRecord(::DataRecord* rec)
//{
//    return funcDefFromDataRecord(rec, 0);
//}
//
//FunctionDefinition* /*template <class C> */AbstractContext/*<C> */::funcDefFromDataRecord(::DataRecord* rec, CallerController* caller)
//{
//    auto const function = rec)->getString(FIELD_FD_NAME());
//    ::TableFormat* inputFormat;
//    try {
//        inputFormat = decodeFormat(rec)->getString(FIELD_FD_INPUTFORMAT()), caller);
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalStateException(std::stringBuilder().append("Error decoding input format of function '"_j)->append(function)
//            ->append("': "_j)
//            ->append(ex)->getMessage())->toString(), ex);
//    }
//    ::TableFormat* outputFormat;
//    try {
//        outputFormat = decodeFormat(rec)->getString(FIELD_FD_OUTPUTFORMAT()), caller);
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalStateException(std::stringBuilder().append("Error decoding output format of function '"_j)->append(function)
//            ->append("': "_j)
//            ->append(ex)->getMessage())->toString(), ex);
//    }
//    auto def = new FunctionDefinition(function, inputFormat, outputFormat, rec)->getString(FIELD_FD_DESCRIPTION()), rec)->getString(FIELD_FD_GROUP()));
//    def)->setHelp(rec)->getString(FIELD_FD_HELP()));
//    def)->setIconId(rec)->getString(FIELD_FD_ICON_ID()));
//    return def;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVevents(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
//    auto ans = new ::DataTable(def)->getFormat());
//    for (auto _i = getEventDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        EventDefinition* ed = java_cast< EventDefinition* >(_i->next());
//        {
//            ans)->addRecord(evtDefToDataRecord(ed, caller));
//        }
//    }
//    return ans;
//}
//
//DataRecord* /*template <class C> */AbstractContext/*<C> */::evtDefToDataRecord(EventDefinition* ed)
//{
//    return evtDefToDataRecord(ed, 0);
//}
//
//DataRecord* /*template <class C> */AbstractContext/*<C> */::evtDefToDataRecord(EventDefinition* ed, CallerController* caller)
//{
//    return (new ::DataRecord(EVENT_DEFINITION_FORMAT()))->addString(ed)->getName()))->addString(encodeFormat(ed)->getFormat(), caller)))->addString(ed)->getDescription()))->addString(ed)->getHelp()))->addInt(ed)->getLevel())))->addString(ed)->getGroup()))->addString(ed)->getIconId());
//}
//
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::evtDefFromDataRecord(::DataRecord* rec)
//{
//    return evtDefFromDataRecord(rec, 0);
//}
//
//EventDefinition* /*template <class C> */AbstractContext/*<C> */::evtDefFromDataRecord(::DataRecord* rec, CallerController* caller)
//{
//    auto const event = rec)->getString(FIELD_ED_NAME());
//    ::TableFormat* format;
//    try {
//        format = decodeFormat(rec)->getString(FIELD_ED_FORMAT()), caller);
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalStateException(std::stringBuilder().append("Error decoding format of event '"_j)->append(event)
//            ->append("': "_j)
//            ->append(ex)->getMessage())->toString(), ex);
//    }
//    auto def = new EventDefinition(event, format, rec)->getString(FIELD_ED_DESCRIPTION()), rec)->getString(FIELD_ED_GROUP()));
//    def)->setLevel((rec)->getInt(FIELD_ED_LEVEL())))->intValue());
//    def)->setHelp(rec)->getString(FIELD_ED_HELP()));
//    def)->setIconId(rec)->getString(FIELD_ED_ICON_ID()));
//    return def;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVactions(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
//    auto ans = new ::DataTable(def)->getFormat());
//    for (auto _i = getActionDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::action::ActionDefinition* adef = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
//        {
//            ans)->addRecord(actDefToDataRecord(adef));
//        }
//    }
//    return ans;
//}
//
//DataRecord* /*template <class C> */AbstractContext/*<C> */::actDefToDataRecord(::com::tibbo::aggregate::common::action::ActionDefinition* def)
//{
//    auto resourceMasks = new ::DataTable(/*template <class C> */AbstractContext/*<C> */::RESOURCE_MASKS_FORMAT());
//    if(def)->getDropSources() != 0) {
//        for (auto _i = def)->getDropSources())->iterator(); _i->hasNext(); ) {
//            ::com::tibbo::aggregate::common::action::ResourceMask* resourceMask = java_cast< ::com::tibbo::aggregate::common::action::ResourceMask* >(_i->next());
//            {
//                resourceMasks)->addRecord())->addString(resourceMask)->toString());
//            }
//        }
//    }
//    auto rec = new ::DataRecord(/*template <class C> */AbstractContext/*<C> */::ACTION_DEF_FORMAT());
//    rec)->addString(def)->getName());
//    rec)->addString(def)->getDescription());
//    rec)->addString(def)->getHelp());
//    rec)->addString(def)->getAccelerator() == 0 ? static_cast< std::string* >(0) : def)->getAccelerator())->toString());
//    rec)->addDataTable(resourceMasks);
//    rec)->addBoolean(::java::lang::Boolean::valueOf(def)->isHidden()));
//    rec)->addBoolean(::java::lang::Boolean::valueOf(def)->isEnabled()));
//    rec)->addString(def)->getIconId());
//    rec)->addString(def)->getGroup());
//    rec)->addString(def)->getExecutionGroup() == 0 ? static_cast< std::string* >(0) : def)->getExecutionGroup())->toString());
//    rec)->addBoolean(::java::lang::Boolean::valueOf(def)->isDefault()));
//    return rec;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::executeTasks(std::list  tasks)
//{
//    try {
//        if(isChildrenConcurrencyEnabled()) {
//            getContextManager())->getExecutorService())->invokeAll(tasks);
//        } else {
//            for (auto _i = tasks)->iterator(); _i->hasNext(); ) {
//                ::java::util::concurrent::Callable* task = java_cast< ::java::util::concurrent::Callable* >(_i->next());
//                {
//                    task)->call();
//                }
//            }
//        }
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::enableStatus()
//{
//    status = new ContextStatus();
//}
//
//ContextStatus* /*template <class C> */AbstractContext/*<C> */::getStatus()
//{
//    return status;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::setStatus(int status, std::string* comment)
//{
//    auto statusChanged = this->status)->getStatus() != status;
//    auto commentChanged = !::com::tibbo::aggregate::common::util::Util::equals(this->status)->getComment(), comment);
//    auto oldStatus = this->status)->getStatus();
//    this->status)->setStatus(status);
//    this->status)->setComment(comment);
//    if(statusChanged || commentChanged) {
//        fireStatusChanged(status, comment, oldStatus);
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::fireStatusChanged(int status, std::string* comment, int oldStatus)
//{
//}
//
//void /*template <class C> */AbstractContext/*<C> */::enableVariableStatuses(bool persistent)
//{
//    auto vd = new VariableDefinition(V_VARIABLE_STATUSES(), VFT_VARIABLE_STATUSES(), true, true);
//    vd)->setPersistent(persistent);
//    vd)->setLocalCachingEnabled(false);
//    vd)->setGetter(new /*template <class C> */AbstractContext/*<C> */_enableVariableStatuses_4(this));
//    addVariableDefinition(vd);
//    auto ed = new EventDefinition(E_VARIABLE_STATUS_CHANGED(), VFT_VARIABLE_STATUSES());
//    addEventDefinition(ed);
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::createVariableStatusesTable()
//{
//    variableStatusesLock)->readLock())->lock();
//    {
//        auto finally37 = finally([&] {
//            variableStatusesLock)->readLock())->unlock();
//		});
//        {
//            auto table = new ::DataTable(VFT_VARIABLE_STATUSES());
//            auto statuses = getVariableStatuses();
//            for (auto _i = statuses)->keySet())->iterator(); _i->hasNext(); ) {
//                std::string* name = java_cast< std::string* >(_i->next());
//                {
//                    auto vs = java_cast< VariableStatus* >(statuses)->get(name));
//                    table)->addRecord())->addString(name))->addString(vs)->getStatus()))->addString(vs)->getComment());
//                }
//            }
//            return table;
//        }
//    }
//
//}
//
//java::util::Map* /*template <class C> */AbstractContext/*<C> */::getVariableStatuses()
//{
//    ensureVariableStatuses();
//    return ::java::util::Collections::unmodifiableMap(variableStatuses);
//}
//
//void /*template <class C> */AbstractContext/*<C> */::ensureVariableStatuses()
//{
//    if(variableStatuses == 0) {
//        variableStatuses = ::java::util::Collections::synchronizedMap(new ::java::util::LinkedHashMap());
//        auto statuses = fetchVariableStatuses();
//        for (auto _i = statuses)->iterator(); _i->hasNext(); ) {
//            ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
//            {
//                variableStatuses)->put(rec)->getString(VF_VARIABLE_STATUSES_NAME()), new VariableStatus(rec)->getString(VF_VARIABLE_STATUSES_STATUS()), rec)->getString(VF_VARIABLE_STATUSES_COMMENT())));
//            }
//        }
//    }
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::fetchVariableStatuses()
//{
//    return new ::DataTable(VFT_VARIABLE_STATUSES());
//}
//
//void /*template <class C> */AbstractContext/*<C> */::updateVariableStatus(std::string* variable, VariableStatus* status, bool persistent)
//{
//    VariableStatus* old;
//    variableStatusesLock)->writeLock())->lock();
//    {
//        auto finally38 = finally([&] {
//            variableStatusesLock)->writeLock())->unlock();
//        });
//        {
//            ensureVariableStatuses();
//            old = java_cast< VariableStatus* >(variableStatuses)->put(variable, status));
//        }
//    }
//
//    if(old == 0 || !::com::tibbo::aggregate::common::util::Util::equals(old)->getStatus(), status)->getStatus())) {
//        variableStatusesUpdated = true;
//        fireEvent(E_VARIABLE_STATUS_CHANGED(), new voidArray({variable), status)->getStatus()), status)->getComment())}));
//    }
//    if(persistent) {
//        saveVariableStatuses();
//    }
//}
//
//void /*template <class C> */AbstractContext/*<C> */::clearVariableStatuses()
//{
//    variableStatusesLock)->writeLock())->lock();
//    {
//        auto finally39 = finally([&] {
//            variableStatusesLock)->writeLock())->unlock();
//        });
//        {
//            if(variableStatuses != 0) {
//                variableStatuses)->clear();
//            }
//        }
//    }
//
//    saveVariableStatuses();
//}
//
//void /*template <class C> */AbstractContext/*<C> */::saveVariableStatuses()
//{
//    if(variableStatusesUpdated) {
//        persistVariableStatuses(createVariableStatusesTable());
//    }
//    variableStatusesUpdated = false;
//}
//
//void /*template <class C> */AbstractContext/*<C> */::persistVariableStatuses(::DataTable* statuses)
//{
//}
//
//VariableStatus* /*template <class C> */AbstractContext/*<C> */::getVariableStatus(std::string* name)
//{
//    variableStatusesLock)->readLock())->lock();
//    {
//        auto finally40 = finally([&] {
//            variableStatusesLock)->readLock())->unlock();
//        });
//        {
//            return java_cast< VariableStatus* >(getVariableStatuses())->get(name));
//        }
//    }
//
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVchildren(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
//    auto ans = new ::DataTable(def)->getFormat());
//    for (auto _i = getChildren(caller))->iterator(); _i->hasNext(); ) {
//        Context* con = java_cast< Context* >(_i->next());
//        {
//            ans)->addRecord())->addString(con)->getName());
//        }
//    }
//    return ans;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::getVinfo(VariableDefinition* def, CallerController* caller, RequestController* request)
//{
//    return createContextInfoTable();
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::createContextInfoTable()
//{
//    return new ::DataTable(INFO_DEFINITION_FORMAT(), new voidArray({getDescription()), getType()), getGroup()), getIconId()), getLocalRoot()), getRemoteRoot()), getRemotePath()), getRemotePrimaryRoot()), ::java::lang::Boolean::valueOf(isMapped()))}));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFgetCopyData(FunctionDefinition* def, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
//    auto result = new ::DataTable(def)->getOutputFormat())->clone());
//    auto group = parameters)->rec())->getString(VF_INFO_GROUP());
//    std::list  recipients;
//    auto recipientsTable = parameters)->rec())->getDataTable(FIF_COPY_DATA_RECIPIENTS());
//    if(recipientsTable != 0) {
//        recipients = new ::java::util::LinkedList();
//        for (auto _i = recipientsTable)->iterator(); _i->hasNext(); ) {
//            ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
//            {
//                auto recipient = java_cast< Context* >(getContextManager())->get(rec)->getString(FIF_COPY_DATA_RECIPIENTS_RECIPIENT()), caller));
//                if(recipient != 0) {
//                    recipients)->add(recipient));
//                }
//            }
//        }
//    }
//    for (auto _i = getVariableDefinitions(caller))->iterator(); _i->hasNext(); ) {
//        VariableDefinition* vd = java_cast< VariableDefinition* >(_i->next());
//        {
//            if(group != 0 && !::com::tibbo::aggregate::common::util::Util::equals(ContextUtils::getBaseGroup(vd)->getGroup()), group)) {
//                continue;
//            }
//            if(group == 0 && vd)->getGroup() == 0) {
//                continue;
//            }
//            if(!vd)->isReadable()) {
//                continue;
//            }
//            if(vd)->getFormat() == 0 || !vd)->getFormat())->isReplicated()) {
//                continue;
//            }
//            if(recipients != 0) {
//                auto skip = true;
//                for (auto _i = recipients)->iterator(); _i->hasNext(); ) {
//                    Context* recipient = java_cast< Context* >(_i->next());
//                    {
//                        auto rvd = recipient)->getVariableDefinition(vd)->getName());
//                        if(rvd != 0 && rvd)->isWritable() && (rvd)->getFormat() == 0 || rvd)->getFormat())->isReplicated())) {
//                            skip = false;
//                        }
//                    }
//                }
//                if(skip) {
//                    continue;
//                }
//            }
//            auto value = getVariable(vd)->getName(), caller);
//            auto format = value)->getFormat())->clone();
//            auto fields = new ::DataTable(FIFT_REPLICATE_FIELDS());
//            for (auto _i = format)->iterator(); _i->hasNext(); ) {
//                ::FieldFormat* ff = java_cast< ::FieldFormat* >(_i->next());
//                {
//                    if(ff)->isNotReplicated()) {
//                        ff)->setReadonly(true);
//                    }
//                    if(!ff)->isHidden() && !ff)->isReadonly() && !ff)->isNotReplicated()) {
//                        fields)->addRecord())->addString(ff)->getName()))->addString(ff)->toString()))->addBoolean(::java::lang::Boolean::valueOf(true));
//                    }
//                }
//            }
//            result)->addRecord())->addString(vd)->getName()))->addString(vd)->getDescription()))->addBoolean(::java::lang::Boolean::valueOf(false)))->addDataTable(fields))->addDataTable(value);
//        }
//    }
//    result)->fixRecords();
//    return result;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFcopy(FunctionDefinition* def, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
//    auto result = new ::DataTable(def)->getOutputFormat());
//    for (auto _i = parameters)->iterator(); _i->hasNext(); ) {
//        ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
//        {
//            if(!(rec)->getBoolean(FOF_COPY_DATA_REPLICATE())))->booleanValue()) {
//                continue;
//            }
//            auto varName = rec)->getString(FOF_COPY_DATA_NAME());
//            auto providedDesc = rec)->getString(FOF_COPY_DATA_DESCRIPTION());
//            auto varValue = rec)->getDataTable(FOF_COPY_DATA_VALUE());
//            auto targetVd = getVariableDefinition(varName, caller);
//            if(targetVd == 0) {
//                result)->addRecord())->addString(providedDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(Cres::get())->getString("conVarNotAvailInTgt"_j));
//                continue;
//            }
//            auto varDesc = targetVd)->getDescription();
//            if(!targetVd)->isWritable()) {
//                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(Cres::get())->getString("conVarNotWritableInTgt"_j));
//                continue;
//            }
//            ::DataTable* tgtVal;
//            try {
//                tgtVal = getVariable(varName, caller);
//            } catch (ContextException* ex) {
//                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(std::stringBuilder().append(Cres::get())->getString("conErrGettingTgtVar"_j))->append(ex)->getMessage())->toString());
//                continue;
//            }
//            std::list  fields = new ::java::util::LinkedList();
//            for (auto _i = rec)->getDataTable(FOF_COPY_DATA_FIELDS()))->iterator(); _i->hasNext(); ) {
//                ::DataRecord* fieldRec = java_cast< ::DataRecord* >(_i->next());
//                {
//                    if((fieldRec)->getBoolean(FIF_REPLICATE_FIELDS_REPLICATE())))->booleanValue()) {
//                        fields)->add(fieldRec)->getString(FIF_REPLICATE_FIELDS_NAME())));
//                    }
//                }
//            }
//            auto tableCopyErrors = ::DataTableReplication::copy(varValue, tgtVal, false, false, true, true, false, fields);
//            ::DataTableUtils::inlineData(tgtVal, getContextManager(), caller);
//            try {
//                setVariable(targetVd, caller, request, tgtVal);
//            } catch (ContextException* ex) {
//                Log::CONTEXT_FUNCTIONS())->warn("Error setting variable during context copy"_j, ex);
//                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(std::stringBuilder().append(Cres::get())->getString("conErrSettingTgtVar"_j))->append(ex)->getMessage())->toString());
//                continue;
//            }
//            if(tableCopyErrors)->size() > 0) {
//                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(::com::tibbo::aggregate::common::util::StringUtils::print(static_cast< ::java::util::Collection* >(tableCopyErrors), "; "_j));
//            } else {
//                result)->addRecord())->addString(varDesc))->addBoolean(::java::lang::Boolean::valueOf(true));
//            }
//        }
//    }
//    return result;
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::callFcopyToChildren(FunctionDefinition* def, CallerController* caller, RequestController* request, ::DataTable* parameters)
//{
//   // return copyTo(def, caller, request, parameters, getChildren(caller));
//}
//
//DataTable* /*template <class C> */AbstractContext/*<C> */::copyTo(FunctionDefinition* def, CallerController* caller, RequestController* request, ::DataTable* parameters, std::list  children)
//{
//
//	auto result = new ::DataTable(def)->getOutputFormat());
//    for (auto _i = children)->iterator(); _i->hasNext(); ) {
//        Context* child = java_cast< Context* >(_i->next());
//        {
//            auto conDesc = child)->getDescription() != 0 ? child)->getDescription() : child)->getPath();
//            ::DataTable* conRes;
//            try {
//                conRes = child)->callFunction(F_COPY(), caller, request, parameters);
//            } catch (ContextException* ex) {
//                result)->addRecord())->addString(conDesc))->addString(0))->addBoolean(::java::lang::Boolean::valueOf(false)))->addString(ex)->getMessage());
//                continue;
//            }
//            for (auto _i = conRes)->iterator(); _i->hasNext(); ) {
//                ::DataRecord* rec = java_cast< ::DataRecord* >(_i->next());
//				{
//					result)->addRecord())->addString(conDesc))->addString(rec)->getString(FIELD_REPLICATE_VARIABLE())))->addBoolean(rec)->getBoolean(FIELD_REPLICATE_SUCCESSFUL())))->addString(rec)->getString(FIELD_REPLICATE_ERRORS()));
//                }
//			}
//		}
//	}
//	return result;
//}
//
//
//
//


std::string AbstractContext::getPath()
  {
	  /*
    if (getParent() == null)
    {
      return createPath();
    }
    
    if (path == null)
    {
      path = createPath();
    }
    */
    return path;
  }