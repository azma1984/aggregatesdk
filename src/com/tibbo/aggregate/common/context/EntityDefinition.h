// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EntityDefinition.java

#ifndef EntityDefinitionH
#define EntityDefinitionH

#include <string>
#include <util/Pointers.h>

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
