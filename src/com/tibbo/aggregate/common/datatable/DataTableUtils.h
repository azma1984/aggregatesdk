#pragma once
#include "util/Pointers.h"
#include <map>
#include <list>

class DataTableUtils
{

public:
    static const std::string NAMING_ENVIRONMENT_SHORT_DATA;
    static const std::string NAMING_ENVIRONMENT_FULL_DATA;

    static const char ELEMENT_START = 0x1c;
    static const char ELEMENT_END = 0x1d;
    static const char ELEMENT_NAME_VALUE_SEPARATOR = 0x1e;

    static const char ELEMENT_VISIBLE_START = '<';
    static const char ELEMENT_VISIBLE_END = '>';
    static const char ELEMENT_VISIBLE_NAME_VALUE_SEPARATOR = '=';

    static const char DATA_TABLE_NULL[];
    static const std::string DATA_TABLE_VISIBLE_NULL;

private:
     std::map<AgObject, std::string> EDITOR_SELECTION_VALUES;
     static bool bInit;
     static void init();

public:
     static std::string transferDecode(std::string value);
     static std::string transferEncode(std::string value);
     static void inlineData(DataTablePtr table, ContextManagerPtr cm, CallerControllerPtr cc);
     static std::map<AgObjectPtr, std::string> getEditorSelectionValues();
     static DataTablePtr wrapToTable(std::map<std::string, AgObjectPtr> values);
     static std::list<std::string> findDifferingFields(DataTablePtr first, DataTablePtr second);
     static DataTablePtr makeSubtable(DataTablePtr table,  std::list<std::string> fields);
     static EvaluatorPtr createEvaluator(DataTablePtr dataTable, ContextManagerPtr contextManager, ContextPtr context);
     static std::string fieldValueToString(FieldFormatPtr ff, AgObjectPtr value);
     //static Charset detectCharset(byte[] data)
     static std::string createRecordKeyString(DataRecordPtr record, int rowNumber, std::string keyField);
     static DataTablePtr processBindings(DataTablePtr table, EvaluatorPtr evaluator);
     static DataTablePtr processBindings(DataTablePtr table, EvaluatorPtr evaluator, ErrorCollectorPtr errorCollector);
     static DataTablePtr processBindings(DataTablePtr table, EvaluatorPtr evaluator, ErrorCollectorPtr errorCollector, bool split);
};

