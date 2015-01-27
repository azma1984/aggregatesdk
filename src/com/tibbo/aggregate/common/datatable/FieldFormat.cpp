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

FieldFormat::FieldFormat(const std::string &name)
{
    /*this->name = name;
    nullable = false;
    optional = false;
    extendableSelectionValues = false;
    readonly = false;
    notReplicated = false;
    hidden = false;
    keyField = false;
    inlineData = false;
    advanced = false;
    defaultOverride = false;*/
}


FieldFormatPtr FieldFormat::create(const std::string &name, char type)
{
    return NULL;
}


 
FieldFormatPtr FieldFormat::create(const std::string &name, AgClass* valueClass)
{
	return 0;
}

FieldFormatPtr FieldFormat::setDescription(const std::string &description)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string & description)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue, const std::string & group)
{
    return 0;
}

FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue, bool nullable)
{
    return 0;
}


FieldFormatPtr FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue, bool nullable, const std::string & group)
{
    return 0;
}



FieldFormatPtr FieldFormat::create(const std::string &format, ClassicEncodingSettings &settings)
{
    return 0;
}


FieldFormatPtr FieldFormat::create(const std::string &format, ClassicEncodingSettings &settings, bool validate)
{

	return 0;
}


FieldFormatPtr FieldFormat::create(const std::string &format)
{
    return 0;
}


