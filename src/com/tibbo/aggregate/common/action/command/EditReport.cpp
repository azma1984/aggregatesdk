#include "action/command/EditReport.h"

#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
/*
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
#include <ObjectArray.h"
*/


EditReport::EditReport()
{
    ctor();
}

EditReport::EditReport(const std::string& title, const std::string& template_, DataTable* data)
    : GenericActionCommand(title,template_,data)
{    
}

EditReport::EditReport(const std::string& title, DataTable* parameters)
    : GenericActionCommand(title, parameters)
{    
}

void EditReport::ctor(const std::string& title, const std::string& template_, DataTable* data)
    : GenericActionCommand(ActionUtils::CMD_EDIT_REPORT(), title)
{
    this->template_ = template_;
    *(this->data) = *data;
}

void EditReport::ctor(std::string* title, DataTable* parameters)
    : GenericActionCommand(ActionUtils::CMD_EDIT_REPORT(), title, parameters, CFT_EDIT_REPORT_)
{    
}

std::string EditReport::getTemplate()
{
    return template_;
}

void EditReport::setTemplate(std::string* template_)
{
    this->template_ = template_;
}

DataTable* EditReport::getData()
{
    return data;
}

void EditReport::setData(DataTable* data)
{
    *this->data = *data;
}

