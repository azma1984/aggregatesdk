#ifndef CresH
#define CresH


#include "resource/ResourceManager.h"
#include "util/ResourceAccessor.h"


class Cres
{
 private:
	static ResourceBundlePtr BUNDLE;

 public:
	static ResourceBundlePtr get();

	void reinit(LocalePtr locale);

	AgClassPtr getClass();

	Cres();
};




#endif 
