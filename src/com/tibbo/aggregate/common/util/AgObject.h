#ifndef AgObjectH
#define AgObjectH

#include "util/AgClass.h"

class AgObject
{
 private:
	AgClass *Class;
 public:
	AgObject()
	{
	 Class = new AgClass;
	};
	virtual ~AgObject()
	{
	 delete Class;
	}

	AgClass *getClass()
	{
	 return Class;
	}



};

#endif


