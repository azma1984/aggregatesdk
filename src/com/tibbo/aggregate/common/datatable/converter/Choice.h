#pragma once
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/AgObject.h"

class Choice
{
private:
    static const std::string WHITESPACE_PATTERN;
    std::string name;
    std::string description;
    boost::shared_ptr<AgObject> object;

public:
    Choice(const std::string &description, boost::shared_ptr<AgObject> object);
    Choice(const std::string &name, const std::string &description, boost::shared_ptr<AgObject> object);

    std::string getName();
    std::string getDescription();
    boost::shared_ptr<AgObject> getObject();
};
