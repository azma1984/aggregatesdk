#include "datatable/converter/AbstractFormatConverter.h"
#include "Cres.h"

std::list<std::string> initFIELDS_TO_SKIP()
{
     std::list<std::string> tmp;
     tmp.push_back(AbstractFormatConverter::VF_IS_NULL);
     return tmp;
}

const std::string AbstractFormatConverter::VF_IS_NULL = "isNull";
std::list<std::string> AbstractFormatConverter::FIELDS_TO_SKIP(initFIELDS_TO_SKIP());

boost::shared_ptr<TableFormat> AbstractFormatConverter::deriveNullable(boost::shared_ptr<TableFormat> format)
{
    boost::shared_ptr<TableFormat> cloneFormat = boost::shared_ptr<TableFormat>(format->clone());
    for (std::list<boost::shared_ptr<FieldFormat>>::iterator it = format->getFields().begin(); it != format->getFields().end(); ++it)
    {
        addDisabledBinding(cloneFormat, *it);
    }

    format->addField(FieldFormat::create("<" + VF_IS_NULL + "><B><D=" + Cres::get()->getString("wNullValue") + "><A=0>"), 0);
    return cloneFormat;
}

void AbstractFormatConverter::addDisabledBinding(boost::shared_ptr<TableFormat> format, boost::shared_ptr<FieldFormat> field)
{
    //todo
    //format->addBinding(field->getName() + "#" + DataTableBindingProvider::PROPERTY_ENABLED, "!{" + VF_IS_NULL + "}");
}

void AbstractFormatConverter::addFiledToNullableFormat(boost::shared_ptr<TableFormat> format, boost::shared_ptr<FieldFormat> field)
{
    format->addField(field);
    addDisabledBinding(format, field);
}

void AbstractFormatConverter::removeFiledFromNullableFormat(boost::shared_ptr<TableFormat> format, const std::string &fieldName)
{
    //todo
/*    for (Binding binding : format.getBindings())
    {
      if (fieldName.equals(binding.getReference().getField()))
        format.removeBinding(binding);
    }
    format.removeField(fieldName);*/
}

AbstractFormatConverter::AbstractFormatConverter(boost::shared_ptr<Class> valueClass, boost::shared_ptr<TableFormat> format)
{
    this->valueClass = valueClass;
    this->format = format;
}

AbstractFormatConverter::AbstractFormatConverter(boost::shared_ptr<Class> valueClass)
{
    this->valueClass = valueClass;
}

boost::shared_ptr<Class> AbstractFormatConverter::getValueClass()
{
    return valueClass;
}

void AbstractFormatConverter::setValueClass(boost::shared_ptr<Class> valueClass)
{
    this->valueClass = valueClass;
}

boost::shared_ptr<TableFormat> AbstractFormatConverter::getFormat()
{
    return format;
}

boost::shared_ptr<FieldFormat> AbstractFormatConverter::createFieldFormat(const std::string &name)
{
    return DataTableConversion::createTableField(name, format);
}

boost::shared_ptr<AgObject> AbstractFormatConverter::instantiate(boost::shared_ptr<DataRecord> source)
{
    //todo
    return 0;
    //boost::shared_ptr<DataTable> dataRecord = convertToBean(source->wrap(), NULL);
    //return dataRecord;

}

boost::shared_ptr<AgObject> AbstractFormatConverter::clone(boost::shared_ptr<AgObject> value, bool useConversion)
{
    if (useConversion)
    {
        boost::shared_ptr<AgObject> fieldValue = convertToTable(value);
        //return convertToBean(fieldValue, NULL);
    }
    else
    {
        return NULL;
    }
}

boost::shared_ptr<AgObject> AbstractFormatConverter::convertToTable(boost::shared_ptr<AgObject> value)
{
    // todo
    return 0;
    //return FormatConverter::convertToTable(value, NULL);
}

boost::shared_ptr<DataTable> AbstractFormatConverter::simpleToTable(boost::shared_ptr<AgObject> value, boost::shared_ptr<TableFormat> format)
{
    return DataTableConversion::beanToRecord(value, format, true, false, FIELDS_TO_SKIP)->wrap();
}







