#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgInteger : public AgObject, public Comparable
{
public:
    AgInteger(int val);
    int compareTo(Comparable *obj) const { return 0; }
    int value;
};

