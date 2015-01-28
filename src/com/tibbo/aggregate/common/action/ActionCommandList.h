#ifndef ActionCommandListH
#define ActionCommandListH

#include "ActionCommand.h"
#include <list>

class ActionCommandList
{
public:
    virtual std::list<ActionCommand> getCommands() = 0;
};

#endif

