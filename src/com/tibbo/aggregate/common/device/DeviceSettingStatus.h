// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceSettingStatus.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::device::DeviceSettingStatus
    
{

public:
    typedef void super;

private:
    static const std::string FIELD_NAME_;
    static const std::string FIELD_TIME_;
    static const std::string FIELD_DURATION_;
    static const std::string FIELD_UPDATED_;
    static const std::string FIELD_DIRECTION_;
    static const std::string FIELD_ERROR_;
    static TableFormat* FORMAT_;
    ::java::util::Date* time;
    ::java::lang::Long* duration;
    bool updated;
    int direction;
    const std::string & error;

public:
    ::java::util::Date* getTime();
    void setTime(::java::util::Date* time);
    ::java::lang::Long* getDuration();
    void setDuration(::java::lang::Long* duration);
    bool isUpdated();
    void setUpdated(bool updated);
    int getDirection();
    void setDirection(int direction);
    const std::string & getError();
    void setError(const std::string & error);

    // Generated
    DeviceSettingStatus();
protected:
    void ctor();
    DeviceSettingStatus(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static const std::string& FIELD_NAME();
    static const std::string& FIELD_TIME();
    static const std::string& FIELD_DURATION();
    static const std::string& FIELD_UPDATED();
    static const std::string& FIELD_DIRECTION();
    static const std::string& FIELD_ERROR();
    static TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
