// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/LimitsValidator.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.h"



class com::tibbo::aggregate::common::datatable::validator::LimitsValidator
    : public AbstractFieldValidator
{

public:
    typedef AbstractFieldValidator super;

private:
    static const char16_t MIN_MAX_SEPARATOR { u' ' };
    ::java::lang::Comparable* min;
    ::java::lang::Comparable* max;
protected:
    void ctor(::com::tibbo::aggregate::common::datatable::FieldFormat* fieldFormat, std::string* source);
    void ctor(::java::lang::Comparable* min, ::java::lang::Comparable* max);

public:
    bool shouldEncode();
    ::java::lang::Character* getType();
    ::java::lang::Comparable* getMin();
    ::java::lang::Comparable* getMax();
    std::string* encode();
    void* validate(void* value) /* throws(ValidationException) */;

private:
    void compare(::java::lang::Comparable* cv, std::string* smallMessage, std::string* bigMessage) /* throws(ValidationException) */;

public:
    int hashCode();
    bool equals(void* obj);

    // Generated
    LimitsValidator(::com::tibbo::aggregate::common::datatable::FieldFormat* fieldFormat, std::string* source);
    LimitsValidator(::java::lang::Comparable* min, ::java::lang::Comparable* max);
protected:
    LimitsValidator(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
