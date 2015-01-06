// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionIdGenerator.java

#ifndef ActionIdGeneratorH
#define ActionIdGeneratorH

#include "ActionIdentifier.h"
#include "Action.h"

class ActionIdGenerator
{
 public:
	ActionIdentifier* generate(Action<InitialRequest,ActionCommand,ActionResponse>* action);

};

#endif
