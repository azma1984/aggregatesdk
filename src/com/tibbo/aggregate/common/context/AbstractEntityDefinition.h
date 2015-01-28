#ifndef AbstractEntityDefinitionH
#define AbstractEntityDefinitionH


#include "EntityDefinition.h"



class AbstractEntityDefinition:public EntityDefinition
{

private:
    std::string name;
    std::string description;
    std::string help;
    std::string group;
    int index;
    std::string iconId;
    AgObjectPtr owner;

public:
    std::string getName();
    void setName(const std::string &name);
    void setDescription(const std::string &description);
    void setHelp(const std::string & help);
    void setGroup(const std::string & group);
    std::string getDescription();
    std::string getHelp();
    std::string getGroup();
    int getIndex();
    void setIndex(int index);
    void setIconId(const std::string &iconId);
    std::string getIconId();
    AgObjectPtr getOwner();
    void setOwner(AgObjectPtr owner);
    std::string toString();
    std::string toDetailedString();
};
#endif
