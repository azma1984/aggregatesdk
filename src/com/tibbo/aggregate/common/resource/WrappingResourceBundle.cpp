#include "resource/WrappingResourceBundle.h"



//WrappingResourceBundle::WrappingResourceBundle(const ::default_init_tag&)
//	: super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//WrappingResourceBundle::WrappingResourceBundle(::java::util::PropertyResourceBundle* wrapped)
//	: WrappingResourceBundle(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(wrapped);
//}
//
//void WrappingResourceBundle::init()
//{
//    replacements = new ::java::util::Hashtable();
//}
//
//void WrappingResourceBundle::ctor(::java::util::PropertyResourceBundle* wrapped)
//{
//    super::ctor();
//    init();
//    this->wrapped = wrapped;
//	ResourceManager::process(this);
//    ResourceManager::add(this);
//}
//
//void WrappingResourceBundle::addReplacement(const std::string & key, const std::string & value)
//{
//    replacements)->put(key, value);
//}
//
//AgObjectPtr WrappingResourceBundle::handleGetObject(const std::string & key)
//{
//    if(replacements)->containsKey(key)) {
//        return java_cast< const std::string & >(replacements)->get(key));
//    }
//    try {
//		auto value = wrapped)->handleGetObject(key);
//        if(value != 0) {
//            return value;
//        }
//        return getEnglishValue(key);
//	} catch (::java::lang::Exception* ex) {
//        Log::RESOURCE())->warn(std::stringBuilder().append(u"Missing resource: "_j)->append(key)
//            ->append(u" in "_j)
//            ->append(wrapped)->getClass())->getName())->toString());
//        return getEnglishValue(key);
//	}
//}
//
//AgObjectPtr WrappingResourceBundle::getEnglishValue(const std::string & key)
//{
//	try {
//        if(baseName == 0) {
//            baseName = util::ReflectUtils::getPrivateField(wrapped, u"name"_j))->toString();
//        }
//        auto englishBundle = java_cast< ::java::util::PropertyResourceBundle* >(getBundle(baseName, ::java::util::Locale::ENGLISH()));
//		auto value = englishBundle)->handleGetObject(key);
//        return value != 0 ? value : key);
//    } catch (::java::lang::Exception* ex) {
//        Log::RESOURCE())->warn(std::stringBuilder().append(u"Error getting resource: "_j)->append(key)->toString(), new ::java::lang::Exception());
//        return key;
//	}
//}
//
//java::util::Enumeration* WrappingResourceBundle::getKeys()
//{
//	return wrapped)->getKeys();
//}
//
//bool WrappingResourceBundle::equals(AgObjectPtr obj)
//{
//	if(this) == obj) {
//        return true;
//    }
//    if(obj == 0) {
//        return false;
//	}
//    if(getClass()) != obj)->getClass())) {
//        return false;
//	}
//    auto other = java_cast< WrappingResourceBundle* >(obj);
//	if(!Util::equals(getClass())->getName(), other)->getClass())->getName())) {
//        return false;
//    }
//	return true;
//}
//
//int WrappingResourceBundle::hashCode()
//{
//	return getClass())->getName())->hashCode();
//}
//
//
//

