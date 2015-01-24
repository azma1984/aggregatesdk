// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextUtils.java

#ifndef ContextUtilsH
#define ContextUtilsH

//#include "action/ActionDefinition.h"
#include "context/Context.h"
//#include "context/ContextManager.h"
//#include "context/ContextRuntimeException.h"
//#include "context/ContextUtils_findChildren_1.h"
#include "context/ContextVisitor.h"
//#include "context/Contexts.h"
//#include "context/EventData.h"
//#include "context/EventDefinition.h"
//#include "context/VariableDefinition.h"
//#include "datatable/FieldFormat.h"
//#include "datatable/TableFormat.h"
//#include "util/StringUtils.h"

#include <string>

#include <list>


//todo - So far the class is not described (class stub)
class ContextUtils
{
private:
    static std::list<std::string>  expandMaskPart(const std::string & head, const std::string & tail, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);
    static void acceptFinder(Context* context, ContextVisitor* visitor, CallerController* caller, bool resolveGroups);
	
	static const std::string CONTEXT_CLASS_SUFFIX;

public:

    static const std::string CONTEXT_NAME_PATTERN;
    static const std::string CONTEXT_PATH_PATTERN;
    static const std::string CONTEXT_MASK_PATTERN;
    static const std::string CONTEXT_TYPE_PATTERN;
    static const std::string ENTITY_NAME_PATTERN;
    static const std::string IDENTIFIER_PATTERN;

	

    static const std::string CONTEXT_NAME_SEPARATOR;
    static const std::string CONTEXT_TYPE_SEPARATOR;
    static const std::string CONTEXT_GROUP_MASK;
    static const std::string ENTITY_GROUP_MASK;
    static const std::string CONTEXT_TYPE_ANY;
    static const std::string ENTITY_GROUP_SEPARATOR;
	static const std::string MASK_LIST_SEPARATOR;

    static const std::string GROUP_DEFAULT;
    static const std::string GROUP_SYSTEM;
    static const std::string GROUP_REMOTE;
    static const std::string GROUP_CUSTOM;
    static const std::string GROUP_STATUS;
    static const std::string GROUP_ACCESS;


	
    static const int ENTITY_VARIABLE = 1;
    static const int ENTITY_FUNCTION = 2;
    static const int ENTITY_EVENT = 4;
    static const int ENTITY_ACTION = 8;

    static const std::string USERNAME_PATTERN;
    static const std::string VARIABLES_GROUP_DS_SETTINGS;
/*

    static const std::string createName(std::stringArray* parts);
    static const std::string createGroup(std::stringArray* parts);
    static const std::string userContextPath(const std::string & username);
    static const std::string deviceServersContextPath(const std::string & owner);
    static const std::string dsGroupsContextPath(const std::string & owner);
    static const std::string dsGroupContextPath(const std::string & owner, const std::string & name);
    static const std::string deviceGroupsContextPath(const std::string & owner);
    static const std::string deviceGroupContextPath(const std::string & owner, const std::string & name);
    static const std::string groupContextPath(const std::string & username, const std::string & containerContextName, const std::string & name);
    static const std::string groupsContextPath(const std::string & username, const std::string & containerContextName);
    static const std::string groupsContextName(const std::string & containerContextName);
    static const std::string alertContextPath(const std::string & owner, const std::string & name);
    static const std::string alertsContextPath(const std::string & owner);
    static const std::string jobsContextPath(const std::string & owner);
    static const std::string jobContextPath(const std::string & owner, const std::string & name);
    static const std::string queriesContextPath(const std::string & owner);
    static const std::string queryContextPath(const std::string & owner, const std::string & name);
    static const std::string compliancePoliciesContextPath(const std::string & owner);
    static const std::string compliancePolicyContextPath(const std::string & owner, const std::string & name);
    static const std::string reportsContextPath(const std::string & owner);
    static const std::string reportContextPath(const std::string & owner, const std::string & name);
    static const std::string trackersContextPath(const std::string & owner);
    static const std::string trackerContextPath(const std::string & owner, const std::string & name);
    static const std::string commonDataContextPath(const std::string & owner);
    static const std::string commonTableContextPath(const std::string & owner, const std::string & name);
    static const std::string eventFiltersContextPath(const std::string & owner);
    static const std::string eventFilterContextPath(const std::string & owner, const std::string & name);
    static const std::string widgetContextPath(const std::string & owner, const std::string & name);
    static const std::string widgetsContextPath(const std::string & owner);
    static const std::string dashboardsContextPath(const std::string & owner);
    static const std::string dashboardContextPath(const std::string & owner, const std::string & name);
    static const std::string autorunActionsContextPath(const std::string & owner);
    static const std::string autorunActionContextName(const std::string & owner, const std::string & name);
    static const std::string favouritesContextPath(const std::string & owner);
    static const std::string favouriteContextPath(const std::string & owner, const std::string & name);
    static const std::string scriptContextPath(const std::string & owner, const std::string & name);
    static const std::string scriptsContextPath(const std::string & owner);
    static const std::string modelsContextPath(const std::string & owner);
    static const std::string modelContextPath(const std::string & owner, const std::string & name);
    static const std::string deviceServerContextPath(const std::string & owner, const std::string & name);
    static const std::string pluginGlobalConfigContextPath(const std::string & pluginId);
    static const std::string pluginsUserConfigContextPath(const std::string & username);
    static const std::string pluginUserConfigContextPath(const std::string & username, const std::string & pluginId);
    static const std::string pluginConfigContextPath(const std::string & owner, const std::string & name);
    static const std::string devicesContextPath(const std::string & owner);
    static const std::string deviceContextPath(const std::string & owner, const std::string & device);
    static const std::string pluginIdToContextName(const std::string & pluginId);
    static const std::string getChildFullName(const std::string & parent, const std::string & childShortName);
    static const std::string contextPathToContextName(const std::string & path);
    static std::list  expandMaskListToContexts(const std::string & masks, ContextManager* contextManager);
    static std::list  expandMaskListToContexts(const std::string & masks, ContextManager* contextManager, CallerController* caller);
    static std::list  expandMaskListToContexts(const std::string & masks, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);
    static std::list  expandMaskToContexts(const std::string & mask, ContextManager* contextManager);
    static std::list  expandMaskToContexts(const std::string & mask, ContextManager* contextManager, CallerController* caller);
    static std::list  expandMaskToContexts(const std::string & mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);
    static std::list  expandMaskToPaths(const std::string & mask, ContextManager* contextManager);
    static std::list  expandMaskToPaths(const std::string & mask, ContextManager* contextManager, CallerController* caller);
    static std::list  expandMaskToPaths(const std::string & mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);


    static std::list  findChildren(const std::string & rootsMask, ::java::lang::Class* contextClass, ContextManager* manager, CallerController* caller, bool resolveGroups);
    static std::list  findChildren(const std::string & rootsMask, const std::string & type, ContextManager* manager, CallerController* caller, bool resolveGroups);


    static bool matchesToMask(const std::string & mask, const std::string & name);
    static bool matchesToType(const std::string & type, ::java::util::Collection* requiredTypes);
    static bool matchesToType(::java::util::Collection* types, ::java::util::Collection* requiredTypes);
    static bool matchesToMask(const std::string & mask, const std::string & context, bool contextMayExtendMask, bool maskMayExtendContext);
    static bool masksIntersect(const std::string & mask1, const std::string & mask2, bool mask2MayExtendMask1, bool mask1MayExtendMask2);
    */
    static bool isRelative(const std::string & name);
    /*
    static bool isMask(const std::string & name);
    static bool isValidContextType(const std::string & s);*/
    static bool isValidContextName(const std::string & s);
	/*
    static bool isValidContextMask(const std::string & s);
    static bool isValidIdentifier(const std::string & s);
    static bool isDerivedFrom(const std::string & childType, const std::string & parentType);
    static const std::string getParentPath(const std::string & path);
    static const std::string getBaseGroup(const std::string & group);
    static const std::string getVisualGroup(const std::string & group);
    static const std::string getBaseType(const std::string & type);
    static const std::string getSubtype(const std::string & type);
    static const std::string getTypeForClass(::java::lang::Class* clazz);
    static std::map getEventFields(const std::string & mask, const std::string & event, CallerController* caller, ContextManager* contextManager);
    static std::map getVariableFields(const std::string & mask, const std::string & variable, CallerController* caller, ContextManager* contextManager);
    static ::com::tibbo::aggregate::common::action::ActionDefinition* getDefaultActionDefinition(Context* context, CallerController* caller);
    static const std::string createType(::java::lang::Class* clazz, const std::string & deviceType);
    static bool isValidContextNameChar(char16_t c);

	*/
};

#endif
