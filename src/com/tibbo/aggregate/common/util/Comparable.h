#pragma once

#include <boost/shared_ptr.hpp>

class Comparable 
{
public:
    virtual ~Cloneable() {};

    virtual int compareTo(Comparable *obj) const = 0;
};

