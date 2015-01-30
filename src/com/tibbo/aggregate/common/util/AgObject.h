#ifndef AgObjectH
#define AgObjectH

#include "util/AgClass.h"

class AgObject
{
 public:
	AgObject()
	{

    }

	virtual ~AgObject()
	{

    }

    virtual AgClass *getClass()
	{
        return 0;
	}

    virtual int hashCode()
    {
        return 0;
    }

    virtual std::string toString()
    {
        return std::string();
    }



};

#endif


