#ifndef _FieldFormat_H_
#define _FieldFormat_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "../util/Cloneable.h"
//#include "field/BooleanFieldFormat.h"
#include "../AggreGateException.h"

/**
 * <code>FieldFormat</code> is a part of <code>TableFormat</code> that describes single <code>DataTable</code> field.
 */
template <typename T> class FieldFormat
{
private:
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

  //Map<T, String> selectionValues;
  // List<FieldValidator> validators = new LinkedList<FieldValidator>();

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

private:
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
    T    defaultValue;
    std::string description;
    std::string help;
    std::string group;
    std::string editor;
    std::string editorOptions;

    std::string icon;

protected:
    FieldFormat(const std::string &name);


public:
    static boost::shared_ptr<FieldFormat> create(const std::string &name, char type);

};




#endif



