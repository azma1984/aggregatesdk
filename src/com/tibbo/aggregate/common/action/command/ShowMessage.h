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
    static TableFormat* CFT_SHOW_MESSAGE_;
    const std::string & message;
    int level;
protected:
    void ctor();
    void ctor(const std::string & title, const std::string & message, int level);
    void ctor(const std::string & title, DataTable* parameters);

public: /* protected */
    DataTable* constructParameters();

public:
    const std::string & getMessage();
    int getLevel();
    void setMessage(const std::string & message);
    void setLevel(int level);

    // Generated
    ShowMessage();
    ShowMessage(const std::string & title, const std::string & message, int level);
    ShowMessage(const std::string & title, DataTable* parameters);
protected:
    ShowMessage(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_MESSAGE();
    static const std::string& CF_LEVEL();
    static TableFormat*& CFT_SHOW_MESSAGE();

private:
    ::java::lang::Class* getClass0();
};
