#include "ValidatorHelper.h"

#include "Cres.h"
#include "datatable/validator/RegexValidator.h"
#include "datatable/validator/LimitsValidator.h"

#include <limits>

const int ValidatorHelper::MIN_NAME_LENGTH = 1;
const int ValidatorHelper::MAX_NAME_LENGTH = 50;
const int ValidatorHelper::MIN_TYPE_LENGTH = 1;
const int ValidatorHelper::MAX_TYPE_LENGTH = 50;
const int ValidatorHelper::MIN_DESCRIPTION_LENGTH = 0;
const int ValidatorHelper::MAX_DESCRIPTION_LENGTH = 100;
const std::string ValidatorHelper::IP_PART_ = "(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)";


boost::shared_ptr<FieldValidator> ValidatorHelper::NAME_SYNTAX_VALIDATOR()
{
    if (!NAME_SYNTAX_VALIDATOR_)
        NAME_SYNTAX_VALIDATOR_ = new RegexValidator("\\w+", Cres::get()->getString("dtInvalidName"));

    return NAME_SYNTAX_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::NAME_LENGTH_VALIDATOR()
{
    if (!NAME_LENGTH_VALIDATOR_)
        NAME_LENGTH_VALIDATOR_ = new LimitsValidator(MIN_NAME_LENGTH, MAX_NAME_LENGTH);

    return NAME_LENGTH_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::DESCRIPTION_SYNTAX_VALIDATOR()
{
    if (!DESCRIPTION_SYNTAX_VALIDATOR_)
        DESCRIPTION_SYNTAX_VALIDATOR_ = new RegexValidator("[^\\p{Cntrl}]*", Cres::get()->getString("dtInvalidDescr"));

    return DESCRIPTION_SYNTAX_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::DESCRIPTION_LENGTH_VALIDATOR()
{
    if (!DESCRIPTION_LENGTH_VALIDATOR_)
        DESCRIPTION_LENGTH_VALIDATOR_ = new LimitsValidator(MIN_DESCRIPTION_LENGTH, MAX_DESCRIPTION_LENGTH);

    return DESCRIPTION_LENGTH_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::TYPE_SYNTAX_VALIDATOR()
{
    if (!TYPE_SYNTAX_VALIDATOR_)
        TYPE_SYNTAX_VALIDATOR_ = new RegexValidator("\\w+", Cres::get()->getString("dtInvalidType"));

    return TYPE_SYNTAX_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::TYPE_LENGTH_VALIDATOR()
{
    if (!TYPE_LENGTH_VALIDATOR_)
        TYPE_LENGTH_VALIDATOR_ = new LimitsValidator(MIN_TYPE_LENGTH, MAX_TYPE_LENGTH);

    return TYPE_LENGTH_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::IP_ADDRESS_VALIDATOR()
{
    if (!IP_ADDRESS_VALIDATOR_)
        IP_ADDRESS_VALIDATOR_ = new RegexValidator("^(?:" + IP_PART_ + "\\.){3}" + IP_PART_ + "|$", Cres::get()->getString("dtInvalidIp"));

    return IP_ADDRESS_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::PORT_VALIDATOR()
{
    if (!PORT_VALIDATOR_)
        PORT_VALIDATOR_ = new LimitsValidator(1, 65535);

    return PORT_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::EMAIL_VALIDATOR()
{
    if (!EMAIL_VALIDATOR_)
        EMAIL_VALIDATOR_ = new RegexValidator("^[_A-Za-z0-9-]+(\\.[_A-Za-z0-9-]+)*@[A-Za-z0-9-]+(\\.[A-Za-z0-9-]+)*(\\.[_A-Za-z0-9-]+)^^");

    return EMAIL_VALIDATOR_;
}

boost::shared_ptr<FieldValidator> ValidatorHelper::NON_ZERO_LENGTH_VALIDATOR()
{
    if (!NON_ZERO_LENGTH_VALIDATOR_)
        NON_ZERO_LENGTH_VALIDATOR_ = new LimitsValidator(1, INT_MAX);

    return NON_ZERO_LENGTH_VALIDATOR_;
}
