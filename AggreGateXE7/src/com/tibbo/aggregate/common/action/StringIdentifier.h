// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/StringIdentifier.java

#ifndef StringIdentifierH
#define StringIdentifierH

//Используется библиотека Dinkumware!
#include <string>

//Класс для работы со строковым идентификатором
class StringIdentifier
{
  private:
   std::string id; //идентификатор

  public:
   StringIdentifier(const std::string &id);

   std::string getId();

   bool equals(void* obj);

  //todo - Whether this function is necessary?
   int hashCode();

   std::string toString();
};

#endif
