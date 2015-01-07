// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/FieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"
#include <com/tibbo/aggregate/common/util/PublicCloneable.h"



class com::tibbo::aggregate::common::datatable::FieldFormat
    
    , public ::java::lang::Cloneable
    , public ::com::tibbo::aggregate::common::util::PublicCloneable
{

public:
    typedef void super;

private:
    static std::map CLASS_TO_TYPE_;
    static std::map TYPE_SELECTION_VALUES_;

public:
    static const char16_t INTEGER_FIELD { u'I' };
    static const char16_t STRING_FIELD { u'S' };
    static const char16_t BOOLEAN_FIELD { u'B' };
    static const char16_t LONG_FIELD { u'L' };
    static const char16_t FLOAT_FIELD { u'F' };
    static const char16_t DOUBLE_FIELD { u'E' };
    static const char16_t DATE_FIELD { u'D' };
    static const char16_t DATATABLE_FIELD { u'T' };
    static const char16_t COLOR_FIELD { u'C' };
    static const char16_t DATA_FIELD { u'A' };

private:
    static const std::string ELEMENT_FLAGS_;
    static const std::string ELEMENT_DEFAULT_VALUE_;
    static const std::string ELEMENT_DESCRIPTION_;
    static const std::string ELEMENT_HELP_;
    static const std::string ELEMENT_SELECTION_VALUES_;
    static const std::string ELEMENT_VALIDATORS_;
    static const std::string ELEMENT_EDITOR_;
    static const std::string ELEMENT_EDITOR_OPTIONS_;
    static const std::string ELEMENT_ICON_;
    static const std::string ELEMENT_GROUP_;
    static const char16_t ADVANCED_FLAG { u'A' };
    static const char16_t NOT_REPLICATED_FLAG { u'C' };
    static const char16_t EXTENDABLE_SELECTION_VALUES_FLAG { u'E' };
    static const char16_t HIDDEN_FLAG { u'H' };
    static const char16_t INLINE_DATA_FLAG { u'I' };
    static const char16_t KEY_FIELD_FLAG { u'K' };
    static const char16_t NULLABLE_FLAG { u'N' };
    static const char16_t OPTIONAL_FLAG { u'O' };
    static const char16_t READ_ONLY_FLAG { u'R' };
    static const char16_t DEFAULT_OVERRIDE { u'D' };

public:
    static const char16_t VALIDATOR_LIMITS { u'L' };
    static const char16_t VALIDATOR_REGEX { u'R' };
    static const char16_t VALIDATOR_NON_NULL { u'N' };
    static const char16_t VALIDATOR_ID { u'I' };

private:
    std::string* name;
    bool nullable;
    bool optional;
    bool extendableSelectionValues;
    bool readonly;
    bool notReplicated;
    bool hidden;
    bool keyField;
    bool inlineData;
    bool advanced;
    bool defaultOverride;
    void* defaultValue;
    std::string* description;
    std::string* help;
    std::string* group;
    std::string* editor;
    std::string* editorOptions;
    std::map selectionValues;
    std::list  validators;
    std::string* icon;
    bool transferEncode;
    bool immutable;
    std::string* cachedDefaultDescription;
    static const std::string EDITOR_LIST_;
    static const std::string EDITOR_BAR_;
    static const std::string EDITOR_BYTES_;

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    void* getNotNullDefault();
    void* valueFromString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    std::string* valueToString(void* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
protected:
    void ctor(std::string* name);

public:
    static /* <S> */FieldFormat* create(std::string* name, ::java::lang::Class* valueClass);
    static FieldFormat* create(std::string* name, char16_t type);
    static /* <S> */FieldFormat* create(std::string* name, char16_t type, std::string* description);
    static /* <S> */FieldFormat* create(std::string* name, char16_t type, std::string* description, void* defaultValue);
    static /* <S> */FieldFormat* create(std::string* name, char16_t type, std::string* description, void* defaultValue, std::string* group);
    static /* <S> */FieldFormat* create(std::string* name, char16_t type, std::string* description, void* defaultValue, bool nullable);
    static /* <S> */FieldFormat* create(std::string* name, char16_t type, std::string* description, void* defaultValue, bool nullable, std::string* group);
    static /* <S> */FieldFormat* create(std::string* format, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    static /* <S> */FieldFormat* create(std::string* format, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    static /* <S> */FieldFormat* create(std::string* format);

private:
    void createSelectionValues(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public:
    void* valueFromEncodedString(std::string* source);
    void* valueFromEncodedString(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    void* valueFromString(std::string* value);
    std::string* valueToString(void* value);
    std::string* valueToEncodedString(void* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void setDefaultFromString(std::string* value);
    void setDefaultFromString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    FieldFormat* setDefault(void* value);

private:
    std::string* getEncodedSelectionValues(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public:
    std::string* getEncodedValidators(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

private:
    std::string* getEncodedFlags();
    static void encAppend(std::stringBuffer* buffer, std::string* name, std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public:
    std::string* encode();
    std::string* encode(bool useVisibleSeparators);
    std::string* encode(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    bool extend(FieldFormat* other);
    std::string* extendMessage(FieldFormat* other);
    FieldFormat* addValidator(::com::tibbo::aggregate::common::datatable::validator::FieldValidator* validator);
    void setValidators(::java::util::Collection* validators);
    void createValidators(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void* checkAndConvertValue(void* value, bool validate) /* throws(ValidationException) */;

public: /* protected */
    void* convertValue(void* value) /* throws(ValidationException) */;

public:
    std::string* getTypeName();
    std::string* getName();
    bool isNullable();
    void* getDefaultValue();
    void* getDefaultValueCopy();
    std::string* getDescription();
    bool hasDescription();
    std::string* getHelp();
    bool isOptional();
    bool hasSelectionValues();
    std::map getSelectionValues();
    FieldFormat* addSelectionValue(void* value, std::string* description);
    FieldFormat* addSelectionValue(void* value);
    bool isExtendableSelectionValues();
    std::list  getValidators();
    bool isReadonly();
    bool isNotReplicated();

public: /* protected */
    bool isTransferEncode();

public:
    bool isHidden();
    std::string* getEditor();
    static std::map getTypeSelectionValues();
    static std::map getClassToTypeMap();
    bool isKeyField();
    std::string* getEditorOptions();
    bool isInlineData();
    bool isAdvanced();
    void setAdvanced(bool advanced);
    FieldFormat* setDescription(std::string* description);
    FieldFormat* setHelp(std::string* help);
    FieldFormat* setSelectionValues(std::map selectionValues);
    FieldFormat* setExtendableSelectionValues(bool extendableSelectionValues);
    FieldFormat* setNullable(bool nullable);
    FieldFormat* setOptional(bool optional);
    FieldFormat* setReadonly(bool readonly);
    FieldFormat* setNotReplicated(bool notReplicated);

public: /* protected */
    FieldFormat* setTransferEncode(bool transferEncode);

public:
    FieldFormat* setHidden(bool hidden);
    FieldFormat* setEditor(std::string* editor);
    FieldFormat* setKeyField(bool keyField);
    FieldFormat* setName(std::string* name);
    FieldFormat* setEditorOptions(std::string* editorOptions);
    FieldFormat* setInlineData(bool inlineData);
    void setSelectionValues(std::string* source) /* throws(DataTableException) */;
    FieldFormat* setIcon(std::string* icon);
    std::string* getIcon();
    std::string* getGroup();
    FieldFormat* setGroup(std::string* group);
    bool isDefaultOverride();
    void setDefaultOverride(bool defaultOverride);
    std::string* toString();
    std::string* toDetailedString();

public: /* protected */
    std::list  getSuitableEditors();

public:
    TableFormat* wrap();
    TableFormat* wrapSimple();
    int hashCode();
    bool equals(void* obj);
    FieldFormat* clone();

public: /* package */
    void makeImmutable();

    // Generated

public: /* protected */
    FieldFormat(std::string* name);
protected:
    FieldFormat(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();
    static std::map& CLASS_TO_TYPE();
    static std::map& TYPE_SELECTION_VALUES();
    static const std::string& ELEMENT_FLAGS();
    static const std::string& ELEMENT_DEFAULT_VALUE();
    static const std::string& ELEMENT_DESCRIPTION();
    static const std::string& ELEMENT_HELP();
    static const std::string& ELEMENT_SELECTION_VALUES();
    static const std::string& ELEMENT_VALIDATORS();
    static const std::string& ELEMENT_EDITOR();
    static const std::string& ELEMENT_EDITOR_OPTIONS();
    static const std::string& ELEMENT_ICON();
    static const std::string& ELEMENT_GROUP();

public:
    static const std::string& EDITOR_LIST();
    static const std::string& EDITOR_BAR();
    static const std::string& EDITOR_BYTES();

private:
    ::java::lang::Class* getClass0();
};
