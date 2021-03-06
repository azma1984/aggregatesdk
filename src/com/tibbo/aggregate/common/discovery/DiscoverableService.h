#ifndef DiscoverableServiceH
#define DiscoverableServiceH

//#include "discovery/DiscoverableServiceDefinition.h"
//#include "discovery/DiscoveryResultItem.h"
#include "util/Interface.h"
#include <list>
#include <boost/shared_ptr.hpp>
class DiscoveryResultItem;
class DiscoverableServiceDefinition;
class DiscoverableService :  public Interface
{
    virtual std::list<DiscoveryResultItemPtr>  check(DiscoverableServiceDefinitionPtr definition,
                                                  const std::string& address, long timeout, int retriesCount) = 0;
};
#endif  //DiscoverableServiceH
