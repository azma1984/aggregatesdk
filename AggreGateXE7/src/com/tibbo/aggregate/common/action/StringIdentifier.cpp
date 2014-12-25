// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/StringIdentifier.java
#include "StringIdentifier.h"

//Класс для работы со строковым идентификатором

StringIdentifier::StringIdentifier()
{

}
StringIdentifier::StringIdentifier(std::string id)
{
  //Конструктор идентификатора

 //Проверка на пустую строку
  if (id.empty() == true)
  {
  //Исключение пока не придумал как выдавать!

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
 *Функция сравнивает идентификатор (тип строка)
 *текущего объекта с идентификатором объекта obj
 * Возвращает истину, если идентификаторы равны
 * Возвращает ложь, если передан объект другого типа
 *или идентификаторы не равны
 ****************************************************
 */
	if((StringIdentifier*)obj == NULL)
	{
	  return false;
	}

	StringIdentifier *sid =  (StringIdentifier*)obj;

   //Тернарная условная операция
	return id.empty() == true ? sid->id.empty() == true : id.compare(sid->id.c_str());
}

int StringIdentifier::hashCode()
{
/*
 **************************************************
 *Функция возвращает уникальный адрес объекта в памяти
 * Если идентификатор не создан , то возвращает адрес
 *объекта StringIdentifier, иначе адрес идентификатора
 ****************************************************
 */
	return id.empty() == true  ? (int)this : (int)&id;
}

std::string StringIdentifier::toString()
{
	return id.empty() == true  ? StringIdentifier::toString() : id;
}


