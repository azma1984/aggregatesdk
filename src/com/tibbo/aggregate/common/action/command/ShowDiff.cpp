#include"action/command/ShowDiff.h"


#include "action/ActionUtils.h"
//#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include "datatable/DataTable.h"
//#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <com/tibbo/aggregate/common/datatable/TableFormat.h"



ShowDiff::ShowDiff()
{
    ctor();
}

ShowDiff::ShowDiff(std::string* title, std::string* _firstFileTitle, std::string* _firstFile, std::string* _secondFileTitle, std::string* _secondFile)
{
    ctor(title,_firstFileTitle,_firstFile,_secondFileTitle,_secondFile);
}

ShowDiff::ShowDiff(std::string* title, DataTable* parameters)
{
    GenericActionCommand(title,parameters);
}


void ShowDiff::ctor()
{
    GenericActionCommand(ActionUtils::CMD_SHOW_DIFF(), CFT_SHOW_DIFF_, 0);
}

void ShowDiff::ctor(std::string* title, std::string* _firstFileTitle, std::string* _firstFile, std::string* _secondFileTitle, std::string* _secondFile)
{
    GenericActionCommand(ActionUtils::CMD_SHOW_DIFF(), title);
    firstFileTitle = _firstFileTitle;
    firstFile = _firstFile;
    secondFileTitle = _secondFileTitle;
    secondFile = _secondFile;
}

void ShowDiff::ctor(std::string* title, DataTable* parameters)
{
    ctor(ActionUtils::CMD_SHOW_DIFF(), title, parameters, CFT_SHOW_DIFF_);
}

DataTable* ShowDiff::constructParameters()
{
    auto dt = new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_SHOW_DIFF_);
    auto rec = dt)->addRecord();
    rec)->setValue(CF_FIRST_FILE_TITLE_, firstFileTitle));
    rec)->setValue(CF_FIRST_FILE_, firstFile));
    rec)->setValue(CF_SECOND_FILE_TITLE_, secondFileTitle));
    rec)->setValue(CF_SECOND_FILE_, secondFile));
    return dt;
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

