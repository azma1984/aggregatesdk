#include "datatable/field/ColorFieldFormat.h"
#include "util/simpleobject/AgColor.h"
#include "util/StringUtils.h"
#include "util/SString.h"

const std::string ColorFieldFormat::EDITOR_BOX = "box";

ColorFieldFormat::ColorFieldFormat(const std::string &name) : FieldFormat(name)
{

}

char ColorFieldFormat::getType()
{
    return FieldFormat::COLOR_FIELD;
}

const type_info &ColorFieldFormat::getFieldClass()
{
    return typeid(AgColor);
}

const type_info &ColorFieldFormat::getFieldWrappedClass()
{
    return typeid(AgColor);
}

AgObjectPtr ColorFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new AgColor(0, 0, 0, 255));
}

AgObjectPtr ColorFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    if (value.length() > 0 && value[0] == '#')
    {
        unsigned int r, g, b, a = 0xFF;
        if (value.length() > 7)
            sscanf(value.c_str(), "#%02X%02X%02X%02X", &r, &g, &b, &a);
        else
            sscanf(value.c_str(), "#%02X%02X%02X", &r, &g, &b);

        return AgObjectPtr(new AgColor(r, g, b, a));
    }
    else
    {
        SString s(value);
        return AgObjectPtr(new AgColor(s.toInteger()));
    }
}

std::string ColorFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    AgColor *color = dynamic_cast<AgColor *>(value.get());
    if (color)
    {
        return StringUtils::colorToString(*color);
    }
    return "";
}

std::list<std::string> ColorFieldFormat::getSuitableEditors()
{
    std::list<std::string> list;
    list.push_back(EDITOR_LIST);
    list.push_back(EDITOR_BOX);
    return list;
}
