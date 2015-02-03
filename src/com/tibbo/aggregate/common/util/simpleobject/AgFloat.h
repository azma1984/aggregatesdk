#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgFloat : public AgObject, public Comparable
{
public:
    AgFloat(float val);
    int compareTo(Comparable *obj) const { return 0; }
    float value;
};

