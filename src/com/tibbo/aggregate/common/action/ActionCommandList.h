#ifndef ActionCommandListH
#define ActionCommandListH

#include "ActionCommand.h"
#include <list>

class ActionCommandList
{
public:
    virtual std::list<ActionCommandPtr> getCommands() = 0;
};

#endif

