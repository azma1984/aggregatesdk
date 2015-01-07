// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/ValidatorHelper.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::validator::ValidatorHelper
    
{

public:
    typedef void super;
    static const int MIN_NAME_LENGTH = 1) };
    static const int MAX_NAME_LENGTH = 50) };
    static const int MIN_TYPE_LENGTH = 1) };
    static const int MAX_TYPE_LENGTH = 50) };
    static const int MIN_DESCRIPTION_LENGTH) };
    static const int MAX_DESCRIPTION_LENGTH = 100) };

private:
    static FieldValidator* NAME_SYNTAX_VALIDATOR_;
    static FieldValidator* NAME_LENGTH_VALIDATOR_;
    static FieldValidator* DESCRIPTION_SYNTAX_VALIDATOR_;
    static FieldValidator* DESCRIPTION_LENGTH_VALIDATOR_;
    static FieldValidator* TYPE_SYNTAX_VALIDATOR_;
    static FieldValidator* TYPE_LENGTH_VALIDATOR_;
    static const std::string IP_PART_;
    static FieldValidator* IP_ADDRESS_VALIDATOR_;
    static FieldValidator* PORT_VALIDATOR_;
    static FieldValidator* EMAIL_VALIDATOR_;
    static FieldValidator* NON_ZERO_LENGTH_VALIDATOR_;

    // Generated

public:
    ValidatorHelper();
protected:
    ValidatorHelper(const ::default_init_tag&);


public:
    
    static void 
    static FieldValidator*& NAME_SYNTAX_VALIDATOR();
    static FieldValidator*& NAME_LENGTH_VALIDATOR();
    static FieldValidator*& DESCRIPTION_SYNTAX_VALIDATOR();
    static FieldValidator*& DESCRIPTION_LENGTH_VALIDATOR();
    static FieldValidator*& TYPE_SYNTAX_VALIDATOR();
    static FieldValidator*& TYPE_LENGTH_VALIDATOR();

private:
    static const std::string& IP_PART();

public:
    static FieldValidator*& IP_ADDRESS_VALIDATOR();
    static FieldValidator*& PORT_VALIDATOR();
    static FieldValidator*& EMAIL_VALIDATOR();
    static FieldValidator*& NON_ZERO_LENGTH_VALIDATOR();

private:
    ::java::lang::Class* getClass0();
};
