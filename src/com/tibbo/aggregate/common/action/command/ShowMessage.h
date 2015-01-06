// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowMessage.java

#pragma once

////#include <fwd-aggregate_sdk_5.11.00.h"
///#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::ShowMessage
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_MESSAGE_;
    static const std::string CF_LEVEL_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SHOW_MESSAGE_;
    std::string* message;
    int level;
protected:
    void ctor();
    void ctor(std::string* title, std::string* message, int level);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getMessage();
    int getLevel();
    void setMessage(std::string* message);
    void setLevel(int level);

    // Generated
    ShowMessage();
    ShowMessage(std::string* title, std::string* message, int level);
    ShowMessage(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    ShowMessage(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_MESSAGE();
    static const std::string& CF_LEVEL();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SHOW_MESSAGE();

private:
    ::java::lang::Class* getClass0();
};
