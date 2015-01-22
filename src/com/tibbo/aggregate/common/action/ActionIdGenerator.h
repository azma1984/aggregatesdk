#pragma once

#include "action/ActionIdentifier.h"
#include "action/Action.h"

class ActionIdGenerator
{
public:
	ActionIdentifier* generate(Action<InitialRequest,ActionCommand,ActionResponse>* action);

};
