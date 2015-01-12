#ifndef _GenericPropertiesConstants_H_
#define _GenericPropertiesConstants_H_

#include <string>
#include "server/DeviceContextConstants.h"

namespace GenericPropertiesConstants
{
  static const int METADATA_NONE = 0;
  static const int METADATA_NORMAL = 1;
  static const int METADATA_FULL = 2;

  static const int CACHE_DATABASE = 0;
  static const int CACHE_MEMORY = 1;

  static const std::string FIELD_NAME = "name";
  static const std::string FIELD_DESCRIPTION = "description";
  static const std::string FIELD_TYPE = DeviceContextConstants::VF_GENERIC_PROPERTIES_TYPE;
  static const std::string FIELD_SYNC_PERIOD = "syncPeriod";
  static const std::string FIELD_INTERRUPT_ON_ERROR = "interruptOnError";
  static const std::string FIELD_SUSPEND = "suspend";
  static const std::string FIELD_EXTENDED_STATUS = "extendedStatus";
  static const std::string FIELD_TIME_ZONE = "timeZone";
  static const std::string FIELD_METADATA = "metadata";
  static const std::string FIELD_CACHE = "cache";
  static const std::string FIELD_EVENT_STORAGE_PERIOD = "eventStoragePeriod";
  static const std::string FIELD_DEPENDENCY = "dependency";
  static const std::string FIELD_STATUS = "status";
  static const std::string FIELD_COLOR = "color";
  static const std::string FIELD_LATITUDE = "latitude";
  static const std::string FIELD_LONGITUDE = "longitude";
  static const std::string FIELD_LOCATION_STORAGE_PERIOD = "locationStoragePeriod";
  static const std::string FIELD_OFFLINE_ALERT = "offlineAlert";
  static const std::string FIELD_VIRTUAL_NETWORK = "virtualNetwork";
}
#endif  //_GenericPropertiesConstants_H_
