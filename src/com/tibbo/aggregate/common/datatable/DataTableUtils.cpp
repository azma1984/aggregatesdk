#include "DataTableUtils.h"

const std::string DataTableUtils::NAMING_ENVIRONMENT_SHORT_DATA = "short";
const std::string DataTableUtils::NAMING_ENVIRONMENT_FULL_DATA = "full";

const char DataTableUtils::DATA_TABLE_NULL[] = { 0x1c, 0x00 };
const std::string DataTableUtils::DATA_TABLE_VISIBLE_NULL = "<NULL>";

bool DataTableUtils::bInit = false;

void DataTableUtils::init()
{
    if (!bInit)
    {
        //todo
       /* EDITOR_SELECTION_VALUES.put(null, Cres.get().getString("default"));

           EDITOR_SELECTION_VALUES.put(DateFieldFormat.EDITOR_LIST, Cres.get().getString("dtEditorList"));
           EDITOR_SELECTION_VALUES.put(DateFieldFormat.EDITOR_DATE, Cres.get().getString("date"));
           EDITOR_SELECTION_VALUES.put(DateFieldFormat.EDITOR_TIME, Cres.get().getString("time"));
           EDITOR_SELECTION_VALUES.put(FieldFormat.EDITOR_BAR, Cres.get().getString("dtEditorBar"));
           EDITOR_SELECTION_VALUES.put(FieldFormat.EDITOR_BYTES, Cres.get().getString("dtEditorBytes"));
           EDITOR_SELECTION_VALUES.put(LongFieldFormat.EDITOR_PERIOD, Cres.get().getString("dtEditorPeriod"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_EXPRESSION, Cres.get().getString("expression"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_PASSWORD, Cres.get().getString("password"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_TEXT, Cres.get().getString("dtEditorTextEditor"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_HTML, Cres.get().getString("dtEditorHtml"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_TEXT_AREA, Cres.get().getString("dtEditorTextArea"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_EMBEDDED_TEXT_AREA, Cres.get().getString("dtEditorEmbeddedTextArea"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_CONTEXT, Cres.get().getString("context"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_CONTEXT_MASK, Cres.get().getString("conContextMask"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_FONT, Cres.get().getString("font"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_IP, Cres.get().getString("dtEditorIp"));
           EDITOR_SELECTION_VALUES.put(ColorFieldFormat.EDITOR_BOX, Cres.get().getString("dtEditorBox"));
           EDITOR_SELECTION_VALUES.put(DataFieldFormat.EDITOR_IMAGE, Cres.get().getString("image"));
           EDITOR_SELECTION_VALUES.put(DataFieldFormat.EDITOR_SOUND, Cres.get().getString("sound"));
           EDITOR_SELECTION_VALUES.put(DataFieldFormat.EDITOR_HEX, Cres.get().getString("dtEditorHex"));

           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_ACTIVATOR, Cres.get().getString("activator"));
           EDITOR_SELECTION_VALUES.put(StringFieldFormat.EDITOR_CODE, Cres.get().getString("dtEditorCodeEditor"));
        */
        bInit = true;
    }
}

std::string DataTableUtils::transferDecode(std::string value)
{
    init();
    return std::string();
}

std::string DataTableUtils::transferEncode(std::string value)
{
    init();
    return std::string();
}

void DataTableUtils::inlineData(DataTablePtr table, ContextManagerPtr cm, CallerControllerPtr cc)
{
    init();
}

std::map<AgObjectPtr, std::string> DataTableUtils::getEditorSelectionValues()
{
    init();
    return std::map<AgObjectPtr, std::string>();
}

DataTablePtr DataTableUtils::wrapToTable(std::map<std::string, AgObjectPtr> values)
{
    init();
    return 0;
}

std::list<std::string> DataTableUtils::findDifferingFields(DataTablePtr first, DataTablePtr second)
{
    init();
    return std::list<std::string>();
}

DataTablePtr DataTableUtils::makeSubtable(DataTablePtr table, std::list<std::string> fields)
{
    init();
    return 0;
}

EvaluatorPtr DataTableUtils::createEvaluator(DataTablePtr dataTable, ContextManagerPtr contextManager, ContextPtr context)
{
    init();
    return 0;
}

std::string DataTableUtils::fieldValueToString(FieldFormatPtr ff, AgObjectPtr value)
{
    init();
    return std::string();
}

std::string DataTableUtils::createRecordKeyString(DataRecordPtr record, int rowNumber, std::string keyField)
{
    init();
    return std::string();
}

DataTablePtr DataTableUtils::processBindings(DataTablePtr table, EvaluatorPtr evaluator)
{
    init();
    return 0;
}

DataTablePtr DataTableUtils::processBindings(DataTablePtr table, EvaluatorPtr evaluator, ErrorCollectorPtr errorCollector)
{
    init();
    return 0;
}

DataTablePtr DataTableUtils::processBindings(DataTablePtr table, EvaluatorPtr evaluator, ErrorCollectorPtr errorCollector, bool split)
{
    init();
    return 0;
}

