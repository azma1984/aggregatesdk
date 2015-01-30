#pragma once
#include "util/AgObject.h"

class AgBoolean : public AgObject
{

public:  
    AgBoolean();
    void setValue(bool value);
    bool getValue();

private:
    bool value;
};

