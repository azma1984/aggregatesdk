#include "device/sync/AbstractValueWriter.h"


AbstractValueWriter::AbstractValueWriter() 
{
 name = "Custom Synchronization Handler";
}

AbstractValueWriter::AbstractValueWriter(const std::string & name) 
{
  this->name = name;
}


const std::string &AbstractValueWriter::toString()
{
  return name;
}

void AbstractValueWriter::write(boost::shared_ptr<DataTable> value, boost::shared_ptr<CallerController> callerController,boost::shared_ptr<RequestController> requestController)
{

}


