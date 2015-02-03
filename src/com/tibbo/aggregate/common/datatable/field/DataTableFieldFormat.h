#pragma once

#include "datatable/FieldFormat.h"
#include "datatable/validator/AbstractFieldValidator.h"

class DataTableFieldFormat : public FieldFormat
{
public:
    DataTableFieldFormat(const std::string &name);
    char getType();
    const std::type_info& getFieldClass();
    const std::type_info& getFieldWrappedClass();
    AgObjectPtr getNotNullDefault();
    AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings);

    static std::string encodeEditorOptions(bool showTableData);
private:

    class LocalFieldValidator : public AbstractFieldValidator
    {
    public:
            LocalFieldValidator(DataTable* defaultValue) : AbstractFieldValidator()
            {
                def = defaultValue;
            }

            virtual AgObjectPtr validate(AgObjectPtr value);
    private:
            DataTable *def;
    };

    FieldValidatorPtr fieldValidator;
};
