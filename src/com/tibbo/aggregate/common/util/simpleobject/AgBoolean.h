#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgBoolean : public AgObject, public Comparable
{
public:  
    AgBoolean(bool value);
    int compareTo(Comparable *obj) const { return 0; }

    bool value;
};

