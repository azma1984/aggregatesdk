#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgColor : public AgObject, public Comparable
{
public:  
    AgColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    int compareTo(Comparable *obj) const { return 0; }

    unsigned char r, g, b, a;
};

