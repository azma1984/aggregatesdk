// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ResourceAccessor.java

#ifndef ResourceAccessorH
#define ResourceAccessorH

#include <string>
#include "Class.h"
//Strings depending on language (localization)



//todo - Class stub!
class Locale
{
 private:

 public:

};


//it is necessary for internationalization of the program
//todo - Class stub!
class ResourceBundle
{
 private:

 public:
  std::string getString(const std::string &str)
  {
   return str;
  }

};


class ResourceAccessor
{
// private:
 //   static const std::string RESOURCE_PACKAGE_NAME = "res";

 public:
   static ResourceBundle* fetch(Class* clazz, Locale* locale)
	{
     return 0;
	}
	
		// static ResourceBundle* fetch(Class* clazz, Locale* locale, ClassLoader* classLoader);
 //   static std::string  getBundleName(::java::lang::Class* clazz);

};
#endif 