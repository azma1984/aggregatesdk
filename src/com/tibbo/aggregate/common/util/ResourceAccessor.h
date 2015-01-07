// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ResourceAccessor.java

#pragma once


class ResourceAccessor
    
{

private:
    static const std::string RESOURCE_PACKAGE_NAME = "res";

public:
    static ResourceBundle* fetch(::java::lang::Class* clazz, ::java::util::Locale* locale);
    static ResourceBundle* fetch(::java::lang::Class* clazz, ::java::util::Locale* locale, ::java::lang::ClassLoader* classLoader);
    static std::string  getBundleName(::java::lang::Class* clazz);
};
