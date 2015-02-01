#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgString : public AgObject, public Comparable
{
public:
    AgString(const std::string & str);
    int compareTo(Comparable *obj) const { return 0; }
    std::string value;
};

