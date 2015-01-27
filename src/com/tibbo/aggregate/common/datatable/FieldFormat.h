#ifndef _FieldFormat_H_
#define _FieldFormat_H_

#include <string>
#include <map>
#include <list>
#include <boost/shared_ptr.hpp>
#include "util/Cloneable.h"
#include "util/AgClass.h"

//#include "field/BooleanFieldFormat.h"
#include "../AggreGateException.h"
#include "../util/Cloneable.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "datatable/validator/FieldValidator.h"


/**
 * FieldFormat is a part of TableFormat that describes single DataTable field.
 */
class BooleanFieldFormat;

class FieldFormat : public Cloneable
{
private: 
   // static std::map<Class*,char> CLASS_TO_TYPE;// = new Hashtable();
    static std::map<void*, std::string> TYPE_SELECTION_VALUES;// = new LinkedHashMap();    
  
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

    static const char ADVANCED_FLAG = 'A';
    static const char NOT_REPLICATED_FLAG = 'C';
    static const char EXTENDABLE_SELECTION_VALUES_FLAG = 'E';
    static const char HIDDEN_FLAG = 'H';
    static const char INLINE_DATA_FLAG = 'I';
    static const char KEY_FIELD_FLAG = 'K';
    static const char NULLABLE_FLAG = 'N';
    static const char OPTIONAL_FLAG = 'O';
    static const char READ_ONLY_FLAG = 'R';
    static const char DEFAULT_OVERRIDE = 'D';


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
    void* defaultValue;
    std::string description;
    std::string help;
    std::string group;
    std::string editor;
    std::string editorOptions;
//    std::map<T,std::string> selectionValues; //todo class template? 
    std::list<FieldValidator<void*>*> validators;
    std::string icon;
    bool transferEncode;
    bool immutable;
    std::string cachedDefaultDescription;

protected:
    FieldFormat(const std::string &name);

public:
    static const char INTEGER_FIELD = 'I';
    static const char STRING_FIELD = 'S';
    static const char BOOLEAN_FIELD = 'B';
    static const char LONG_FIELD = 'L';
    static const char FLOAT_FIELD = 'F';
    static const char DOUBLE_FIELD = 'E';
    static const char DATE_FIELD = 'D';
    static const char DATATABLE_FIELD = 'T';
    static const char COLOR_FIELD = 'C';
    static const char DATA_FIELD = 'A';

    static const char VALIDATOR_LIMITS = 'L';
    static const char VALIDATOR_REGEX = 'R';
    static const char VALIDATOR_NON_NULL = 'N';
    static const char VALIDATOR_ID = 'I';

    static std::string EDITOR_LIST;
    static std::string EDITOR_BAR;
    static std::string EDITOR_BYTES;


    virtual char getType() = 0;
    virtual AgClass* getFieldClass() = 0;
    virtual AgClass* getFieldWrappedClass() = 0;
	//todo class template? 
   // virtual T getNotNullDefault() = 0;
   // virtual T valueFromString(std::string value, ClassicEncodingSettings &settings, bool validate) = 0;
 //   virtual std::string* valueToString(T value, ClassicEncodingSettings &settings) = 0;


	bool isHidden();
    std::string getEditor();
    static std::map<void*,std::string> getTypeSelectionValues();
    static std::map<AgClass,char> getClassToTypeMap();
    bool isKeyField();
    std::string getEditorOptions();
    bool isInlineData();
    bool isAdvanced();
    void setAdvanced(bool advanced);
    boost::shared_ptr<FieldFormat> setDescription(const std::string &description);
    boost::shared_ptr<FieldFormat> setHelp(std::string help);
//    boost::shared_ptr<FieldFormat> setSelectionValues(std::map<T,std::string> selectionValues); //todo class template? 
    boost::shared_ptr<FieldFormat> setExtendableSelectionValues(bool extendableSelectionValues);
    //boost::shared_ptr<FieldFormat> setNullable(bool nullable);
    boost::shared_ptr<FieldFormat> setOptional(bool optional);
    boost::shared_ptr<FieldFormat> setReadonly(bool readonly);
    boost::shared_ptr<FieldFormat> setNotReplicated(bool notReplicated);


//    T valueFromEncodedString(const std::string &source);
 //   T valueFromEncodedString(const std::string &source, ClassicEncodingSettings &settings, bool validate);
//    T valueFromString(const std::string &value);
//    std::string valueToString(T value);
  //  std::string valueToEncodedString(T value,ClassicEncodingSettings &settings);
    void setDefaultFromString(const std::string &value);
    void setDefaultFromString(const std::string &value, ClassicEncodingSettings &settings, bool validate);
  //  boost::shared_ptr<FieldFormat> setDefault(/*T*/void* value);



	boost::shared_ptr<FieldFormat> setHidden(bool hidden);
    boost::shared_ptr<FieldFormat> setEditor(const std::string & editor);
    boost::shared_ptr<FieldFormat> setKeyField(bool keyField);
    boost::shared_ptr<FieldFormat> setName(const std::string & name);
    boost::shared_ptr<FieldFormat> setEditorOptions(const std::string & editorOptions);
    boost::shared_ptr<FieldFormat> setInlineData(bool inlineData);
    void setSelectionValues(const std::string & source);
    boost::shared_ptr<FieldFormat> setIcon(const std::string & icon);
    std::string getIcon();
    std::string getGroup();
   // boost::shared_ptr<FieldFormat> setGroup(const std::string & group);
    bool isDefaultOverride();
    void setDefaultOverride(bool defaultOverride);
    std::string toString();
    std::string toDetailedString();


    std::string getTypeName();
    std::string getName();
    bool isNullable();
    void* getDefaultValue();
    void* getDefaultValueCopy();
    std::string getDescription();
    bool hasDescription();
    std::string getHelp();
    bool isOptional();
    bool hasSelectionValues();
    std::map<void*, std::string> getSelectionValues();
    FieldFormat* addSelectionValue(void* value,const std::string &description);
    FieldFormat* addSelectionValue(void* value);
    bool isExtendableSelectionValues();
    std::list<FieldValidator<void*>*> getValidators();
    bool isReadonly();
    bool isNotReplicated();

   // static boost::shared_ptr<FieldFormat> create(const std::string &name, bool value);
  //  static boost::shared_ptr<FieldFormat> create(const std::string &name, int value);
  //  static boost::shared_ptr<FieldFormat> create(const std::string &name, long value);
//    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type);

    static boost::shared_ptr<FieldFormat> create(const std::string &name, AgClass* valueClass);
    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type);
    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type, const std::string & description);
    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type, const std::string & description, void* defaultValue);
    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type, const std::string & description, void* defaultValue, const std::string & group);
    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type, const std::string & description, void* defaultValue, bool nullable);
    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type, const std::string & description, void* defaultValue, bool nullable, const std::string & group);
    static boost::shared_ptr<FieldFormat> create(const std::string & format, ClassicEncodingSettings &settings);
    static boost::shared_ptr<FieldFormat> create(const std::string & format, ClassicEncodingSettings &settings, bool validate);
    static boost::shared_ptr<FieldFormat> create(const std::string & format);

   // virtual Cloneable * clone() const
   // {
    //    return new FieldFormat("dsdsf");
   // }


};




#endif



