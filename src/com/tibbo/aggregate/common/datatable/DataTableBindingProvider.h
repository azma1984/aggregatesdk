#pragma once

#include "datatable/AbstractDataTableBindingProvider.h"
#include <string>
#include "util/Pointers.h"

class DataTableBindingProvider : public AbstractDataTableBindingProvider
{
 //private:

public:
    static const std::string PROPERTY_ENABLED;
    static const std::string PROPERTY_HIDDEN;
    static const std::string PROPERTY_CHOICES;
    static const std::string PROPERTY_OPTIONS;

public:
    DataTableBindingProvider(DataTablePtr table);
    DataTableBindingProvider(DataTablePtr table, ErrorCollectorPtr errorCollector);

    std::map<BindingPtr, EvaluationOptionsPtr> createBindings();
    void stop();
    void writeReference(int method, ReferencePtr ref, ReferencePtr cause, AgObjectPtr value, ChangeCachePtr cache);

protected:
    virtual void callReferenceChanged(ReferencePtr cause, int method, ReferenceListenerPtr listener);
    virtual ReferenceWriterPtr getExternalReferenceWriter();
    virtual void setCellValue(AgObjectPtr value, int row, const std::string& field);
    virtual void setEnabled(AgObjectPtr value, int row, const std::string& field);
    virtual void setHidden(AgObjectPtr value, int row, const std::string& field);
    virtual void setOptions(AgObjectPtr value, int row, const std::string& field);
    virtual void setSelectionValues(AgObjectPtr value, int row, const std::string& field);
    virtual void setEditorEnabled(bool enabled);
    FieldFormatPtr getFieldFormat(int row, const std::string& field);
};
