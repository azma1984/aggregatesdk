#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgDouble : public AgObject, public Comparable
{
public:
    AgDouble(double val);
    int compareTo(Comparable *obj) const { return 0; }
    double value;
};

