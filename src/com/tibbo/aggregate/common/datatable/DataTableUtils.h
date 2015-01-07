// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableUtils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/charset/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::DataTableUtils
    
{

public:
    typedef void super;

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
    static const std::string transferDecode(std::string* value);
    static const std::string transferEncode(std::string* value);
    static void inlineData(DataTable* table, ::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::CallerController* cc) /* throws(ContextException) */;
    static std::map getEditorSelectionValues();
    static DataTable* wrapToTable(std::list  values);
    static DataTable* wrapToTable(std::map values);
    static ::java::util::Set* findDifferingFields(DataTable* first, DataTable* second);
    static DataTable* makeSubtable(DataTable* table, ::java::util::Collection* fields);
    static ::com::tibbo::aggregate::common::expression::Evaluator* createEvaluator(DataTable* dataTable, ::com::tibbo::aggregate::common::context::ContextManager* contextManager, ::com::tibbo::aggregate::common::context::Context* context);
    static const std::string fieldValueToString(FieldFormat* ff, void* value);
    static ::java::nio::charset::Charset* detectCharset(::int8_tArray* data);
    static const std::string createRecordKeyString(DataRecord* record, ::java::lang::Integer* rowNumber, std::string* keyField);
    static DataTable* processBindings(DataTable* table, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator);
    static DataTable* processBindings(DataTable* table, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);
    static DataTable* processBindings(DataTable* table, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector, bool split);

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
};
