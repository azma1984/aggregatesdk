// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/StringIdentifier.java
#include "StringIdentifier.h"

//����� ��� ������ �� ��������� ���������������

StringIdentifier::StringIdentifier()
{

}
StringIdentifier::StringIdentifier(std::string id)
{
  //����������� ��������������

 //�������� �� ������ ������
  if (id.empty() == true)
  {
  //���������� ���� �� �������� ��� ��������!

 //  std::invalid_argument;
  }

  this->id = id;
}



std::string StringIdentifier::getId()
{
	return id;
}

bool StringIdentifier::equals(void* obj)
{
/*
 **************************************************
 *������� ���������� ������������� (��� ������)
 *�������� ������� � ��������������� ������� obj
 * ���������� ������, ���� �������������� �����
 * ���������� ����, ���� ������� ������ ������� ����
 *��� �������������� �� �����
 ****************************************************
 */
	if((StringIdentifier*)obj == NULL)
	{
	  return false;
	}

	StringIdentifier *sid =  (StringIdentifier*)obj;

   //��������� �������� ��������
	return id.empty() == true ? sid->id.empty() == true : id.compare(sid->id.c_str());
}

int StringIdentifier::hashCode()
{
/*
 **************************************************
 *������� ���������� ���������� ����� ������� � ������
 * ���� ������������� �� ������ , �� ���������� �����
 *������� StringIdentifier, ����� ����� ��������������
 ****************************************************
 */
	return id.empty() == true  ? (int)this : (int)&id;
}

std::string StringIdentifier::toString()
{
	return id.empty() == true  ? StringIdentifier::toString() : id;
}


