#ifndef CallerControllerSelectorH
#define CallerControllerSelectorH

#include "context/CallerController.h"
#include <string>
#include <boost/shared_ptr.hpp>

class CallerControllerSelector
{
 public:
	virtual CallerControllerPtr select(ContextPtr context,const std::string & entity, int entityType) = 0;
};

#endif
