
#ifndef DataTableBindingProviderH
#define DataTableBindingProviderH


//#include "common/Cres.h"
//#include "common/Log.h"
//#include "common/binding/Binding.h"
//#include "common/binding/BindingException.h"
//#include "common/binding/EvaluationOptions.h"
//#include "common/binding/ReferenceListener.h"
//#include "common/datatable/DataRecord.h"
//#include "common/datatable/DataTable.h"
//#include "common/datatable/FieldFormat.h"
//#include "common/datatable/TableFormat.h"
//#include "common/expression/Reference.h"
//
//#include "datatable/AbstractDataTableBindingProvider.h"

#include <string>

//todo - class stub
class DataTableBindingProvider //: public AbstractDataTableBindingProvider
{
 //private:

public:
    static const std::string PROPERTY_ENABLED;
    static const std::string PROPERTY_HIDDEN;
    static const std::string PROPERTY_CHOICES;
    static const std::string PROPERTY_OPTIONS;
	/*
    static EvaluationOptions* EVALUATION_OPTIONS;
    DataTable* table;
    bool headless;

    std::map createBindings();

public: 
    void callReferenceChanged(Reference* cause, int method, ReferenceListener* listener);
    ::com::tibbo::aggregate::common::binding::ReferenceWriter* getExternalReferenceWriter();
    void setCellValue(void* value, int row, const std::string & field);
    void setEnabled(void* value, int row, const std::string & field);
    void setHidden(void* value, int row, const std::string & field);
    void setOptions(void* value, int row, const std::string & field);
    void setSelectionValues(void* value, int row, const std::string & field);
    void setEditorEnabled(bool enabled);

public:
    void start();
    void stop();
    void writeReference(int method, Reference* ref, Reference* cause, void* value, ::com::tibbo::aggregate::common::binding::ChangeCache* cache);

public: 
    FieldFormat* getFieldFormat(int row, const std::string & field);

    // Generated

public:
    DataTableBindingProvider(DataTable* table);
    DataTableBindingProvider(DataTable* table, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);
protected:
    DataTableBindingProvider(const ::default_init_tag&);


public:
    
    static void 
    void writeReference(Reference* ref, void* value);
    static const std::string& PROPERTY_ENABLED();
    static const std::string& PROPERTY_HIDDEN();
    static const std::string& PROPERTY_CHOICES();
    static const std::string& PROPERTY_OPTIONS();

private:
    static ::com::tibbo::aggregate::common::binding::EvaluationOptions*& EVALUATION_OPTIONS();
	*/
};


#endif