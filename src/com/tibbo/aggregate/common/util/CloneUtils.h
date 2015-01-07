// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/CloneUtils.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::CloneUtils
    
{

public:
    typedef void super;
    static void* genericClone(void* object);
    static void* deepClone(void* object);

private:
    static ::java::lang::Class* getBaseClass(void* object);

    // Generated

public:
    CloneUtils();
protected:
    CloneUtils(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
