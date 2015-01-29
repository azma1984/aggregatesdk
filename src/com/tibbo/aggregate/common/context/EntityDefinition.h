#ifndef EntityDefinitionH
#define EntityDefinitionH

#include <string>
#include "util/pointers.h"

class EntityDefinition
{
public:
	virtual std::string getName()=0;
	virtual std::string getDescription()=0;
	virtual std::string getHelp()=0;
	virtual std::string getGroup()=0;
	virtual int getIndex()=0;
	virtual std::string getIconId()=0;
	virtual std::string toDetailedString()=0;
	virtual AgObjectPtr getOwner()=0;
};


#endif
