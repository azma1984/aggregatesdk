#include "datatable/TableFormat.h"

#include "util/ElementList.h"
#include "AggreGateException.h"

const std::string TableFormat::ELEMENT_FLAGS = "F";
const std::string TableFormat::ELEMENT_TABLE_VALIDATORS = "V";
const std::string TableFormat::ELEMENT_RECORD_VALIDATORS = "R";
const std::string TableFormat::ELEMENT_BINDINGS = "B";
const std::string TableFormat::ELEMENT_MIN_RECORDS = "M";
const std::string TableFormat::ELEMENT_MAX_RECORDS = "X";
const std::string TableFormat::ELEMENT_NAMING = "N";

TableFormatPtr TableFormat::EMPTY_FORMAT;


TableFormat::TableFormat() 
{
    minRecords = DEFAULT_MIN_RECORDS;
    maxRecords = DEFAULT_MAX_RECORDS;
}

TableFormat::TableFormat(bool reorderable) 
{
    TableFormat::TableFormat();
}

TableFormat::TableFormat(int minRecords, int maxRecords)
{
    TableFormat::TableFormat();
}

TableFormat::TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat)
{
    TableFormat::TableFormat();
}

TableFormatPtr TableFormat::getEMPTY_FORMAT()
{
    if (EMPTY_FORMAT.get() == NULL)
    {
        EMPTY_FORMAT = TableFormatPtr(new TableFormat(0, 0));
    }
    return EMPTY_FORMAT;
}

TableFormatPtr TableFormat::addFields(std::list<FieldFormatPtr> fieldFormats)
{
    return 0;
}

TableFormatPtr TableFormat::addField(boost::shared_ptr<FieldFormat> ff)
{
    return 0;
}

TableFormatPtr TableFormat::addField(const std::string &encodedFormat)
{
    return 0;
}

TableFormatPtr TableFormat::addField(char type, const std::string &name)
{
    return 0;
}

TableFormatPtr TableFormat::addField(char type, const std::string &name, const std::string &description)
{
    return 0;
}

TableFormatPtr TableFormat::addField(char type, const std::string &name, const std::string &description, AgObjectPtr defaultValue)
{
    return 0;
}

TableFormatPtr TableFormat::addField(char type, const std::string &name, const std::string &description, AgObjectPtr defaultValue, const std::string &group)
{
    return 0;
}

TableFormatPtr TableFormat::addField(char type, const std::string &name, const std::string &description, AgObjectPtr defaultValue, bool nullable)
{
    return 0;
}

TableFormatPtr TableFormat::addField(char type, const std::string &name, const std::string &description, AgObjectPtr defaultValue, bool nullable, const std::string &group)
{
    return 0;
}

TableFormatPtr TableFormat::addField(FieldFormatPtr ff, int index)
{
    return 0;
}

TableFormatPtr TableFormat::addField(char type, const std::string &name, int index)
{
    return 0;
}

TableFormatPtr TableFormat::removeField(const std::string &name)
{
    return 0;
}

TableFormatPtr TableFormat::renameField(const std::string &oldName, const std::string &newName)
{
    return 0;
}

char TableFormat::getFieldType(int index)
{
    return 0;
}

std::string TableFormat::getFieldName(int index)
{
    return std::string();
}

int TableFormat::getFieldIndex(const std::string &name)
{
    return 0;
}

int TableFormat::getFieldCount()
{
    return 0;
}


TableFormat *TableFormat::clone() const
{
    return NULL;
}

std::list<FieldFormatPtr> TableFormat::getFields()
{
    return fields;
}

TableFormatPtr TableFormat::setNamingExpression(ExpressionPtr namingExpression)
{
    return 0;
}

TableFormatPtr TableFormat::setNamingExpression(const std::string &namingExpression)
{
    return 0;
}

void TableFormat::makeImmutable(DataTablePtr immutabilizer)
{

}


