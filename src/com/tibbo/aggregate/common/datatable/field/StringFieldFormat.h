#pragma once

#include "datatable/FieldFormat.h"
#include <map>

class StringFieldFormat : public FieldFormat
{
public:
	static const std::string EDITOR_CONTEXT_MASK;
    static const std::string EDITOR_CONTEXT;
    static const std::string EDITOR_EXPRESSION;
    static const std::string EDITOR_ACTIVATOR;
    static const std::string EDITOR_TARGET;
    static const std::string EDITOR_CODE;
    static const std::string EDITOR_TEXT;
    static const std::string EDITOR_TEXT_AREA;
    static const std::string EDITOR_EMBEDDED_TEXT_AREA;
    static const std::string EDITOR_REFERENCE;
    static const std::string EDITOR_PASSWORD;
    static const std::string EDITOR_FONT;
    static const std::string EDITOR_IP;
    static const std::string EDITOR_HTML;

    static const std::string FIELD_ADDITIONAL_REFERENCES_REFERENCE;
    static const std::string FIELD_ADDITIONAL_REFERENCES_DESCRIPTION;

    static const std::string FIELD_DEFAULT_TABLE;
    static const std::string FIELD_DEFAULT_CONTEXT;
    static const std::string FIELD_REFERENCES;

    static const std::string TEXT_EDITOR_MODE_AGGREGATE;
    static const std::string TEXT_EDITOR_MODE_JAVA;
    static const std::string TEXT_EDITOR_MODE_XML;
    static const std::string TEXT_EDITOR_MODE_SQL;
    static const std::string TEXT_EDITOR_MODE_HTML;
    static const std::string TEXT_EDITOR_MODE_SHELLSCRIPT;
    static const std::string TEXT_EDITOR_MODE_SMI_MIB;

    static const std::string CODE_EDITOR_MODE_JAVA;

    static const std::string EDITOR_TARGET_MODE_MODELS;

    StringFieldFormat(const std::string &name);
    char getType();
    const std::type_info& getFieldClass();
    const std::type_info& getFieldWrappedClass();
    AgObjectPtr getNotNullDefault();
    AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings);

    static std::string encodeExpressionEditorOptions(std::map<ReferencePtr, std::string> references);
    static std::string encodeExpressionEditorOptions(ContextPtr defaultContext, DataTablePtr defaultTable, std::map<ReferencePtr, std::string> references);


protected:
    std::list<std::string> getSuitableEditors();
    AgObjectPtr convertValue(AgObjectPtr value);

private:
    static const std::string CONTEXT_EDITOR_TYPES_SEPARATOR;
    static TableFormatPtr EXPRESSION_BUILDER_OPTIONS_FORMAT;
    static TableFormatPtr ADDITIONAL_REFERENCES_FORMAT;


};

