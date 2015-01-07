// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/IntFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Integer.h"



class com::tibbo::aggregate::common::datatable::field::IntFieldFormat
    : public ::com::tibbo::aggregate::common::datatable::FieldFormat
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::FieldFormat super;

private:
    static const std::string EDITOR_SPINNER_;
    static const std::string EDITOR_EVENT_LEVEL_;
protected:
    void ctor(std::string* name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    ::java::lang::Integer* getNotNullDefault();

public: /* protected */
    void* convertValue(void* value) /* throws(ValidationException) */;

public:
    ::java::lang::Integer* valueFromString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    std::string* valueToString(::java::lang::Integer* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

    // Generated

public:
    IntFieldFormat(std::string* name);
protected:
    IntFieldFormat(const ::default_init_tag&);


public:
    
    static void 
    std::string* valueToString(void* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void* valueFromString(std::string* value);
    std::string* valueToString(void* value);
    static const std::string& EDITOR_SPINNER();
    static const std::string& EDITOR_EVENT_LEVEL();

private:
    ::java::lang::Class* getClass0();
};
