// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditText.java

#pragma once

#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::EditText
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_TEXT_;
    static const std::string CF_MODE_;
    static const std::string RF_RESULT_;
    static const std::string RF_TEXT_;
    static TableFormat* CFT_EDIT_TEXT_;
    static TableFormat* RFT_EDIT_TEXT_;
    const std::string & text;
    const std::string & mode;
protected:
    void ctor();
    void ctor(const std::string & title, const std::string & text, const std::string & mode);
    void ctor(const std::string & title, DataTable* parameters);

public: /* protected */
    DataTable* constructParameters();

public:
    const std::string & getText();
    void setText(const std::string & text);
    const std::string & getMode();
    void setMode(const std::string & mode);

    // Generated
    EditText();
    EditText(const std::string & title, const std::string & text, const std::string & mode);
    EditText(const std::string & title, DataTable* parameters);
protected:
    EditText(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_TEXT();
    static const std::string& CF_MODE();
    static const std::string& RF_RESULT();
    static const std::string& RF_TEXT();
    static TableFormat*& CFT_EDIT_TEXT();
    static TableFormat*& RFT_EDIT_TEXT();

private:
    ::java::lang::Class* getClass0();
};
