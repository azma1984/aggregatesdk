#pragma once

#include "util/Interface.h"
#include "action/ActionManager.h"

class CallerData
{
    virtual ActionManager* getActionManager() = 0;
};

