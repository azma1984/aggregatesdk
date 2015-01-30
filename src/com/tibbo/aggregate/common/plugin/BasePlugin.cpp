#include "plugin/BasePlugin.h"


BasePlugin::BasePlugin() 
{

}

BasePlugin::BasePlugin(const std::string & description) 
{
 //BasePlugin();
 this->description = description;
}

//
//void BasePlugin::init()
//{
//    index = BasePlugin::INDEX_NORMAL;
//}
//
//const int BasePlugin::INDEX_HIGHEST;
//
//const int BasePlugin::INDEX_VERY_HIGH;
//
//const int BasePlugin::INDEX_HIGH;
//
//const int BasePlugin::INDEX_HIGHER;
//
//const int BasePlugin::INDEX_NORMAL;
//
//const int BasePlugin::INDEX_LOWER;
//
//const int BasePlugin::INDEX_LOW;
//
//const int BasePlugin::INDEX_VERY_LOW;
//
//const int BasePlugin::INDEX_LOWEST;
//

//
//std::string BasePlugin::getId()
//{
//    return id != 0 ? id : super::getDescriptor())->getId();
//}
//
//void BasePlugin::setId(const std::string & id)
//{
//    this->id = id;
//}
//
//std::string BasePlugin::getShortId()
//{
//    auto id = getId();
//    auto index = id)->lastIndexOf(u"."_j);
//    return index != -int(1) ? id)->substring(index + int(1)) : id;
//}
//
//std::string BasePlugin::getDescription()
//{
//    return description != 0 ? description : (getDescriptor())->getDocumentation() != 0 ? getDescriptor())->getDocumentation())->getText() : static_cast< const std::string & >(0));
//}
//
//void BasePlugin::setDescription(const std::string & description)
//{
//    this->description = description;
//}
//
//PluginDirector* BasePlugin::getPluginDirector()
//{
//    return pluginDirector;
//}
//
//void BasePlugin::setPluginDirector(PluginDirector* pluginDirector)
//{
//    this->pluginDirector = pluginDirector;
//}
//
//ContextPtr BasePlugin::createGlobalConfigContext(ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties)
//{
//    return pluginDirector)->createGlobalConfigContext(this, rootContext, requestReboot, properties);
//}
//
//ContextPtr BasePlugin::createUserConfigContext(ContextPtr userContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties)
//{
//    return pluginDirector)->createUserConfigContext(this, userContext, requestReboot, properties);
//}
//
//ContextPtr BasePlugin::getGlobalConfigContext()
//{
//    return java_cast< ContextPtr >(pluginDirector)->getContextManager())->get(ContextUtils::pluginGlobalConfigContextPath(getId()), pluginDirector)->getCallerController()));
//}
//
//ContextPtr BasePlugin::getUserConfigContext(const std::string & username)
//{
//    return java_cast< ContextPtr >(pluginDirector)->getContextManager())->get(ContextUtils::pluginUserConfigContextPath(username, getId()), pluginDirector)->getCallerController()));
//}
//
//int BasePlugin::getSortIndex()
//{
//    return index;
//}
//
//void BasePlugin::setIndex(int index)
//{
//    this->index = index;
//}
//
//int BasePlugin::compareTo(AggreGatePlugin* other)
//{
//    if(index != other)->getSortIndex()) {
//        return other)->getSortIndex() - index;
//    } else if(description != 0 && other)->getDescription() != 0) {
//        return getDescription())->compareTo(other)->getDescription());
//    } else {
//        return getId())->compareTo(other)->getId());
//    }
//}
//
//int BasePlugin::compareTo(AgObjectPtr arg0)
//{ 
//    return compareTo(dynamic_cast< AggreGatePlugin* >(arg0));
//}
//
//void BasePlugin::doStart() /* throws(Exception) */
//{
//    Log::PLUGINS())->debug(std::stringBuilder().append(u"Starting plugin: "_j)->append(getDescription())
//        ->append(u" ("_j)
//        ->append(getId())
//        ->append(u")"_j)->toString());
//}
//
//void BasePlugin::doStop() /* throws(Exception) */
//{
//    Log::PLUGINS())->debug(std::stringBuilder().append(u"Stopping plugin: "_j)->append(getDescription())
//        ->append(u" ("_j)
//        ->append(getId())
//        ->append(u")"_j)->toString());
//}
//
//void BasePlugin::globalInit(ContextPtr rootContext) 
//{
//}
//
//void BasePlugin::globalDeinit(ContextPtr rootContext) 
//{
//}
//
//void BasePlugin::userInit(ContextPtr userContext) 
//{
//}
//
//void BasePlugin::userDeinit(ContextPtr userContext) 
//{
//}
//
//void BasePlugin::globalStart() 
//{
//}
//
//void BasePlugin::globalStop() 
//{
//}
//
//
//
