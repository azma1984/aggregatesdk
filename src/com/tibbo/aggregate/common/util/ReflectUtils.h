// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ReflectUtils.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::ReflectUtils
    
{

public:
    typedef void super;
    static void* getPrivateField(void* obj, const std::string & fieldName);
    static void* getPrivateField(void* obj, const std::string & fieldName, ::java::lang::Class* c) /* throws(NoSuchFieldException, IllegalAccessException) */;
    static void setPrivateField(void* obj, const std::string & fieldName, void* value);
    static void setPrivateField(void* obj, const std::string & fieldName, void* value, ::java::lang::Class* c) /* throws(NoSuchFieldException, IllegalAccessException) */;
    static /* <F, T> */void copyProperties(void* from, ::java::lang::Class* stopFromClass, void* to, ::java::lang::Class* stopToClass);

    // Generated
    ReflectUtils();
protected:
    ReflectUtils(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
