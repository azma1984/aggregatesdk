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
    static TableFormat* CFT_SHOW_GUIDE_;
    const std::string & invokerContext;
    const std::string & macroName;
protected:
    void ctor();
    void ctor(const std::string & title, const std::string & invokerContext, const std::string & macroName);
    void ctor(const std::string & title, DataTable* parameters);

public: /* protected */
    DataTable* constructParameters();

public:
    const std::string & getInvokerContext();
    void setInvokerContext(const std::string & invokerContext);
    const std::string & getMacroName();
    void setMacroName(const std::string & macroName);

    // Generated
    ShowGuide();
    ShowGuide(const std::string & title, const std::string & invokerContext, const std::string & macroName);
    ShowGuide(const std::string & title, DataTable* parameters);
protected:
    ShowGuide(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_INVOKER_CONTEXT();
    static const std::string& CF_MACRO_NAME();
    static TableFormat*& CFT_SHOW_GUIDE();

private:
    ::java::lang::Class* getClass0();
};
