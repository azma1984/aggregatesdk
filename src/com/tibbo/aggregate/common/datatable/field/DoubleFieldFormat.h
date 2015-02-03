#pragma once

#include "datatable/FieldFormat.h"

class DoubleFieldFormat : public FieldFormat
{
public:
    DoubleFieldFormat(const std::string &name);
    char getType();
    const std::type_info& getFieldClass();
    const std::type_info& getFieldWrappedClass();
    AgObjectPtr getNotNullDefault();
    AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings);

protected:
    std::list<std::string> getSuitableEditors();
    AgObjectPtr convertValue(AgObjectPtr value);
};
