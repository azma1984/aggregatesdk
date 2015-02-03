#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgColor : public AgObject, public Comparable
{
public:  
    AgColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    AgColor(int value);
    int compareTo(Comparable *obj) const { return 0; }

    unsigned char getRed() {
        return r;
    }

    unsigned char getGreen() {
        return g;
    }

    unsigned char getBlue() {
        return b;
    }

    unsigned char getAlpha() {
        return a;
    }

    unsigned char r, g, b, a;
};

