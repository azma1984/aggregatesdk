// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/StringIdentifier.java
#include "StringIdentifier.h"


StringIdentifier::StringIdentifier(const std::string &id)
{
  this->id = id;
}

std::string StringIdentifier::getId()
{
	return id;
}

bool StringIdentifier::equals(StringIdentifier* obj)
{
  //StringIdentifier *sid =  (StringIdentifier*)obj; todo

 // return id.compare(sid->id.c_str());
 return true;
}

//todo - Whether this function is necessary?
int StringIdentifier::hashCode()
{

  return (int)&id;
}

std::string StringIdentifier::toString()
{
  return id.empty() == true  ? StringIdentifier::toString() : id;
}


