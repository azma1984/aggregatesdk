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




