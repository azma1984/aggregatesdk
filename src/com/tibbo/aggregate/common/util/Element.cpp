#include "Element.h"

   
Element::Element(std::string name, std::string value) :
	name(name), value(value)
{    
}
  
std::string Element::getName()
{
    return name;
}
  
std::string Element::getValue()
{
    return value;
}
  
std::string Element::encode(bool useVisibleSeparators)
{
    //TODO: DataTableUtils
    char elStart = 'n';//useVisibleSeparators ? DataTableUtils::ELEMENT_VISIBLE_START : DataTableUtils::ELEMENT_START;
    char elEnd = 'n';//useVisibleSeparators ? DataTableUtils::ELEMENT_VISIBLE_END : DataTableUtils::ELEMENT_END;
    char elNameValSep = 'n';//useVisibleSeparators ? DataTableUtils::ELEMENT_VISIBLE_NAME_VALUE_SEPARATOR : DataTableUtils::ELEMENT_NAME_VALUE_SEPARATOR;

    //TODO: разнести конструкцию
    return elStart + (name.length()>0 ? name + elNameValSep : "") + value + elEnd;
}
