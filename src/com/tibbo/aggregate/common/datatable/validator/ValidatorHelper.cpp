#include "ValidatorHelper.h"


const std::string ValidatorHelper::IP_PART = "(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)";

ValidatorHelper::ValidatorHelper()
{ 
 //todo RegexValidator and LimitsValidator - is abstract class 
/* 
  if (!NAME_SYNTAX_VALIDATOR)
   NAME_SYNTAX_VALIDATOR = new RegexValidator("\\w+", Cres::get()->getString("dtInvalidName"));
 
  if (!NAME_LENGTH_VALIDATOR)
  NAME_LENGTH_VALIDATOR = new LimitsValidator(MIN_NAME_LENGTH, MAX_NAME_LENGTH);

  if (!DESCRIPTION_SYNTAX_VALIDATOR)
  DESCRIPTION_SYNTAX_VALIDATOR = new RegexValidator("[^\\p{Cntrl}]*", Cres::get()->getString("dtInvalidDescr"));
  
  if (!DESCRIPTION_LENGTH_VALIDATOR)
  DESCRIPTION_LENGTH_VALIDATOR = new LimitsValidator(MIN_DESCRIPTION_LENGTH, MAX_DESCRIPTION_LENGTH);

  if (!TYPE_SYNTAX_VALIDATOR)
  TYPE_SYNTAX_VALIDATOR = new RegexValidator("\\w+", Cres::get()->getString("dtInvalidType"));
  
  if (!TYPE_LENGTH_VALIDATOR)
  TYPE_LENGTH_VALIDATOR = new LimitsValidator(MIN_TYPE_LENGTH, MAX_TYPE_LENGTH);
  
  if (!IP_ADDRESS_VALIDATOR)
  IP_ADDRESS_VALIDATOR = new RegexValidator("^(?:" + IP_PART_ + "\\.){3}" + IP_PART_ + "|$", Cres::get()->getString("dtInvalidIp"));
  
  if (!PORT_VALIDATOR)
  PORT_VALIDATOR = new LimitsValidator(1, 65535);
  
  if (!EMAIL_VALIDATOR)
  EMAIL_VALIDATOR = new RegexValidator("^[_A-Za-z0-9-]+(\\.[_A-Za-z0-9-]+)*@[A-Za-z0-9-]+(\\.[A-Za-z0-9-]+)*(\\.[_A-Za-z0-9-]+)^^");
  
  if (!NON_ZERO_LENGTH_VALIDATOR)
  NON_ZERO_LENGTH_VALIDATOR = new LimitsValidator(1, INT_MAX);*/

}

ValidatorHelper::~ValidatorHelper()
{ 
	/* delete NAME_SYNTAX_VALIDATOR;
	delete NAME_LENGTH_VALIDATOR;
	delete DESCRIPTION_SYNTAX_VALIDATOR;
	delete DESCRIPTION_LENGTH_VALIDATOR;
	delete TYPE_SYNTAX_VALIDATOR;
	delete TYPE_LENGTH_VALIDATOR;
	delete IP_ADDRESS_VALIDATOR;
	delete PORT_VALIDATOR;
	delete EMAIL_VALIDATOR;
	delete NON_ZERO_LENGTH_VALIDATOR;*/
}

FieldValidator<RegexValidator> &ValidatorHelper::getNAME_SYNTAX_VALIDATOR()
{
  return *NAME_SYNTAX_VALIDATOR;
}

FieldValidator<LimitsValidator> & ValidatorHelper::getNAME_LENGTH_VALIDATOR()
{

    return *NAME_LENGTH_VALIDATOR;
}

FieldValidator<RegexValidator>  &ValidatorHelper::getDESCRIPTION_SYNTAX_VALIDATOR()
{

    return *DESCRIPTION_SYNTAX_VALIDATOR;
}

FieldValidator<LimitsValidator> & ValidatorHelper::getDESCRIPTION_LENGTH_VALIDATOR()
{

    return *DESCRIPTION_LENGTH_VALIDATOR;
}

FieldValidator<RegexValidator>  & ValidatorHelper::getTYPE_SYNTAX_VALIDATOR()
{
    
    return *TYPE_SYNTAX_VALIDATOR;
}

FieldValidator<LimitsValidator> & ValidatorHelper::getTYPE_LENGTH_VALIDATOR()
{
 
    return *TYPE_LENGTH_VALIDATOR;
}

FieldValidator<RegexValidator>  & ValidatorHelper::getIP_ADDRESS_VALIDATOR()
{
  
    return *IP_ADDRESS_VALIDATOR;
}

FieldValidator<LimitsValidator> & ValidatorHelper::getPORT_VALIDATOR()
{

    return *PORT_VALIDATOR;
}

FieldValidator<RegexValidator>  & ValidatorHelper::getEMAIL_VALIDATOR()
{
 
    return *EMAIL_VALIDATOR;
}

FieldValidator<LimitsValidator> & ValidatorHelper::getNON_ZERO_LENGTH_VALIDATOR()
{

    return *NON_ZERO_LENGTH_VALIDATOR;
}
