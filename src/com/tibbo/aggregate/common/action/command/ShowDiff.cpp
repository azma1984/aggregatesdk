#include"action/command/ShowDiff.h"


#include "action/ActionUtils.h"
//#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include "datatable/DataTable.h"
//#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <com/tibbo/aggregate/common/datatable/TableFormat.h"

const std::string ShowDiff::CF_FIRST_FILE_TITLE = "firstFileTitle";
const std::string ShowDiff::CF_FIRST_FILE = "firstFile";
const std::string ShowDiff::CF_SECOND_FILE_TITLE = "secondFileTitle";
const std::string ShowDiff::CF_SECOND_FILE = "secondFile";


ShowDiff::ShowDiff()
{
    clinit();
    ctor();
}

ShowDiff::ShowDiff(const std::string& title, boost::shared_ptr<DataTable> parameters)
{
    clinit();
    ctor(title, parameters);
}

ShowDiff::ShowDiff(const std::string& title, const std::string& _firstFileTitle, const std::string& _firstFile,
                   const std::string& _secondFileTitle, const std::string& _secondFile)
{
    clinit();
    ctor(title,_firstFileTitle,_firstFile,_secondFileTitle,_secondFile);
}

void ShowDiff::ctor()
{
    GenericActionCommand(ActionUtils::CMD_SHOW_DIFF, CFT_SHOW_DIFF, 0);
}

void ShowDiff::ctor(const std::string& title, const std::string& _firstFileTitle, const std::string& _firstFile, const std::string& _secondFileTitle,
                    const std::string& _secondFile)
{
    GenericActionCommand(ActionUtils::CMD_SHOW_DIFF, title);
    firstFileTitle = _firstFileTitle;
    firstFile = _firstFile;
    secondFileTitle = _secondFileTitle;
    secondFile = _secondFile;
}

void ShowDiff::ctor(const std::string& title, boost::shared_ptr<DataTable> parameters)
{
    ctor(ActionUtils::CMD_SHOW_DIFF, title, parameters, CFT_SHOW_DIFF);
}

DataTable* ShowDiff::constructParameters()
{
    DataTable* dt = new DataTable(CFT_SHOW_DIFF);
    DataRecord* rec = dt->addRecord();

    rec->setValue(CF_FIRST_FILE_TITLE_, firstFileTitle);
    rec->setValue(CF_FIRST_FILE_, firstFile);
    rec->setValue(CF_SECOND_FILE_TITLE_, secondFileTitle);
    rec->setValue(CF_SECOND_FILE_, secondFile);

    return dt;
}
//TODO: FieldFormat
void ShowDiff::clinit()
{/*
    if (!CFT_SHOW_DIFF) {
        CFT_SHOW_DIFF = new TableFormat(1, 1);
        CFT_SHOW_DIFF.addField(FieldFormat::create(CF_FIRST_FILE_TITLE, FieldFormat.STRING_FIELD));
        CFT_SHOW_DIFF.addField(FieldFormat::create(CF_FIRST_FILE, FieldFormat.STRING_FIELD));
        CFT_SHOW_DIFF.addField(FieldFormat::create(CF_SECOND_FILE_TITLE, FieldFormat.STRING_FIELD));
        CFT_SHOW_DIFF.addField(FieldFormat::create(CF_SECOND_FILE, FieldFormat.STRING_FIELD));
    }
    */
}

