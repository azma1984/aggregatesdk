#pragma once

#include "action/ActionDefinition.h"
#include "action/ActionLocator.h"

template <class L> class ActionDirectory
{
public:
	ActionDefinition* getActionDefinition(L* locator);
};
