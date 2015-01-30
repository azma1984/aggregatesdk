#pragma once

#include "datatable/FieldFormat.h"
#include "util/Color.h"
#include "util/Pointers.h"
#include "util/StringUtils.h"
#include <string>

class ColorFieldFormat
    : public FieldFormat
{
public:    
    static const std::string EDITOR_BOX;
//    Class* getFieldClass();
//    Class* getFieldWrappedClass();
//    Color* getNotNullDefault();
//    ::java::awt::Color* valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate);
//    const std::string & valueToString(::java::awt::Color* value, encoding::ClassicEncodingSettings* settings);

protected:
    std::list<std::string>  getSuitableEditors()
    {
        std::list<std::string> se;
        se.insert(EDITOR_LIST);
        se.insert(EDITOR_BOX);

        return se;
    }

public:
    ColorFieldFormat(const std::string& name) : FieldFormat(name)
    {
    }

    char getType()
    {
        return FieldFormat::COLOR_FIELD;
    }

    const std::string & valueToString(ColorPtr value, ClassicEncodingSettingsPtr settings)
    {
        return value == null ? null : StringUtils.colorToString(value);
    }

    void* valueFromString(const std::string & value);
};


const std::string ColorFieldFormat::EDITOR_BOX = "box";
