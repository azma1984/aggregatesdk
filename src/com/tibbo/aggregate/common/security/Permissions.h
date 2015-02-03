#ifndef PermissionH
#define PermissionH
 #define BOOST_THREAD_USE_LIB
#include "security/Permission.h"
#include <string>
#include <list>
#include <boost/shared_ptr.hpp>
#include <boost/thread/mutex.hpp>

class Permissions //TODO: : public ::java::lang::Iterable
{
private:
    std::list<PermissionPtr>  permissions;
    boost::mutex permissionsLock;
    void ctor(const std::string& data, boost::shared_ptr<PermissionChecker> checker);

public:
    std::string encode();
    std::string toString();
    int size();
    PermissionsPtr add(PermissionPtr permission);
   // Iterator* iterator();  todo
	int hashCode();
    bool equals(Permissions* obj);


    Permissions();
    Permissions(const std::string& data, boost::shared_ptr<PermissionChecker> checker);
    Permissions(const std::string& context, const std::string& type);
    Permissions(const std::string& data);

    static const char PERMISSIONS_SEPARATOR;

};
#endif
