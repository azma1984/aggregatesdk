#pragma once
#include "util/AgObject.h"

class AgString : public AgObject
{
public:
    AgString(const std::string & str);
    std::string value;
};

