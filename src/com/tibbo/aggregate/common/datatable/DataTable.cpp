#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"

TableFormatPtr DataTable::DEFAULT_FORMAT;

const std::string DataTable::ELEMENT_FORMAT = "F";
const std::string DataTable::ELEMENT_FORMAT_ID = "D";
const std::string DataTable::ELEMENT_RECORD = "R";
const std::string DataTable::ELEMENT_INVALIDATOR = "I";
const std::string DataTable::ELEMENT_FIELD_NAME = "N";

TableFormatPtr DataTable::getDEFAULT_FORMAT()
{
    if (DEFAULT_FORMAT.get() == NULL)
    {
        DEFAULT_FORMAT = TableFormatPtr(new TableFormat());
        DEFAULT_FORMAT->makeImmutable(NULL);
    }
    return DEFAULT_FORMAT;
}

DataTable::DataTable() : id(0)
{

}
//
//virtual DataTable* clone()
//{
//    //TODO: clone
//}
