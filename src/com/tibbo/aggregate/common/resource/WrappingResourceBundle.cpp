// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/resource/WrappingResourceBundle.java
#include <com/tibbo/aggregate/common/resource/WrappingResourceBundle.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/resource/ResourceManager.h"
#include <com/tibbo/aggregate/common/util/ReflectUtils.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Enumeration.h"
//#include <java/util/Hashtable.h"
//#include <java/util/Locale.h"
//#include <java/util/Map.h"
//#include <java/util/PropertyResourceBundle.h"
//#include <java/util/ResourceBundle.h"
//#include <org/apache/log4j/Logger.h"

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

com::tibbo::aggregate::common::resource::WrappingResourceBundle::WrappingResourceBundle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::resource::WrappingResourceBundle::WrappingResourceBundle(::java::util::PropertyResourceBundle* wrapped) 
    : WrappingResourceBundle(*static_cast< ::default_init_tag* >(0))
{
    ctor(wrapped);
}

void com::tibbo::aggregate::common::resource::WrappingResourceBundle::init()
{
    replacements = new ::java::util::Hashtable();
}

void com::tibbo::aggregate::common::resource::WrappingResourceBundle::ctor(::java::util::PropertyResourceBundle* wrapped)
{
    super::ctor();
    init();
    this->wrapped = wrapped;
    ResourceManager::process(this);
    ResourceManager::add(this);
}

void com::tibbo::aggregate::common::resource::WrappingResourceBundle::addReplacement(const std::string & key, const std::string & value)
{
    replacements)->put(key, value);
}

void* com::tibbo::aggregate::common::resource::WrappingResourceBundle::handleGetObject(const std::string & key)
{
    if(replacements)->containsKey(key)) {
        return java_cast< const std::string & >(replacements)->get(key));
    }
    try {
        auto value = wrapped)->handleGetObject(key);
        if(value != 0) {
            return value;
        }
        return getEnglishValue(key);
    } catch (::java::lang::Exception* ex) {
        Log::RESOURCE())->warn(std::stringBuilder().append(u"Missing resource: "_j)->append(key)
            ->append(u" in "_j)
            ->append(wrapped)->getClass())->getName())->toString());
        return getEnglishValue(key);
    }
}

void* com::tibbo::aggregate::common::resource::WrappingResourceBundle::getEnglishValue(const std::string & key)
{
    try {
        if(baseName == 0) {
            baseName = util::ReflectUtils::getPrivateField(wrapped, u"name"_j))->toString();
        }
        auto englishBundle = java_cast< ::java::util::PropertyResourceBundle* >(getBundle(baseName, ::java::util::Locale::ENGLISH()));
        auto value = englishBundle)->handleGetObject(key);
        return value != 0 ? value : key);
    } catch (::java::lang::Exception* ex) {
        Log::RESOURCE())->warn(std::stringBuilder().append(u"Error getting resource: "_j)->append(key)->toString(), new ::java::lang::Exception());
        return key;
    }
}

java::util::Enumeration* com::tibbo::aggregate::common::resource::WrappingResourceBundle::getKeys()
{
    return wrapped)->getKeys();
}

bool com::tibbo::aggregate::common::resource::WrappingResourceBundle::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< WrappingResourceBundle* >(obj);
    if(!::com::tibbo::aggregate::common::util::Util::equals(getClass())->getName(), other)->getClass())->getName())) {
        return false;
    }
    return true;
}

int com::tibbo::aggregate::common::resource::WrappingResourceBundle::hashCode()
{
    return getClass())->getName())->hashCode();
}



java::lang::Class* com::tibbo::aggregate::common::resource::WrappingResourceBundle::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.resource.WrappingResourceBundle", 58);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::resource::WrappingResourceBundle::getClass0()
{
    return class_();
}

