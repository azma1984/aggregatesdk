#pragma once

#include "datatable/FieldFormat.h"

class LongFieldFormat : public FieldFormat
{
public:
    static const std::string EDITOR_PERIOD;

    LongFieldFormat(const std::string &name);
    char getType();
    const std::type_info& getFieldClass();
    const std::type_info& getFieldWrappedClass();
    AgObjectPtr getNotNullDefault();
    AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings);

    static std::string encodePeriodEditorOptions(int minUnit, int maxUnit);

protected:
    std::list<std::string> getSuitableEditors();
    AgObjectPtr convertValue(AgObjectPtr value);

};
