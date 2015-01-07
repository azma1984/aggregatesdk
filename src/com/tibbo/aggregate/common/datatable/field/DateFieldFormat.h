// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DateFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/text/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/util/Date.h"



class com::tibbo::aggregate::common::datatable::field::DateFieldFormat
    : public ::com::tibbo::aggregate::common::datatable::FieldFormat
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::FieldFormat super;

private:
    static const std::string EDITOR_TIME_;
    static const std::string EDITOR_DATE_;
    static ::java::util::Date* DEFAULT_DATE_;
    ::java::text::SimpleDateFormat* dateFormatter;
protected:
    void ctor(std::string* name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    ::java::util::Date* getNotNullDefault();
    ::java::util::Date* valueFromString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    std::string* valueToString(::java::util::Date* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

    // Generated

public:
    DateFieldFormat(std::string* name);
protected:
    DateFieldFormat(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    std::string* valueToString(void* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void* valueFromString(std::string* value);
    std::string* valueToString(void* value);
    static const std::string& EDITOR_TIME();
    static const std::string& EDITOR_DATE();

private:
    static ::java::util::Date*& DEFAULT_DATE();
    ::java::lang::Class* getClass0();
};
