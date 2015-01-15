// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceSettingStatus.java
#include <com/tibbo/aggregate/common/device/DeviceSettingStatus.h"

#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/device/DeviceContext.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Date.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::device::DeviceSettingStatus::DeviceSettingStatus(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::DeviceSettingStatus::DeviceSettingStatus()
    : DeviceSettingStatus(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::init()
{
    direction = DeviceContext::DIRECTION_DEVICE_TO_SERVER;
}

std::string& com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_NAME()
{
    
    return FIELD_NAME_;
}
std::string com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_NAME_;

std::string& com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_TIME()
{
    
    return FIELD_TIME_;
}
std::string com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_TIME_;

std::string& com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_DURATION()
{
    
    return FIELD_DURATION_;
}
std::string com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_DURATION_;

std::string& com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_UPDATED()
{
    
    return FIELD_UPDATED_;
}
std::string com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_UPDATED_;

std::string& com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_DIRECTION()
{
    
    return FIELD_DIRECTION_;
}
std::string com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_DIRECTION_;

std::string& com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_ERROR()
{
    
    return FIELD_ERROR_;
}
std::string com::tibbo::aggregate::common::device::DeviceSettingStatus::FIELD_ERROR_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::device::DeviceSettingStatus::FORMAT()
{
    
    return FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::device::DeviceSettingStatus::FORMAT_;

java::util::Date* com::tibbo::aggregate::common::device::DeviceSettingStatus::getTime()
{
    return time;
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::setTime(::java::util::Date* time)
{
    this->time = time;
}

java::lang::Long* com::tibbo::aggregate::common::device::DeviceSettingStatus::getDuration()
{
    return duration;
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::setDuration(::java::lang::Long* duration)
{
    this->duration = duration;
}

bool com::tibbo::aggregate::common::device::DeviceSettingStatus::isUpdated()
{
    return updated;
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::setUpdated(bool updated)
{
    this->updated = updated;
}

int com::tibbo::aggregate::common::device::DeviceSettingStatus::getDirection()
{
    return direction;
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::setDirection(int direction)
{
    this->direction = direction;
}

std::string com::tibbo::aggregate::common::device::DeviceSettingStatus::getError()
{
    return error;
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::setError(const std::string & error)
{
    this->error = error;
}



java::lang::Class* com::tibbo::aggregate::common::device::DeviceSettingStatus::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.DeviceSettingStatus", 53);
    return c;
}

void com::tibbo::aggregate::common::device::DeviceSettingStatus::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_NAME_ = u"name"_j;
    FIELD_TIME_ = u"time"_j;
    FIELD_DURATION_ = u"duration"_j;
    FIELD_UPDATED_ = u"updated"_j;
    FIELD_DIRECTION_ = u"direction"_j;
    FIELD_ERROR_ = u"error"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat();
        {
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_NAME_)
                ->append(u"><S>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_TIME_)
                ->append(u"><D><F=N>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_DURATION_)
                ->append(u"><L><F=N>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_UPDATED_)
                ->append(u"><B>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_DIRECTION_)
                ->append(u"><I><A="_j)
                ->append(DeviceContext::DIRECTION_DEVICE_TO_SERVER)
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ERROR_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::device::DeviceSettingStatus::getClass0()
{
    return class_();
}

