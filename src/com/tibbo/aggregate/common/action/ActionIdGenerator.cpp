#include "ActionIdGenerator.h"


ActionIdentifierPtr ActionIdGenerator::generate(Action<InitialRequest,ActionCommand,ActionResponse> * action)
{
    std::string id = "ActionIdGenerator::generate";
    //action->getClass()->getSimpleName()+"@"+
//	std::printf("%d",action); // System::identityHashCode(action)->toString();
	return new ActionIdentifier(id);
}



