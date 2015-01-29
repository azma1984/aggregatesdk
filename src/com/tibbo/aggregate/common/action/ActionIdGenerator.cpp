#include "ActionIdGenerator.h"


ActionIdentifierPtr ActionIdGenerator::generate(ActionPtr action)
{
//	char buf[10];
//	sprintf(buf,"%d",int(action));
    //TODO:
    std::string id = "TODO: ActionIdGenerator";    //action->getClass()->getSimpleName()+"@"+std::string(buf)
	return ActionIdentifierPtr(new ActionIdentifier(id));
}



