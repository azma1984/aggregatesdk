//package com.tibbo.aggregate.common.util;

//TODO: проверить
// возможно можно весь класс заменить на std::list<Element> и отдельно реализовать метод getElement
/*
Не советуется наследовать std::string класс: у него невиртуальный деструктор (#6). Также это правило относится к большинству STL-типов: vector, deque, list, set.
*/
class ElementList //: public std::list<Element>// ArrayList<Element>
{
  /*
public:

	 Element getElement(std::string name) {
		for (std::list<Element>::iterator it=this->begin(); it != this->end(); ++it) {
			if ( !(*it).getName().empty() && ((*it).getName() == name)) {
				return *it;
			}
		}

		return null;
	}*/
};
