#ifndef _CallerData_H_

#include "util/Interface.h"
#include "action/ActionManager.h"

class CallerData
{
    virtual ActionManager* getActionManager() = 0;
};
#endif  //_CallerData_H_
