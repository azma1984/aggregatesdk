#include "datatable/field/StringFieldFormat.h"
#include "util/simpleobject/AgString.h"
#include "datatable/TableFormat.h"
#include "datatable/DataRecord.h"
#include "context/Context.h"
#include "expression/Reference.h"

const std::string StringFieldFormat::EDITOR_CONTEXT_MASK = "contextmask";
const std::string StringFieldFormat::EDITOR_CONTEXT = "context";
const std::string StringFieldFormat::EDITOR_EXPRESSION = "expression";
const std::string StringFieldFormat::EDITOR_ACTIVATOR = "activator";
const std::string StringFieldFormat::EDITOR_TARGET = "target";
const std::string StringFieldFormat::EDITOR_CODE = "code";
const std::string StringFieldFormat::EDITOR_TEXT = "text";
const std::string StringFieldFormat::EDITOR_TEXT_AREA = "textarea";
const std::string StringFieldFormat::EDITOR_EMBEDDED_TEXT_AREA = "etextarea";
const std::string StringFieldFormat::EDITOR_REFERENCE = "reference";
const std::string StringFieldFormat::EDITOR_PASSWORD = "password";
const std::string StringFieldFormat::EDITOR_FONT = "font";
const std::string StringFieldFormat::EDITOR_IP = "ip";
const std::string StringFieldFormat::EDITOR_HTML = "html";

const std::string StringFieldFormat::CONTEXT_EDITOR_TYPES_SEPARATOR = " ";

const std::string StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE = "reference";
const std::string StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION = "description";

const std::string StringFieldFormat::FIELD_DEFAULT_TABLE = "table";
const std::string StringFieldFormat::FIELD_DEFAULT_CONTEXT = "context";
const std::string StringFieldFormat::FIELD_REFERENCES = "references";

const std::string StringFieldFormat::TEXT_EDITOR_MODE_AGGREGATE = "aggregate";
const std::string StringFieldFormat::TEXT_EDITOR_MODE_JAVA = "java";
const std::string StringFieldFormat::TEXT_EDITOR_MODE_XML = "xml";
const std::string StringFieldFormat::TEXT_EDITOR_MODE_SQL = "sql";
const std::string StringFieldFormat::TEXT_EDITOR_MODE_HTML = "html";
const std::string StringFieldFormat::TEXT_EDITOR_MODE_SHELLSCRIPT = "shellscript";
const std::string StringFieldFormat::TEXT_EDITOR_MODE_SMI_MIB = "smi-mib";

const std::string StringFieldFormat::CODE_EDITOR_MODE_JAVA = "java";

const std::string StringFieldFormat::EDITOR_TARGET_MODE_MODELS = "models";

StringFieldFormat::StringFieldFormat(const std::string &name) : FieldFormat(name)
{
    setTransferEncode(true);
}

char StringFieldFormat::getType()
{
    return FieldFormat::STRING_FIELD;
}

const type_info &StringFieldFormat::getFieldClass()
{
    return typeid(AgString);
}

const type_info &StringFieldFormat::getFieldWrappedClass()
{
    return typeid(AgString);
}

AgObjectPtr StringFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new AgString(""));
}

AgObjectPtr StringFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    return AgObjectPtr(new AgString(value));
}

std::string StringFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    AgString *str = dynamic_cast<AgString *>(value.get());
    if (value)
        return str->value;
    else
        return "";
}

std::string StringFieldFormat::encodeExpressionEditorOptions(std::map<ReferencePtr, std::string> references)
{
    return encodeExpressionEditorOptions(NULL, NULL, references);
}

std::string StringFieldFormat::encodeExpressionEditorOptions(ContextPtr defaultContext, DataTablePtr defaultTable, std::map<ReferencePtr, std::string> references)
{
    //todo uncomment
    /*if (EXPRESSION_BUILDER_OPTIONS_FORMAT.get() == NULL)
    {
        EXPRESSION_BUILDER_OPTIONS_FORMAT = TableFormatPtr(new TableFormat(1, 1));
        EXPRESSION_BUILDER_OPTIONS_FORMAT->addField("<" + FIELD_DEFAULT_CONTEXT + "><S><F=N>");
        EXPRESSION_BUILDER_OPTIONS_FORMAT->addField("<" + FIELD_DEFAULT_TABLE + "><T><F=N>");
        EXPRESSION_BUILDER_OPTIONS_FORMAT->addField("<" + FIELD_REFERENCES + "><T>");
    }

    if (ADDITIONAL_REFERENCES_FORMAT.get() == NULL)
    {
        ADDITIONAL_REFERENCES_FORMAT = TableFormatPtr(new TableFormat());
        ADDITIONAL_REFERENCES_FORMAT->addField("<" + FIELD_ADDITIONAL_REFERENCES_REFERENCE + "><S>");
        ADDITIONAL_REFERENCES_FORMAT->addField("<" + FIELD_ADDITIONAL_REFERENCES_DESCRIPTION + "><S>");
    }

    DataRecordPtr op = DataRecordPtr(new DataRecord(EXPRESSION_BUILDER_OPTIONS_FORMAT));

    std::string temp = defaultContext.get() != NULL ? defaultContext->getPath() : "";
    op->addValue(AgObjectPtr(new AgString(temp)));
    op->addValue(defaultTable);

    DataTablePtr refs = DataTablePtr(new DataTable(ADDITIONAL_REFERENCES_FORMAT));

    if (references.size() != NULL)
    {
        for (std::map<ReferencePtr, std::string>::iterator entry = references.begin(); entry != references.end(); ++entry)
        {
            refs->addRecord()->addString(entry->first->getImage()).addString(entry->second);
        }
    }
    op->addValue(refs);

    return op->wrap()->encode(false);*/
    return "";
}

std::list<std::string> StringFieldFormat::getSuitableEditors()
{
    std::list<std::string> list;
    list.push_back(EDITOR_LIST);
    list.push_back(EDITOR_CONTEXT_MASK);
    list.push_back(EDITOR_CONTEXT);
    list.push_back(EDITOR_TEXT_AREA);
    list.push_back(EDITOR_EMBEDDED_TEXT_AREA);
    list.push_back(EDITOR_TEXT);
    list.push_back(EDITOR_CODE);
    list.push_back(EDITOR_REFERENCE);
    list.push_back(EDITOR_EXPRESSION);
    list.push_back(EDITOR_TARGET);
    list.push_back(EDITOR_ACTIVATOR);
    list.push_back(EDITOR_PASSWORD);
    list.push_back(EDITOR_BAR);
    list.push_back(EDITOR_BYTES);
    list.push_back(EDITOR_FONT);
    list.push_back(EDITOR_IP);
    list.push_back(EDITOR_HTML);
    return list;
}

AgObjectPtr StringFieldFormat::convertValue(AgObjectPtr value)
{
    AgString *str = dynamic_cast<AgString *>(value.get());

    if (str)
    {
        return AgObjectPtr(new AgString(value->toString()));
    }

    return value;
}
