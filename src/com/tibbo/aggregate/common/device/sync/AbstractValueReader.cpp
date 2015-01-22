#include "device/sync/AbstractValueReader.h"


AbstractValueReader::AbstractValueReader() 
{
  name = "Custom Synchronization Handler";
}

AbstractValueReader::AbstractValueReader(const std::string &name) 
{
  this->name = name;
}


const std::string &AbstractValueReader::toString()
{
  return name;
}


boost::shared_ptr<DataTable> AbstractValueReader::read(boost::shared_ptr<CallerController> callerController,boost::shared_ptr<RequestController> requestController)
{
 return 0;
}



