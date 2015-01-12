#ifndef _Permission_H_
#define _Permission_H_

#include "util/Cloneable.h"
#include <string>
#include <boost/shared_ptr.hpp>

class Permission : public Cloneable
{
private:
    static const char PERMISSION_SEPARATOR;
	std::mutex permissionsLock;
    std::string context;
    std::string level;

public:
    Permission(const std::string& data, boost::shared_ptr<PermissionChecker> checker);
    Permission(const std::string& context, std::string& level);

    std::string getContext();
    std::string getLevel();
    void Permission::setContext(const std::string& entity);
    void Permission::setLevel(const std::string& level);
    std::string encode();
    Permission* clone();

    //int hashCode();
    bool equals(Permission* obj);
    std::string toString();
};
#endif
