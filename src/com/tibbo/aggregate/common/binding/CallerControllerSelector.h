#pragma once

#include "context/CallerController.h"
#include <string>
#include <boost/shared_ptr.hpp>

struct CallerControllerSelector
    
{
    virtual boost::shared_ptr<CallerController> select(boost::shared_ptr<Context> context,
                                                       const std::string & entity, int entityType) = 0;
};
