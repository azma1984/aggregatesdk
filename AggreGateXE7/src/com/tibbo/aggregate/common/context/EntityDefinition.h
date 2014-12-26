// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EntityDefinition.java

#ifndef EntityDefinitionH
#define EntityDefinitionH

class EntityDefinition
{
	virtual std::string getName();
	virtual std::string getDescription();
	virtual std::string getHelp();
	virtual std::string getGroup();
	virtual int getIndex();
	virtual std::string getIconId();
	virtual std::string toDetailedString();
	virtual void* getOwner();
};


#endif
