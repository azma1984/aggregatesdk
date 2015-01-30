#ifndef UncheckedCallerControllerH
#define UncheckedCallerControllerH

//#include "security/DefaultPermissionChecker.h"
//#include "security/Permissions.h"
#include "context/AbstractCallerController.h"
#include "util/pointers.h"

//todo - class stub
class UncheckedCallerController : public AbstractCallerController
{

private:
    PermissionsPtr permissions;


public:
    PermissionsPtr getPermissions();
    bool isPermissionCheckingEnabled();
    bool isLoggedIn();
    void logout();
    bool isHeadless();
    void handleContextEvent(EventPtr event);


    UncheckedCallerController();
	UncheckedCallerController(const std::string & username);
};

#endif
