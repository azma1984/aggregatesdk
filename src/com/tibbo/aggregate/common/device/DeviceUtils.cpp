// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceUtils.java
#include <com/tibbo/aggregate/common/device/DeviceUtils.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/validator/FieldValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/IdValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/ValidatorHelper.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::device::DeviceUtils::DeviceUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::DeviceUtils::DeviceUtils()
    : DeviceUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& com::tibbo::aggregate::common::device::DeviceUtils::FIELD_DEVICE_DRIVER()
{
    
    return FIELD_DEVICE_DRIVER_;
}
std::string com::tibbo::aggregate::common::device::DeviceUtils::FIELD_DEVICE_DRIVER_;

std::string& com::tibbo::aggregate::common::device::DeviceUtils::FIELD_DEVICE_DESCRIPTION()
{
    
    return FIELD_DEVICE_DESCRIPTION_;
}
std::string com::tibbo::aggregate::common::device::DeviceUtils::FIELD_DEVICE_DESCRIPTION_;

std::string& com::tibbo::aggregate::common::device::DeviceUtils::FIELD_DEVICE_NAME()
{
    
    return FIELD_DEVICE_NAME_;
}
std::string com::tibbo::aggregate::common::device::DeviceUtils::FIELD_DEVICE_NAME_;

com::tibbo::aggregate::common::datatable::FieldFormat*& com::tibbo::aggregate::common::device::DeviceUtils::NAME_FIELD()
{
    
    return NAME_FIELD_;
}
com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::device::DeviceUtils::NAME_FIELD_;

com::tibbo::aggregate::common::datatable::FieldFormat*& com::tibbo::aggregate::common::device::DeviceUtils::DESCRIPTION_FIELD()
{
    
    return DESCRIPTION_FIELD_;
}
com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::device::DeviceUtils::DESCRIPTION_FIELD_;



java::lang::Class* com::tibbo::aggregate::common::device::DeviceUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.DeviceUtils", 45);
    return c;
}

void com::tibbo::aggregate::common::device::DeviceUtils::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_DEVICE_DRIVER_ = u"driver"_j;
    FIELD_DEVICE_DESCRIPTION_ = u"description"_j;
    FIELD_DEVICE_NAME_ = u"name"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            NAME_FIELD_ = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(DeviceUtils::FIELD_DEVICE_NAME_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"devDeviceName"_j))
                ->append(u"><H="_j)
                ->append(Cres::get())->getString(u"devDeviceNameHelp"_j))
                ->append(u">"_j)->toString());
            NAME_FIELD_)->getValidators())->add(new validator::IdValidator()));
            NAME_FIELD_)->getValidators())->add(validator::ValidatorHelper::NAME_LENGTH_VALIDATOR()));
            NAME_FIELD_)->getValidators())->add(validator::ValidatorHelper::NAME_SYNTAX_VALIDATOR()));
            DESCRIPTION_FIELD_ = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(DeviceUtils::FIELD_DEVICE_DESCRIPTION_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"devDeviceDesc"_j))
                ->append(u"><H="_j)
                ->append(Cres::get())->getString(u"devDeviceDescHelp"_j))
                ->append(u">"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::device::DeviceUtils::getClass0()
{
    return class_();
}

