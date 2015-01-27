#include "datatable/DataTableBuilding.h"
#include "datatable/TableFormat.h"
#include "Cres.h"
#include "Util/SString.h"

const std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_MIN_RECORDS = "minRecords";
const std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_MAX_RECORDS = "maxRecords";
const std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_FIELDS = "fields";
const std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_REORDERABLE = "reorderable";
const std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_UNRESIZABLE = "unresizable";
const std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_BINDINGS = "bindings";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_OLDNAME = "oldname";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_NAME = "name";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_TYPE = "type";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_DESCRIPTION = "description";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_DEFAULT_VALUE = "defaultValue";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_HIDDEN = "hidden";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_INLINE = "inline";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_READONLY = "readonly";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_NULLABLE = "nullable";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_KEY = "key";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_SELVALS = "selvals";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_EXTSELVALS = "extselvals";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_HELP = "help";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_EDITOR = "editor";
const std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_EDITOR_OPTIONS = "editorOptions";
const std::string DateDataTableBuilding::FIELD_SELECTION_VALUES_VALUE = "value";
const std::string DateDataTableBuilding::FIELD_SELECTION_VALUES_DESCRIPTION = "description";
const std::string DateDataTableBuilding::FIELD_BINDINGS_TARGET = "target";
const std::string DateDataTableBuilding::FIELD_BINDINGS_EXPRESSION = "expression";


DateDataTableBuilding::DateDataTableBuilding()
{
    SELECTION_VALUES_FORMAT = TableFormatPtr(new TableFormat(true));
    SELECTION_VALUES_FORMAT->addField("<" + FIELD_SELECTION_VALUES_VALUE + "><S><F=NK><D=" + Cres::get()->getString("value") + ">");
    SELECTION_VALUES_FORMAT->addField("<" + FIELD_SELECTION_VALUES_DESCRIPTION + "><S><D=" + Cres::get()->getString("description") + "><V=<L=1 " + SString::fromNumber(INT_MAX) + ">>");
    //SELECTION_VALUES_FORMAT->addTableValidator(TableKeyFieldsValidatorPtr(new TableKeyFieldsValidator()));


}
