#include "ValidatorHelper.h"
#include "datatable/validator/RegexValidator.h"
#include "Cres.h"
#include "util/simpleobject/AgInteger.h"

const std::string ValidatorHelper::IP_PART = "(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)";

ValidatorHelper::ValidatorHelper()
{ 
   NAME_SYNTAX_VALIDATOR = FieldValidatorPtr(new RegexValidator("\\w+", Cres::get()->getString("dtInvalidName")));
   NAME_LENGTH_VALIDATOR = FieldValidatorPtr(new LimitsValidator(MIN_NAME_LENGTH, MAX_NAME_LENGTH));
   DESCRIPTION_SYNTAX_VALIDATOR = FieldValidatorPtr(new RegexValidator("[^\\p{Cntrl}]*", Cres::get()->getString("dtInvalidDescr")));
   DESCRIPTION_LENGTH_VALIDATOR = FieldValidatorPtr(new LimitsValidator(MIN_DESCRIPTION_LENGTH, MAX_DESCRIPTION_LENGTH));
   TYPE_SYNTAX_VALIDATOR = FieldValidatorPtr(new RegexValidator("\\w+", Cres::get()->getString("dtInvalidType")));
   TYPE_LENGTH_VALIDATOR = FieldValidatorPtr(new LimitsValidator(MIN_TYPE_LENGTH, MAX_TYPE_LENGTH));
   IP_ADDRESS_VALIDATOR = FieldValidatorPtr(new RegexValidator("^(?:" + IP_PART + "\\.){3}" + IP_PART + "|$", Cres::get()->getString("dtInvalidIp")));
   PORT_VALIDATOR = FieldValidatorPtr(new LimitsValidator(1, 65535));
   EMAIL_VALIDATOR = FieldValidatorPtr(new RegexValidator("^[_A-Za-z0-9-]+(\\.[_A-Za-z0-9-]+)*@[A-Za-z0-9-]+(\\.[A-Za-z0-9-]+)*(\\.[_A-Za-z0-9-]+)^^"));
   NON_ZERO_LENGTH_VALIDATOR = FieldValidatorPtr(new LimitsValidator(1, INT_MAX));
}

ValidatorHelper::~ValidatorHelper()
{ 
}

FieldValidatorPtr ValidatorHelper::getNAME_SYNTAX_VALIDATOR()
{
    return NAME_SYNTAX_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getNAME_LENGTH_VALIDATOR()
{
    return NAME_LENGTH_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getDESCRIPTION_SYNTAX_VALIDATOR()
{
    return DESCRIPTION_SYNTAX_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getDESCRIPTION_LENGTH_VALIDATOR()
{
    return DESCRIPTION_LENGTH_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getTYPE_SYNTAX_VALIDATOR()
{
    return TYPE_SYNTAX_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getTYPE_LENGTH_VALIDATOR()
{
    return TYPE_LENGTH_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getIP_ADDRESS_VALIDATOR()
{
    return IP_ADDRESS_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getPORT_VALIDATOR()
{
    return PORT_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getEMAIL_VALIDATOR()
{
    return EMAIL_VALIDATOR;
}

FieldValidatorPtr ValidatorHelper::getNON_ZERO_LENGTH_VALIDATOR()
{
    return NON_ZERO_LENGTH_VALIDATOR;
}


