// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/AbstractContextPlugin.java
#include <com/tibbo/aggregate/common/plugin/AbstractContextPlugin.h"

#include <com/tibbo/aggregate/common/context/Context.h"
//#include <java/lang/ClassCastException.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::EntityDefinition, voidArray > EntityDefinitionArray;
typedef ::SubArray< ::com::tibbo::aggregate::common::context::AbstractEntityDefinition, voidArray, EntityDefinitionArray > AbstractEntityDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang
} // java

namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::VariableDefinition, AbstractEntityDefinitionArray, ::java::lang::CloneableArray, ::java::lang::ComparableArray > VariableDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

com::tibbo::aggregate::common::plugin::AbstractContextPlugin::AbstractContextPlugin(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::plugin::AbstractContextPlugin::AbstractContextPlugin() 
    : AbstractContextPlugin(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::plugin::AbstractContextPlugin::AbstractContextPlugin(const std::string & name) 
    : AbstractContextPlugin(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::ctor(const std::string & name)
{
    super::ctor(name);
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::initialize() /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::deinitialize() /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::install(::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(ContextException, PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::deinstall(::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(ContextException, PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::install(::com::tibbo::aggregate::common::server::ServerContext* context) /* throws(ContextException, PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::deinstall(::com::tibbo::aggregate::common::server::ServerContext* context) /* throws(ContextException, PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::launch() /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::shutdown() /* throws(PluginException) */
{
}



java::lang::Class* com::tibbo::aggregate::common::plugin::AbstractContextPlugin::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.plugin.AbstractContextPlugin", 55);
    return c;
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::AbstractContextPlugin::createGlobalConfigContext(::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties)
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::createGlobalConfigContext(rootContext, requestReboot, properties));
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::AbstractContextPlugin::createUserConfigContext(::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties)
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::createUserConfigContext(userContext, requestReboot, properties));
}

std::string com::tibbo::aggregate::common::plugin::AbstractContextPlugin::getDescription()
{
    return BasePlugin::getDescription();
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::AbstractContextPlugin::getGlobalConfigContext()
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::getGlobalConfigContext());
}

std::string com::tibbo::aggregate::common::plugin::AbstractContextPlugin::getId()
{
    return BasePlugin::getId();
}

std::string com::tibbo::aggregate::common::plugin::AbstractContextPlugin::getShortId()
{
    return BasePlugin::getShortId();
}

int com::tibbo::aggregate::common::plugin::AbstractContextPlugin::getSortIndex()
{
    return BasePlugin::getSortIndex();
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::AbstractContextPlugin::getUserConfigContext(const std::string & username)
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::getUserConfigContext(username));
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::globalDeinit(::com::tibbo::aggregate::common::context::Context* rootContext)
{
    BasePlugin::globalDeinit(rootContext);
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::globalInit(::com::tibbo::aggregate::common::context::Context* rootContext)
{
    BasePlugin::globalInit(rootContext);
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::globalStart()
{
    BasePlugin::globalStart();
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::globalStop()
{
    BasePlugin::globalStop();
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::userDeinit(::com::tibbo::aggregate::common::context::Context* userContext)
{
    BasePlugin::userDeinit(userContext);
}

void com::tibbo::aggregate::common::plugin::AbstractContextPlugin::userInit(::com::tibbo::aggregate::common::context::Context* userContext)
{
    BasePlugin::userInit(userContext);
}

java::lang::Class* com::tibbo::aggregate::common::plugin::AbstractContextPlugin::getClass0()
{
    return class_();
}

