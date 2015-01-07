// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/StringFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/String.h"



class com::tibbo::aggregate::common::datatable::field::StringFieldFormat
    : public ::com::tibbo::aggregate::common::datatable::FieldFormat
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::FieldFormat super;

private:
    static const std::string EDITOR_CONTEXT_MASK_;
    static const std::string EDITOR_CONTEXT_;
    static const std::string EDITOR_EXPRESSION_;
    static const std::string EDITOR_ACTIVATOR_;
    static const std::string EDITOR_TARGET_;
    static const std::string EDITOR_CODE_;
    static const std::string EDITOR_TEXT_;
    static const std::string EDITOR_TEXT_AREA_;
    static const std::string EDITOR_EMBEDDED_TEXT_AREA_;
    static const std::string EDITOR_REFERENCE_;
    static const std::string EDITOR_PASSWORD_;
    static const std::string EDITOR_FONT_;
    static const std::string EDITOR_IP_;
    static const std::string EDITOR_HTML_;
    static const std::string CONTEXT_EDITOR_TYPES_SEPARATOR_;
    static const std::string FIELD_ADDITIONAL_REFERENCES_REFERENCE_;
    static const std::string FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* ADDITIONAL_REFERENCES_FORMAT_;
    static const std::string FIELD_DEFAULT_TABLE_;
    static const std::string FIELD_DEFAULT_CONTEXT_;
    static const std::string FIELD_REFERENCES_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EXPRESSION_BUILDER_OPTIONS_FORMAT_;
    static const std::string TEXT_EDITOR_MODE_AGGREGATE_;
    static const std::string TEXT_EDITOR_MODE_JAVA_;
    static const std::string TEXT_EDITOR_MODE_XML_;
    static const std::string TEXT_EDITOR_MODE_SQL_;
    static const std::string TEXT_EDITOR_MODE_HTML_;
    static const std::string TEXT_EDITOR_MODE_SHELLSCRIPT_;
    static const std::string TEXT_EDITOR_MODE_SMI_MIB_;
    static const std::string CODE_EDITOR_MODE_JAVA_;
    static const std::string EDITOR_TARGET_MODE_MODELS_;
protected:
    void ctor(std::string* name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    std::string* getNotNullDefault();

public: /* protected */
    void* convertValue(void* value) /* throws(ValidationException) */;

public:
    std::string* valueFromString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    std::string* valueToString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

public:
    static const std::string encodeExpressionEditorOptions(std::map references);
    static const std::string encodeExpressionEditorOptions(::com::tibbo::aggregate::common::context::Context* defaultContext, ::com::tibbo::aggregate::common::datatable::DataTable* defaultTable, std::map references);
    static const std::string encodeMaskEditorOptions(std::list  contextTypes);
    static const std::string encodeMaskEditorOptions(std::string* contextType);
    static const std::string encodeMaskEditorOptions(::java::lang::Class* contextClass);
    static std::list  decodeMaskEditorOptions(std::string* options);

    // Generated
    StringFieldFormat(std::string* name);
protected:
    StringFieldFormat(const ::default_init_tag&);


public:
    
    static void 
    std::string* valueToString(void* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void* valueFromString(std::string* value);
    std::string* valueToString(void* value);
    static const std::string& EDITOR_CONTEXT_MASK();
    static const std::string& EDITOR_CONTEXT();
    static const std::string& EDITOR_EXPRESSION();
    static const std::string& EDITOR_ACTIVATOR();
    static const std::string& EDITOR_TARGET();
    static const std::string& EDITOR_CODE();
    static const std::string& EDITOR_TEXT();
    static const std::string& EDITOR_TEXT_AREA();
    static const std::string& EDITOR_EMBEDDED_TEXT_AREA();
    static const std::string& EDITOR_REFERENCE();
    static const std::string& EDITOR_PASSWORD();
    static const std::string& EDITOR_FONT();
    static const std::string& EDITOR_IP();
    static const std::string& EDITOR_HTML();

private:
    static const std::string& CONTEXT_EDITOR_TYPES_SEPARATOR();

public:
    static const std::string& FIELD_ADDITIONAL_REFERENCES_REFERENCE();
    static const std::string& FIELD_ADDITIONAL_REFERENCES_DESCRIPTION();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& ADDITIONAL_REFERENCES_FORMAT();
    static const std::string& FIELD_DEFAULT_TABLE();
    static const std::string& FIELD_DEFAULT_CONTEXT();
    static const std::string& FIELD_REFERENCES();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EXPRESSION_BUILDER_OPTIONS_FORMAT();
    static const std::string& TEXT_EDITOR_MODE_AGGREGATE();
    static const std::string& TEXT_EDITOR_MODE_JAVA();
    static const std::string& TEXT_EDITOR_MODE_XML();
    static const std::string& TEXT_EDITOR_MODE_SQL();
    static const std::string& TEXT_EDITOR_MODE_HTML();
    static const std::string& TEXT_EDITOR_MODE_SHELLSCRIPT();
    static const std::string& TEXT_EDITOR_MODE_SMI_MIB();
    static const std::string& CODE_EDITOR_MODE_JAVA();
    static const std::string& EDITOR_TARGET_MODE_MODELS();

private:
    ::java::lang::Class* getClass0();
};
