// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceUtils.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::device::DeviceUtils
    
{

public:
    typedef void super;

private:
    static const std::string FIELD_DEVICE_DRIVER_;
    static const std::string FIELD_DEVICE_DESCRIPTION_;
    static const std::string FIELD_DEVICE_NAME_;
    static FieldFormat* NAME_FIELD_;
    static FieldFormat* DESCRIPTION_FIELD_;

    // Generated

public:
    DeviceUtils();
protected:
    DeviceUtils(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& FIELD_DEVICE_DRIVER();
    static const std::string& FIELD_DEVICE_DESCRIPTION();
    static const std::string& FIELD_DEVICE_NAME();
    static FieldFormat*& NAME_FIELD();
    static FieldFormat*& DESCRIPTION_FIELD();

private:
    ::java::lang::Class* getClass0();
};
