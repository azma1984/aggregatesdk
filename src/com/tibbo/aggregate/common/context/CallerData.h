#ifndef CallerDataH
#define CallerDataH
#include "util/Interface.h"
#include "action/ActionManager.h"

class CallerData
{
    virtual ActionManagerPtr getActionManager() = 0;
};
#endif  //_CallerData_H_
