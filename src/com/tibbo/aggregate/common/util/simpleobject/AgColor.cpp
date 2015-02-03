#include "util/simpleobject/AgColor.h"


AgColor::AgColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

AgColor::AgColor(int value)
{
    //todo
    assert(0);
}

