// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditReport.java

#pragma once

#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"


class com::tibbo::aggregate::common::action::command::EditReport
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_TEMPLATE_;
    static const std::string CF_DATA_;
    static const std::string RF_TEMPLATE_;
    static const std::string RF_RESULT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_EDIT_REPORT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* RFT_EDIT_REPORT_;
    std::string* template_;
    ::com::tibbo::aggregate::common::datatable::DataTable* data;
protected:
    void ctor();
    void ctor(std::string* title, std::string* template_, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getTemplate();
    void setTemplate(std::string* template_);
    ::com::tibbo::aggregate::common::datatable::DataTable* getData();
    void setData(::com::tibbo::aggregate::common::datatable::DataTable* data);

    // Generated
    EditReport();
    EditReport(std::string* title, std::string* template_, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    EditReport(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    EditReport(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_TEMPLATE();
    static const std::string& CF_DATA();
    static const std::string& RF_TEMPLATE();
    static const std::string& RF_RESULT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_EDIT_REPORT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& RFT_EDIT_REPORT();

private:
    ::java::lang::Class* getClass0();
};
