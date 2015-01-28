#ifndef ActionIdGeneratorH
#define ActionIdGeneratorH

#include "action/ActionIdentifier.h"
#include "action/Action.h"

class ActionIdGenerator
{
public:
	ActionIdentifierPtr generate(Action<InitialRequest,ActionCommand,ActionResponse>* action);

};

#endif

