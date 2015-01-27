// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/Cres.java

#ifndef CresH
#define CresH


#include "resource/ResourceManager.h"
#include "util/ResourceAccessor.h"










class Cres
{
 private:
	static ResourceBundle* BUNDLE; 

 public:
	static ResourceBundle* get();
	
	void reinit(Locale* locale);

    AgClass *getClass();

	Cres();
};




#endif 
