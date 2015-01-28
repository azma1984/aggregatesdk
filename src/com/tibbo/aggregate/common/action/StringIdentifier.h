
#ifndef StringIdentifierH
#define StringIdentifierH

#include <string>

class StringIdentifier
{
  private:
   std::string id;

  public:
   StringIdentifier(const std::string &id);

   std::string getId();

   bool equals(AgObjectPtr obj);

  //todo - Whether this function is necessary?
   int hashCode();

   std::string toString();
};

#endif
