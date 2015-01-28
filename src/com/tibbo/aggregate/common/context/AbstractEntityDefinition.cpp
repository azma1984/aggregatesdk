// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractEntityDefinition.java
#include "context/AbstractEntityDefinition.h"



std::string AbstractEntityDefinition::getName()
{
    return name;
}

void AbstractEntityDefinition::setName(const std::string & name)
{
    this->name = name;
}

void AbstractEntityDefinition::setDescription(const std::string & description)
{
    this->description = description;
}

void AbstractEntityDefinition::setHelp(const std::string & help)
{
    this->help = help;
}

void AbstractEntityDefinition::setGroup(const std::string & group)
{
    this->group = group;
}

std::string AbstractEntityDefinition::getDescription()
{
    return description;
}

std::string AbstractEntityDefinition::getHelp()
{
    return help;
}

std::string AbstractEntityDefinition::getGroup()
{
    return group;
}

int AbstractEntityDefinition::getIndex()
{
    return index;
}

void AbstractEntityDefinition::setIndex(int index)
{
    this->index = index;
}

void AbstractEntityDefinition::setIconId(const std::string & iconId)
{
    this->iconId = iconId;
}

std::string AbstractEntityDefinition::getIconId()
{
    return iconId;
}

AgObjectPtr AbstractEntityDefinition::getOwner()
{
    return owner;
}

void AbstractEntityDefinition::setOwner(AgObjectPtr owner)
{
    this->owner = owner;
}

std::string AbstractEntityDefinition::toString()
{
  return description.empty() == false ? description : name;
  
}

std::string AbstractEntityDefinition::toDetailedString()
{
   return description.empty() == false ? description + " (" + name + ")" : name;
}




