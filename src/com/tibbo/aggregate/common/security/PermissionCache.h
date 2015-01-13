#ifndef _PermissionCache_H_
#define _PermissionCache_H_

#include <string>
#include <map>

class PermissionCache
{
private:
    std::map<std::string, std::string> effectiveLevels;
    ReentrantReadWriteLock* lock;

public:
    std::string getLevel(const std::string& context);
    void cacheLevel(const std::string& context, const std::string& level);

    PermissionCache();
};
#endif  //_PermissionCache_H_

