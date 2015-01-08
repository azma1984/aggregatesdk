// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableUtils.java
#include "DataTableUtils.h"


/*
DataTableUtils::DataTableUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DataTableUtils::DataTableUtils()
    : DataTableUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& DataTableUtils::NAMING_ENVIRONMENT_SHORT_DATA()
{
    
    return NAMING_ENVIRONMENT_SHORT_DATA_;
}
std::string DataTableUtils::NAMING_ENVIRONMENT_SHORT_DATA_;

std::string& DataTableUtils::NAMING_ENVIRONMENT_FULL_DATA()
{
    
    return NAMING_ENVIRONMENT_FULL_DATA_;
}
std::string DataTableUtils::NAMING_ENVIRONMENT_FULL_DATA_;

const char16_t DataTableUtils::ELEMENT_START;

const char16_t DataTableUtils::ELEMENT_END;

const char16_t DataTableUtils::ELEMENT_NAME_VALUE_SEPARATOR;

const char16_t DataTableUtils::ELEMENT_VISIBLE_START;

const char16_t DataTableUtils::ELEMENT_VISIBLE_END;

const char16_t DataTableUtils::ELEMENT_VISIBLE_NAME_VALUE_SEPARATOR;

std::string& DataTableUtils::DATA_TABLE_NULL()
{
    
    return DATA_TABLE_NULL_;
}
std::string DataTableUtils::DATA_TABLE_NULL_;

std::string& DataTableUtils::DATA_TABLE_VISIBLE_NULL()
{
    
    return DATA_TABLE_VISIBLE_NULL_;
}
std::string DataTableUtils::DATA_TABLE_VISIBLE_NULL_;

java::util::Map*& DataTableUtils::EDITOR_SELECTION_VALUES()
{
    
    return EDITOR_SELECTION_VALUES_;
}
java::util::Map* DataTableUtils::EDITOR_SELECTION_VALUES_;

std::string DataTableUtils::transferDecode(std::string* value)
{
    
    try {
        auto s = ::encoding::TransferEncodingHelper::decode(value);
        return s;
    } catch (::java::lang::Exception* ex) {
        std::cout <<"Error decoding string value '"_j)->append(value)
            ->append(u"'"_j)->toString(), ex);
    }
}

std::string DataTableUtils::transferEncode(std::string* value)
{
    
    return ::encoding::TransferEncodingHelper::encode(value);
}

void DataTableUtils::inlineData(DataTable* table, ::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::CallerController* cc) 
{
    
    if(table == 0) {
        return;
    }
    for (auto _i = table)->getFormat())->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(ff)->getType() == FieldFormat::DATA_FIELD) {
                for (auto _i = table)->iterator(); _i->hasNext(); ) {
                    DataRecord* rec = java_cast< DataRecord* >(_i->next());
                    {
                        auto data = rec)->getData(ff)->getName());
                        if(data != 0) {
                            data)->fetchData(cm, cc);
                            data)->setId(0);
                        }
                    }
                }
            }
            if(ff)->getType() == FieldFormat::DATATABLE_FIELD) {
                for (auto _i = table)->iterator(); _i->hasNext(); ) {
                    DataRecord* rec = java_cast< DataRecord* >(_i->next());
                    {
                        auto dt = rec)->getDataTable(ff)->getName());
                        inlineData(dt, cm, cc);
                    }
                }
            }
        }
    }
}

java::util::Map* DataTableUtils::getEditorSelectionValues()
{
    
    return EDITOR_SELECTION_VALUES_;
}

DataTable* DataTableUtils::wrapToTable(std::list  values)
{
    
    std::map tableSource = new ::java::util::LinkedHashMap();
    for (auto i = int(0); i < values)->size(); i++) {
        tableSource)->put(std::string::valueOf(i), java_cast< void* >(values)->get(i)));
    }
    return DataTableUtils::wrapToTable(tableSource);
}

DataTable* DataTableUtils::wrapToTable(std::map values)
{
    
    auto rf = new TableFormat();
    for (auto _i = values)->keySet())->iterator(); _i->hasNext(); ) {
        std::string* field = java_cast< std::string* >(_i->next());
        {
            auto value = java_cast< void* >(values)->get(field));
            rf)->addField(static_cast< FieldFormat* >(DataTableConversion::createFieldFormat(field, value)));
        }
    }
    auto result = new DataRecord(rf);
    for (auto _i = values)->keySet())->iterator(); _i->hasNext(); ) {
        std::string* field = java_cast< std::string* >(_i->next());
        {
            result)->addValue(java_cast< void* >(values)->get(field)));
        }
    }
    return result)->wrap();
}

java::util::Set* DataTableUtils::findDifferingFields(DataTable* first, DataTable* second)
{
    
    if(first)->getRecordCount() != second)->getRecordCount()) {
        return 0;
    }
    ::java::util::Set* fields = new ::java::util::LinkedHashSet();
    for (auto _i = first)->getFormat())->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(!second)->getFormat())->hasField(ff)->getName())) {
                continue;
            }
            for (auto i = int(0); i < ::java::lang::Math::min(first)->getRecordCount(), second)->getRecordCount()); i++) {
                if(!::com::tibbo::aggregate::common::util::Util::equals(first)->getRecord(i))->getValue(ff)->getName()), second)->getRecord(i))->getValue(ff)->getName()))) {
                    fields)->add(ff)->getName()));
                }
            }
        }
    }
    return fields;
}

DataTable* DataTableUtils::makeSubtable(DataTable* table, ::java::util::Collection* fields)
{
    
    auto rf = new TableFormat(table)->getFormat())->getMinRecords(), table)->getFormat())->getMaxRecords());
    for (auto _i = fields)->iterator(); _i->hasNext(); ) {
        std::string* field = java_cast< std::string* >(_i->next());
        {
            auto ff = table)->getFormat(field);
            if(ff != 0) {
                rf)->addField(ff);
            }
        }
    }
    auto result = new DataTable(rf);
    DataTableReplication::copyWithoutKeyFields(table, result, true, true, true, true, true, 0);
    return result;
}

com::tibbo::aggregate::common::expression::Evaluator* DataTableUtils::createEvaluator(DataTable* dataTable, ::com::tibbo::aggregate::common::context::ContextManager* contextManager, ::com::tibbo::aggregate::common::context::Context* context)
{
    
    ::com::tibbo::aggregate::common::expression::DefaultReferenceResolver* resolver = new DataTableUtils_createEvaluator_1(dataTable);
    resolver)->setContextManager(contextManager);
    resolver)->setDefaultContext(context);
    return new ::com::tibbo::aggregate::common::expression::Evaluator(static_cast< ::com::tibbo::aggregate::common::expression::ReferenceResolver* >(resolver));
}

std::string DataTableUtils::fieldValueToString(FieldFormat* ff, void* value)
{
    
    if(ff)->hasSelectionValues()) {
        return value)->toString();
    }
    if(dynamic_cast< ::com::tibbo::aggregate::common::data::Data* >(value) != 0) {
        auto data = java_cast< ::com::tibbo::aggregate::common::data::Data* >(value);
        if(data)->getData() == 0) {
            return 0;
        } else {
            auto id = data)->getId();
            data)->setId(0);
            auto res = ff)->valueToString(value);
            data)->setId(id);
            return res;
        }
    }
    return ff)->valueToString(value);
}

java::nio::charset::Charset* DataTableUtils::detectCharset(::int8_tArray* data)
{
    
    return ::com::tibbo::aggregate::common::util::StringUtils::UTF8_CHARSET();
}

std::string DataTableUtils::createRecordKeyString(DataRecord* record, ::java::lang::Integer* rowNumber, std::string* keyField)
{
    
    auto keyFields = ::java::util::Collections::emptyList();
    if(record != 0) {
        auto const autoKeyFields = keyField == 0;
        keyFields = autoKeyFields ? record)->getFormat())->getKeyFields() : ::java::util::Arrays::asList(new voidArray({keyField)}));
    }
    if(keyFields)->isEmpty()) {
        return ::java::lang::Integer::toString((rowNumber))->intValue());
    }
    return record)->getValueAsString(java_cast< std::string* >(keyFields)->get(0)));
}

DataTable* DataTableUtils::processBindings(DataTable* table, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator)
{
    
    return processBindings(table, evaluator, 0, false);
}

DataTable* DataTableUtils::processBindings(DataTable* table, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector)
{
    
    return processBindings(table, evaluator, errorCollector, false);
}

DataTable* DataTableUtils::processBindings(DataTable* table, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector, bool split)
{
    
    if(table == 0) {
        return table;
    }
    if(table)->getFormat())->getBindings())->size() == 0) {
        return table;
    }
    DataTable* result;
    if(split) {
        result = table)->clone();
        result)->splitFormat();
    } else {
        result = table;
    }
    evaluator)->getDefaultResolver())->setDefaultTable(result);
    auto processor = new ::com::tibbo::aggregate::common::binding::DefaultBindingProcessor(new DataTableBindingProvider(result, errorCollector), evaluator);
    processor)->start();
    return result;
}



java::lang::Class* DataTableUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableUtils", 51);
    return c;
}

void DataTableUtils::clinit()
{
struct string_init_ {
    string_init_() {
    NAMING_ENVIRONMENT_SHORT_DATA_ = u"short"_j;
    NAMING_ENVIRONMENT_FULL_DATA_ = u"full"_j;
    DATA_TABLE_VISIBLE_NULL_ = u"<NULL>"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DATA_TABLE_NULL_ = std::string::valueOf(u'\u001a');
        EDITOR_SELECTION_VALUES_ = new ::java::util::LinkedHashMap();
        {
            EDITOR_SELECTION_VALUES_)->put(0, Cres::get())->getString(u"default"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::DateFieldFormat::EDITOR_LIST(), Cres::get())->getString(u"dtEditorList"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::DateFieldFormat::EDITOR_DATE(), Cres::get())->getString(u"date"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::DateFieldFormat::EDITOR_TIME(), Cres::get())->getString(u"time"_j));
            EDITOR_SELECTION_VALUES_)->put(FieldFormat::EDITOR_BAR(), Cres::get())->getString(u"dtEditorBar"_j));
            EDITOR_SELECTION_VALUES_)->put(FieldFormat::EDITOR_BYTES(), Cres::get())->getString(u"dtEditorBytes"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::LongFieldFormat::EDITOR_PERIOD(), Cres::get())->getString(u"dtEditorPeriod"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_EXPRESSION(), Cres::get())->getString(u"expression"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_PASSWORD(), Cres::get())->getString(u"password"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_TEXT(), Cres::get())->getString(u"dtEditorTextEditor"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_HTML(), Cres::get())->getString(u"dtEditorHtml"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_TEXT_AREA(), Cres::get())->getString(u"dtEditorTextArea"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_EMBEDDED_TEXT_AREA(), Cres::get())->getString(u"dtEditorEmbeddedTextArea"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_CONTEXT(), Cres::get())->getString(u"context"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_CONTEXT_MASK(), Cres::get())->getString(u"conContextMask"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_FONT(), Cres::get())->getString(u"font"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_IP(), Cres::get())->getString(u"dtEditorIp"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::ColorFieldFormat::EDITOR_BOX(), Cres::get())->getString(u"dtEditorBox"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::DataFieldFormat::EDITOR_IMAGE(), Cres::get())->getString(u"image"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::DataFieldFormat::EDITOR_SOUND(), Cres::get())->getString(u"sound"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::DataFieldFormat::EDITOR_HEX(), Cres::get())->getString(u"dtEditorHex"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_ACTIVATOR(), Cres::get())->getString(u"activator"_j));
            EDITOR_SELECTION_VALUES_)->put(::field::StringFieldFormat::EDITOR_CODE(), Cres::get())->getString(u"dtEditorCodeEditor"_j));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

*/
