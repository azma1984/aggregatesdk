#ifndef _ELEMENT_H_
#define _ELEMENT_H_

#include "../datatable/DataTableUtils.h"

#include <string>

class Element
{

public:  
	Element(std::string name, std::string value);

	std::string Element::getName();
	std::string Element::getValue();
	std::string encode(bool useVisibleSeparators);
  
private:
	std::string name;
	std::string value;
};

#endif
