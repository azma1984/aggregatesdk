#include "datatable/field/BooleanFieldFormat.h"
#include "util/simpleobject/AgBoolean.h"
#include "util/Util.h"

BooleanFieldFormat::BooleanFieldFormat(const std::string &name) : FieldFormat(name)
{

}

char BooleanFieldFormat::getType()
{
    return FieldFormat::BOOLEAN_FIELD;
}

const std::type_info& BooleanFieldFormat::getFieldClass()
{
    return typeid(bool);
}

const std::type_info& BooleanFieldFormat::getFieldWrappedClass()
{
    return typeid(bool);
}

AgObjectPtr BooleanFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new AgBoolean(false));
}

AgObjectPtr BooleanFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    if (value == "1" || value == "true")
    {
        return AgObjectPtr(new AgBoolean(true));
    }
    else
    {
        return AgObjectPtr(new AgBoolean(false));
    }
}

std::string BooleanFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    AgBoolean *b = dynamic_cast<AgBoolean *>(value.get());
    assert(b);
    if (b->value)
        return "1";
    else
        return "0";
}

AgObjectPtr BooleanFieldFormat::convertValue(AgObjectPtr value)
{
    AgBoolean *b = dynamic_cast<AgBoolean *>(value.get());
    if (b)
    {
        AgObjectPtr newValue = AgObjectPtr(new AgBoolean(Util::convertToBoolean(value, true, false)));
        return newValue;
    }
    return value;
}
