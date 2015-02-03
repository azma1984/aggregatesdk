#pragma once

#include "datatable/FieldFormat.h"
#include "util/Date.h"

class DateFieldFormat : public FieldFormat
{
public:
    static const std::string EDITOR_TIME;
    static const std::string EDITOR_DATE;

public:
    DateFieldFormat(const std::string &name);
    char getType();
    const std::type_info& getFieldClass();
    const std::type_info& getFieldWrappedClass();
    AgObjectPtr getNotNullDefault();
    AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings);

protected:
    std::list<std::string> getSuitableEditors();
private:
    Date date;
};
