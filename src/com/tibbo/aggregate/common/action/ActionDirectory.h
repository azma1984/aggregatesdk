#ifndef ActionDirectoryH
#define ActionDirectoryH

#include "action/ActionDefinition.h"
#include "action/ActionLocator.h"

template <class L> class ActionDirectory
{
public:
	ActionDefinitionPtr getActionDefinition(L* locator);
};

#endif
