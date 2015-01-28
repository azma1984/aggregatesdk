#ifndef RemoteConnectorH
#define RemoteConnectorH

#include "util/Interface.h"
#include "util/UserSettings.h"
#include "context/ContextManager.h"
#include <boost/shared_ptr.hpp>

class RemoteConnector
{
public:
    virtual ContextManagerPtr getContextManager() = 0;
    virtual CallerControllerPtr getCallerController() = 0;
    virtual boost::shared_ptr<UserSettings> getSettings() = 0;
};

#endif
