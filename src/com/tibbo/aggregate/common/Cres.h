#ifndef CresH
#define CresH


#include "resource/ResourceManager.h"
#include "util/ResourceAccessor.h"


class Cres
{
 private:
    static ResourceBundle BUNDLE;

 public:
    static ResourceBundle *get();

	void reinit(LocalePtr locale);

	AgClassPtr getClass();

	Cres();
};




#endif 
