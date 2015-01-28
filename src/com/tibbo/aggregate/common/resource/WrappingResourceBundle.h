
#ifndef WrappingResourceBundleH
#define WrappingResourceBundleH

//  #include "Log.h"  todo
#include "resource/ResourceManager.h"
#include "util/ReflectUtils.h"
#include "util/Util.h"
#include "util/ResourceAccessor.h"

class WrappingResourceBundle : public ResourceBundle
{
 private:
    const std::string & baseName;
   // ::java::util::PropertyResourceBundle* wrapped;  todo
	std::map<std::string,std::string> replacements;
	AgObjectPtr getEnglishValue(const std::string & key);
	void init();

public:
	void addReplacement(const std::string & key, const std::string & value);

	AgObjectPtr handleGetObject(const std::string & key);

   //::java::util::Enumeration* getKeys(); todo
	bool equals(AgObjectPtr obj);
	int hashCode();

   //	WrappingResourceBundle(::java::util::PropertyResourceBundle* wrapped); todo

};
#endif
