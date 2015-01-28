//// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/AbstractContextPlugin.java
#include "plugin/AbstractContextPlugin.h"




//AbstractContextPlugin::AbstractContextPlugin(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//AbstractContextPlugin::AbstractContextPlugin() 
//    : AbstractContextPlugin(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//AbstractContextPlugin::AbstractContextPlugin(const std::string & name) 
//    : AbstractContextPlugin(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(name);
//}
//
//void AbstractContextPlugin::ctor()
//{
//    super::ctor();
//}
//
//void AbstractContextPlugin::ctor(const std::string & name)
//{
//    super::ctor(name);
//}
//
//void AbstractContextPlugin::initialize() /* throws(PluginException) */
//{
//}
//
//void AbstractContextPlugin::deinitialize() /* throws(PluginException) */
//{
//}
//
//void AbstractContextPlugin::install(ContextManagerPtr cm) /* throws(ContextException, PluginException) */
//{
//}
//
//void AbstractContextPlugin::deinstall(ContextManagerPtr cm) /* throws(ContextException, PluginException) */
//{
//}
//
//void AbstractContextPlugin::install(::com::tibbo::aggregate::common::server::ServerContextPtr context) /* throws(ContextException, PluginException) */
//{
//}
//
//void AbstractContextPlugin::deinstall(::com::tibbo::aggregate::common::server::ServerContextPtr context) /* throws(ContextException, PluginException) */
//{
//}
//
//void AbstractContextPlugin::launch() /* throws(PluginException) */
//{
//}
//
//void AbstractContextPlugin::shutdown() /* throws(PluginException) */
//{
//}
//
//
//
//java::lang::Class* AbstractContextPlugin::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.plugin.AbstractContextPlugin", 55);
//    return c;
//}
//
//ContextPtr AbstractContextPlugin::createGlobalConfigContext(ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr properties)
//{
//    return java_cast< ContextPtr >(BasePlugin::createGlobalConfigContext(rootContext, requestReboot, properties));
//}
//
//ContextPtr AbstractContextPlugin::createUserConfigContext(ContextPtr userContext, bool requestReboot, VariableDefinitionPtr properties)
//{
//    return java_cast< ContextPtr >(BasePlugin::createUserConfigContext(userContext, requestReboot, properties));
//}
//
//std::string AbstractContextPlugin::getDescription()
//{
//    return BasePlugin::getDescription();
//}
//
//ContextPtr AbstractContextPlugin::getGlobalConfigContext()
//{
//    return java_cast< ContextPtr >(BasePlugin::getGlobalConfigContext());
//}
//
//std::string AbstractContextPlugin::getId()
//{
//    return BasePlugin::getId();
//}
//
//std::string AbstractContextPlugin::getShortId()
//{
//    return BasePlugin::getShortId();
//}
//
//int AbstractContextPlugin::getSortIndex()
//{
//    return BasePlugin::getSortIndex();
//}
//
//ContextPtr AbstractContextPlugin::getUserConfigContext(const std::string & username)
//{
//    return java_cast< ContextPtr >(BasePlugin::getUserConfigContext(username));
//}
//
//void AbstractContextPlugin::globalDeinit(ContextPtr rootContext)
//{
//    BasePlugin::globalDeinit(rootContext);
//}
//
//void AbstractContextPlugin::globalInit(ContextPtr rootContext)
//{
//    BasePlugin::globalInit(rootContext);
//}
//
//void AbstractContextPlugin::globalStart()
//{
//    BasePlugin::globalStart();
//}
//
//void AbstractContextPlugin::globalStop()
//{
//    BasePlugin::globalStop();
//}
//
//void AbstractContextPlugin::userDeinit(ContextPtr userContext)
//{
//    BasePlugin::userDeinit(userContext);
//}
//
//void AbstractContextPlugin::userInit(ContextPtr userContext)
//{
//    BasePlugin::userInit(userContext);
//}
//
//
