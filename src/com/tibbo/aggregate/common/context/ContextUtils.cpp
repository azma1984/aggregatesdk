//// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextUtils.java
#include "context/ContextUtils.h"
//
//
//
//ContextUtils::ContextUtils(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//ContextUtils::ContextUtils()
//    : ContextUtils(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//std::string& ContextUtils::CONTEXT_NAME_PATTERN()
//{
//    
//    return CONTEXT_NAME_PATTERN_;
//}
//std::string ContextUtils::CONTEXT_NAME_PATTERN_;
//
//std::string& ContextUtils::CONTEXT_PATH_PATTERN()
//{
//    
//    return CONTEXT_PATH_PATTERN_;
//}
//std::string ContextUtils::CONTEXT_PATH_PATTERN_;
//
//std::string& ContextUtils::CONTEXT_MASK_PATTERN()
//{
//    
//    return CONTEXT_MASK_PATTERN_;
//}
//std::string ContextUtils::CONTEXT_MASK_PATTERN_;
//
//std::string& ContextUtils::CONTEXT_TYPE_PATTERN()
//{
//    
//    return CONTEXT_TYPE_PATTERN_;
//}
//std::string ContextUtils::CONTEXT_TYPE_PATTERN_;
//
//std::string& ContextUtils::ENTITY_NAME_PATTERN()
//{
//    
//    return ENTITY_NAME_PATTERN_;
//}
//std::string ContextUtils::ENTITY_NAME_PATTERN_;
//
//std::string& ContextUtils::IDENTIFIER_PATTERN()
//{
//    
//    return IDENTIFIER_PATTERN_;
//}
//std::string ContextUtils::IDENTIFIER_PATTERN_;
//
//std::string& ContextUtils::CONTEXT_CLASS_SUFFIX()
//{
//    
//    return CONTEXT_CLASS_SUFFIX_;
//}
//std::string ContextUtils::CONTEXT_CLASS_SUFFIX_;
//
//std::string& ContextUtils::CONTEXT_NAME_SEPARATOR()
//{
//    
//    return CONTEXT_NAME_SEPARATOR_;
//}
//std::string ContextUtils::CONTEXT_NAME_SEPARATOR_;
//
//std::string& ContextUtils::CONTEXT_TYPE_SEPARATOR()
//{
//    
//    return CONTEXT_TYPE_SEPARATOR_;
//}
//std::string ContextUtils::CONTEXT_TYPE_SEPARATOR_;
//
//std::string& ContextUtils::CONTEXT_GROUP_MASK()
//{
//    
//    return CONTEXT_GROUP_MASK_;
//}
//std::string ContextUtils::CONTEXT_GROUP_MASK_;
//
//std::string& ContextUtils::ENTITY_GROUP_MASK()
//{
//    
//    return ENTITY_GROUP_MASK_;
//}
//std::string ContextUtils::ENTITY_GROUP_MASK_;
//
//std::string& ContextUtils::CONTEXT_TYPE_ANY()
//{
//    
//    return CONTEXT_TYPE_ANY_;
//}
//std::string ContextUtils::CONTEXT_TYPE_ANY_;
//
//std::string& ContextUtils::ENTITY_GROUP_SEPARATOR()
//{
//    
//    return ENTITY_GROUP_SEPARATOR_;
//}
//std::string ContextUtils::ENTITY_GROUP_SEPARATOR_;
//
//std::string& ContextUtils::MASK_LIST_SEPARATOR()
//{
//    
//    return MASK_LIST_SEPARATOR_;
//}
//std::string ContextUtils::MASK_LIST_SEPARATOR_;
//
//std::string& ContextUtils::GROUP_DEFAULT()
//{
//    
//    return GROUP_DEFAULT_;
//}
//std::string ContextUtils::GROUP_DEFAULT_;
//
//std::string& ContextUtils::GROUP_SYSTEM()
//{
//    
//    return GROUP_SYSTEM_;
//}
//std::string ContextUtils::GROUP_SYSTEM_;
//
//std::string& ContextUtils::GROUP_REMOTE()
//{
//    
//    return GROUP_REMOTE_;
//}
//std::string ContextUtils::GROUP_REMOTE_;
//
//std::string& ContextUtils::GROUP_CUSTOM()
//{
//    
//    return GROUP_CUSTOM_;
//}
//std::string ContextUtils::GROUP_CUSTOM_;
//
//std::string& ContextUtils::GROUP_STATUS()
//{
//    
//    return GROUP_STATUS_;
//}
//std::string ContextUtils::GROUP_STATUS_;
//
//std::string& ContextUtils::GROUP_ACCESS()
//{
//    
//    return GROUP_ACCESS_;
//}
//std::string ContextUtils::GROUP_ACCESS_;
//
//const int ContextUtils::ENTITY_VARIABLE;
//
//const int ContextUtils::ENTITY_FUNCTION;
//
//const int ContextUtils::ENTITY_EVENT;
//
//const int ContextUtils::ENTITY_ACTION;
//
//std::string& ContextUtils::USERNAME_PATTERN()
//{
//    
//    return USERNAME_PATTERN_;
//}
//std::string ContextUtils::USERNAME_PATTERN_;
//
//std::string& ContextUtils::VARIABLES_GROUP_DS_SETTINGS()
//{
//    
//    return VARIABLES_GROUP_DS_SETTINGS_;
//}
//std::string ContextUtils::VARIABLES_GROUP_DS_SETTINGS_;
//
//std::string ContextUtils::createName(std::stringArray*/*...*/ parts)
//{
//    
//    auto res = new std::stringBuffer();
//    for (auto i = int(0); i < parts)->length; i++) {
//        if(i > 0) {
//            res)->append(CONTEXT_NAME_SEPARATOR_);
//        }
//        res)->append((*parts)[i]);
//    }
//    return res)->toString();
//}
//
//std::string ContextUtils::createGroup(std::stringArray*/*...*/ parts)
//{
//    
//    auto res = new std::stringBuffer();
//    for (auto i = int(0); i < parts)->length; i++) {
//        if(i == parts)->length - int(1) && (*parts)[i] == 0) {
//            break;
//        }
//        if(i > 0) {
//            res)->append(ENTITY_GROUP_SEPARATOR_);
//        }
//        res)->append((*parts)[i]);
//    }
//    return res)->toString();
//}
//
//std::string ContextUtils::userContextPath(const std::string & username)
//{
//    
//    return createName(new std::stringArray({Contexts::CTX_USERS(), username}));
//}
//
//std::string ContextUtils::deviceServersContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DEVICESERVERS()}));
//}
//
//std::string ContextUtils::dsGroupsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DSGROUPS()}));
//}
//
//std::string ContextUtils::dsGroupContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({dsGroupsContextPath(owner), name}));
//}
//
//std::string ContextUtils::deviceGroupsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DEVGROUPS()}));
//}
//
//std::string ContextUtils::deviceGroupContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({deviceGroupsContextPath(owner), name}));
//}
//
//std::string ContextUtils::groupContextPath(const std::string & username, const std::string & containerContextName, const std::string & name)
//{
//    
//    return createName(new std::stringArray({groupsContextPath(username, containerContextName), name}));
//}
//
//std::string ContextUtils::groupsContextPath(const std::string & username, const std::string & containerContextName)
//{
//    
//    return createName(new std::stringArray({userContextPath(username), groupsContextName(containerContextName)}));
//}
//
//std::string ContextUtils::groupsContextName(const std::string & containerContextName)
//{
//    
//    return std::stringBuilder().append(containerContextName)->append(u"_"_j)
//        ->append(Contexts::CTX_GROUPS())->toString();
//}
//
//std::string ContextUtils::alertContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({alertsContextPath(owner), name}));
//}
//
//std::string ContextUtils::alertsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_ALERTS()}));
//}
//
//std::string ContextUtils::jobsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_JOBS()}));
//}
//
//std::string ContextUtils::jobContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({jobsContextPath(owner), name}));
//}
//
//std::string ContextUtils::queriesContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_QUERIES()}));
//}
//
//std::string ContextUtils::queryContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({queriesContextPath(owner), name}));
//}
//
//std::string ContextUtils::compliancePoliciesContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_COMPLIANCE_POLICIES()}));
//}
//
//std::string ContextUtils::compliancePolicyContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({compliancePoliciesContextPath(owner), name}));
//}
//
//std::string ContextUtils::reportsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_REPORTS()}));
//}
//
//std::string ContextUtils::reportContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({reportsContextPath(owner), name}));
//}
//
//std::string ContextUtils::trackersContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_TRACKERS()}));
//}
//
//std::string ContextUtils::trackerContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({trackersContextPath(owner), name}));
//}
//
//std::string ContextUtils::commonDataContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_COMMON_DATA()}));
//}
//
//std::string ContextUtils::commonTableContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({commonDataContextPath(owner), name}));
//}
//
//std::string ContextUtils::eventFiltersContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_EVENT_FILTERS()}));
//}
//
//std::string ContextUtils::eventFilterContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({eventFiltersContextPath(owner), name}));
//}
//
//std::string ContextUtils::widgetContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({widgetsContextPath(owner), name}));
//}
//
//std::string ContextUtils::widgetsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_WIDGETS()}));
//}
//
//std::string ContextUtils::dashboardsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DASHBOARDS()}));
//}
//
//std::string ContextUtils::dashboardContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({dashboardsContextPath(owner), name}));
//}
//
//std::string ContextUtils::autorunActionsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_AUTORUN()}));
//}
//
//std::string ContextUtils::autorunActionContextName(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({autorunActionsContextPath(owner), name}));
//}
//
//std::string ContextUtils::favouritesContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_FAVOURITES()}));
//}
//
//std::string ContextUtils::favouriteContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({favouritesContextPath(owner), name}));
//}
//
//std::string ContextUtils::scriptContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({scriptsContextPath(owner), name}));
//}
//
//std::string ContextUtils::scriptsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_SCRIPTS()}));
//}
//
//std::string ContextUtils::modelsContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_MODELS()}));
//}
//
//std::string ContextUtils::modelContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({modelsContextPath(owner), name}));
//}
//
//std::string ContextUtils::deviceServerContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({deviceServersContextPath(owner), name}));
//}
//
//std::string ContextUtils::pluginGlobalConfigContextPath(const std::string & pluginId)
//{
//    
//    return createName(new std::stringArray({Contexts::CTX_PLUGINS_CONFIG(), pluginIdToContextName(pluginId)}));
//}
//
//std::string ContextUtils::pluginsUserConfigContextPath(const std::string & username)
//{
//    
//    return createName(new std::stringArray({userContextPath(username), Contexts::CTX_PLUGINS_CONFIG()}));
//}
//
//std::string ContextUtils::pluginUserConfigContextPath(const std::string & username, const std::string & pluginId)
//{
//    
//    return createName(new std::stringArray({userContextPath(username), Contexts::CTX_PLUGINS_CONFIG(), pluginIdToContextName(pluginId)}));
//}
//
//std::string ContextUtils::pluginConfigContextPath(const std::string & owner, const std::string & name)
//{
//    
//    return createName(new std::stringArray({deviceServersContextPath(owner), name, Contexts::CTX_PLUGIN_CONFIG()}));
//}
//
//std::string ContextUtils::devicesContextPath(const std::string & owner)
//{
//    
//    return createName(new std::stringArray({userContextPath(owner), Contexts::CTX_DEVICES()}));
//}
//
//std::string ContextUtils::deviceContextPath(const std::string & owner, const std::string & device)
//{
//    
//    return createName(new std::stringArray({devicesContextPath(owner), device}));
//}
//
//std::string ContextUtils::pluginIdToContextName(const std::string & pluginId)
//{
//    
//    return pluginId)->replace(static_cast< ::java::lang::CharSequence* >(u"."_j), static_cast< ::java::lang::CharSequence* >(u"_"_j)))->replace(static_cast< ::java::lang::CharSequence* >(u"-"_j), static_cast< ::java::lang::CharSequence* >(u""_j));
//}
//
//std::string ContextUtils::getChildFullName(const std::string & parent, const std::string & childShortName)
//{
//    
//    if(parent)->equals(Contexts::CTX_ROOT()))) {
//        return childShortName;
//    } else {
//        return std::stringBuilder().append(parent)->append(CONTEXT_NAME_SEPARATOR_)
//            ->append(childShortName)->toString();
//    }
//}
//
//std::string ContextUtils::contextPathToContextName(const std::string & path)
//{
//    
//    return path)->replace(CONTEXT_NAME_SEPARATOR_)->charAt(int(0)), u"_"_j)->charAt(int(0)));
//}
//
//java::util::List* ContextUtils::expandMaskListToContexts(const std::string & masks, ContextManager* contextManager)
//{
//    
//    return expandMaskListToContexts(masks, contextManager, 0, false);
//}
//
//java::util::List* ContextUtils::expandMaskListToContexts(const std::string & masks, ContextManager* contextManager, CallerController* caller)
//{
//    
//    return expandMaskListToContexts(masks, contextManager, caller, false);
//}
//
//java::util::List* ContextUtils::expandMaskListToContexts(const std::string & masks, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
//{
//    
//    std::list  result = new ::java::util::LinkedList();
//    auto maskList = ::com::tibbo::aggregate::common::util::StringUtils::split(masks, MASK_LIST_SEPARATOR_)->charAt(int(0)));
//    for (auto _i = maskList)->iterator(); _i->hasNext(); ) {
//        const std::string & mask = java_cast< const std::string & >(_i->next());
//        {
//            auto contexts = expandMaskToContexts(mask, contextManager, caller, useVisibleChildren);
//            result)->addAll(static_cast< ::java::util::Collection* >(contexts));
//        }
//    }
//    return result;
//}
//
//java::util::List* ContextUtils::expandMaskToContexts(const std::string & mask, ContextManager* contextManager)
//{
//    
//    return expandMaskToContexts(mask, contextManager, 0, false);
//}
//
//java::util::List* ContextUtils::expandMaskToContexts(const std::string & mask, ContextManager* contextManager, CallerController* caller)
//{
//    
//    return expandMaskToContexts(mask, contextManager, caller, false);
//}
//
//java::util::List* ContextUtils::expandMaskToContexts(const std::string & mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
//{
//    
//    std::list  res = new ::java::util::LinkedList();
//    auto paths = expandMaskToPaths(mask, contextManager, caller, useVisibleChildren);
//    for (auto _i = paths)->iterator(); _i->hasNext(); ) {
//        const std::string & path = java_cast< const std::string & >(_i->next());
//        {
//            auto con = java_cast< Context* >(contextManager)->get(path, caller));
//            if(con != 0) {
//                res)->add(con));
//            }
//        }
//    }
//    return res;
//}
//
//java::util::List* ContextUtils::expandMaskToPaths(const std::string & mask, ContextManager* contextManager)
//{
//    
//    return expandMaskToPaths(mask, contextManager, 0, false);
//}
//
//java::util::List* ContextUtils::expandMaskToPaths(const std::string & mask, ContextManager* contextManager, CallerController* caller)
//{
//    
//    return expandMaskToPaths(mask, contextManager, caller, false);
//}
//
//java::util::List* ContextUtils::expandMaskToPaths(const std::string & mask, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
//{
//    
//    std::list  result = new ::java::util::LinkedList();
//    auto parts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
//    for (auto i = int(0); i < parts)->size(); i++) {
//        if(java_cast< const std::string & >(parts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
//            auto head = new std::stringBuffer();
//            for (auto j = int(0); j < i; j++) {
//                if(j > 0) {
//                    head)->append(CONTEXT_NAME_SEPARATOR_);
//                }
//                head)->append(java_cast< const std::string & >(parts)->get(j)));
//            }
//            auto tail = new std::stringBuffer();
//            for (auto j = i + int(1); j < parts)->size(); j++) {
//                tail)->append(CONTEXT_NAME_SEPARATOR_);
//                tail)->append(java_cast< const std::string & >(parts)->get(j)));
//            }
//            auto res = expandMaskPart(head)->toString(), tail)->toString(), contextManager, caller, useVisibleChildren);
//            result)->addAll(static_cast< ::java::util::Collection* >(res));
//            return result;
//        }
//    }
//    if(java_cast< Context* >(contextManager)->get(mask, caller)) != 0) {
//        result)->add(mask));
//    }
//    return result;
//}
//
//java::util::List* ContextUtils::expandMaskPart(const std::string & head, const std::string & tail, ContextManager* contextManager, CallerController* caller, bool useVisibleChildren)
//{
//    
//    std::list  result = new ::java::util::LinkedList();
//    auto con = java_cast< Context* >(contextManager)->get(head, caller));
//    if(con == 0) {
//        return result;
//    }
//    if(con)->isMapped()) {
//        auto const mappedChildren = con)->getMappedChildren(caller);
//        for (auto _i = mappedChildren)->iterator(); _i->hasNext(); ) {
//            Context* child = java_cast< Context* >(_i->next());
//            {
//                result)->add(child)->getPath()));
//            }
//        }
//    } else {
//        auto children = useVisibleChildren ? static_cast< std::list  >(con)->getVisibleChildren(caller)) : static_cast< std::list  >(con)->getChildren(caller));
//        for (auto _i = children)->iterator(); _i->hasNext(); ) {
//            Context* child = java_cast< Context* >(_i->next());
//            {
//                if(useVisibleChildren) {
//                    auto realChild = java_cast< Context* >(con)->getChild(child)->getName()));
//                    if(realChild == 0 || !realChild)->getPath())->equals(child)->getPath()))) {
//                        auto res = expandMaskToPaths(std::stringBuilder().append(child)->getPath())->append(tail)->toString(), contextManager, caller, useVisibleChildren);
//                        result)->addAll(static_cast< ::java::util::Collection* >(res));
//                        continue;
//                    }
//                }
//                result)->addAll(static_cast< ::java::util::Collection* >(expandMaskToPaths(std::stringBuilder().append(head)->append(CONTEXT_NAME_SEPARATOR_)
//                    ->append(child)->getName())
//                    ->append(tail)->toString(), contextManager, caller, useVisibleChildren)));
//            }
//        }
//    }
//    return result;
//}
//
//java::util::List* ContextUtils::findChildren(const std::string & rootsMask, ::java::lang::Class* contextClass, ContextManager* manager, CallerController* caller, bool resolveGroups)
//{
//    
//    return findChildren(rootsMask, getTypeForClass(contextClass), manager, caller, resolveGroups);
//}
//
//java::util::List* ContextUtils::findChildren(const std::string & rootsMask, const std::string & type, ContextManager* manager, CallerController* caller, bool resolveGroups)
//{
//    
//    std::list  const res = new ::java::util::ArrayList();
//    ContextVisitor* visitor = new ContextUtils_findChildren_1(type, res);
//    auto roots = expandMaskToContexts(rootsMask, manager, caller);
//    for (auto _i = roots)->iterator(); _i->hasNext(); ) {
//        Context* root = java_cast< Context* >(_i->next());
//        {
//            try {
//                acceptFinder(root, visitor, caller, resolveGroups);
//            } catch (::java::lang::Throwable* ex) {
//                throw new ContextRuntimeException(ex)->getMessage(), ex);
//            }
//        }
//    }
//    return res;
//}
//
//void ContextUtils::acceptFinder(Context* context, ContextVisitor* visitor, CallerController* caller, bool resolveGroups) /* throws(ContextException) */
//{
//    
//    visitor->visit(context);
//    auto children = resolveGroups ? static_cast< std::list  >(context)->getMappedChildren(caller)) : static_cast< std::list  >(context)->getChildren(caller));
//    for (auto _i = children)->iterator(); _i->hasNext(); ) {
//        Context* child = java_cast< Context* >(_i->next());
//        {
//            acceptFinder(child, visitor, caller, resolveGroups);
//        }
//    }
//}
//
//bool ContextUtils::matchesToMask(const std::string & mask, const std::string & name)
//{
//    
//    return matchesToMask(mask, name, false, false);
//}
//
//bool ContextUtils::matchesToType(const std::string & type, ::java::util::Collection* requiredTypes)
//{
//    
//    if(requiredTypes == 0 || requiredTypes)->isEmpty() || type == 0) {
//        return true;
//    }
//    if(requiredTypes)->contains(CONTEXT_TYPE_ANY_)) {
//        return true;
//    }
//    for (auto _i = requiredTypes)->iterator(); _i->hasNext(); ) {
//        const std::string & contextType = java_cast< const std::string & >(_i->next());
//        {
//            if(isDerivedFrom(type, contextType)) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//bool ContextUtils::matchesToType(::java::util::Collection* types, ::java::util::Collection* requiredTypes)
//{
//    
//    auto result = true;
//    for (auto _i = types)->iterator(); _i->hasNext(); ) {
//        const std::string & type = java_cast< const std::string & >(_i->next());
//        {
//            result &= matchesToType(type, requiredTypes);
//        }
//    }
//    return result;
//}
//
//bool ContextUtils::matchesToMask(const std::string & mask, const std::string & context, bool contextMayExtendMask, bool maskMayExtendContext)
//{
//    
//    if(mask == 0 || context == 0) {
//        return true;
//    }
//    if(!isMask(mask)) {
//        if(contextMayExtendMask && maskMayExtendContext) {
//            auto length = ::java::lang::Math::max(mask)->length(), context)->length());
//            return mask)->substring(0, length))->equals(context)->substring(0, length)));
//        } else {
//            auto equals = mask)->equals(context));
//            if(maskMayExtendContext) {
//                return equals || (mask)->length() > context)->length() && mask)->startsWith(context) && mask)->charAt(context)->length()) == CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
//            } else if(contextMayExtendMask) {
//                return equals || (context)->length() > mask)->length() && context)->startsWith(mask) && context)->charAt(mask)->length()) == CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
//            } else {
//                return equals;
//            }
//        }
//    }
//    auto maskParts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
//    auto nameParts = ::com::tibbo::aggregate::common::util::StringUtils::split(context, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
//    if(maskParts)->size() > nameParts)->size() && !maskMayExtendContext) {
//        return false;
//    }
//    if(maskParts)->size() < nameParts)->size() && !contextMayExtendMask) {
//        return false;
//    }
//    for (auto i = int(0); i < ::java::lang::Math::min(maskParts)->size(), nameParts)->size()); i++) {
//        if(java_cast< const std::string & >(maskParts)->get(i)))->equals(CONTEXT_GROUP_MASK_)) && !java_cast< const std::string & >(nameParts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
//            continue;
//        } else {
//            if(!java_cast< const std::string & >(maskParts)->get(i)))->equals(java_cast< const std::string & >(nameParts)->get(i))))) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//bool ContextUtils::masksIntersect(const std::string & mask1, const std::string & mask2, bool mask2MayExtendMask1, bool mask1MayExtendMask2)
//{
//    
//    auto mask1Parts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask1, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
//    auto mask2Parts = ::com::tibbo::aggregate::common::util::StringUtils::split(mask2, CONTEXT_NAME_SEPARATOR_)->charAt(int(0)));
//    if(mask1Parts)->size() > mask2Parts)->size() && !mask1MayExtendMask2) {
//        return false;
//    }
//    if(mask1Parts)->size() < mask2Parts)->size() && !mask2MayExtendMask1) {
//        return false;
//    }
//    for (auto i = int(0); i < ::java::lang::Math::min(mask1Parts)->size(), mask2Parts)->size()); i++) {
//        if(java_cast< const std::string & >(mask1Parts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
//            continue;
//        } else if(java_cast< const std::string & >(mask2Parts)->get(i)))->equals(CONTEXT_GROUP_MASK_))) {
//            continue;
//        } else {
//            if(!java_cast< const std::string & >(mask1Parts)->get(i)))->equals(java_cast< const std::string & >(mask2Parts)->get(i))))) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//bool ContextUtils::isRelative(const std::string & name)
//{
//    
//    return name)->startsWith(CONTEXT_NAME_SEPARATOR_);
//}
//
//bool ContextUtils::isMask(const std::string & name)
//{
//    
//    return name)->indexOf(static_cast< int >(CONTEXT_GROUP_MASK_)->charAt(int(0)))) > -int(1);
//}
//
//bool ContextUtils::isValidContextType(const std::string & s)
//{
//    
//    return CONTEXT_TYPE_ANY_)->equals(s)) || ::java::util::regex::Pattern::matches(CONTEXT_TYPE_PATTERN_, s);
//}
//

bool ContextUtils::isValidContextName(const std::string & s)
{
//    
//    if(s == 0) {
//        return false;
//    }
//    return ::java::util::regex::Pattern::matches(CONTEXT_NAME_PATTERN_, s);

return false;
}

//
//bool ContextUtils::isValidContextMask(const std::string & s)
//{
//    
//    if(s == 0) {
//        return false;
//    }
//    return ::java::util::regex::Pattern::matches(CONTEXT_MASK_PATTERN_, s);
//}
//
//bool ContextUtils::isValidIdentifier(const std::string & s)
//{
//    
//    if(s == 0) {
//        return false;
//    }
//    return ::java::util::regex::Pattern::matches(IDENTIFIER_PATTERN_, s);
//}
//
//bool ContextUtils::isDerivedFrom(const std::string & childType, const std::string & parentType)
//{
//    
//    auto pst = new ::java::util::StringTokenizer(parentType, CONTEXT_TYPE_SEPARATOR_);
//    auto cst = new ::java::util::StringTokenizer(childType, CONTEXT_TYPE_SEPARATOR_);
//    if(cst)->countTokens() < pst)->countTokens()) {
//        return false;
//    }
//    while (pst)->hasMoreTokens()) {
//        if(!pst)->nextToken())->equals(cst)->nextToken()))) {
//            return false;
//        }
//    }
//    return true;
//}
//
//std::string ContextUtils::getParentPath(const std::string & path)
//{
//    
//    if(isRelative(path)) {
//        std::cout <<"Cannot find parent of a relative path: "_j)->append(path)->toString());
//    }
//    auto index = path)->lastIndexOf(CONTEXT_NAME_SEPARATOR_);
//    return index != -int(1) ? path)->substring(0, index) : static_cast< const std::string & >(0);
//}
//
//std::string ContextUtils::getBaseGroup(const std::string & group)
//{
//    
//    if(group == 0) {
//        return 0;
//    }
//    auto index = group)->indexOf(static_cast< int >(ENTITY_GROUP_SEPARATOR_)->charAt(int(0))));
//    return index == -int(1) ? group : group)->substring(0, index);
//}
//
//std::string ContextUtils::getVisualGroup(const std::string & group)
//{
//    
//    if(group == 0) {
//        return 0;
//    }
//    auto index = group)->indexOf(static_cast< int >(ENTITY_GROUP_SEPARATOR_)->charAt(int(0))));
//    return index == -int(1) ? static_cast< const std::string & >(0) : group)->substring(index + int(1), group)->length());
//}
//
//std::string ContextUtils::getBaseType(const std::string & type)
//{
//    
//    auto st = new ::java::util::StringTokenizer(type, CONTEXT_TYPE_SEPARATOR_);
//    return st)->nextToken();
//}
//
//std::string ContextUtils::getSubtype(const std::string & type)
//{
//    
//    if(type == 0) {
//        return 0;
//    }
//    auto index = type)->lastIndexOf(static_cast< int >(CONTEXT_TYPE_SEPARATOR_)->charAt(int(0))));
//    return index == -int(1) ? static_cast< const std::string & >(0) : type)->substring(index + int(1), type)->length());
//}
//
//std::string ContextUtils::getTypeForClass(::java::lang::Class* clazz)
//{
//    
//    auto name = clazz)->getSimpleName();
//    name = std::stringBuilder().append(name)->substring(0, 1))->toLowerCase(::java::util::Locale::ENGLISH()))->append(name)->substring(1, name)->length()))->toString();
//    if(name)->endsWith(CONTEXT_CLASS_SUFFIX_)) {
//        name = name)->substring(0, name)->length() - CONTEXT_CLASS_SUFFIX_)->length());
//    }
//    return name;
//}
//
//java::util::Map* ContextUtils::getEventFields(const std::string & mask, const std::string & event, CallerController* caller, ContextManager* contextManager)
//{
//    
//    auto contexts = expandMaskToContexts(mask, contextManager, caller);
//    std::map fields = new ::java::util::LinkedHashMap();
//    for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
//        Context* con = java_cast< Context* >(_i->next());
//        {
//            auto edata = con)->getEventData(event);
//            if(edata != 0) {
//                auto rf = edata)->getDefinition())->getFormat();
//                if(rf != 0) {
//                    for (auto _i = rf)->iterator(); _i->hasNext(); ) {
//                        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
//                        {
//                            fields)->put(ff)->getName(), ff)->toString());
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return fields;
//}
//
//java::util::Map* ContextUtils::getVariableFields(const std::string & mask, const std::string & variable, CallerController* caller, ContextManager* contextManager)
//{
//    
//    auto contexts = expandMaskToContexts(mask, contextManager, caller);
//    std::map fields = new ::java::util::LinkedHashMap();
//    for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
//        Context* con = java_cast< Context* >(_i->next());
//        {
//            auto vd = con)->getVariableDefinition(variable);
//            if(vd != 0) {
//                auto rf = vd)->getFormat();
//                if(rf != 0) {
//                    for (auto _i = rf)->iterator(); _i->hasNext(); ) {
//                        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
//                        {
//                            if(ff)->isHidden()) {
//                                continue;
//                            }
//                            fields)->put(ff)->getName(), ff)->toString());
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return fields;
//}
//
//com::tibbo::aggregate::common::action::ActionDefinition* ContextUtils::getDefaultActionDefinition(Context* context, CallerController* caller)
//{
//    
//    auto actions = context)->getActionDefinitions(caller);
//    for (auto _i = actions)->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::action::ActionDefinition* def = java_cast< ::com::tibbo::aggregate::common::action::ActionDefinition* >(_i->next());
//        {
//            if(def)->isDefault()) {
//                return def;
//            }
//        }
//    }
//    return 0;
//}
//
//std::string ContextUtils::createType(::java::lang::Class* clazz, const std::string & deviceType)
//{
//    
//    return std::stringBuilder().append(getTypeForClass(clazz))->append(CONTEXT_TYPE_SEPARATOR_)
//        ->append(deviceType)->toString();
//}
//
//bool ContextUtils::isValidContextNameChar(char16_t c)
//{
//    
//    return (c >= u'a' && c <= u'z') || (c >= u'A' && c <= u'Z') || (c >= u'0' && c <= u'9')|| c == u'_';
//}
//
//
//
//java::lang::Class* ContextUtils::class_()
//{
//    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.ContextUtils", 47);
//    return c;
//}
//
//void ContextUtils::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    CONTEXT_NAME_PATTERN_ = u"\\w*"_j;
//    CONTEXT_PATH_PATTERN_ = u"[\\w|\\.]+"_j;
//    CONTEXT_MASK_PATTERN_ = u"[\\w|\\.|\\*]+"_j;
//    CONTEXT_TYPE_PATTERN_ = u"[\\w|\\.]+"_j;
//    ENTITY_NAME_PATTERN_ = u"\\w+"_j;
//    IDENTIFIER_PATTERN_ = u"\\w*"_j;
//    CONTEXT_CLASS_SUFFIX_ = u"Context"_j;
//    CONTEXT_NAME_SEPARATOR_ = u"."_j;
//    CONTEXT_TYPE_SEPARATOR_ = u"."_j;
//    CONTEXT_GROUP_MASK_ = u"*"_j;
//    ENTITY_GROUP_MASK_ = u"*"_j;
//    CONTEXT_TYPE_ANY_ = u"*"_j;
//    ENTITY_GROUP_SEPARATOR_ = u"|"_j;
//    MASK_LIST_SEPARATOR_ = u" "_j;
//    GROUP_DEFAULT_ = u"default"_j;
//    GROUP_SYSTEM_ = u"system"_j;
//    GROUP_REMOTE_ = u"remote"_j;
//    GROUP_CUSTOM_ = u"custom"_j;
//    GROUP_STATUS_ = u"status"_j;
//    GROUP_ACCESS_ = u"access"_j;
//    USERNAME_PATTERN_ = u"%"_j;
//    VARIABLES_GROUP_DS_SETTINGS_ = u"ds_settings"_j;
//    }
//};
//
//    static string_init_ string_init_instance;
//
//
//}
//
//
