// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/RegexValidator.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.h"



class com::tibbo::aggregate::common::datatable::validator::RegexValidator
    : public AbstractFieldValidator
{

public:
    typedef AbstractFieldValidator super;

private:
    static const std::string SEPARATOR_;
    static const std::string SEPARATOR_REGEX_;
    std::string* regex;
    std::string* message;
protected:
    void ctor(std::string* source);
    void ctor(std::string* regex, std::string* message);

public:
    bool shouldEncode();
    std::string* encode();
    ::java::lang::Character* getType();
    void* validate(void* value) /* throws(ValidationException) */;
    int hashCode();
    bool equals(void* obj);

    // Generated
    RegexValidator(std::string* source);
    RegexValidator(std::string* regex, std::string* message);
protected:
    RegexValidator(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& SEPARATOR();
    static const std::string& SEPARATOR_REGEX();
    ::java::lang::Class* getClass0();
};
