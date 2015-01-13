#pragma once

#include "security/Permission.h"
#include <string>
#include <list>
#include <boost/shared_ptr.hpp>

class Permissions //TODO: : public ::java::lang::Iterable
{
private:
    std::list<boost::shared_ptr<Permission>>  permissions;
    boost::shared_ptr<ReentrantReadWriteLock> permissionsLock;  //TODO: mutex?

public:
    std::string encode();
    std::string toString();
    int size();
    boost::shared_ptr<Permission> add(boost::shared_ptr<Permission> permission);
    //Iterator* iterator();
//    int hashCode();
    bool equals(Permissions* obj);

    // Generated
    Permissions();
    Permissions(const std::string& data, boost::shared_ptr<PermissionChecker> checker);
    Permissions(const std::string& context, const std::string& type);
    Permissions(const std::string& data);

    static const char PERMISSIONS_SEPARATOR;

protected:
    void ctor(const std::string& data, boost::shared_ptr<PermissionChecker> checker);
};
#endif
