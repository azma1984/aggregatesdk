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

void AbstractValueWriter::write(DataTablePtr value, CallerControllerPtr callerController,RequestControllerPtr requestController)
{

}


