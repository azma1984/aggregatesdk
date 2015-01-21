#pragma once

#include "util/Interface.h"
#include "util/UserSettings.h"
#include "context/ContextManager.h"
#include <boost/shared_ptr.hpp>

class RemoteConnector
{
public:
    virtual boost::shared_ptr<ContextManager> getContextManager() = 0;
    virtual boost::shared_ptr<CallerController> getCallerController() = 0;
    virtual boost::shared_ptr<UserSettings> getSettings() = 0;
};
