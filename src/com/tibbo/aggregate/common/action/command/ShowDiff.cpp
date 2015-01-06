// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowDiff.java
//#include <com/tibbo/aggregate/common/action/command/ShowDiff.h"

#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::command::ShowDiff::ShowDiff(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::ShowDiff::ShowDiff() 
    : ShowDiff(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::ShowDiff::ShowDiff(std::string* title, std::string* _firstFileTitle, std::string* _firstFile, std::string* _secondFileTitle, std::string* _secondFile) 
    : ShowDiff(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,_firstFileTitle,_firstFile,_secondFileTitle,_secondFile);
}

com::tibbo::aggregate::common::action::command::ShowDiff::ShowDiff(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) 
    : ShowDiff(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::ShowDiff::CF_FIRST_FILE_TITLE()
{
    
    return CF_FIRST_FILE_TITLE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowDiff::CF_FIRST_FILE_TITLE_;

std::string& com::tibbo::aggregate::common::action::command::ShowDiff::CF_FIRST_FILE()
{
    
    return CF_FIRST_FILE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowDiff::CF_FIRST_FILE_;

std::string& com::tibbo::aggregate::common::action::command::ShowDiff::CF_SECOND_FILE_TITLE()
{
    
    return CF_SECOND_FILE_TITLE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowDiff::CF_SECOND_FILE_TITLE_;

std::string& com::tibbo::aggregate::common::action::command::ShowDiff::CF_SECOND_FILE()
{
    
    return CF_SECOND_FILE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowDiff::CF_SECOND_FILE_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::ShowDiff::CFT_SHOW_DIFF()
{
    
    return CFT_SHOW_DIFF_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::ShowDiff::CFT_SHOW_DIFF_;

void com::tibbo::aggregate::common::action::command::ShowDiff::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_DIFF(), CFT_SHOW_DIFF_, static_cast< ::com::tibbo::aggregate::common::datatable::TableFormat* >(0));
}

void com::tibbo::aggregate::common::action::command::ShowDiff::ctor(std::string* title, std::string* _firstFileTitle, std::string* _firstFile, std::string* _secondFileTitle, std::string* _secondFile)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_DIFF(), title);
    firstFileTitle = _firstFileTitle;
    firstFile = _firstFile;
    secondFileTitle = _secondFileTitle;
    secondFile = _secondFile;
}

void com::tibbo::aggregate::common::action::command::ShowDiff::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_DIFF(), title, parameters, CFT_SHOW_DIFF_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::ShowDiff::constructParameters()
{
    auto dt = new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_SHOW_DIFF_);
    auto rec = dt)->addRecord();
    rec)->setValue(CF_FIRST_FILE_TITLE_, firstFileTitle));
    rec)->setValue(CF_FIRST_FILE_, firstFile));
    rec)->setValue(CF_SECOND_FILE_TITLE_, secondFileTitle));
    rec)->setValue(CF_SECOND_FILE_, secondFile));
    return dt;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::ShowDiff::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowDiff", 50);
    return c;
}

void com::tibbo::aggregate::common::action::command::ShowDiff::clinit()
{
struct string_init_ {
    string_init_() {
    CF_FIRST_FILE_TITLE_ = u"firstFileTitle"_j;
    CF_FIRST_FILE_ = u"firstFile"_j;
    CF_SECOND_FILE_TITLE_ = u"secondFileTitle"_j;
    CF_SECOND_FILE_ = u"secondFile"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SHOW_DIFF_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            CFT_SHOW_DIFF_)->addField(::com::tibbo::aggregate::common::datatable::FieldFormat::create(CF_FIRST_FILE_TITLE_, ::com::tibbo::aggregate::common::datatable::FieldFormat::STRING_FIELD));
            CFT_SHOW_DIFF_)->addField(::com::tibbo::aggregate::common::datatable::FieldFormat::create(CF_FIRST_FILE_, ::com::tibbo::aggregate::common::datatable::FieldFormat::STRING_FIELD));
            CFT_SHOW_DIFF_)->addField(::com::tibbo::aggregate::common::datatable::FieldFormat::create(CF_SECOND_FILE_TITLE_, ::com::tibbo::aggregate::common::datatable::FieldFormat::STRING_FIELD));
            CFT_SHOW_DIFF_)->addField(::com::tibbo::aggregate::common::datatable::FieldFormat::create(CF_SECOND_FILE_, ::com::tibbo::aggregate::common::datatable::FieldFormat::STRING_FIELD));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::ShowDiff::getClass0()
{
    return class_();
}

