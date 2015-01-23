#ifndef _StringFieldFormat_H_
#define _StringFieldFormat_H_
//
//#include "context/Context.h"
//#include "context/ContextUtils.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/FieldFormat.h"
//#include "datatable/TableFormat.h"
//#include "expression/Reference.h"
//#include "util/StringUtils.h"
#include "datatable/FieldFormat.h"

//todo - class stub
class StringFieldFormat : public FieldFormat
{
 private:



//    static const std::string CONTEXT_EDITOR_TYPES_SEPARATOR;
//    static const std::string FIELD_ADDITIONAL_REFERENCES_REFERENCE;
//    static const std::string FIELD_ADDITIONAL_REFERENCES_DESCRIPTION;
//    static TableFormat* ADDITIONAL_REFERENCES_FORMAT;
//    static const std::string FIELD_DEFAULT_TABLE;
//    static const std::string FIELD_DEFAULT_CONTEXT;
//    static const std::string FIELD_REFERENCES;
//    static TableFormat* EXPRESSION_BUILDER_OPTIONS_FORMAT;
//    static const std::string TEXT_EDITOR_MODE_AGGREGATE;
//    static const std::string TEXT_EDITOR_MODE_JAVA;
//    static const std::string TEXT_EDITOR_MODE_XML;
//    static const std::string TEXT_EDITOR_MODE_SQL;
//    static const std::string TEXT_EDITOR_MODE_HTML;
//    static const std::string TEXT_EDITOR_MODE_SHELLSCRIPT;
//    static const std::string TEXT_EDITOR_MODE_SMI_MIB;
//    static const std::string CODE_EDITOR_MODE_JAVA;
//    static const std::string EDITOR_TARGET_MODE_MODELS;
//protected:
//    void ctor(const std::string & name);

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
//    char16_t getType();
//    ::java::lang::Class* getFieldClass();
//    ::java::lang::Class* getFieldWrappedClass();
//    const std::string & getNotNullDefault();

//public: /* protected */
//    void* convertValue(void* value) /* throws(ValidationException) */;

//public:
//    const std::string & valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate);
//    const std::string & valueToString(const std::string & value, encoding::ClassicEncodingSettings* settings);

//public: /* protected */
//    std::list  getSuitableEditors();

//public:
//    static const std::string encodeExpressionEditorOptions(std::map references);
//    static const std::string encodeExpressionEditorOptions(Context* defaultContext, DataTable* defaultTable, std::map references);
//    static const std::string encodeMaskEditorOptions(std::list  contextTypes);
//    static const std::string encodeMaskEditorOptions(const std::string & contextType);
//    static const std::string encodeMaskEditorOptions(::java::lang::Class* contextClass);
//    static std::list  decodeMaskEditorOptions(const std::string & options);

//    // Generated
//    StringFieldFormat(const std::string & name);
//protected:
//    StringFieldFormat(const ::default_init_tag&);


//public:
    
//    static void
//    const std::string & valueToString(void* value, encoding::ClassicEncodingSettings* settings);
//    void* valueFromString(const std::string & value);
//    const std::string & valueToString(void* value);

//private:
//    static const std::string& CONTEXT_EDITOR_TYPES_SEPARATOR();

//public:
//    static const std::string& FIELD_ADDITIONAL_REFERENCES_REFERENCE();
//    static const std::string& FIELD_ADDITIONAL_REFERENCES_DESCRIPTION();
//    static TableFormat*& ADDITIONAL_REFERENCES_FORMAT();
//    static const std::string& FIELD_DEFAULT_TABLE();
//    static const std::string& FIELD_DEFAULT_CONTEXT();
//    static const std::string& FIELD_REFERENCES();
//    static TableFormat*& EXPRESSION_BUILDER_OPTIONS_FORMAT();
//    static const std::string& TEXT_EDITOR_MODE_AGGREGATE();
//    static const std::string& TEXT_EDITOR_MODE_JAVA();
//    static const std::string& TEXT_EDITOR_MODE_XML();
//    static const std::string& TEXT_EDITOR_MODE_SQL();
//    static const std::string& TEXT_EDITOR_MODE_HTML();
//    static const std::string& TEXT_EDITOR_MODE_SHELLSCRIPT();
//    static const std::string& TEXT_EDITOR_MODE_SMI_MIB();
//    static const std::string& CODE_EDITOR_MODE_JAVA();
//    static const std::string& EDITOR_TARGET_MODE_MODELS();

//private:
//    ::java::lang::Class* getClass0();
};

#endif