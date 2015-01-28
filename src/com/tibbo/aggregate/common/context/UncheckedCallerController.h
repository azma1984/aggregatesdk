#ifndef _UncheckedCallerController_H_
#define _UncheckedCallerController_H_

//#include "security/DefaultPermissionChecker.h"
//#include "security/Permissions.h"
//#include "context/AbstractCallerController.h"


//todo - class stub
class UncheckedCallerController// : public AbstractCallerController
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
