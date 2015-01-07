// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/AbstractFormatConverter.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/datatable/converter/FormatConverter.h"



class com::tibbo::aggregate::common::datatable::converter::AbstractFormatConverter
    
    , public FormatConverter
{

public:
    typedef void super;

private:
    static const std::string VF_IS_NULL_;
    static ::java::util::LinkedHashSet* FIELDS_TO_SKIP_;

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat* deriveNullable(::com::tibbo::aggregate::common::datatable::TableFormat* format);
    static void addFiledToNullableFormat(::com::tibbo::aggregate::common::datatable::TableFormat* format, ::com::tibbo::aggregate::common::datatable::FieldFormat* field);
    static void removeFiledFromNullableFormat(::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* fieldName);

private:
    static void addDisabledBinding(::com::tibbo::aggregate::common::datatable::TableFormat* format, ::com::tibbo::aggregate::common::datatable::FieldFormat* field);
    ::java::lang::Class* valueClass;
    ::com::tibbo::aggregate::common::datatable::TableFormat* format;
protected:
    void ctor(::java::lang::Class* valueClass, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    void ctor(::java::lang::Class* valueClass);

public:
    ::java::lang::Class* getValueClass();
    void setValueClass(::java::lang::Class* valueClass);
    ::com::tibbo::aggregate::common::datatable::TableFormat* getFormat();
    ::com::tibbo::aggregate::common::datatable::FieldFormat* createFieldFormat(std::string* name);
    void* instantiate(::com::tibbo::aggregate::common::datatable::DataRecord* source) /* throws(InstantiationException) */;
    void* clone(void* value, bool useConversion);
    void* convertToTable(void* value);

public: /* protected */
    static void* simpleToTable(void* value, ::com::tibbo::aggregate::common::datatable::TableFormat* format);

    // Generated

public:
    AbstractFormatConverter(::java::lang::Class* valueClass, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    AbstractFormatConverter(::java::lang::Class* valueClass);
protected:
    AbstractFormatConverter(const ::default_init_tag&);


public:
    
    static void 

public: /* protected */
    void* clone();

public:
    void* convertToTable(void* value, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    static const std::string& VF_IS_NULL();
    static ::java::util::LinkedHashSet*& FIELDS_TO_SKIP();

private:
    ::java::lang::Class* getClass0();
};
