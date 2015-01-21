// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/StringFieldFormat.java
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Arrays.h"
//#include <java/util/Collection.h"
//#include <java/util/Collections.h"
//#include <java/util/Iterator.h"
//#include <java/util/List.h"
//#include <java/util/Map_Entry.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

Datefield::StringFieldFormat::StringFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datefield::StringFieldFormat::StringFieldFormat(const std::string & name) 
    : StringFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

std::string& Datefield::StringFieldFormat::EDITOR_CONTEXT_MASK()
{
    
    return EDITOR_CONTEXT_MASK_;
}
std::string Datefield::StringFieldFormat::EDITOR_CONTEXT_MASK_;

std::string& Datefield::StringFieldFormat::EDITOR_CONTEXT()
{
    
    return EDITOR_CONTEXT_;
}
std::string Datefield::StringFieldFormat::EDITOR_CONTEXT_;

std::string& Datefield::StringFieldFormat::EDITOR_EXPRESSION()
{
    
    return EDITOR_EXPRESSION_;
}
std::string Datefield::StringFieldFormat::EDITOR_EXPRESSION_;

std::string& Datefield::StringFieldFormat::EDITOR_ACTIVATOR()
{
    
    return EDITOR_ACTIVATOR_;
}
std::string Datefield::StringFieldFormat::EDITOR_ACTIVATOR_;

std::string& Datefield::StringFieldFormat::EDITOR_TARGET()
{
    
    return EDITOR_TARGET_;
}
std::string Datefield::StringFieldFormat::EDITOR_TARGET_;

std::string& Datefield::StringFieldFormat::EDITOR_CODE()
{
    
    return EDITOR_CODE_;
}
std::string Datefield::StringFieldFormat::EDITOR_CODE_;

std::string& Datefield::StringFieldFormat::EDITOR_TEXT()
{
    
    return EDITOR_TEXT_;
}
std::string Datefield::StringFieldFormat::EDITOR_TEXT_;

std::string& Datefield::StringFieldFormat::EDITOR_TEXT_AREA()
{
    
    return EDITOR_TEXT_AREA_;
}
std::string Datefield::StringFieldFormat::EDITOR_TEXT_AREA_;

std::string& Datefield::StringFieldFormat::EDITOR_EMBEDDED_TEXT_AREA()
{
    
    return EDITOR_EMBEDDED_TEXT_AREA_;
}
std::string Datefield::StringFieldFormat::EDITOR_EMBEDDED_TEXT_AREA_;

std::string& Datefield::StringFieldFormat::EDITOR_REFERENCE()
{
    
    return EDITOR_REFERENCE_;
}
std::string Datefield::StringFieldFormat::EDITOR_REFERENCE_;

std::string& Datefield::StringFieldFormat::EDITOR_PASSWORD()
{
    
    return EDITOR_PASSWORD_;
}
std::string Datefield::StringFieldFormat::EDITOR_PASSWORD_;

std::string& Datefield::StringFieldFormat::EDITOR_FONT()
{
    
    return EDITOR_FONT_;
}
std::string Datefield::StringFieldFormat::EDITOR_FONT_;

std::string& Datefield::StringFieldFormat::EDITOR_IP()
{
    
    return EDITOR_IP_;
}
std::string Datefield::StringFieldFormat::EDITOR_IP_;

std::string& Datefield::StringFieldFormat::EDITOR_HTML()
{
    
    return EDITOR_HTML_;
}
std::string Datefield::StringFieldFormat::EDITOR_HTML_;

std::string& Datefield::StringFieldFormat::CONTEXT_EDITOR_TYPES_SEPARATOR()
{
    
    return CONTEXT_EDITOR_TYPES_SEPARATOR_;
}
std::string Datefield::StringFieldFormat::CONTEXT_EDITOR_TYPES_SEPARATOR_;

std::string& Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE()
{
    
    return FIELD_ADDITIONAL_REFERENCES_REFERENCE_;
}
std::string Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE_;

std::string& Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION()
{
    
    return FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_;
}
std::string Datefield::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_;

DateTableFormat*& Datefield::StringFieldFormat::ADDITIONAL_REFERENCES_FORMAT()
{
    
    return ADDITIONAL_REFERENCES_FORMAT_;
}
DateTableFormat* Datefield::StringFieldFormat::ADDITIONAL_REFERENCES_FORMAT_;

std::string& Datefield::StringFieldFormat::FIELD_DEFAULT_TABLE()
{
    
    return FIELD_DEFAULT_TABLE_;
}
std::string Datefield::StringFieldFormat::FIELD_DEFAULT_TABLE_;

std::string& Datefield::StringFieldFormat::FIELD_DEFAULT_CONTEXT()
{
    
    return FIELD_DEFAULT_CONTEXT_;
}
std::string Datefield::StringFieldFormat::FIELD_DEFAULT_CONTEXT_;

std::string& Datefield::StringFieldFormat::FIELD_REFERENCES()
{
    
    return FIELD_REFERENCES_;
}
std::string Datefield::StringFieldFormat::FIELD_REFERENCES_;

DateTableFormat*& Datefield::StringFieldFormat::EXPRESSION_BUILDER_OPTIONS_FORMAT()
{
    
    return EXPRESSION_BUILDER_OPTIONS_FORMAT_;
}
DateTableFormat* Datefield::StringFieldFormat::EXPRESSION_BUILDER_OPTIONS_FORMAT_;

std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_AGGREGATE()
{
    
    return TEXT_EDITOR_MODE_AGGREGATE_;
}
std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_AGGREGATE_;

std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_JAVA()
{
    
    return TEXT_EDITOR_MODE_JAVA_;
}
std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_JAVA_;

std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_XML()
{
    
    return TEXT_EDITOR_MODE_XML_;
}
std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_XML_;

std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SQL()
{
    
    return TEXT_EDITOR_MODE_SQL_;
}
std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SQL_;

std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_HTML()
{
    
    return TEXT_EDITOR_MODE_HTML_;
}
std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_HTML_;

std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SHELLSCRIPT()
{
    
    return TEXT_EDITOR_MODE_SHELLSCRIPT_;
}
std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SHELLSCRIPT_;

std::string& Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SMI_MIB()
{
    
    return TEXT_EDITOR_MODE_SMI_MIB_;
}
std::string Datefield::StringFieldFormat::TEXT_EDITOR_MODE_SMI_MIB_;

std::string& Datefield::StringFieldFormat::CODE_EDITOR_MODE_JAVA()
{
    
    return CODE_EDITOR_MODE_JAVA_;
}
std::string Datefield::StringFieldFormat::CODE_EDITOR_MODE_JAVA_;

std::string& Datefield::StringFieldFormat::EDITOR_TARGET_MODE_MODELS()
{
    
    return EDITOR_TARGET_MODE_MODELS_;
}
std::string Datefield::StringFieldFormat::EDITOR_TARGET_MODE_MODELS_;

void Datefield::StringFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
    setTransferEncode(true);
}

char16_t Datefield::StringFieldFormat::getType()
{
    return FieldFormat::STRING_FIELD;
}

java::lang::Class* Datefield::StringFieldFormat::getFieldClass()
{
    return std::string::class_();
}

java::lang::Class* Datefield::StringFieldFormat::getFieldWrappedClass()
{
    return std::string::class_();
}

std::string Datefield::StringFieldFormat::getNotNullDefault()
{
    return u""_j;
}

void* Datefield::StringFieldFormat::convertValue(void* value) /* throws(ValidationException) */
{
    if(value != 0 && !(dynamic_cast< const std::string & >(value) != 0)) {
        value = value)->toString();
    }
    return value;
}

std::string Datefield::StringFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    return value;
}

std::string Datefield::StringFieldFormat::valueToString(const std::string & value, encoding::ClassicEncodingSettings* settings)
{
    return value == 0 ? static_cast< const std::string & >(0) : value;
}

std::string Datefield::StringFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< const std::string & >(value), settings);
}

std::list  Datefield::StringFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new voidArray({EDITOR_LIST()), EDITOR_CONTEXT_MASK_), EDITOR_CONTEXT_), EDITOR_TEXT_AREA_), EDITOR_EMBEDDED_TEXT_AREA_), EDITOR_TEXT_), EDITOR_CODE_), EDITOR_REFERENCE_), EDITOR_EXPRESSION_), EDITOR_TARGET_), EDITOR_ACTIVATOR_), EDITOR_PASSWORD_), EDITOR_BAR()), EDITOR_BYTES()), EDITOR_FONT_), EDITOR_IP_), EDITOR_HTML_)}));
}

std::string Datefield::StringFieldFormat::encodeExpressionEditorOptions(std::map references)
{
    
    return encodeExpressionEditorOptions(0, 0, references);
}

std::string Datefield::StringFieldFormat::encodeExpressionEditorOptions(Context* defaultContext, DataTable* defaultTable, std::map references)
{
    
    auto op = new DataRecord(EXPRESSION_BUILDER_OPTIONS_FORMAT_);
    op)->addValue(defaultContext != 0 ? defaultContext)->getPath()) : 0));
    op)->addValue(defaultTable);
    auto refs = new DataTable(ADDITIONAL_REFERENCES_FORMAT_);
    if(references != 0) {
        for (auto _i = references)->entrySet())->iterator(); _i->hasNext(); ) {
            ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
            {
                refs)->addRecord())->addString(java_cast< Reference* >(entry)->getKey()))->getImage()))->addString(java_cast< const std::string & >(entry)->getValue()) != 0 ? java_cast< const std::string & >(entry)->getValue()) : java_cast< Reference* >(entry)->getKey()))->getImage());
            }
        }
    }
    op)->addValue(refs);
    return op)->wrap())->encode(false);
}

std::string Datefield::StringFieldFormat::encodeMaskEditorOptions(std::list  contextTypes)
{
    
    return ::com::tibbo::aggregate::common::util::StringUtils::print(static_cast< ::java::util::Collection* >(contextTypes), CONTEXT_EDITOR_TYPES_SEPARATOR_);
}

std::string Datefield::StringFieldFormat::encodeMaskEditorOptions(const std::string & contextType)
{
    
    return encodeMaskEditorOptions(::java::util::Collections::singletonList(contextType));
}

std::string Datefield::StringFieldFormat::encodeMaskEditorOptions(::java::lang::Class* contextClass)
{
    
    return encodeMaskEditorOptions(::java::util::Collections::singletonList(ContextUtils::getTypeForClass(contextClass)));
}

std::list  Datefield::StringFieldFormat::decodeMaskEditorOptions(const std::string & options)
{
    
    if(options == 0 || options)->length() == 0) {
        return 0;
    }
    return ::com::tibbo::aggregate::common::util::StringUtils::split(options, CONTEXT_EDITOR_TYPES_SEPARATOR_)->charAt(int(0)));
}



java::lang::Class* Datefield::StringFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.StringFieldFormat", 60);
    return c;
}

void Datefield::StringFieldFormat::clinit()
{
struct string_init_ {
    string_init_() {
    EDITOR_CONTEXT_MASK_ = u"contextmask"_j;
    EDITOR_CONTEXT_ = u"context"_j;
    EDITOR_EXPRESSION_ = u"expression"_j;
    EDITOR_ACTIVATOR_ = u"activator"_j;
    EDITOR_TARGET_ = u"target"_j;
    EDITOR_CODE_ = u"code"_j;
    EDITOR_TEXT_ = u"text"_j;
    EDITOR_TEXT_AREA_ = u"textarea"_j;
    EDITOR_EMBEDDED_TEXT_AREA_ = u"etextarea"_j;
    EDITOR_REFERENCE_ = u"reference"_j;
    EDITOR_PASSWORD_ = u"password"_j;
    EDITOR_FONT_ = u"font"_j;
    EDITOR_IP_ = u"ip"_j;
    EDITOR_HTML_ = u"html"_j;
    CONTEXT_EDITOR_TYPES_SEPARATOR_ = u" "_j;
    FIELD_ADDITIONAL_REFERENCES_REFERENCE_ = u"reference"_j;
    FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_ = u"description"_j;
    FIELD_DEFAULT_TABLE_ = u"table"_j;
    FIELD_DEFAULT_CONTEXT_ = u"context"_j;
    FIELD_REFERENCES_ = u"references"_j;
    TEXT_EDITOR_MODE_AGGREGATE_ = u"aggregate"_j;
    TEXT_EDITOR_MODE_JAVA_ = u"java"_j;
    TEXT_EDITOR_MODE_XML_ = u"xml"_j;
    TEXT_EDITOR_MODE_SQL_ = u"sql"_j;
    TEXT_EDITOR_MODE_HTML_ = u"html"_j;
    TEXT_EDITOR_MODE_SHELLSCRIPT_ = u"shellscript"_j;
    TEXT_EDITOR_MODE_SMI_MIB_ = u"smi-mib"_j;
    CODE_EDITOR_MODE_JAVA_ = u"java"_j;
    EDITOR_TARGET_MODE_MODELS_ = u"models"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ADDITIONAL_REFERENCES_FORMAT_ = new TableFormat();
        {
            ADDITIONAL_REFERENCES_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ADDITIONAL_REFERENCES_REFERENCE_)
                ->append(u"><S>"_j)->toString());
            ADDITIONAL_REFERENCES_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ADDITIONAL_REFERENCES_DESCRIPTION_)
                ->append(u"><S>"_j)->toString());
        }
        EXPRESSION_BUILDER_OPTIONS_FORMAT_ = new TableFormat(int(1), int(1));
        {
            EXPRESSION_BUILDER_OPTIONS_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_DEFAULT_CONTEXT_)
                ->append(u"><S><F=N>"_j)->toString());
            EXPRESSION_BUILDER_OPTIONS_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_DEFAULT_TABLE_)
                ->append(u"><T><F=N>"_j)->toString());
            EXPRESSION_BUILDER_OPTIONS_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_REFERENCES_)
                ->append(u"><T>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

void* Datefield::StringFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string Datefield::StringFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* Datefield::StringFieldFormat::getClass0()
{
    return class_();
}

