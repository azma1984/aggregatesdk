#pragma once

#include "datatable/FieldFormat.h"

class IntFieldFormat : public FieldFormat
{
public:
    static const std::string EDITOR_SPINNER;
    static const std::string EDITOR_EVENT_LEVEL;

    IntFieldFormat(const std::string &name);
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
