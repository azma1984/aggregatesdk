#ifndef _CallerData_H_

#include "Interface.h"
#include "ActionManager.h"

class CallerData
{
    virtual ActionManager* getActionManager() = 0;
};
#endif  //_CallerData_H_
