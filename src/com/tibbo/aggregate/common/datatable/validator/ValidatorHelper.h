#ifndef _ValidatorHelper_H_
#define _ValidatorHelper_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "datatable/validator/FieldValidator.h"
#include "Cres.h"
#include "datatable/validator/RegexValidator.h"
#include "datatable/validator/LimitsValidator.h"
#include <limits>

//Singleton

class ValidatorHelper
{
 private:
	ValidatorHelper();
   ~ValidatorHelper();
   ValidatorHelper(ValidatorHelper const&);
   void operator=(ValidatorHelper const&);
   
   boost::shared_ptr< FieldValidator<RegexValidator> > NAME_SYNTAX_VALIDATOR;
   boost::shared_ptr< FieldValidator<LimitsValidator> > NAME_LENGTH_VALIDATOR;
   boost::shared_ptr< FieldValidator<RegexValidator> > DESCRIPTION_SYNTAX_VALIDATOR;
   boost::shared_ptr< FieldValidator<LimitsValidator> > DESCRIPTION_LENGTH_VALIDATOR;
   boost::shared_ptr< FieldValidator<RegexValidator> > TYPE_SYNTAX_VALIDATOR;
   boost::shared_ptr< FieldValidator<LimitsValidator> > TYPE_LENGTH_VALIDATOR;
   boost::shared_ptr< FieldValidator<RegexValidator> > IP_ADDRESS_VALIDATOR;
   boost::shared_ptr< FieldValidator<LimitsValidator> > PORT_VALIDATOR;
   boost::shared_ptr< FieldValidator<RegexValidator> > EMAIL_VALIDATOR;
   boost::shared_ptr< FieldValidator<LimitsValidator> > NON_ZERO_LENGTH_VALIDATOR;

   static const std::string IP_PART;

 public:   
   static const int MIN_NAME_LENGTH=1;
   static const int MAX_NAME_LENGTH=50;
   
   static const int MIN_TYPE_LENGTH=1;
   static const int MAX_TYPE_LENGTH=50;

   static const int MIN_DESCRIPTION_LENGTH=0;
   static const int MAX_DESCRIPTION_LENGTH=100;

    static ValidatorHelper& getInstance()
    {
     static ValidatorHelper instance;
     return instance;
    }
 
    FieldValidator<RegexValidator>& getNAME_SYNTAX_VALIDATOR();
    FieldValidator<LimitsValidator>& getNAME_LENGTH_VALIDATOR();
    FieldValidator<RegexValidator>& getDESCRIPTION_SYNTAX_VALIDATOR();
    FieldValidator<LimitsValidator>& getDESCRIPTION_LENGTH_VALIDATOR();
    FieldValidator<RegexValidator>& getTYPE_SYNTAX_VALIDATOR();
    FieldValidator<LimitsValidator>& getTYPE_LENGTH_VALIDATOR();

    FieldValidator<RegexValidator>& getIP_ADDRESS_VALIDATOR();
    FieldValidator<LimitsValidator>& getPORT_VALIDATOR();
    FieldValidator<RegexValidator>& getEMAIL_VALIDATOR();
    FieldValidator<LimitsValidator>& getNON_ZERO_LENGTH_VALIDATOR();


};
#endif