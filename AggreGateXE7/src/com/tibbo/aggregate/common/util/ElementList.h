package com.tibbo.aggregate.common.util;

//TODO: ���������
// �������� ����� ���� ����� �������� �� std::list<Element> � �������� ����������� ����� getElement
/*
�� ���������� ����������� std::string �����: � ���� ������������� ���������� (#6). ����� ��� ������� ��������� � ����������� STL-�����: vector, deque, list, set.
*/
class ElementList : public std::list<Element>// ArrayList<Element>
{
public:

	 Element getElement(std::string name) {
		for (std::list<Element>::iterator it=this->begin(); it != this->end(); ++it) {
			if ( !(*it).getName().empty() && ((*it).getName() == name)) {
				return *it;
			}
		}

		return null;
	}
}
