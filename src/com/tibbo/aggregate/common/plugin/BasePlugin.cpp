// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/BasePlugin.java
#include <com/tibbo/aggregate/common/plugin/BasePlugin.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/plugin/AggreGatePlugin.h"
#include <com/tibbo/aggregate/common/plugin/PluginDirector.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <org/apache/log4j/Logger.h"
#include <org/java/plugin/registry/Documentation.h"
#include <org/java/plugin/registry/PluginDescriptor.h"

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

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::plugin::BasePlugin::BasePlugin(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::plugin::BasePlugin::BasePlugin() 
    : BasePlugin(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::plugin::BasePlugin::BasePlugin(const std::string & description) 
    : BasePlugin(*static_cast< ::default_init_tag* >(0))
{
    ctor(description);
}

void com::tibbo::aggregate::common::plugin::BasePlugin::init()
{
    index = BasePlugin::INDEX_NORMAL;
}

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_HIGHEST;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_VERY_HIGH;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_HIGH;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_HIGHER;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_NORMAL;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_LOWER;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_LOW;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_VERY_LOW;

const int com::tibbo::aggregate::common::plugin::BasePlugin::INDEX_LOWEST;

void com::tibbo::aggregate::common::plugin::BasePlugin::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::plugin::BasePlugin::ctor(const std::string & description)
{
    ctor();
    this->description = description;
}

std::string com::tibbo::aggregate::common::plugin::BasePlugin::getId()
{
    return id != 0 ? id : super::getDescriptor())->getId();
}

void com::tibbo::aggregate::common::plugin::BasePlugin::setId(const std::string & id)
{
    this->id = id;
}

std::string com::tibbo::aggregate::common::plugin::BasePlugin::getShortId()
{
    auto id = getId();
    auto index = id)->lastIndexOf(u"."_j);
    return index != -int(1) ? id)->substring(index + int(1)) : id;
}

std::string com::tibbo::aggregate::common::plugin::BasePlugin::getDescription()
{
    return description != 0 ? description : (getDescriptor())->getDocumentation() != 0 ? getDescriptor())->getDocumentation())->getText() : static_cast< const std::string & >(0));
}

void com::tibbo::aggregate::common::plugin::BasePlugin::setDescription(const std::string & description)
{
    this->description = description;
}

com::tibbo::aggregate::common::plugin::PluginDirector* com::tibbo::aggregate::common::plugin::BasePlugin::getPluginDirector()
{
    return pluginDirector;
}

void com::tibbo::aggregate::common::plugin::BasePlugin::setPluginDirector(PluginDirector* pluginDirector)
{
    this->pluginDirector = pluginDirector;
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::BasePlugin::createGlobalConfigContext(::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties)
{
    return pluginDirector)->createGlobalConfigContext(this, rootContext, requestReboot, properties);
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::BasePlugin::createUserConfigContext(::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties)
{
    return pluginDirector)->createUserConfigContext(this, userContext, requestReboot, properties);
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::BasePlugin::getGlobalConfigContext()
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(pluginDirector)->getContextManager())->get(::com::tibbo::aggregate::common::context::ContextUtils::pluginGlobalConfigContextPath(getId()), pluginDirector)->getCallerController()));
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::plugin::BasePlugin::getUserConfigContext(const std::string & username)
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(pluginDirector)->getContextManager())->get(::com::tibbo::aggregate::common::context::ContextUtils::pluginUserConfigContextPath(username, getId()), pluginDirector)->getCallerController()));
}

int com::tibbo::aggregate::common::plugin::BasePlugin::getSortIndex()
{
    return index;
}

void com::tibbo::aggregate::common::plugin::BasePlugin::setIndex(int index)
{
    this->index = index;
}

int com::tibbo::aggregate::common::plugin::BasePlugin::compareTo(AggreGatePlugin* other)
{
    if(index != other)->getSortIndex()) {
        return other)->getSortIndex() - index;
    } else if(description != 0 && other)->getDescription() != 0) {
        return getDescription())->compareTo(other)->getDescription());
    } else {
        return getId())->compareTo(other)->getId());
    }
}

int com::tibbo::aggregate::common::plugin::BasePlugin::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< AggreGatePlugin* >(arg0));
}

void com::tibbo::aggregate::common::plugin::BasePlugin::doStart() /* throws(Exception) */
{
    Log::PLUGINS())->debug(std::stringBuilder().append(u"Starting plugin: "_j)->append(getDescription())
        ->append(u" ("_j)
        ->append(getId())
        ->append(u")"_j)->toString());
}

void com::tibbo::aggregate::common::plugin::BasePlugin::doStop() /* throws(Exception) */
{
    Log::PLUGINS())->debug(std::stringBuilder().append(u"Stopping plugin: "_j)->append(getDescription())
        ->append(u" ("_j)
        ->append(getId())
        ->append(u")"_j)->toString());
}

void com::tibbo::aggregate::common::plugin::BasePlugin::globalInit(::com::tibbo::aggregate::common::context::Context* rootContext) /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::BasePlugin::globalDeinit(::com::tibbo::aggregate::common::context::Context* rootContext) /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::BasePlugin::userInit(::com::tibbo::aggregate::common::context::Context* userContext) /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::BasePlugin::userDeinit(::com::tibbo::aggregate::common::context::Context* userContext) /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::BasePlugin::globalStart() /* throws(PluginException) */
{
}

void com::tibbo::aggregate::common::plugin::BasePlugin::globalStop() /* throws(PluginException) */
{
}



java::lang::Class* com::tibbo::aggregate::common::plugin::BasePlugin::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.plugin.BasePlugin", 44);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::plugin::BasePlugin::getClass0()
{
    return class_();
}

