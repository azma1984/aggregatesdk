#include "device/DeviceUtils.h"
#include "datatable/validator/IdValidator.h"
#include "datatable/validator/ValidatorHelper.h"

static const std::string DeviceUtils::FIELD_DEVICE_DRIVER = "driver";
static const std::string DeviceUtils::FIELD_DEVICE_DESCRIPTION = "description";
static const std::string DeviceUtils::FIELD_DEVICE_NAME = "name";


boost::shared_ptr<FieldFormat> DeviceUtils::NAME_FIELD()
{
    if (!NAME_FIELD_) {
        //TODO: getValidators in FieldFormat
        NAME_FIELD_->getValidators()->add(new IdValidator());
        NAME_FIELD_->getValidators()->add(ValidatorHelper::NAME_LENGTH_VALIDATOR);
        NAME_FIELD_->getValidators()->add(ValidatorHelper::NAME_SYNTAX_VALIDATOR);
    }

    return NAME_FIELD_;
}

boost::shared_ptr<FieldFormat> DeviceUtils::DESCRIPTION_FIELD()
{
    if (!DESCRIPTION_FIELD_) {
        DESCRIPTION_FIELD_ = FieldFormat.create( std::string("<").append(DeviceUtils::FIELD_DEVICE_DESCRIPTION)
                                                .append("><S><D=").append(Cres::get()->getString("devDeviceDesc"))
                                                .append("><H=").append(Cres::get()->getString("devDeviceDescHelp")).append(">") );
    }

    return DESCRIPTION_FIELD_;
}
