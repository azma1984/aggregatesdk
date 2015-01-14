#pragma once

#include <string>
#include <map>
#include <boost/thread/mutex.hpp>

class PermissionCache
{
private:
    std::map<std::string, std::string> effectiveLevels;
    //TODO: mutex
    boost::mutex lock;//ReentrantReadWriteLock*

public:
    std::string getLevel(const std::string& context);
    void cacheLevel(const std::string& context, const std::string& level);

    PermissionCache();
};

