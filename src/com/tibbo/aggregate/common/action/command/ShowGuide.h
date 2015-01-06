// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowGuide.java

#pragma once

#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::ShowGuide
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_INVOKER_CONTEXT_;
    static const std::string CF_MACRO_NAME_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SHOW_GUIDE_;
    std::string* invokerContext;
    std::string* macroName;
protected:
    void ctor();
    void ctor(std::string* title, std::string* invokerContext, std::string* macroName);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getInvokerContext();
    void setInvokerContext(std::string* invokerContext);
    std::string* getMacroName();
    void setMacroName(std::string* macroName);

    // Generated
    ShowGuide();
    ShowGuide(std::string* title, std::string* invokerContext, std::string* macroName);
    ShowGuide(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    ShowGuide(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_INVOKER_CONTEXT();
    static const std::string& CF_MACRO_NAME();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SHOW_GUIDE();

private:
    ::java::lang::Class* getClass0();
};
