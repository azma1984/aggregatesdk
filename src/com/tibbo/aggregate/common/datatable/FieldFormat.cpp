#include "FieldFormat.h"

std::string FieldFormat::ELEMENT_FLAGS = "F";
std::string FieldFormat::ELEMENT_DEFAULT_VALUE = "A";
std::string FieldFormat::ELEMENT_DESCRIPTION = "D";
std::string FieldFormat::ELEMENT_HELP = "H";
std::string FieldFormat::ELEMENT_SELECTION_VALUES = "S";
std::string FieldFormat::ELEMENT_VALIDATORS = "V";
std::string FieldFormat::ELEMENT_EDITOR = "E";
std::string FieldFormat::ELEMENT_EDITOR_OPTIONS = "O";
std::string FieldFormat::ELEMENT_ICON = "I";
std::string FieldFormat::ELEMENT_GROUP = "G";

const char FieldFormat::INTEGER_FIELD = 'I';
const char FieldFormat::STRING_FIELD = 'S';
const char FieldFormat::BOOLEAN_FIELD = 'B';
const char FieldFormat::LONG_FIELD = 'L';
const char FieldFormat::FLOAT_FIELD = 'F';
const char FieldFormat::DOUBLE_FIELD = 'E';
const char FieldFormat::DATE_FIELD = 'D';
const char FieldFormat::DATATABLE_FIELD = 'T';
const char FieldFormat::COLOR_FIELD = 'C';
const char FieldFormat::DATA_FIELD = 'A';

const char FieldFormat::VALIDATOR_LIMITS = 'L';
const char FieldFormat::VALIDATOR_REGEX = 'R';
const char FieldFormat::VALIDATOR_NON_NULL = 'N';
const char FieldFormat::VALIDATOR_ID = 'I';

const char FieldFormat::ADVANCED_FLAG = 'A';
const char FieldFormat::NOT_REPLICATED_FLAG = 'C';
const char FieldFormat::EXTENDABLE_SELECTION_VALUES_FLAG = 'E';
const char FieldFormat::HIDDEN_FLAG = 'H';
const char FieldFormat::INLINE_DATA_FLAG = 'I';
const char FieldFormat::KEY_FIELD_FLAG = 'K';
const char FieldFormat::NULLABLE_FLAG = 'N';
const char FieldFormat::OPTIONAL_FLAG = 'O';
const char FieldFormat::READ_ONLY_FLAG = 'R';
const char FieldFormat::DEFAULT_OVERRIDE = 'D';





FieldFormatPtr FieldFormat::create(const std::string &name, AgClassPtr valueClass)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string &description)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string &description, AgObjectPtr defaultValue)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string &description, AgObjectPtr defaultValue, const std::string &group)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string &description, AgObjectPtr defaultValue, bool nullable)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string &description, AgObjectPtr defaultValue, bool nullable, const std::string &group)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &format, ClassicEncodingSettingsPtr settings)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &format, ClassicEncodingSettingsPtr settings, bool validate)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &format)
{
    return 0;
}

int FieldFormat::hashCode()
{
    return 0;
}
