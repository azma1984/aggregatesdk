#include "ActionIdGenerator.h"


ActionIdentifierPtr ActionIdGenerator::generate(Action<InitialRequestPtr,ActionCommandPtr,ActionResponsePtr> * action)
{
	char buf[10];
	sprintf(buf,"%d",int(action));
	std::string id = action->getClass()->getSimpleName()+"@"+std::string(buf);
	return ActionIdentifierPtr(new ActionIdentifier(id));
}



