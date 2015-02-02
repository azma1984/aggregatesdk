#pragma once

#include "datatable/validator/FieldValidator.h"
#include "datatable/validator/RegexValidator.h"
#include "datatable/validator/LimitsValidator.h"
#include "util/Pointers.h"


class ValidatorHelper
{
 private:
	ValidatorHelper();
   ~ValidatorHelper();


   FieldValidatorPtr NAME_SYNTAX_VALIDATOR;
   FieldValidatorPtr NAME_LENGTH_VALIDATOR;
   FieldValidatorPtr DESCRIPTION_SYNTAX_VALIDATOR;
   FieldValidatorPtr DESCRIPTION_LENGTH_VALIDATOR;
   FieldValidatorPtr TYPE_SYNTAX_VALIDATOR;
   FieldValidatorPtr TYPE_LENGTH_VALIDATOR;
   FieldValidatorPtr IP_ADDRESS_VALIDATOR;
   FieldValidatorPtr PORT_VALIDATOR;
   FieldValidatorPtr EMAIL_VALIDATOR;
   FieldValidatorPtr NON_ZERO_LENGTH_VALIDATOR;

   static const std::string IP_PART;

 public:   
    static const int MIN_NAME_LENGTH = 1;
    static const int MAX_NAME_LENGTH = 50;
   
    static const int MIN_TYPE_LENGTH = 1;
    static const int MAX_TYPE_LENGTH = 50;

    static const int MIN_DESCRIPTION_LENGTH = 0;
    static const int MAX_DESCRIPTION_LENGTH = 100;

    static ValidatorHelper& getInstance()
    {
        static ValidatorHelper instance;
        return instance;
    }
 
    FieldValidatorPtr getNAME_SYNTAX_VALIDATOR();
    FieldValidatorPtr getNAME_LENGTH_VALIDATOR();
    FieldValidatorPtr getDESCRIPTION_SYNTAX_VALIDATOR();
    FieldValidatorPtr getDESCRIPTION_LENGTH_VALIDATOR();
    FieldValidatorPtr getTYPE_SYNTAX_VALIDATOR();
    FieldValidatorPtr getTYPE_LENGTH_VALIDATOR();

    FieldValidatorPtr getIP_ADDRESS_VALIDATOR();
    FieldValidatorPtr getPORT_VALIDATOR();
    FieldValidatorPtr getEMAIL_VALIDATOR();
    FieldValidatorPtr getNON_ZERO_LENGTH_VALIDATOR();
};
