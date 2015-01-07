// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/IdValidator.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.h"



class com::tibbo::aggregate::common::datatable::validator::IdValidator
    : public AbstractFieldValidator
{

public:
    typedef AbstractFieldValidator super;
protected:
    void ctor();

public:
    bool shouldEncode();
    std::string* encode();
    ::java::lang::Character* getType();
    void* validate(void* value) /* throws(ValidationException) */;

    // Generated
    IdValidator();
protected:
    IdValidator(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
