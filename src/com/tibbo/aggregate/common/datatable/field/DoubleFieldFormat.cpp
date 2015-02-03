#include "datatable/field/DoubleFieldFormat.h"
#include "util/simpleobject/AgDouble.h"
#include "util/Util.h"

DoubleFieldFormat::DoubleFieldFormat(const std::string &name) : FieldFormat(name)
{

}

char DoubleFieldFormat::getType()
{
    return FieldFormat::DOUBLE_FIELD;
}

const type_info &DoubleFieldFormat::getFieldClass()
{
    return typeid(AgDouble);
}

const type_info &DoubleFieldFormat::getFieldWrappedClass()
{
    return typeid(AgDouble);
}

AgObjectPtr DoubleFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new AgDouble(0));
}

AgObjectPtr DoubleFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    if (value.length() == 0)
    {
        return AgObjectPtr(new AgDouble(0));
    }
    // todo: need check valid string for double
    double temp = atof(value.c_str());
    return AgObjectPtr(new AgDouble(temp));
}

std::string DoubleFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    if (value.get() == 0)
    {
        return "";
    }
    else
    {
        return value->toString();
    }
}

std::list<std::string> DoubleFieldFormat::getSuitableEditors()
{
    std::list<std::string> list;
    list.push_back(EDITOR_LIST);
    return list;
}

AgObjectPtr DoubleFieldFormat::convertValue(AgObjectPtr value)
{
    AgDouble *d = dynamic_cast<AgDouble *>(value.get());
    if (d)
    {
        return AgObjectPtr(Util::convertToNumberAsDouble(value, true, false));
    }
    return value;
}

