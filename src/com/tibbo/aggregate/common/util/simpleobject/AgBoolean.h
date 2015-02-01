#pragma once
#include "util/AgObject.h"
#include "util/Comparable.h"

class AgBoolean : public AgObject, public Comparable
{

public:  
    AgBoolean();
    void setValue(bool value);
    bool getValue();
    int compareTo(Comparable *obj) const { return 0; }

private:
    bool value;
};

