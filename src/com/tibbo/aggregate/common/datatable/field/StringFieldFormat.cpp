#include "datatable/field/StringFieldFormat.h"



    const std::string StringFieldFormat::EDITOR_CONTEXT_MASK= "contextmask";
    const std::string StringFieldFormat::EDITOR_CONTEXT= "context";
    const std::string StringFieldFormat::EDITOR_EXPRESSION= "expression";
    const std::string StringFieldFormat::EDITOR_ACTIVATOR= "activator";
    const std::string StringFieldFormat::EDITOR_TARGET= "target";
    const std::string StringFieldFormat::EDITOR_CODE= "code";
    const std::string StringFieldFormat::EDITOR_TEXT= "text";
    const std::string StringFieldFormat::EDITOR_TEXT_AREA= "textarea";
    const std::string StringFieldFormat::EDITOR_EMBEDDED_TEXT_AREA= "etextarea";
    const std::string StringFieldFormat::EDITOR_REFERENCE= "reference";
    const std::string StringFieldFormat::EDITOR_PASSWORD= "password";
    const std::string StringFieldFormat::EDITOR_FONT= "font";
    const std::string StringFieldFormat::EDITOR_IP= "ip";
    const std::string StringFieldFormat::EDITOR_HTML= "html";

//Datefield::StringFieldFormat::StringFieldFormat(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//Datefield::StringFieldFormat::StringFieldFormat(const std::string & name) 
//    : StringFieldFormat(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(name);
//}
//

//std::string& Datefield::StringFieldFormat::CONTEXT_EDITOR_TYPES_SEPARATOR()
//{
//    
//    return CONTEXT_EDITOR_TYPES_SEPARATOR_;
//}
//std::string Datefield::StringFieldFormat::CONTEXT_EDITOR_TYPES_SEPARATOR_;
//
//std::string& Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE()
//{
//    
//    return FIELD_ADDITIONAL_REFERENCES_REFERENCE_;
//}
//std::string Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE_;
//
//std::string& Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION()
//{
//    
//    return FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_;
//}
//std::string Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_;
//
//DateTableFormat*& Datefield::StringFieldFormat::ADDITIONAL_REFERENCES_FORMAT()
//{
//    
//    return ADDITIONAL_REFERENCES_FORMAT_;
//}
//DateTableFormat* Datefield::StringFieldFormat::ADDITIONAL_REFERENCES_FORMAT_;
//
//std::string& Datefield::StringFieldFormat::FIELD_DEFAULT_TABLE()
//{
//    
//    return FIELD_DEFAULT_TABLE_;
//}
//std::string Datefield::StringFieldFormat::FIELD_DEFAULT_TABLE_;
//
//std::string& Datefield::StringFieldFormat::FIELD_DEFAULT_CONTEXT()
//{
//    
//    return FIELD_DEFAULT_CONTEXT_;
//}
//std::string Datefield::StringFieldFormat::FIELD_DEFAULT_CONTEXT_;
//
//std::string& Datefield::StringFieldFormat::FIELD_REFERENCES()
//{
//    
//    return FIELD_REFERENCES_;
//}
//std::string Datefield::StringFieldFormat::FIELD_REFERENCES_;
//
//DateTableFormat*& Datefield::StringFieldFormat::EXPRESSION_BUILDER_OPTIONS_FORMAT()
//{
//    
//    return EXPRESSION_BUILDER_OPTIONS_FORMAT_;
//}
//DateTableFormat* Datefield::StringFieldFormat::EXPRESSION_BUILDER_OPTIONS_FORMAT_;
//
//std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_AGGREGATE()
//{
//    
//    return TEXT_EDITOR_MODE_AGGREGATE_;
//}
//std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_AGGREGATE_;
//
//std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_JAVA()
//{
//    
//    return TEXT_EDITOR_MODE_JAVA_;
//}
//std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_JAVA_;
//
//std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_XML()
//{
//    
//    return TEXT_EDITOR_MODE_XML_;
//}
//std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_XML_;
//
//std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SQL()
//{
//    
//    return TEXT_EDITOR_MODE_SQL_;
//}
//std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SQL_;
//
//std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_HTML()
//{
//    
//    return TEXT_EDITOR_MODE_HTML_;
//}
//std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_HTML_;
//
//std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SHELLSCRIPT()
//{
//    
//    return TEXT_EDITOR_MODE_SHELLSCRIPT_;
//}
//std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SHELLSCRIPT_;
//
//std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SMI_MIB()
//{
//    
//    return TEXT_EDITOR_MODE_SMI_MIB_;
//}
//std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SMI_MIB_;
//
//std::string& Datefield::StringFieldFormat::CODE_EDITOR_MODE_JAVA()
//{
//    
//    return CODE_EDITOR_MODE_JAVA_;
//}
//std::string Datefield::StringFieldFormat::CODE_EDITOR_MODE_JAVA_;
//
//std::string& Datefield::StringFieldFormat::EDITOR_TARGET_MODE_MODELS()
//{
//    
//    return EDITOR_TARGET_MODE_MODELS_;
//}
//std::string Datefield::StringFieldFormat::EDITOR_TARGET_MODE_MODELS_;
//
//void Datefield::StringFieldFormat::ctor(const std::string & name)
//{
//    super::ctor(name);
//    setTransferEncode(true);
//}
//
//char16_t Datefield::StringFieldFormat::getType()
//{
//    return FieldFormat::STRING_FIELD;
//}
//
//java::lang::Class* Datefield::StringFieldFormat::getFieldClass()
//{
//    return std::string::class_();
//}
//
//java::lang::Class* Datefield::StringFieldFormat::getFieldWrappedClass()
//{
//    return std::string::class_();
//}
//
//std::string Datefield::StringFieldFormat::getNotNullDefault()
//{
//    return "";
//}
//
//void* Datefield::StringFieldFormat::convertValue(void* value) /* throws(ValidationException) */
//{
//    if(value != 0 && !(dynamic_cast< const std::string & >(value) != 0)) {
//        value = value)->toString();
//    }
//    return value;
//}
//
//std::string Datefield::StringFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
//{
//    return value;
//}
//
//std::string Datefield::StringFieldFormat::valueToString(const std::string & value, encoding::ClassicEncodingSettings* settings)
//{
//    return value == 0 ? static_cast< const std::string & >(0) : value;
//}
//
//std::string Datefield::StringFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
//{ 
//    return valueToString(dynamic_cast< const std::string & >(value), settings);
//}
//
//std::list  Datefield::StringFieldFormat::getSuitableEditors()
//{
//    return ::java::util::Arrays::asList(new voidArray({EDITOR_LIST()), EDITOR_CONTEXT_MASK_), EDITOR_CONTEXT_), EDITOR_TEXT_AREA_), EDITOR_EMBEDDED_TEXT_AREA_), EDITOR_TEXT_), EDITOR_CODE_), EDITOR_REFERENCE_), EDITOR_EXPRESSION_), EDITOR_TARGET_), EDITOR_ACTIVATOR_), EDITOR_PASSWORD_), EDITOR_BAR()), EDITOR_BYTES()), EDITOR_FONT_), EDITOR_IP_), EDITOR_HTML_)}));
//}
//
//std::string Datefield::StringFieldFormat::encodeExpressionEditorOptions(std::map references)
//{
//    
//    return encodeExpressionEditorOptions(0, 0, references);
//}
//
//std::string Datefield::StringFieldFormat::encodeExpressionEditorOptions(Context* defaultContext, DataTable* defaultTable, std::map references)
//{
//    
//    auto op = new DataRecord(EXPRESSION_BUILDER_OPTIONS_FORMAT_);
//    op)->addValue(defaultContext != 0 ? defaultContext)->getPath()) : 0));
//    op)->addValue(defaultTable);
//    auto refs = new DataTable(ADDITIONAL_REFERENCES_FORMAT_);
//    if(references != 0) {
//        for (auto _i = references)->entrySet())->iterator(); _i->hasNext(); ) {
//            ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
//            {
//                refs)->addRecord())->addString(java_cast< Reference* >(entry)->getKey()))->getImage()))->addString(java_cast< const std::string & >(entry)->getValue()) != 0 ? java_cast< const std::string & >(entry)->getValue()) : java_cast< Reference* >(entry)->getKey()))->getImage());
//            }
//        }
//    }
//    op)->addValue(refs);
//    return op)->wrap())->encode(false);
//}
//
//std::string Datefield::StringFieldFormat::encodeMaskEditorOptions(std::list  contextTypes)
//{
//    
//    return ::com::tibbo::aggregate::common::util::StringUtils::print(static_cast< ::java::util::Collection* >(contextTypes), CONTEXT_EDITOR_TYPES_SEPARATOR_);
//}
//
//std::string Datefield::StringFieldFormat::encodeMaskEditorOptions(const std::string & contextType)
//{
//    
//    return encodeMaskEditorOptions(::java::util::Collections::singletonList(contextType));
//}
//
//std::string Datefield::StringFieldFormat::encodeMaskEditorOptions(::java::lang::Class* contextClass)
//{
//    
//    return encodeMaskEditorOptions(::java::util::Collections::singletonList(ContextUtils::getTypeForClass(contextClass)));
//}
//
//std::list  Datefield::StringFieldFormat::decodeMaskEditorOptions(const std::string & options)
//{
//    
//    if(options == 0 || options)->length() == 0) {
//        return 0;
//    }
//    return ::com::tibbo::aggregate::common::util::StringUtils::split(options, CONTEXT_EDITOR_TYPES_SEPARATOR_)->charAt(int(0)));
//}
//
//
//
//java::lang::Class* Datefield::StringFieldFormat::class_()
//{
//    static ::java::lang::Class* c = ::class_("com.tibbo.aggregate.common.datatable.field.StringFieldFormat", 60);
//    return c;
//}
//
//void Datefield::StringFieldFormat::clinit()
//{

//    CONTEXT_EDITOR_TYPES_SEPARATOR= " ";
//    FIELD_ADDITIONAL_REFERENCES_REFERENCE= "reference";
//    FIELD_ADDITIONAL_REFERENCES_DESCRIPTION= "description";
//    FIELD_DEFAULT_TABLE= "table";
//    FIELD_DEFAULT_CONTEXT= "context";
//    FIELD_REFERENCES= "references";
//    TEXT_EDITOR_MODE_AGGREGATE= "aggregate";
//    TEXT_EDITOR_MODE_JAVA= "java";
//    TEXT_EDITOR_MODE_XML= "xml";
//    TEXT_EDITOR_MODE_SQL= "sql";
//    TEXT_EDITOR_MODE_HTML= "html";
//    TEXT_EDITOR_MODE_SHELLSCRIPT= "shellscript";
//    TEXT_EDITOR_MODE_SMI_MIB= "smi-mib";
//    CODE_EDITOR_MODE_JAVA= "java";
//    EDITOR_TARGET_MODE_MODELS= "models";
//};
//
//    static string_init_ string_init_instance;
//
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        ADDITIONAL_REFERENCES_FORMAT= new TableFormat();
//        {
//            ADDITIONAL_REFERENCES_FORMAT_)->addField(std::stringBuilder().append("<"_j)->append(FIELD_ADDITIONAL_REFERENCES_REFERENCE_)
//                ->append("><S>"_j)->toString());
//            ADDITIONAL_REFERENCES_FORMAT_)->addField(std::stringBuilder().append("<"_j)->append(FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_)
//                ->append("><S>"_j)->toString());
//        }
//        EXPRESSION_BUILDER_OPTIONS_FORMAT= new TableFormat(int(1), int(1));
//        {
//            EXPRESSION_BUILDER_OPTIONS_FORMAT_)->addField(std::stringBuilder().append("<"_j)->append(FIELD_DEFAULT_CONTEXT_)
//                ->append("><S><F=N>"_j)->toString());
//            EXPRESSION_BUILDER_OPTIONS_FORMAT_)->addField(std::stringBuilder().append("<"_j)->append(FIELD_DEFAULT_TABLE_)
//                ->append("><T><F=N>"_j)->toString());
//            EXPRESSION_BUILDER_OPTIONS_FORMAT_)->addField(std::stringBuilder().append("<"_j)->append(FIELD_REFERENCES_)
//                ->append("><T>"_j)->toString());
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//
//void* Datefield::StringFieldFormat::valueFromString(const std::string & value)
//{
//    return super::valueFromString(value);
//}
//
//std::string Datefield::StringFieldFormat::valueToString(void* value)
//{
//    return super::valueToString(value);
//}
//

