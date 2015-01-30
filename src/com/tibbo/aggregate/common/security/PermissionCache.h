#ifndef PermissionCacheH
#define PermissionCacheH
 #define BOOST_THREAD_USE_LIB
#include <string>
#include <map>
#include <boost/thread/shared_mutex.hpp>

class PermissionCache
{
private:
	std::map<std::string, std::string> effectiveLevels;

	boost::shared_mutex lock;//ReentrantReadWriteLock*

public:
	std::string getLevel(const std::string& context);
	void cacheLevel(const std::string& context, const std::string& level);

	PermissionCache();
};
#endif  //PermissionCacheH

