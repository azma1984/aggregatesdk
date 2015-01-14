#pragma once

#include "context/DefaultRequestController.h"
#include <string>

class SynchronousRequestController : public DefaultRequestController
{
public:
    SynchronousRequestController(long lockTimeout) : DefaultRequestController(lockTimeout) {}
};
