// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowDiff.java

#pragma once

#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::ShowDiff
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_FIRST_FILE_TITLE_;
    static const std::string CF_FIRST_FILE_;
    static const std::string CF_SECOND_FILE_TITLE_;
    static const std::string CF_SECOND_FILE_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SHOW_DIFF_;
    std::string* firstFileTitle;
    std::string* secondFileTitle;
    std::string* firstFile;
    std::string* secondFile;
protected:
    void ctor();
    void ctor(std::string* title, std::string* _firstFileTitle, std::string* _firstFile, std::string* _secondFileTitle, std::string* _secondFile);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

    // Generated

public:
    ShowDiff();
    ShowDiff(std::string* title, std::string* _firstFileTitle, std::string* _firstFile, std::string* _secondFileTitle, std::string* _secondFile);
    ShowDiff(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    ShowDiff(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_FIRST_FILE_TITLE();
    static const std::string& CF_FIRST_FILE();
    static const std::string& CF_SECOND_FILE_TITLE();
    static const std::string& CF_SECOND_FILE();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SHOW_DIFF();

private:
    ::java::lang::Class* getClass0();
};
