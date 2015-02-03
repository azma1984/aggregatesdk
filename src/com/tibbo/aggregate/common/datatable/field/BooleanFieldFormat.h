#pragma once

#include "datatable/FieldFormat.h"
#include "util/Pointers.h"

class BooleanFieldFormat : public FieldFormat
{

public:
    BooleanFieldFormat(const std::string &name);
    char getType();
    const std::type_info& getFieldClass();
    const std::type_info& getFieldWrappedClass();
    AgObjectPtr getNotNullDefault();
    AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings);

protected:
    AgObjectPtr convertValue(AgObjectPtr value);
};
