#include "security/PermissionCache.h"

//PermissionCache::PermissionCache()
//{
//   // lock = new ReentrantReadWriteLock();
//}
//
//std::string PermissionCache::getLevel(const std::string& context)
//{
//    lock.lock();
//
//    try
//    {
//        std::map<std::string,std::string>::iterator it = effectiveLevels.find(context);
//        if (it != effectiveLevels.end())
//			return it.second();
//        else
//            return "";
//    }
//    catch(...)  //TODO: скорее всего исключение нужно пробросить дальше
//    {
//        lock.unlock();
//    }
//}
//
//void PermissionCache::cacheLevel(const std::string& context, const std::string& level)
//{
//    lock.lock();
//
//    try
//    {
//        effectiveLevels.insert(std::pair<std::string,std::string>(context, level) );
//    }
//    catch(...)
//    {
//        lock.unlock();
//    }
//}
