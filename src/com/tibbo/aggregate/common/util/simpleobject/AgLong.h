#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgLong : public AgObject, public Comparable
{
public:
    AgLong(long val);
    int compareTo(Comparable *obj) const { return 0; }
    long value;
};

