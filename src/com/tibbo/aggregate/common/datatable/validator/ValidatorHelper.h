#ifndef _ValidatorHelper_H_
#define _ValidatorHelper_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "datatable/validator/FieldValidator.h"

class ValidatorHelper
{
private:
    static boost::shared_ptr<FieldValidator> NAME_SYNTAX_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> NAME_LENGTH_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> DESCRIPTION_SYNTAX_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> DESCRIPTION_LENGTH_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> TYPE_SYNTAX_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> TYPE_LENGTH_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> IP_ADDRESS_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> PORT_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> EMAIL_VALIDATOR_;
    static boost::shared_ptr<FieldValidator> NON_ZERO_LENGTH_VALIDATOR_;
    static const std::string IP_PART_;

public:   
    static const int MIN_NAME_LENGTH;
    static const int MAX_NAME_LENGTH;
    static const int MIN_TYPE_LENGTH;
    static const int MAX_TYPE_LENGTH;
    static const int MIN_DESCRIPTION_LENGTH;
    static const int MAX_DESCRIPTION_LENGTH;

    static boost::shared_ptr<FieldValidator> NAME_SYNTAX_VALIDATOR();
    static boost::shared_ptr<FieldValidator> NAME_LENGTH_VALIDATOR();
    static boost::shared_ptr<FieldValidator> DESCRIPTION_SYNTAX_VALIDATOR();
    static boost::shared_ptr<FieldValidator> DESCRIPTION_LENGTH_VALIDATOR();
    static boost::shared_ptr<FieldValidator> TYPE_SYNTAX_VALIDATOR();
    static boost::shared_ptr<FieldValidator> TYPE_LENGTH_VALIDATOR();

    static boost::shared_ptr<FieldValidator> IP_ADDRESS_VALIDATOR();
    static boost::shared_ptr<FieldValidator> PORT_VALIDATOR();
    static boost::shared_ptr<FieldValidator> EMAIL_VALIDATOR();
    static boost::shared_ptr<FieldValidator> NON_ZERO_LENGTH_VALIDATOR();
};
