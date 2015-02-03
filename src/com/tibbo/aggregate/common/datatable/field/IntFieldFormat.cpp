#include "datatable/field/IntFieldFormat.h"
#include "util/simpleobject/AgInteger.h"
#include "util/Util.h"

const std::string IntFieldFormat::EDITOR_SPINNER = "spinner";
const std::string IntFieldFormat::EDITOR_EVENT_LEVEL = "eventLevel";


IntFieldFormat::IntFieldFormat(const std::string &name) : FieldFormat(name)
{

}

char IntFieldFormat::getType()
{
    return FieldFormat::INTEGER_FIELD;
}

const type_info &IntFieldFormat::getFieldClass()
{
    return typeid(AgInteger);
}

const type_info &IntFieldFormat::getFieldWrappedClass()
{
    return typeid(AgInteger);
}

AgObjectPtr IntFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new AgInteger(0));
}

AgObjectPtr IntFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    if (value.length() == 0)
    {
        return AgObjectPtr(new AgInteger(0));
    }

    //todo: need check string format
    return AgObjectPtr(new AgInteger(atoi(value.c_str())));
}

std::string IntFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    return value.get() == NULL ? "" : value->toString();
}

std::list<std::string> IntFieldFormat::getSuitableEditors()
{
    std::list<std::string> list;
    list.push_back(EDITOR_LIST);
    list.push_back(EDITOR_BAR);
    list.push_back(EDITOR_BYTES);
    list.push_back(EDITOR_SPINNER);
    list.push_back(EDITOR_EVENT_LEVEL);
    return list;
}

AgObjectPtr IntFieldFormat::convertValue(AgObjectPtr value)
{
    AgInteger *i = dynamic_cast<AgInteger *>(value.get());
    if (i)
    {
        return AgObjectPtr(Util::convertToNumberAsInteger(value, true, false));
    }

    return value;
}
