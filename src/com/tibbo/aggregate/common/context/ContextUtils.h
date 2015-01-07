// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextUtils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java



class com::tibbo::aggregate::common::context::ContextUtils
    
{

public:
    typedef void super;

private:
    static const std::string CONTEXT_NAME_PATTERN_;
    static const std::string CONTEXT_PATH_PATTERN_;
    static const std::string CONTEXT_MASK_PATTERN_;
    static const std::string CONTEXT_TYPE_PATTERN_;
    static const std::string ENTITY_NAME_PATTERN_;
    static const std::string IDENTIFIER_PATTERN_;
    static const std::string CONTEXT_CLASS_SUFFIX_;
    static const std::string CONTEXT_NAME_SEPARATOR_;
    static const std::string CONTEXT_TYPE_SEPARATOR_;
    static const std::string CONTEXT_GROUP_MASK_;
    static const std::string ENTITY_GROUP_MASK_;
    static const std::string CONTEXT_TYPE_ANY_;
    static const std::string ENTITY_GROUP_SEPARATOR_;
    static const std::string MASK_LIST_SEPARATOR_;
    static const std::string GROUP_DEFAULT_;
    static const std::string GROUP_SYSTEM_;
    static const std::string GROUP_REMOTE_;
    static const std::string GROUP_CUSTOM_;
    static const std::string GROUP_STATUS_;
    static const std::string GROUP_ACCESS_;

public:
    static const int ENTITY_VARIABLE = 1) };
    static const int ENTITY_FUNCTION = 2) };
    static const int ENTITY_EVENT = 4) };
    static const int ENTITY_ACTION = 8) };

private:
    static const std::string USERNAME_PATTERN_;
    static const std::string VARIABLES_GROUP_DS_SETTINGS_;

public:
    static const std::string createName(std::stringArray*/*...*/ parts);
    static const std::string createGroup(std::stringArray*/*...*/ parts);
    static const std::string userContextPath(std::string* username);
    static const std::string deviceServersContextPath(std::string* owner);
    static const std::string dsGroupsContextPath(std::string* owner);
    static const std::string dsGroupContextPath(std::string* owner, std::string* name);
    static const std::string deviceGroupsContextPath(std::string* owner);
    static const std::string deviceGroupContextPath(std::string* owner, std::string* name);
    static const std::string groupContextPath(std::string* username, std::string* containerContextName, std::string* name);
    static const std::string groupsContextPath(std::string* username, std::string* containerContextName);
    static const std::string groupsContextName(std::string* containerContextName);
    static const std::string alertContextPath(std::string* owner, std::string* name);
    static const std::string alertsContextPath(std::string* owner);
    static const std::string jobsContextPath(std::string* owner);
    static const std::string jobContextPath(std::string* owner, std::string* name);
    static const std::string queriesContextPath(std::string* owner);
    static const std::string queryContextPath(std::string* owner, std::string* name);
    static const std::string compliancePoliciesContextPath(std::string* owner);
    static const std::string compliancePolicyContextPath(std::string* owner, std::string* name);
    static const std::string reportsContextPath(std::string* owner);
    static const std::string reportContextPath(std::string* owner, std::string* name);
    static const std::string trackersContextPath(std::string* owner);
    static const std::string trackerContextPath(std::string* owner, std::string* name);
    static const std::string commonDataContextPath(std::string* owner);
    static const std::string commonTableContextPath(std::string* owner, std::string* name);
    static const std::string eventFiltersContextPath(std::string* owner);
    static const std::string eventFilterContextPath(std::string* owner, std::string* name);
    static const std::string widgetContextPath(std::string* owner, std::string* name);
    static const std::string widgetsContextPath(std::string* owner);
    static const std::string dashboardsContextPath(std::string* owner);
    static const std::string dashboardContextPath(std::string* owner, std::string* name);
    static const std::string autorunActionsContextPath(std::string* owner);
    static const std::string autorunActionContextName(std::string* owner, std::string* name);
    static const std::string favouritesContextPath(std::string* owner);
    static const std::string favouriteContextPath(std::string* owner, std::string* name);
    static const std::string scriptContextPath(std::string* owner, std::string* name);
    static const std::string scriptsContextPath(std::string* owner);
    static const std::string modelsContextPath(std::string* owner);
    static const std::string modelContextPath(std::string* owner, std::string* name);
    static const std::string deviceServerContextPath(std::string* owner, std::string* name);
    static const std::string pluginGlobalConfigContextPath(std::string* pluginId);
    static const std::string pluginsUserConfigContextPath(std::string* username);
    static const std::string pluginUserConfigContextPath(std::string* username, std::string* pluginId);
    static const std::string pluginConfigContextPath(std::string* owner, std::string* name);
    static const std::string devicesContextPath(std::string* owner);
    static const std::string deviceContextPath(std::string* owner, std::string* device);
    static const std::string pluginIdToContextName(std::string* pluginId);
    static const std::string getChildFullName(std::string* parent, std::string* childShortName);
    static const std::string contextPathToContextName(std::string* path);
    static std::list  expandMaskListToContexts(std::string* masks, ContextManager* contextManager);
    static std::list  expandMaskListToContexts(std::string* masks, ContextManager* contextManager, CallerController* caller);
    static std::list  expandMaskListToContexts(std::string* masks, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);
    static std::list  expandMaskToContexts(std::string* mask, ContextManager* contextManager);
    static std::list  expandMaskToContexts(std::string* mask, ContextManager* contextManager, CallerController* caller);
    static std::list  expandMaskToContexts(std::string* mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);
    static std::list  expandMaskToPaths(std::string* mask, ContextManager* contextManager);
    static std::list  expandMaskToPaths(std::string* mask, ContextManager* contextManager, CallerController* caller);
    static std::list  expandMaskToPaths(std::string* mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);

private:
    static std::list  expandMaskPart(std::string* head, std::string* tail, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren);

public:
    static std::list  findChildren(std::string* rootsMask, ::java::lang::Class* contextClass, ContextManager* manager, CallerController* caller, bool resolveGroups);
    static std::list  findChildren(std::string* rootsMask, std::string* type, ContextManager* manager, CallerController* caller, bool resolveGroups);

private:
    static void acceptFinder(Context* context, ContextVisitor* visitor, CallerController* caller, bool resolveGroups) /* throws(ContextException) */;

public:
    static bool matchesToMask(std::string* mask, std::string* name);
    static bool matchesToType(std::string* type, ::java::util::Collection* requiredTypes);
    static bool matchesToType(::java::util::Collection* types, ::java::util::Collection* requiredTypes);
    static bool matchesToMask(std::string* mask, std::string* context, bool contextMayExtendMask, bool maskMayExtendContext);
    static bool masksIntersect(std::string* mask1, std::string* mask2, bool mask2MayExtendMask1, bool mask1MayExtendMask2);
    static bool isRelative(std::string* name);
    static bool isMask(std::string* name);
    static bool isValidContextType(std::string* s);
    static bool isValidContextName(std::string* s);
    static bool isValidContextMask(std::string* s);
    static bool isValidIdentifier(std::string* s);
    static bool isDerivedFrom(std::string* childType, std::string* parentType);
    static const std::string getParentPath(std::string* path);
    static const std::string getBaseGroup(std::string* group);
    static const std::string getVisualGroup(std::string* group);
    static const std::string getBaseType(std::string* type);
    static const std::string getSubtype(std::string* type);
    static const std::string getTypeForClass(::java::lang::Class* clazz);
    static std::map getEventFields(std::string* mask, std::string* event, CallerController* caller, ContextManager* contextManager);
    static std::map getVariableFields(std::string* mask, std::string* variable, CallerController* caller, ContextManager* contextManager);
    static ::com::tibbo::aggregate::common::action::ActionDefinition* getDefaultActionDefinition(Context* context, CallerController* caller);
    static const std::string createType(::java::lang::Class* clazz, std::string* deviceType);
    static bool isValidContextNameChar(char16_t c);

    // Generated
    ContextUtils();
protected:
    ContextUtils(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CONTEXT_NAME_PATTERN();
    static const std::string& CONTEXT_PATH_PATTERN();
    static const std::string& CONTEXT_MASK_PATTERN();
    static const std::string& CONTEXT_TYPE_PATTERN();
    static const std::string& ENTITY_NAME_PATTERN();
    static const std::string& IDENTIFIER_PATTERN();

private:
    static const std::string& CONTEXT_CLASS_SUFFIX();

public:
    static const std::string& CONTEXT_NAME_SEPARATOR();
    static const std::string& CONTEXT_TYPE_SEPARATOR();
    static const std::string& CONTEXT_GROUP_MASK();
    static const std::string& ENTITY_GROUP_MASK();
    static const std::string& CONTEXT_TYPE_ANY();
    static const std::string& ENTITY_GROUP_SEPARATOR();
    static const std::string& MASK_LIST_SEPARATOR();
    static const std::string& GROUP_DEFAULT();
    static const std::string& GROUP_SYSTEM();
    static const std::string& GROUP_REMOTE();
    static const std::string& GROUP_CUSTOM();
    static const std::string& GROUP_STATUS();
    static const std::string& GROUP_ACCESS();
    static const std::string& USERNAME_PATTERN();
    static const std::string& VARIABLES_GROUP_DS_SETTINGS();

private:
    ::java::lang::Class* getClass0();
    friend class ContextUtils_findChildren_1;
};
