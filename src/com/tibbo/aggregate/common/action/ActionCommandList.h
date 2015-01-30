#pragma once

#include "ActionCommand.h"
#include <list>

class ActionCommandList
{
public:
    virtual std::list<ActionCommandPtr> getCommands() = 0;
};

