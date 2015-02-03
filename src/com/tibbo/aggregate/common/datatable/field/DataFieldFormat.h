#pragma once

#include "datatable/FieldFormat.h"

class DataFieldFormat : public FieldFormat
{
public:
    static const int TRANSCODER_VERSION = 0;

    static const std::string EDITOR_TEXT;
    static const std::string EDITOR_IMAGE;
    static const std::string EDITOR_SOUND;
    static const std::string EDITOR_HEX;
    static const std::string EDITOR_REPORT;

    static const char SEPARATOR = '/';

    static const std::string EXTENSIONS_DESCR_FIELD;
    static const std::string MODE_FIELD;
    static const std::string EXTENSIONS_FIELD;
    static const std::string EXTENSION_FIELD;

    static const std::string FOLDER_FIELD;

public:
    DataFieldFormat(const std::string &name);
    char getType();
    const std::type_info& getFieldClass();
    const std::type_info& getFieldWrappedClass();
    AgObjectPtr getNotNullDefault();
    AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings);

    static std::string encodeTextEditorOptions(const std::string &mode);
    static std::string encodeTextEditorOptions(const std::string &extensionsDescription, const std::string &folder, std::list<std::string> extensions);
    static std::string encodeTextEditorOptions(const std::string &mode, const std::string &extensionsDescription, const std::string &folder, std::list<std::string> extensions);

protected:
    std::list<std::string> getSuitableEditors();

private:
    static TableFormatPtr EXTENSIONS_FORMAT;
    static TableFormatPtr DATA_EDITOR_OPTIONS_FORMAT;
};
