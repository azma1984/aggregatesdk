#include "security/Permissions.h"
#include "util/SString.h"

//const char Permissions::PERMISSIONS_SEPARATOR = ',';
//
//
//Permissions::Permissions()
//{
//
//}
//
//Permissions::Permissions(const std::string& data, boost::shared_ptr<PermissionChecker> checker)
//{
//    ctor(data, checker);
//}
//
//Permissions::Permissions(const std::string& context, const std::string& type)
//{
//    permissions.add(new Permission(context, type));
//}
//
//Permissions::Permissions(const std::string& data)
//{
//    ctor(data, NULL);
//}
//
//
//void Permissions::ctor(const std::string& data, boost::shared_ptr<PermissionChecker> checker)
//{
//    //TODO: можно заменить на boost::split
//    std::vector<std::string> pd = SString::split(data, Permissions.PERMISSIONS_SEPARATOR);
//
//    for (std::vector<std::string>::iterator it = pd.begin(); it!=pd.end(); ++it) {
//        std::string permSrc = SString(*it).trim();
//        if (permSrc.length() > 0) {
//            permissions.push_back(new Permission(permSrc, checker));
//        }
//    }
//}
//
//std::string Permissions::encode()
//{
//    typedef std::list<PermissionPtr>::iterator permisionIter;
//    std::stringstream enc;
//
//    permissionsLock.lock();//readLock().lock();
//    try
//    {
//        int i = 0;
//        for (permisionIter it = permissions.begin(); it!=permissions.end(); ++it) {
//            if (i > 0) {
//                enc <<Permissions::PERMISSIONS_SEPARATOR;
//            }
//
//            enc <<(*it)->encode();
//
//            i++;
//        }
//    }catch(...) {
//        permissionsLock.unlock();// readLock().unlock();
//    }
//
//    return enc.toString();
//}
//
//std::string Permissions::toString()
//{
//    return encode();
//}
//
//int Permissions::size()
//{
//    return permissions.size();
//}
//
//PermissionsPtr Permissions::add(PermissionPtr permission)
//{
//    permissionsLock.lock();// writeLock().lock();
//    try
//    {
//        permissions.push_back(permission);
//    }
//    catch(...)
//    {
//        permissionsLock.unlock();// writeLock().unlock();
//    }
//
//    return this;
//}
//
////Iterator* iterator();
///*
//int Permissions::hashCode()
//{
//    int prime = 31;
//    int result = 1;
//
//    result = (prime * result) + ((permissions == null) ? 0 : permissions.hashCode());
//
//    return result;
//}
//*/
//
//bool Permissions::equals(PermissionsPtr obj)
//{
//    if (this == obj) {
//        return true;
//    }
//
//    if (obj == NULL) {
//        return false;
//    }
//
//    PermissionsPtr other = dynamic_cast<Permissions>(obj);
//    if (other == NULL)
//        return false;
//
//    if (permissions == NULL) {
//        if (other->permissions != NULL) {
//            return false;
//        }
//    }else if (!other->permissions( permissions )) {
//        return false;
//    }
//
//    return true;
//}

