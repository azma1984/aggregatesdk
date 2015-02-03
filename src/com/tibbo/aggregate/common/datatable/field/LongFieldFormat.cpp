#include "datatable/field/LongFieldFormat.h"
#include "util/simpleobject/AgLong.h"
#include "util/Util.h"
#include "util/SString.h"

const std::string LongFieldFormat::EDITOR_PERIOD = "period";

LongFieldFormat::LongFieldFormat(const std::string &name) : FieldFormat(name)
{
}

char LongFieldFormat::getType()
{
    return FieldFormat::LONG_FIELD;
}

const type_info &LongFieldFormat::getFieldClass()
{
    return typeid(AgLong);
}

const type_info &LongFieldFormat::getFieldWrappedClass()
{
    return typeid(AgLong);
}

AgObjectPtr LongFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new AgLong(0));
}

AgObjectPtr LongFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    //todo check valid string format
    long temp = atol(value.c_str());
    return AgObjectPtr(new AgLong(temp));
}

std::string LongFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    return value.get() == NULL ? "" : value->toString();
}

std::string LongFieldFormat::encodePeriodEditorOptions(int minUnit, int maxUnit)
{
    return SString::fromNumber(minUnit) + " " + SString::fromNumber(maxUnit);
}

std::list<std::string> LongFieldFormat::getSuitableEditors()
{
    std::list<std::string> list;
    list.push_back(EDITOR_LIST);
    list.push_back(EDITOR_PERIOD);
    list.push_back(EDITOR_BAR);
    list.push_back(EDITOR_BYTES);
    return list;
}

AgObjectPtr LongFieldFormat::convertValue(AgObjectPtr value)
{
    AgLong *i = dynamic_cast<AgLong *>(value.get());
    if (i)
    {
        return AgObjectPtr(Util::convertToNumberAsLong(value, true, false));
    }

    return value;
}



