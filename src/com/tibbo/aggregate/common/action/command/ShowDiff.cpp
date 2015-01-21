#include"action/command/ShowDiff.h"


#include "action/ActionUtils.h"
#include "datatable/DataTable.h"


const std::string ShowDiff::CF_FIRST_FILE_TITLE = "firstFileTitle";
const std::string ShowDiff::CF_FIRST_FILE = "firstFile";
const std::string ShowDiff::CF_SECOND_FILE_TITLE = "secondFileTitle";
const std::string ShowDiff::CF_SECOND_FILE = "secondFile";


ShowDiff::ShowDiff()
    : GenericActionCommand(ActionUtils::CMD_SHOW_DIFF, CFT_SHOW_DIFF(), 0)
{    
}

ShowDiff::ShowDiff(const std::string& title, boost::shared_ptr<DataTable> parameters)
    : GenericActionCommand(ActionUtils::CMD_SHOW_DIFF, title, parameters, CFT_SHOW_DIFF())
{    
}

ShowDiff::ShowDiff(const std::string& title, const std::string& _firstFileTitle, const std::string& _firstFile,
                   const std::string& _secondFileTitle, const std::string& _secondFile)
    : GenericActionCommand(ActionUtils::CMD_SHOW_DIFF, title)
{    
    this->firstFileTitle = _firstFileTitle;
    this->firstFile = _firstFile;
    this->secondFileTitle = _secondFileTitle;
    this->secondFile = _secondFile;
}

DataTable* ShowDiff::constructParameters()
{
    DataTable* dt = new DataTable(CFT_SHOW_DIFF());
    DataRecord* rec = dt->addRecord();

    rec->setValue(CF_FIRST_FILE_TITLE, firstFileTitle);
    rec->setValue(CF_FIRST_FILE, firstFile);
    rec->setValue(CF_SECOND_FILE_TITLE, secondFileTitle);
    rec->setValue(CF_SECOND_FILE, secondFile);

    return dt;
}

//TODO: FieldFormat
boost::shared_ptr<TableFormat> ShowDiff::CFT_SHOW_DIFF()
{
    if (!CFT_SHOW_DIFF_) {
        CFT_SHOW_DIFF_.reset( new TableFormat(1, 1) );
        CFT_SHOW_DIFF_->addField( FieldFormat::create(CF_FIRST_FILE_TITLE, FieldFormat::STRING_FIELD));
        CFT_SHOW_DIFF_->addField( FieldFormat::create(CF_FIRST_FILE, FieldFormat::STRING_FIELD));
        CFT_SHOW_DIFF_->addField( FieldFormat::create(CF_SECOND_FILE_TITLE, FieldFormat::STRING_FIELD));
        CFT_SHOW_DIFF_->addField( FieldFormat::create(CF_SECOND_FILE, FieldFormat::STRING_FIELD));
    }

    return CFT_SHOW_DIFF_;
}

