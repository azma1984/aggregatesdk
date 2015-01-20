#ifndef _SynchronousRequestController_H_
#define _SynchronousRequestController_H_

#include "context/DefaultRequestController.h"
#include <string>

class SynchronousRequestController : public DefaultRequestController
{
public:
    SynchronousRequestController(long lockTimeout) : DefaultRequestController(lockTimeout) {}
};

#endif