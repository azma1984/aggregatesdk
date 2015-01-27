#include "FieldFormat.h"

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

FieldFormat::FieldFormat(const std::string &name)
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
/*
boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, bool value)
{
    return boost::shared_ptr<FieldFormat>(new BooleanFieldFormat(name));
}
*/

boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, char type)
{
  //  switch (type)
   // {
      /*case FieldFormat.INTEGER_FIELD:
        return new IntFieldFormat(name);
      case FieldFormat.STRING_FIELD:
        return new StringFieldFormat(name);*/

     // case BOOLEAN_FIELD:
     //   return boost::shared_ptr<FieldFormat>(new BooleanFieldFormat(name));

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

      //default:
     //   throw new AggreGateException("Unknown field type: " + type);
   // }
    return NULL;
}


/*template<typename T> FieldFormat<T> FieldFormat<T>::create(const std::string &name, char type)
{
    switch (type)
    {
      case FieldFormat.INTEGER_FIELD:
        return new IntFieldFormat(name);
      case FieldFormat.STRING_FIELD:
        return new StringFieldFormat(name);
      case FieldFormat.BOOLEAN_FIELD:
        return new BooleanFieldFormat(name);
      case FieldFormat.LONG_FIELD:
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
        return new DataFieldFormat(name);
      default:
        throw new IllegalArgumentException("Unknown field type: " + type);
    }
}*/
 
boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, AgClass* valueClass)
{
//    char type = CLASS_TO_TYPE[valueClass];
    
 //   if (type == 0)
 //   {
    //  throw new IllegalArgumentException("Unknown field class: " + valueClass.getName());
  //  }
    
 //   return create(name, type);

	return 0;
}

boost::shared_ptr<FieldFormat> FieldFormat::setDescription(const std::string &description)
{
	if(immutable) 
	{
     // throw new ::java::lang::IllegalStateException(u"Immutable");
    }
    this->description = description;
    return boost::shared_ptr<FieldFormat>(this);
}

boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, char type, const std::string & description)
{
    boost::shared_ptr<FieldFormat> ff = create(name, type);
    ff->setDescription(description);
    return ff;
}

 boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue)
{
    return create(name, type, description, defaultValue, false, 0);
}

 boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue, const std::string & group)
{
    return create(name, type, description, defaultValue, false, group);
}

boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue, bool nullable)
{
    return create(name, type, description, defaultValue, nullable, 0);
}


boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &name, char type, const std::string & description, void* defaultValue, bool nullable, const std::string & group)
{
    boost::shared_ptr<FieldFormat> ff = create(name, type, description);
//    ff->setNullable(nullable);
  //  ff->setDefault(defaultValue);
 //   ff->setGroup(group);
    return ff;
}



boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &format, ClassicEncodingSettings &settings)
  {
   return create(format, settings, true);
  }


boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &format, ClassicEncodingSettings &settings, bool validate)
{
	/*
    ElementList *els = StringUtils::elements(format, settings.isUseVisibleSeparators());
    std::string name;
    char type;
  //  try 
	//{
      name = els->get(0->getValue();
      type = els->get(1->getValue(->charAt(0);
  //  } 
	//catch (::java::lang::IndexOutOfBoundsException* ex1) 
	//{
  //      throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(ex1->getMessage()->append(u", format was '"_j)
  //          ->append(format)
  //          ->append(u"'"_j->toString(), ex1);
  //  }
    boost::shared_ptr<FieldFormat> ff = create(name, type);
    Element *el = els->getElement(ELEMENT_FLAGS());
    if(el != 0) {
        auto flags = el->getValue();
        ff->setNullable(flags->indexOf(NULLABLE_FLAG) != -1 ? true : false);
        ff->setOptional(flags->indexOf(OPTIONAL_FLAG) != -1 ? true : false);
        ff->setExtendableSelectionValues(flags->indexOf(EXTENDABLE_SELECTION_VALUES_FLAG) != -1 ? true : false);
        ff->setReadonly(flags->indexOf(READ_ONLY_FLAG) != -1 ? true : false);
        ff->setNotReplicated(flags->indexOf(NOT_REPLICATED_FLAG) != -1 ? true : false);
        ff->setHidden(flags->indexOf(HIDDEN_FLAG) != -1 ? true : false);
        ff->setKeyField(flags->indexOf(KEY_FIELD_FLAG) != -1 ? true : false);
        ff->setInlineData(flags->indexOf(INLINE_DATA_FLAG) != -1 ? true : false);
        ff->setAdvanced(flags->indexOf(ADVANCED_FLAG) != -1 ? true : false);
        ff->setDefaultOverride(flags->indexOf(DEFAULT_OVERRIDE) != -1 ? true : false);
    }
    el = els->getElement(ELEMENT_DEFAULT_VALUE());
    if(el != 0) {
        ff->setDefaultFromString(el->getValue(), settings, validate);
    }
    el = els->getElement(ELEMENT_DESCRIPTION());
    if(el != 0) {
        ff->setDescription(DataTableUtils::transferDecode(el->getValue()));
    }
    el = els->getElement(ELEMENT_HELP());
    if(el != 0) {
        ff->setHelp(DataTableUtils::transferDecode(el->getValue()));
    }
    el = els->getElement(ELEMENT_SELECTION_VALUES());
    if(el != 0) {
        ff->createSelectionValues(el->getValue(), settings);
    }
    el = els->getElement(ELEMENT_VALIDATORS());
    if(el != 0) {
        ff->createValidators(el->getValue(), settings);
    }
    el = els->getElement(ELEMENT_EDITOR());
    if(el != 0) {
        ff->setEditor(DataTableUtils::transferDecode(el->getValue()));
    }
    el = els->getElement(ELEMENT_EDITOR_OPTIONS());
    if(el != 0) {
        ff->setEditorOptions(DataTableUtils::transferDecode(el->getValue()));
    }
    el = els->getElement(ELEMENT_ICON());
    if(el != 0) {
        ff->setIcon(DataTableUtils::transferDecode(el->getValue()));
    }
    el = els->getElement(ELEMENT_GROUP());
    if(el != 0) {
        ff->setGroup(DataTableUtils::transferDecode(el->getValue()));
    }


    return ff;
	*/
	return 0;
}


 /**
   * Decodes <code>FieldFormat</code> from string.
   */
boost::shared_ptr<FieldFormat> FieldFormat::create(const std::string &format)
{
 return create(format, *(new ClassicEncodingSettings(true)), true);
}


std::list<FieldValidator<void*>*> FieldFormat::getValidators()
{
 return validators;
   // return immutable ? ::java::util::Collections::unmodifiableList(validators) : validators;
}
