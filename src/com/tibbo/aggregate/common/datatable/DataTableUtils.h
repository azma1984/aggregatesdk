// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableUtils.java

#ifndef DataTableUtilsH
#define DataTableUtilsH

/*
#include "Cres.h"
#include "binding/DefaultBindingProcessor.h"
#include "data/Data.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/DataTableBindingProvider.h"
#include "datatable/DataTableConversion.h"
#include "datatable/DataTableReplication.h"
#include "datatable/DataTableUtils_createEvaluator_1.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/TransferEncodingHelper.h"
#include "datatable/field/ColorFieldFormat.h"
#include "datatable/field/DataFieldFormat.h"
#include "datatable/field/DateFieldFormat.h"
#include "datatable/field/LongFieldFormat.h"
#include "datatable/field/StringFieldFormat.h"
#include "expression/DefaultReferenceResolver.h"
#include "expression/Evaluator.h"
#include "expression/ReferenceResolver.h"
#include "util/StringUtils.h"
#include "util/Util.h"

*/

class DataTableUtils
    
{
/*

private:
    static const std::string NAMING_ENVIRONMENT_SHORT_DATA_;
    static const std::string NAMING_ENVIRONMENT_FULL_DATA_;

public:
    static const char16_t ELEMENT_START { u'\u001c' };
    static const char16_t ELEMENT_END { u'\u001d' };
    static const char16_t ELEMENT_NAME_VALUE_SEPARATOR { u'\u001e' };
    static const char16_t ELEMENT_VISIBLE_START { u'<' };
    static const char16_t ELEMENT_VISIBLE_END { u'>' };
    static const char16_t ELEMENT_VISIBLE_NAME_VALUE_SEPARATOR { u'=' };

private:
    static const std::string DATA_TABLE_NULL_;
    static const std::string DATA_TABLE_VISIBLE_NULL_;
    static std::map EDITOR_SELECTION_VALUES_;

public:
    static const std::string transferDecode(const std::string & value);
    static const std::string transferEncode(const std::string & value);
    static void inlineData(DataTable* table, ContextManager* cm, CallerController* cc);
    static std::map getEditorSelectionValues();
    static DataTable* wrapToTable(std::list  values);
    static DataTable* wrapToTable(std::map values);
    static ::std::set  findDifferingFields(DataTable* first, DataTable* second);
    static DataTable* makeSubtable(DataTable* table, ::java::util::Collection* fields);
    static Evaluator* createEvaluator(DataTable* dataTable, ContextManager* contextManager, Context* context);
    static const std::string fieldValueToString(FieldFormat* ff, void* value);
    static ::java::nio::charset::Charset* detectCharset(::int8_tArray* data);
    static const std::string createRecordKeyString(DataRecord* record, int  rowNumber, const std::string & keyField);
    static DataTable* processBindings(DataTable* table, Evaluator* evaluator);
    static DataTable* processBindings(DataTable* table, Evaluator* evaluator, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);
    static DataTable* processBindings(DataTable* table, Evaluator* evaluator, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector, bool split);

    // Generated
    DataTableUtils();
protected:
    DataTableUtils(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& NAMING_ENVIRONMENT_SHORT_DATA();
    static const std::string& NAMING_ENVIRONMENT_FULL_DATA();
    static const std::string& DATA_TABLE_NULL();
    static const std::string& DATA_TABLE_VISIBLE_NULL();

private:
    static std::map& EDITOR_SELECTION_VALUES();
    ::java::lang::Class* getClass0();
    friend class DataTableUtils_FilterMode;
    friend class DataTableUtils_createEvaluator_1;
    */
};

#endif

