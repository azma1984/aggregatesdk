// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/NonNullValidator.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.h"



class com::tibbo::aggregate::common::datatable::validator::NonNullValidator
    : public AbstractFieldValidator
{

public:
    typedef AbstractFieldValidator super;

private:
    std::string* message;
protected:
    void ctor();
    void ctor(std::string* message);

public:
    bool shouldEncode();
    std::string* encode();
    ::java::lang::Character* getType();
    void* validate(void* value) /* throws(ValidationException) */;
    int hashCode();
    bool equals(void* obj);

    // Generated
    NonNullValidator();
    NonNullValidator(std::string* message);
protected:
    NonNullValidator(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
