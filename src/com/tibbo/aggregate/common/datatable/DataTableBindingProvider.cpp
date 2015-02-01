#include "datatable/DataTableBindingProvider.h"

const std::string DataTableBindingProvider::PROPERTY_ENABLED = "enabled";
const std::string DataTableBindingProvider::PROPERTY_HIDDEN = "hidden";
const std::string DataTableBindingProvider::PROPERTY_CHOICES = "choices";
const std::string DataTableBindingProvider::PROPERTY_OPTIONS = "options";




DataTableBindingProvider::DataTableBindingProvider(DataTablePtr table)
{

}

DataTableBindingProvider::DataTableBindingProvider(DataTablePtr table, ErrorCollectorPtr errorCollector)
{

}

std::map<BindingPtr, EvaluationOptionsPtr> DataTableBindingProvider::createBindings()
{
    return std::map<BindingPtr, EvaluationOptionsPtr>();
}

void DataTableBindingProvider::stop()
{

}

void DataTableBindingProvider::writeReference(int method, ReferencePtr ref, ReferencePtr cause, AgObjectPtr value, ChangeCachePtr cache)
{

}

void DataTableBindingProvider::callReferenceChanged(ReferencePtr cause, int method, ReferenceListenerPtr listener)
{

}

ReferenceWriterPtr DataTableBindingProvider::getExternalReferenceWriter()
{
    return 0;
}

void DataTableBindingProvider::setCellValue(AgObjectPtr value, int row, const std::string &field)
{

}

void DataTableBindingProvider::setEnabled(AgObjectPtr value, int row, const std::string &field)
{

}

void DataTableBindingProvider::setHidden(AgObjectPtr value, int row, const std::string &field)
{

}

void DataTableBindingProvider::setOptions(AgObjectPtr value, int row, const std::string &field)
{

}

void DataTableBindingProvider::setSelectionValues(AgObjectPtr value, int row, const std::string &field)
{

}

void DataTableBindingProvider::setEditorEnabled(bool enabled)
{

}

FieldFormatPtr DataTableBindingProvider::getFieldFormat(int row, const std::string &field)
{
    return 0;
}
