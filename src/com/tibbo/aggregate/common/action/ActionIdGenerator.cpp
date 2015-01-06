// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionIdGenerator.java
#include "ActionIdGenerator.h"



ActionIdentifier* ActionIdGenerator::generate(Action<InitialRequest,ActionCommand,ActionResponse> * action)
{
	std::string id = action->getClass()->getSimpleName()+"@"+
	std::printf("%d",action); // System::identityHashCode(action)->toString();
	return new ActionIdentifier(id);
}



