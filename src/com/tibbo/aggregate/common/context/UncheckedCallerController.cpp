#include "context/UncheckedCallerController.h"


//UncheckedCallerController::UncheckedCallerController():AbstractCallerController() 
//{
// permissions = DefaultPermissionChecker::getNullPermissions();
//}
//
//UncheckedCallerController::UncheckedCallerController(const std::string & username):AbstractCallerController() 
//{
// permissions = DefaultPermissionChecker::getNullPermissions();
//  setUsername(username);
//}
//
//
PermissionsPtr UncheckedCallerController::getPermissions()
{
	return permissions;
}
//
//bool UncheckedCallerController::isPermissionCheckingEnabled()
//{
//    return false;
//}
//
//bool UncheckedCallerController::isLoggedIn()
//{
//    return true;
//}
//
//void UncheckedCallerController::logout()
//{
//}
//
//bool UncheckedCallerController::isHeadless()
//{
//    return true;
//}
//
//void UncheckedCallerController::handleContextEvent(EventPtr event) 
//{
//	//todo - Exception?
//  //  throw new ::java::lang::UnsupportedOperationException();
//}



