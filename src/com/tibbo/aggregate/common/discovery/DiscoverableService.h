#ifndef _DiscoverableService_H_
#define _DiscoverableService_H_

//#include "discovery/DiscoverableServiceDefinition.h"
//#include "discovery/DiscoveryResultItem.h"
#include "util/Interface.h"
#include <list>
#include <boost/shared_ptr.hpp>
class DiscoveryResultItem;
class DiscoverableServiceDefinition;
class DiscoverableService :  public Interface
{
    virtual std::list<boost::shared_ptr<DiscoveryResultItem>>  check(boost::shared_ptr<DiscoverableServiceDefinition> definition,
                                                  const std::string& address, long timeout, int retriesCount) = 0;
};
#endif  //_DiscoverableService_H_
