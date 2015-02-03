#include "datatable/field/DateFieldFormat.h"

const std::string DateFieldFormat::EDITOR_TIME = "time";
const std::string DateFieldFormat::EDITOR_DATE = "date";


DateFieldFormat::DateFieldFormat(const std::string &name) : FieldFormat(name)
{

}

char DateFieldFormat::getType()
{
    return FieldFormat::DATE_FIELD;
}

const type_info &DateFieldFormat::getFieldClass()
{
    return typeid(Date);
}

const type_info &DateFieldFormat::getFieldWrappedClass()
{
    return typeid(Date);
}

// todo all
AgObjectPtr DateFieldFormat::getNotNullDefault()
{
    return 0;
}

AgObjectPtr DateFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    return 0;
}

std::string DateFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    return 0;
}

std::list<std::string> DateFieldFormat::getSuitableEditors()
{
   std::list<std::string> list;
   list.push_back(EDITOR_LIST);
   list.push_back(EDITOR_DATE);
   list.push_back(EDITOR_TIME);
   return list;
}

