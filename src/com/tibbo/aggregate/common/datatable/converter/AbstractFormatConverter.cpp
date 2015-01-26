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
/*    for (Binding binding : format.getBindings())
    {
      if (fieldName.equals(binding.getReference().getField()))
        format.removeBinding(binding);
    }
    format.removeField(fieldName);*/
}

