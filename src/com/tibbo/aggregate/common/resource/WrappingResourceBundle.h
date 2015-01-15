// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/resource/WrappingResourceBundle.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/resource/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/ResourceBundle.h"



class com::tibbo::aggregate::common::resource::WrappingResourceBundle
    : public ::java::util::ResourceBundle
{

public:
    typedef ::java::util::ResourceBundle super;

private:
    const std::string & baseName;
    ::java::util::PropertyResourceBundle* wrapped;
    std::map replacements;
protected:
    void ctor(::java::util::PropertyResourceBundle* wrapped);

public:
    void addReplacement(const std::string & key, const std::string & value);

public: /* protected */
    void* handleGetObject(const std::string & key);

private:
    void* getEnglishValue(const std::string & key);

public:
    ::java::util::Enumeration* getKeys();
    bool equals(void* obj);
    int hashCode();

    // Generated
    WrappingResourceBundle(::java::util::PropertyResourceBundle* wrapped);
protected:
    WrappingResourceBundle(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
