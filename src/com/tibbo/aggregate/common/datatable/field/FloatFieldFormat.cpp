#include "datatable/field/FloatFieldFormat.h"
#include "util/simpleobject/AgFloat.h"
#include "util/Util.h"

FloatFieldFormat::FloatFieldFormat(const std::string &name) : FieldFormat(name)
{

}

char FloatFieldFormat::getType()
{
    return FieldFormat::FLOAT_FIELD;
}

const type_info &FloatFieldFormat::getFieldClass()
{
    return typeid(AgFloat);
}

const type_info &FloatFieldFormat::getFieldWrappedClass()
{
    return typeid(AgFloat);
}

AgObjectPtr FloatFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new AgFloat(0));
}

AgObjectPtr FloatFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    if (value.length() == 0)
    {
          return AgObjectPtr(new AgFloat(0));
    }

    //todo: add check correct string format
    return AgObjectPtr(new AgFloat(atof(value.c_str())));
}

std::string FloatFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    return value.get() == NULL ? "" : value->toString();
}

std::list<std::string> FloatFieldFormat::getSuitableEditors()
{
    std::list<std::string> list;
    list.push_back(EDITOR_LIST);
    list.push_back(EDITOR_BAR);
    list.push_back(EDITOR_BYTES);
    return list;
}

AgObjectPtr FloatFieldFormat::convertValue(AgObjectPtr value)
{
    AgFloat *f = dynamic_cast<AgFloat *>(value.get());

    if (f)
    {
        return AgObjectPtr(Util::convertToNumberAsFloat(value, true, false));
    }

    return value;
}
