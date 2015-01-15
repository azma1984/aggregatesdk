// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextUtils.java
#include <com/tibbo/aggregate/common/context/ContextUtils.h"

#include <com/tibbo/aggregate/common/action/ActionDefinition.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/ContextRuntimeException.h"
#include <com/tibbo/aggregate/common/context/ContextUtils_findChildren_1.h"
#include <com/tibbo/aggregate/common/context/ContextVisitor.h"
#include <com/tibbo/aggregate/common/context/Contexts.h"
#include <com/tibbo/aggregate/common/context/EventData.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"
/*
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/Math.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuffer.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/util/ArrayList.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Locale.h"
//#include <java/util/Map.h"
//#include <java/util/StringTokenizer.h"
//#include <java/util/regex/Pattern.h"
#include <SubArray.h"
#include <ObjectArray.h"
*/
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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::ContextUtils::ContextUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::ContextUtils::ContextUtils()
    : ContextUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_NAME_PATTERN()
{
    
    return CONTEXT_NAME_PATTERN_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_NAME_PATTERN_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_PATH_PATTERN()
{
    
    return CONTEXT_PATH_PATTERN_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_PATH_PATTERN_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_MASK_PATTERN()
{
    
    return CONTEXT_MASK_PATTERN_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_MASK_PATTERN_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_TYPE_PATTERN()
{
    
    return CONTEXT_TYPE_PATTERN_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_TYPE_PATTERN_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::ENTITY_NAME_PATTERN()
{
    
    return ENTITY_NAME_PATTERN_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::ENTITY_NAME_PATTERN_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::IDENTIFIER_PATTERN()
{
    
    return IDENTIFIER_PATTERN_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::IDENTIFIER_PATTERN_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_CLASS_SUFFIX()
{
    
    return CONTEXT_CLASS_SUFFIX_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_CLASS_SUFFIX_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_NAME_SEPARATOR()
{
    
    return CONTEXT_NAME_SEPARATOR_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_NAME_SEPARATOR_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_TYPE_SEPARATOR()
{
    
    return CONTEXT_TYPE_SEPARATOR_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_TYPE_SEPARATOR_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_GROUP_MASK()
{
    
    return CONTEXT_GROUP_MASK_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_GROUP_MASK_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::ENTITY_GROUP_MASK()
{
    
    return ENTITY_GROUP_MASK_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::ENTITY_GROUP_MASK_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_TYPE_ANY()
{
    
    return CONTEXT_TYPE_ANY_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::CONTEXT_TYPE_ANY_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::ENTITY_GROUP_SEPARATOR()
{
    
    return ENTITY_GROUP_SEPARATOR_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::ENTITY_GROUP_SEPARATOR_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::MASK_LIST_SEPARATOR()
{
    
    return MASK_LIST_SEPARATOR_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::MASK_LIST_SEPARATOR_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::GROUP_DEFAULT()
{
    
    return GROUP_DEFAULT_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::GROUP_DEFAULT_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::GROUP_SYSTEM()
{
    
    return GROUP_SYSTEM_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::GROUP_SYSTEM_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::GROUP_REMOTE()
{
    
    return GROUP_REMOTE_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::GROUP_REMOTE_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::GROUP_CUSTOM()
{
    
    return GROUP_CUSTOM_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::GROUP_CUSTOM_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::GROUP_STATUS()
{
    
    return GROUP_STATUS_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::GROUP_STATUS_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::GROUP_ACCESS()
{
    
    return GROUP_ACCESS_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::GROUP_ACCESS_;

const int com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE;

const int com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION;

const int com::tibbo::aggregate::common::context::ContextUtils::ENTITY_EVENT;

const int com::tibbo::aggregate::common::context::ContextUtils::ENTITY_ACTION;

std::string& com::tibbo::aggregate::common::context::ContextUtils::USERNAME_PATTERN()
{
    
    return USERNAME_PATTERN_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::USERNAME_PATTERN_;

std::string& com::tibbo::aggregate::common::context::ContextUtils::VARIABLES_GROUP_DS_SETTINGS()
{
    
    return VARIABLES_GROUP_DS_SETTINGS_;
}
std::string com::tibbo::aggregate::common::context::ContextUtils::VARIABLES_GROUP_DS_SETTINGS_;

std::string com::tibbo::aggregate::common::context::ContextUtils::createName(std::stringArray*/*...*/ parts)
{
    
    auto res = new std::stringBuffer();
    for (auto i = int(0); i < parts)->length; i++) {
        if(i > 0) {
            res)->append(CONTEXT_NAME_SEPARATOR_);
        }
        res)->append((*parts)[i]);
    }
    return res)->toString();
}

std::string com::tibbo::aggregate::common::context::ContextUtils::createGroup(std::stringArray*/*...*/ parts)
{
    
    auto res = new std::stringBuffer();
    for (auto i = int(0); i < parts)->length; i++) {
        if(i == parts)->length - int(1) && (*parts)[i] == 0) {
            break;
        }
        if(i > 0) {
            res)->append(ENTITY_GROUP_SEPARATOR_);
        }
        res)->append((*parts)[i]);
    }
    return res)->toString();
}

std::string com::tibbo::aggregate::common::context::ContextUtils::userContextPath(const std::string & username)
{
    
    return createName(new std::stringArray({Contexts::CTX_USERS(), username}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::deviceServersContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DEVICESERVERS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::dsGroupsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DSGROUPS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::dsGroupContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({dsGroupsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::deviceGroupsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DEVGROUPS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::deviceGroupContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({deviceGroupsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::groupContextPath(const std::string & username, const std::string & containerContextName, const std::string & name)
{
    
    return createName(new std::stringArray({groupsContextPath(username, containerContextName), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::groupsContextPath(const std::string & username, const std::string & containerContextName)
{
    
    return createName(new std::stringArray({userContextPath(username), groupsContextName(containerContextName)}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::groupsContextName(const std::string & containerContextName)
{
    
    return std::stringBuilder().append(containerContextName)->append(u"_"_j)
        ->append(Contexts::CTX_GROUPS())->toString();
}

std::string com::tibbo::aggregate::common::context::ContextUtils::alertContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({alertsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::alertsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_ALERTS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::jobsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_JOBS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::jobContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({jobsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::queriesContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_QUERIES()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::queryContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({queriesContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::compliancePoliciesContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_COMPLIANCE_POLICIES()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::compliancePolicyContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({compliancePoliciesContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::reportsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_REPORTS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::reportContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({reportsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::trackersContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_TRACKERS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::trackerContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({trackersContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::commonDataContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_COMMON_DATA()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::commonTableContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({commonDataContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::eventFiltersContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_EVENT_FILTERS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::eventFilterContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({eventFiltersContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::widgetContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({widgetsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::widgetsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_WIDGETS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::dashboardsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DASHBOARDS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::dashboardContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({dashboardsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::autorunActionsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_AUTORUN()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::autorunActionContextName(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({autorunActionsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::favouritesContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_FAVOURITES()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::favouriteContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({favouritesContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::scriptContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({scriptsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::scriptsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_SCRIPTS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::modelsContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_MODELS()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::modelContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({modelsContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::deviceServerContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({deviceServersContextPath(owner), name}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::pluginGlobalConfigContextPath(const std::string & pluginId)
{
    
    return createName(new std::stringArray({Contexts::CTX_PLUGINS_CONFIG(), pluginIdToContextName(pluginId)}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::pluginsUserConfigContextPath(const std::string & username)
{
    
    return createName(new std::stringArray({userContextPath(username), Contexts::CTX_PLUGINS_CONFIG()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::pluginUserConfigContextPath(const std::string & username, const std::string & pluginId)
{
    
    return createName(new std::stringArray({userContextPath(username), Contexts::CTX_PLUGINS_CONFIG(), pluginIdToContextName(pluginId)}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::pluginConfigContextPath(const std::string & owner, const std::string & name)
{
    
    return createName(new std::stringArray({deviceServersContextPath(owner), name, Contexts::CTX_PLUGIN_CONFIG()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::devicesContextPath(const std::string & owner)
{
    
    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DEVICES()}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::deviceContextPath(const std::string & owner, const std::string & device)
{
    
    return createName(new std::stringArray({devicesContextPath(owner), device}));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::pluginIdToContextName(const std::string & pluginId)
{
    
    return pluginId)->replace(static_cast< ::java::lang::CharSequence* >(u"."_j), static_cast< ::java::lang::CharSequence* >(u"_"_j)))->replace(static_cast< ::java::lang::CharSequence* >(u"-"_j), static_cast< ::java::lang::CharSequence* >(u""_j));
}

std::string com::tibbo::aggregate::common::context::ContextUtils::getChildFullName(const std::string & parent, const std::string & childShortName)
{
    
    if(parent)->equals(Contexts::CTX_ROOT()))) {
        return childShortName;
    } else {
        return std::stringBuilder().append(parent)->append(CONTEXT_NAME_SEPARATOR_)
            ->append(childShortName)->toString();
    }
}

std::string com::tibbo::aggregate::common::context::ContextUtils::contextPathToContextName(const std::string & path)
{
    
    return path)->replace(CONTEXT_NAME_SEPARATOR_)->charAt(int(0)), u"_"_j)->charAt(int(0)));
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskListToContexts(const std::string & masks, ContextManager* contextManager)
{
    
    return expandMaskListToContexts(masks, contextManager, 0, false);
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskListToContexts(const std::string & masks, ContextManager* contextManager, CallerController* caller)
{
    
    return expandMaskListToContexts(masks, contextManager, caller, false);
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskListToContexts(const std::string & masks, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
{
    
    std::list  result = new ::java::util::LinkedList();
    auto maskList = ::com::tibbo::aggregate::common::util::StringUtils::split(masks, MASK_LIST_SEPARATOR_)->charAt(int(0)));
    for (auto _i = maskList)->iterator(); _i->hasNext(); ) {
        const std::string & mask = java_cast< const std::string & >(_i->next());
        {
            auto contexts = expandMaskToContexts(mask, contextManager, caller, useVisibleChildren);
            result)->addAll(static_cast< ::java::util::Collection* >(contexts));
        }
    }
    return result;
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskToContexts(const std::string & mask, ContextManager* contextManager)
{
    
    return expandMaskToContexts(mask, contextManager, 0, false);
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskToContexts(const std::string & mask, ContextManager* contextManager, CallerController* caller)
{
    
    return expandMaskToContexts(mask, contextManager, caller, false);
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskToContexts(const std::string & mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
{
    
    std::list  res = new ::java::util::LinkedList();
    auto paths = expandMaskToPaths(mask, contextManager, caller, useVisibleChildren);
    for (auto _i = paths)->iterator(); _i->hasNext(); ) {
        const std::string & path = java_cast< const std::string & >(_i->next());
        {
            auto con = java_cast< Context* >(contextManager)->get(path, caller));
            if(con != 0) {
                res)->add(con));
            }
        }
    }
    return res;
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskToPaths(const std::string & mask, ContextManager* contextManager)
{
    
    return expandMaskToPaths(mask, contextManager, 0, false);
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskToPaths(const std::string & mask, ContextManager* contextManager, CallerController* caller)
{
    
    return expandMaskToPaths(mask, contextManager, caller, false);
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskToPaths(const std::string & mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
{
    
    std::list  result = new ::java::util::LinkedList();
    auto parts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
    for (auto i = int(0); i < parts)->size(); i++) {
        if(java_cast< const std::string & >(parts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
            auto head = new std::stringBuffer();
            for (auto j = int(0); j < i; j++) {
                if(j > 0) {
                    head)->append(CONTEXT_NAME_SEPARATOR_);
                }
                head)->append(java_cast< const std::string & >(parts)->get(j)));
            }
            auto tail = new std::stringBuffer();
            for (auto j = i + int(1); j < parts)->size(); j++) {
                tail)->append(CONTEXT_NAME_SEPARATOR_);
                tail)->append(java_cast< const std::string & >(parts)->get(j)));
            }
            auto res = expandMaskPart(head)->toString(), tail)->toString(), contextManager, caller, useVisibleChildren);
            result)->addAll(static_cast< ::java::util::Collection* >(res));
            return result;
        }
    }
    if(java_cast< Context* >(contextManager)->get(mask, caller)) != 0) {
        result)->add(mask));
    }
    return result;
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::expandMaskPart(const std::string & head, const std::string & tail, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
{
    
    std::list  result = new ::java::util::LinkedList();
    auto con = java_cast< Context* >(contextManager)->get(head, caller));
    if(con == 0) {
        return result;
    }
    if(con)->isMapped()) {
        auto const mappedChildren = con)->getMappedChildren(caller);
        for (auto _i = mappedChildren)->iterator(); _i->hasNext(); ) {
            Context* child = java_cast< Context* >(_i->next());
            {
                result)->add(child)->getPath()));
            }
        }
    } else {
        auto children = useVisibleChildren ? static_cast< std::list  >(con)->getVisibleChildren(caller)) : static_cast< std::list  >(con)->getChildren(caller));
        for (auto _i = children)->iterator(); _i->hasNext(); ) {
            Context* child = java_cast< Context* >(_i->next());
            {
                if(useVisibleChildren) {
                    auto realChild = java_cast< Context* >(con)->getChild(child)->getName()));
                    if(realChild == 0 || !realChild)->getPath())->equals(child)->getPath()))) {
                        auto res = expandMaskToPaths(std::stringBuilder().append(child)->getPath())->append(tail)->toString(), contextManager, caller, useVisibleChildren);
                        result)->addAll(static_cast< ::java::util::Collection* >(res));
                        continue;
                    }
                }
                result)->addAll(static_cast< ::java::util::Collection* >(expandMaskToPaths(std::stringBuilder().append(head)->append(CONTEXT_NAME_SEPARATOR_)
                    ->append(child)->getName())
                    ->append(tail)->toString(), contextManager, caller, useVisibleChildren)));
            }
        }
    }
    return result;
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::findChildren(const std::string & rootsMask, ::java::lang::Class* contextClass, ContextManager* manager, CallerController* caller, bool resolveGroups)
{
    
    return findChildren(rootsMask, getTypeForClass(contextClass), manager, caller, resolveGroups);
}

java::util::List* com::tibbo::aggregate::common::context::ContextUtils::findChildren(const std::string & rootsMask, const std::string & type, ContextManager* manager, CallerController* caller, bool resolveGroups)
{
    
    std::list  const res = new ::java::util::ArrayList();
    ContextVisitor* visitor = new ContextUtils_findChildren_1(type, res);
    auto roots = expandMaskToContexts(rootsMask, manager, caller);
    for (auto _i = roots)->iterator(); _i->hasNext(); ) {
        Context* root = java_cast< Context* >(_i->next());
        {
            try {
                acceptFinder(root, visitor, caller, resolveGroups);
            } catch (::java::lang::Throwable* ex) {
                throw new ContextRuntimeException(ex)->getMessage(), ex);
            }
        }
    }
    return res;
}

void com::tibbo::aggregate::common::context::ContextUtils::acceptFinder(Context* context, ContextVisitor* visitor, CallerController* caller, bool resolveGroups) /* throws(ContextException) */
{
    
    visitor->visit(context);
    auto children = resolveGroups ? static_cast< std::list  >(context)->getMappedChildren(caller)) : static_cast< std::list  >(context)->getChildren(caller));
    for (auto _i = children)->iterator(); _i->hasNext(); ) {
        Context* child = java_cast< Context* >(_i->next());
        {
            acceptFinder(child, visitor, caller, resolveGroups);
        }
    }
}

bool com::tibbo::aggregate::common::context::ContextUtils::matchesToMask(const std::string & mask, const std::string & name)
{
    
    return matchesToMask(mask, name, false, false);
}

bool com::tibbo::aggregate::common::context::ContextUtils::matchesToType(const std::string & type, ::java::util::Collection* requiredTypes)
{
    
    if(requiredTypes == 0 || requiredTypes)->isEmpty() || type == 0) {
        return true;
    }
    if(requiredTypes)->contains(CONTEXT_TYPE_ANY_)) {
        return true;
    }
    for (auto _i = requiredTypes)->iterator(); _i->hasNext(); ) {
        const std::string & contextType = java_cast< const std::string & >(_i->next());
        {
            if(isDerivedFrom(type, contextType)) {
                return true;
            }
        }
    }
    return false;
}

bool com::tibbo::aggregate::common::context::ContextUtils::matchesToType(::java::util::Collection* types, ::java::util::Collection* requiredTypes)
{
    
    auto result = true;
    for (auto _i = types)->iterator(); _i->hasNext(); ) {
        const std::string & type = java_cast< const std::string & >(_i->next());
        {
            result &= matchesToType(type, requiredTypes);
        }
    }
    return result;
}

bool com::tibbo::aggregate::common::context::ContextUtils::matchesToMask(const std::string & mask, const std::string & context, bool contextMayExtendMask, bool maskMayExtendContext)
{
    
    if(mask == 0 || context == 0) {
        return true;
    }
    if(!isMask(mask)) {
        if(contextMayExtendMask && maskMayExtendContext) {
            auto length = ::java::lang::Math::max(mask)->length(), context)->length());
            return mask)->substring(0, length))->equals(context)->substring(0, length)));
        } else {
            auto equals = mask)->equals(context));
            if(maskMayExtendContext) {
                return equals || (mask)->length() > context)->length() && mask)->startsWith(context) && mask)->charAt(context)->length()) == CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
            } else if(contextMayExtendMask) {
                return equals || (context)->length() > mask)->length() && context)->startsWith(mask) && context)->charAt(mask)->length()) == CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
            } else {
                return equals;
            }
        }
    }
    auto maskParts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
    auto nameParts = ::com::tibbo::aggregate::common::util::StringUtils::split(context, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
    if(maskParts)->size() > nameParts)->size() && !maskMayExtendContext) {
        return false;
    }
    if(maskParts)->size() < nameParts)->size() && !contextMayExtendMask) {
        return false;
    }
    for (auto i = int(0); i < ::java::lang::Math::min(maskParts)->size(), nameParts)->size()); i++) {
        if(java_cast< const std::string & >(maskParts)->get(i)))->equals(CONTEXT_GROUP_MASK_)) && !java_cast< const std::string & >(nameParts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
            continue;
        } else {
            if(!java_cast< const std::string & >(maskParts)->get(i)))->equals(java_cast< const std::string & >(nameParts)->get(i))))) {
                return false;
            }
        }
    }
    return true;
}

bool com::tibbo::aggregate::common::context::ContextUtils::masksIntersect(const std::string & mask1, const std::string & mask2, bool mask2MayExtendMask1, bool mask1MayExtendMask2)
{
    
    auto mask1Parts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask1, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
    auto mask2Parts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask2, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
    if(mask1Parts)->size() > mask2Parts)->size() && !mask1MayExtendMask2) {
        return false;
    }
    if(mask1Parts)->size() < mask2Parts)->size() && !mask2MayExtendMask1) {
        return false;
    }
    for (auto i = int(0); i < ::java::lang::Math::min(mask1Parts)->size(), mask2Parts)->size()); i++) {
        if(java_cast< const std::string & >(mask1Parts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
            continue;
        } else if(java_cast< const std::string & >(mask2Parts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
            continue;
        } else {
            if(!java_cast< const std::string & >(mask1Parts)->get(i)))->equals(java_cast< const std::string & >(mask2Parts)->get(i))))) {
                return false;
            }
        }
    }
    return true;
}

bool com::tibbo::aggregate::common::context::ContextUtils::isRelative(const std::string & name)
{
    
    return name)->startsWith(CONTEXT_NAME_SEPARATOR_);
}

bool com::tibbo::aggregate::common::context::ContextUtils::isMask(const std::string & name)
{
    
    return name)->indexOf(static_cast< int >(CONTEXT_GROUP_MASK_)->charAt(int(0)))) > -int(1);
}

bool com::tibbo::aggregate::common::context::ContextUtils::isValidContextType(const std::string & s)
{
    
    return CONTEXT_TYPE_ANY_)->equals(s)) || ::java::util::regex::Pattern::matches(CONTEXT_TYPE_PATTERN_, s);
}

bool com::tibbo::aggregate::common::context::ContextUtils::isValidContextName(const std::string & s)
{
    
    if(s == 0) {
        return false;
    }
    return ::java::util::regex::Pattern::matches(CONTEXT_NAME_PATTERN_, s);
}

bool com::tibbo::aggregate::common::context::ContextUtils::isValidContextMask(const std::string & s)
{
    
    if(s == 0) {
        return false;
    }
    return ::java::util::regex::Pattern::matches(CONTEXT_MASK_PATTERN_, s);
}

bool com::tibbo::aggregate::common::context::ContextUtils::isValidIdentifier(const std::string & s)
{
    
    if(s == 0) {
        return false;
    }
    return ::java::util::regex::Pattern::matches(IDENTIFIER_PATTERN_, s);
}

bool com::tibbo::aggregate::common::context::ContextUtils::isDerivedFrom(const std::string & childType, const std::string & parentType)
{
    
    auto pst = new ::java::util::StringTokenizer(parentType, CONTEXT_TYPE_SEPARATOR_);
    auto cst = new ::java::util::StringTokenizer(childType, CONTEXT_TYPE_SEPARATOR_);
    if(cst)->countTokens() < pst)->countTokens()) {
        return false;
    }
    while (pst)->hasMoreTokens()) {
        if(!pst)->nextToken())->equals(cst)->nextToken()))) {
            return false;
        }
    }
    return true;
}

std::string com::tibbo::aggregate::common::context::ContextUtils::getParentPath(const std::string & path)
{
    
    if(isRelative(path)) {
        std::cout <<"Cannot find parent of a relative path: "_j)->append(path)->toString());
    }
    auto index = path)->lastIndexOf(CONTEXT_NAME_SEPARATOR_);
    return index != -int(1) ? path)->substring(0, index) : static_cast< const std::string & >(0);
}

std::string com::tibbo::aggregate::common::context::ContextUtils::getBaseGroup(const std::string & group)
{
    
    if(group == 0) {
        return 0;
    }
    auto index = group)->indexOf(static_cast< int >(ENTITY_GROUP_SEPARATOR_)->charAt(int(0))));
    return index == -int(1) ? group : group)->substring(0, index);
}

std::string com::tibbo::aggregate::common::context::ContextUtils::getVisualGroup(const std::string & group)
{
    
    if(group == 0) {
        return 0;
    }
    auto index = group)->indexOf(static_cast< int >(ENTITY_GROUP_SEPARATOR_)->charAt(int(0))));
    return index == -int(1) ? static_cast< const std::string & >(0) : group)->substring(index + int(1), group)->length());
}

std::string com::tibbo::aggregate::common::context::ContextUtils::getBaseType(const std::string & type)
{
    
    auto st = new ::java::util::StringTokenizer(type, CONTEXT_TYPE_SEPARATOR_);
    return st)->nextToken();
}

std::string com::tibbo::aggregate::common::context::ContextUtils::getSubtype(const std::string & type)
{
    
    if(type == 0) {
        return 0;
    }
    auto index = type)->lastIndexOf(static_cast< int >(CONTEXT_TYPE_SEPARATOR_)->charAt(int(0))));
    return index == -int(1) ? static_cast< const std::string & >(0) : type)->substring(index + int(1), type)->length());
}

std::string com::tibbo::aggregate::common::context::ContextUtils::getTypeForClass(::java::lang::Class* clazz)
{
    
    auto name = clazz)->getSimpleName();
    name = std::stringBuilder().append(name)->substring(0, 1))->toLowerCase(::java::util::Locale::ENGLISH()))->append(name)->substring(1, name)->length()))->toString();
    if(name)->endsWith(CONTEXT_CLASS_SUFFIX_)) {
        name = name)->substring(0, name)->length() - CONTEXT_CLASS_SUFFIX_)->length());
    }
    return name;
}

java::util::Map* com::tibbo::aggregate::common::context::ContextUtils::getEventFields(const std::string & mask, const std::string & event, CallerController* caller, ContextManager* contextManager)
{
    
    auto contexts = expandMaskToContexts(mask, contextManager, caller);
    std::map fields = new ::java::util::LinkedHashMap();
    for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
        Context* con = java_cast< Context* >(_i->next());
        {
            auto edata = con)->getEventData(event);
            if(edata != 0) {
                auto rf = edata)->getDefinition())->getFormat();
                if(rf != 0) {
                    for (auto _i = rf)->iterator(); _i->hasNext(); ) {
                        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
                        {
                            fields)->put(ff)->getName(), ff)->toString());
                        }
                    }
                }
            }
        }
    }
    return fields;
}

java::util::Map* com::tibbo::aggregate::common::context::ContextUtils::getVariableFields(const std::string & mask, const std::string & variable, CallerController* caller, ContextManager* contextManager)
{
    
    auto contexts = expandMaskToContexts(mask, contextManager, caller);
    std::map fields = new ::java::util::LinkedHashMap();
    for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
        Context* con = java_cast< Context* >(_i->next());
        {
            auto vd = con)->getVariableDefinition(variable);
            if(vd != 0) {
                auto rf = vd)->getFormat();
                if(rf != 0) {
                    for (auto _i = rf)->iterator(); _i->hasNext(); ) {
                        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
                        {
                            if(ff)->isHidden()) {
                                continue;
                            }
                            fields)->put(ff)->getName(), ff)->toString());
                        }
                    }
                }
            }
        }
    }
    return fields;
}

com::tibbo::aggregate::common::action::ActionDefinition* com::tibbo::aggregate::common::context::ContextUtils::getDefaultActionDefinition(Context* context, CallerController* caller)
{
    
    auto actions = context)->getActionDefinitions(caller);
    for (auto _i = actions)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::action::ActionDefinition* def = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
        {
            if(def)->isDefault()) {
                return def;
            }
        }
    }
    return 0;
}

std::string com::tibbo::aggregate::common::context::ContextUtils::createType(::java::lang::Class* clazz, const std::string & deviceType)
{
    
    return std::stringBuilder().append(getTypeForClass(clazz))->append(CONTEXT_TYPE_SEPARATOR_)
        ->append(deviceType)->toString();
}

bool com::tibbo::aggregate::common::context::ContextUtils::isValidContextNameChar(char16_t c)
{
    
    return (c >= u'a' && c <= u'z') || (c >= u'A' && c <= u'Z') || (c >= u'0' && c <= u'9')|| c == u'_';
}



java::lang::Class* com::tibbo::aggregate::common::context::ContextUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.ContextUtils", 47);
    return c;
}

void com::tibbo::aggregate::common::context::ContextUtils::clinit()
{
struct string_init_ {
    string_init_() {
    CONTEXT_NAME_PATTERN_ = u"\\w*"_j;
    CONTEXT_PATH_PATTERN_ = u"[\\w|\\.]+"_j;
    CONTEXT_MASK_PATTERN_ = u"[\\w|\\.|\\*]+"_j;
    CONTEXT_TYPE_PATTERN_ = u"[\\w|\\.]+"_j;
    ENTITY_NAME_PATTERN_ = u"\\w+"_j;
    IDENTIFIER_PATTERN_ = u"\\w*"_j;
    CONTEXT_CLASS_SUFFIX_ = u"Context"_j;
    CONTEXT_NAME_SEPARATOR_ = u"."_j;
    CONTEXT_TYPE_SEPARATOR_ = u"."_j;
    CONTEXT_GROUP_MASK_ = u"*"_j;
    ENTITY_GROUP_MASK_ = u"*"_j;
    CONTEXT_TYPE_ANY_ = u"*"_j;
    ENTITY_GROUP_SEPARATOR_ = u"|"_j;
    MASK_LIST_SEPARATOR_ = u" "_j;
    GROUP_DEFAULT_ = u"default"_j;
    GROUP_SYSTEM_ = u"system"_j;
    GROUP_REMOTE_ = u"remote"_j;
    GROUP_CUSTOM_ = u"custom"_j;
    GROUP_STATUS_ = u"status"_j;
    GROUP_ACCESS_ = u"access"_j;
    USERNAME_PATTERN_ = u"%"_j;
    VARIABLES_GROUP_DS_SETTINGS_ = u"ds_settings"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* com::tibbo::aggregate::common::context::ContextUtils::getClass0()
{
    return class_();
}

