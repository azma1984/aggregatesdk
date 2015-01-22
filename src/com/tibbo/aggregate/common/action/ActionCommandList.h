#pragma once

#include "ActionCommand.h"
#include <list>

class ActionCommandList
{
public:
    virtual std::list<ActionCommand> getCommands() = 0;
};

