// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableBindingProvider.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.h"



class com::tibbo::aggregate::common::datatable::DataTableBindingProvider
    : public AbstractDataTableBindingProvider
{

public:
    typedef AbstractDataTableBindingProvider super;

private:
    static const std::string PROPERTY_ENABLED_;
    static const std::string PROPERTY_HIDDEN_;
    static const std::string PROPERTY_CHOICES_;
    static const std::string PROPERTY_OPTIONS_;
    static ::com::tibbo::aggregate::common::binding::EvaluationOptions* EVALUATION_OPTIONS_;
    DataTable* table;
    bool headless;
protected:
    void ctor(DataTable* table);
    void ctor(DataTable* table, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);

public:
    std::map createBindings();

public: /* protected */
    void callReferenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, int method, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener);
    ::com::tibbo::aggregate::common::binding::ReferenceWriter* getExternalReferenceWriter();
    void setCellValue(void* value, int row, std::string* field);
    void setEnabled(void* value, int row, std::string* field);
    void setHidden(void* value, int row, std::string* field);
    void setOptions(void* value, int row, std::string* field);
    void setSelectionValues(void* value, int row, std::string* field);
    void setEditorEnabled(bool enabled);

public:
    void start();
    void stop();
    void writeReference(int method, ::com::tibbo::aggregate::common::expression::Reference* ref, ::com::tibbo::aggregate::common::expression::Reference* cause, void* value, ::com::tibbo::aggregate::common::binding::ChangeCache* cache) /* throws(BindingException) */;

public: /* protected */
    FieldFormat* getFieldFormat(int row, std::string* field) /* throws(BindingException) */;

    // Generated

public:
    DataTableBindingProvider(DataTable* table);
    DataTableBindingProvider(DataTable* table, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);
protected:
    DataTableBindingProvider(const ::default_init_tag&);


public:
    
    static void 
    void writeReference(::com::tibbo::aggregate::common::expression::Reference* ref, void* value);
    static const std::string& PROPERTY_ENABLED();
    static const std::string& PROPERTY_HIDDEN();
    static const std::string& PROPERTY_CHOICES();
    static const std::string& PROPERTY_OPTIONS();

private:
    static ::com::tibbo::aggregate::common::binding::EvaluationOptions*& EVALUATION_OPTIONS();
    ::java::lang::Class* getClass0();
};
