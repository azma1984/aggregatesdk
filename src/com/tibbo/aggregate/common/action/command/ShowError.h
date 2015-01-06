// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowError.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::ShowError
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_LEVEL_;
    static const std::string CF_MESSAGE_;
    static const std::string CF_EXCEPTION_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SHOW_ERROR_;
    ::java::lang::Throwable* exception;
    int level;
    std::string* message;
protected:
    void ctor();
    void ctor(std::string* title, std::string* message, int level, ::java::lang::Throwable* exception);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    int getLevel();
    void setLevel(int level);
    std::string* getMessage();
    void setMessage(std::string* message);
    ::java::lang::Throwable* getException();
    void setException(::java::lang::Throwable* exception);

    // Generated
    ShowError();
    ShowError(std::string* title, std::string* message, int level, ::java::lang::Throwable* exception);
protected:
    ShowError(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_LEVEL();
    static const std::string& CF_MESSAGE();
    static const std::string& CF_EXCEPTION();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SHOW_ERROR();

private:
    ::java::lang::Class* getClass0();
};
