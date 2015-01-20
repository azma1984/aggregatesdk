#include "FieldFormat.h"

/*
std::string FieldFormat::ELEMENT_FLAGS = "F";
std::string FieldFormat::ELEMENT_DEFAULT_VALUE = "A";
std::string FieldFormat::ELEMENT_DESCRIPTION = "D";
std::string FieldFormat::ELEMENT_HELP = "H";
std::string FieldFormat::ELEMENT_SELECTION_VALUES = "S";
std::string FieldFormat::ELEMENT_VALIDATORS = "V";
std::string FieldFormat::ELEMENT_EDITOR = "E";
std::string FieldFormat::ELEMENT_EDITOR_OPTIONS = "O";
std::string FieldFormat::ELEMENT_ICON = "I";
std::string FieldFormat::ELEMENT_GROUP = "G";
*/
template<typename T> std::string FieldFormat<T>::ELEMENT_FLAGS = "F";
template<typename T> std::string FieldFormat<T>::ELEMENT_DEFAULT_VALUE = "A";
template<typename T> std::string FieldFormat<T>::ELEMENT_DESCRIPTION = "D";
template<typename T> std::string FieldFormat<T>::ELEMENT_HELP = "H";
template<typename T> std::string FieldFormat<T>::ELEMENT_SELECTION_VALUES = "S";
template<typename T> std::string FieldFormat<T>::ELEMENT_VALIDATORS = "V";
template<typename T> std::string FieldFormat<T>::ELEMENT_EDITOR = "E";
template<typename T> std::string FieldFormat<T>::ELEMENT_EDITOR_OPTIONS = "O";
template<typename T> std::string FieldFormat<T>::ELEMENT_ICON = "I";
template<typename T> std::string FieldFormat<T>::ELEMENT_GROUP = "G";


template<typename T> FieldFormat<T>::FieldFormat(const std::string &name)
{
    this->name = name;
    nullable = false;
    optional = false;
    extendableSelectionValues = false;
    readonly = false;
    notReplicated = false;
    hidden = false;
    keyField = false;
    inlineData = false;
    advanced = false;
    defaultOverride = false;
}

//template<typename T> boost::shared_ptr<FieldFormat> FieldFormat<T>::create(const std::string &name, bool value)
//{
//    return boost::shared_ptr<FieldFormat>(new BooleanFieldFormat(name));
//}

template<typename T> boost::shared_ptr<FieldFormat<T>> FieldFormat<T>::create(const std::string &name, char type)
{
    switch (type)
    {
      /*case FieldFormat.INTEGER_FIELD:
        return new IntFieldFormat(name);

      case FieldFormat.STRING_FIELD:
        return new StringFieldFormat(name);*/

      case BOOLEAN_FIELD:
        return boost::shared_ptr<FieldFormat<bool>>(new BooleanFieldFormat(name));

      /* FieldFormat.LONG_FIELD:
        return new LongFieldFormat(name);

      case FieldFormat.FLOAT_FIELD:
        return new FloatFieldFormat(name);

      case FieldFormat.DOUBLE_FIELD:
        return new DoubleFieldFormat(name);

      case FieldFormat.DATE_FIELD:
        return new DateFieldFormat(name);

      case FieldFormat.DATATABLE_FIELD:
        return new DataTableFieldFormat(name);

      case FieldFormat.COLOR_FIELD:
        return new ColorFieldFormat(name);

      case FieldFormat.DATA_FIELD:
        return new DataFieldFormat(name);*/

      default:
        throw new AggreGateException("Unknown field type: " + type);
    }
    return NULL;
}



