// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditCode.java

#pragma once

#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::EditCode
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_CODE_;
    static const std::string CF_MODE_;
    static const std::string RF_RESULT_;
    static const std::string RF_CODE_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_EDIT_CODE_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* RFT_EDIT_CODE_;
    std::string* code;
    std::string* mode;
protected:
    void ctor();
    void ctor(std::string* title, std::string* code, std::string* mode);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getCode();
    void setCode(std::string* code);
    std::string* getMode();
    void setMode(std::string* mode);

    // Generated
    EditCode();
    EditCode(std::string* title, std::string* code, std::string* mode);
    EditCode(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    EditCode(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_CODE();
    static const std::string& CF_MODE();
    static const std::string& RF_RESULT();
    static const std::string& RF_CODE();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_EDIT_CODE();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& RFT_EDIT_CODE();

private:
    ::java::lang::Class* getClass0();
};
