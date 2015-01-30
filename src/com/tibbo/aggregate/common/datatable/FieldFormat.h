#pragma once

#include <string>
#include <map>
#include <list>

#include "util/Cloneable.h"
#include "util/AgClass.h"
#include "util/Pointers.h"
#include "util/AgObject.h"


class FieldFormat : public Cloneable, public AgObject
{
private: 
   // static std::map<Class*,char> CLASS_TO_TYPE;// = new Hashtable();
    //static std::map<void*, std::string> TYPE_SELECTION_VALUES;// = new LinkedHashMap();
  
    static std::string ELEMENT_FLAGS;
    static std::string ELEMENT_DEFAULT_VALUE;
    static std::string ELEMENT_DESCRIPTION;
    static std::string ELEMENT_HELP;
    static std::string ELEMENT_SELECTION_VALUES;
    static std::string ELEMENT_VALIDATORS;
    static std::string ELEMENT_EDITOR;
    static std::string ELEMENT_EDITOR_OPTIONS;
    static std::string ELEMENT_ICON;
    static std::string ELEMENT_GROUP;

    static const char ADVANCED_FLAG;
    static const char NOT_REPLICATED_FLAG;
    static const char EXTENDABLE_SELECTION_VALUES_FLAG;
    static const char HIDDEN_FLAG;
    static const char INLINE_DATA_FLAG;
    static const char KEY_FIELD_FLAG;
    static const char NULLABLE_FLAG;
    static const char OPTIONAL_FLAG;
    static const char READ_ONLY_FLAG;
    static const char DEFAULT_OVERRIDE;

    std::string name;
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
    AgObjectPtr defaultValue;
    std::string description;
    std::string help;
    std::string group;
    std::string editor;
    std::string editorOptions;
    std::map<AgObjectPtr,std::string> selectionValues;
    //std::list<FieldValidator<void*>*> validators;
    std::string icon;
    bool transferEncode;
    bool immutable;
    std::string cachedDefaultDescription;

    void createSelectionValues(const std::string &source, ClassicEncodingSettingsPtr settings);
    std::string getEncodedSelectionValues(ClassicEncodingSettingsPtr settings);
    std::string getEncodedFlags();
    //static void encAppend(StringBuffer buffer, String name, String value, ClassicEncodingSettings settings);
    std::list<std::string> getSuitableEditors();


protected:
    FieldFormat(const std::string &name);
    AgObjectPtr convertValue(AgObjectPtr value);
    FieldFormatPtr setTransferEncode(bool transferEncode);

public:
    static const char INTEGER_FIELD;
    static const char STRING_FIELD;
    static const char BOOLEAN_FIELD;
    static const char LONG_FIELD;
    static const char FLOAT_FIELD;
    static const char DOUBLE_FIELD;
    static const char DATE_FIELD;
    static const char DATATABLE_FIELD;
    static const char COLOR_FIELD;
    static const char DATA_FIELD;

    static const char VALIDATOR_LIMITS;
    static const char VALIDATOR_REGEX;
    static const char VALIDATOR_NON_NULL;
    static const char VALIDATOR_ID;

    static std::string EDITOR_LIST;
    static std::string EDITOR_BAR;
    static std::string EDITOR_BYTES;


    virtual char getType() = 0;
    virtual AgClassPtr getFieldClass() = 0;
    virtual AgClassPtr getFieldWrappedClass() = 0;
    virtual AgObjectPtr getNotNullDefault() = 0;
    virtual AgObjectPtr valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate) = 0;
    virtual std::string valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings) = 0;

    AgObjectPtr valueFromEncodedString(const std::string &source);
    AgObjectPtr valueFromEncodedString(const std::string &source, ClassicEncodingSettingsPtr settings, bool validate);
    AgObjectPtr valueFromString(const std::string &value);
    std::string valueToString(AgObjectPtr value);
    std::string valueToEncodedString(AgObjectPtr value,ClassicEncodingSettingsPtr settings);
    void setDefaultFromString(const std::string &value);
    void setDefaultFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate);
    FieldFormatPtr setDefault(AgObjectPtr value);

    std::string getEncodedValidators(ClassicEncodingSettingsPtr settings);
    std::string encode();
    std::string encode(bool useVisibleSeparators);
    std::string encode(ClassicEncodingSettingsPtr settings);

    bool extend(FieldFormatPtr other);
    std::string extendMessage(FieldFormatPtr other);
    FieldFormatPtr addValidator(FieldValidatorPtr validator);
    void setValidators(std::list<FieldValidatorPtr> validators);
    void createValidators(const std::string& source, ClassicEncodingSettingsPtr settings);
    AgObjectPtr checkAndConvertValue(AgObjectPtr value, bool validate);

    std::string getTypeName();
    std::string getName();
    bool isNullable();
    AgObjectPtr getDefaultValue();
    AgObjectPtr getDefaultValueCopy();
    std::string getDescription();
    bool hasDescription();
    std::string getHelp();
    bool isOptional();
    bool hasSelectionValues();
    std::map<AgObjectPtr, std::string> getSelectionValues();
    FieldFormatPtr addSelectionValue(AgObjectPtr value,const std::string &description);
    FieldFormatPtr addSelectionValue(AgObjectPtr value);
    bool isExtendableSelectionValues();
    std::list<FieldValidatorPtr> getValidators();
    bool isReadonly();
    bool isNotReplicated();
    bool isTransferEncode();

    bool isHidden();
    std::string getEditor();
    static std::map<AgObjectPtr,std::string> getTypeSelectionValues();
    static std::map<AgClassPtr,char> getClassToTypeMap();
    bool isKeyField();
    std::string getEditorOptions();
    bool isInlineData();
    bool isAdvanced();
    void setAdvanced(bool advanced);
    FieldFormatPtr setDescription(const std::string &description);
    FieldFormatPtr setHelp(std::string help);
    FieldFormatPtr setSelectionValues(std::map<AgObjectPtr,std::string> selectionValues);
    FieldFormatPtr setExtendableSelectionValues(bool extendableSelectionValues);
    FieldFormatPtr setNullable(bool nullable);
    FieldFormatPtr setOptional(bool optional);
    FieldFormatPtr setReadonly(bool readonly);
    FieldFormatPtr setNotReplicated(bool notReplicated);

    FieldFormatPtr setHidden(bool hidden);
    FieldFormatPtr setEditor(const std::string & editor);
    FieldFormatPtr setKeyField(bool keyField);
    FieldFormatPtr setName(const std::string & name);
    FieldFormatPtr setEditorOptions(const std::string & editorOptions);
    FieldFormatPtr setInlineData(bool inlineData);

    void setSelectionValues(const std::string & source);
    FieldFormatPtr setIcon(const std::string & icon);
    std::string getIcon();
    std::string getGroup();
    FieldFormatPtr setGroup(const std::string & group);
    bool isDefaultOverride();
    void setDefaultOverride(bool defaultOverride);
    std::string toString();
    std::string toDetailedString();

    TableFormatPtr wrap();
    TableFormatPtr wrapSimple();

    virtual int hashCode();

    static FieldFormatPtr create(const std::string &name, AgClassPtr valueClass);
    static FieldFormatPtr create(const std::string &name, char type);
    static FieldFormatPtr create(const std::string &name, char type, const std::string & description);
    static FieldFormatPtr create(const std::string &name, char type, const std::string & description, AgObjectPtr defaultValue);
    static FieldFormatPtr create(const std::string &name, char type, const std::string & description, AgObjectPtr defaultValue, const std::string & group);
    static FieldFormatPtr create(const std::string &name, char type, const std::string & description, AgObjectPtr defaultValue, bool nullable);
    static FieldFormatPtr create(const std::string &name, char type, const std::string & description, AgObjectPtr defaultValue, bool nullable, const std::string & group);
    static FieldFormatPtr create(const std::string & format, ClassicEncodingSettingsPtr settings);
    static FieldFormatPtr create(const std::string & format, ClassicEncodingSettingsPtr settings, bool validate);
    static FieldFormatPtr create(const std::string & format);

   // virtual Cloneable * clone() const
   // {
    //    return new FieldFormat("dsdsf");
   // }


};


