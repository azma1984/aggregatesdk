#ifndef ActionDirectoryH
#define ActionDirectoryH

//#include "action/ActionDefinition.h"
#include "action/ActionLocator.h"
#include "util/Pointers.h"
#include "util/Interface.h"

//template <class L> class ActionDirectory
class ActionDirectory : public Interface
{
public:
    virtual ActionDefinitionPtr getActionDefinition(ActionLocatorPtr locator) = 0;
};

#endif
