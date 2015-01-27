#include "datatable/converter/Choice.h"
#include "util/SString.h"

const std::string Choice::WHITESPACE_PATTERN = "\\W";

Choice::Choice(const std::string &description, boost::shared_ptr<AgObject> object)
{
    SString str(description);
    SString strLowerCase(str.toLowerCase());
    strLowerCase.replace(WHITESPACE_PATTERN, "");

    this->name = strLowerCase;
    this->description = description;
    this->object = object;
}

Choice::Choice(const std::string &name, const std::string &description, boost::shared_ptr<AgObject> object)
{
    this->name = name;
    this->description = description;
    this->object = object;
}

std::string Choice::getName()
{
    return name;
}

std::string Choice::getDescription()
{
    return description;
}

boost::shared_ptr<AgObject> Choice::getObject()
{
    return object;
}




