#include "device/DeviceSettingStatus.h"

 const std::string DeviceSettingStatus::FIELD_NAME = "name";
 const std::string DeviceSettingStatus::FIELD_TIME = "time";
 const std::string DeviceSettingStatus::FIELD_DURATION = "duration";
 const std::string DeviceSettingStatus::FIELD_UPDATED = "updated";
 const std::string DeviceSettingStatus::FIELD_DIRECTION = "direction";
 const std::string DeviceSettingStatus::FIELD_ERROR = "error";
 TableFormatPtr DeviceSettingStatus::FORMAT;

DeviceSettingStatus::DeviceSettingStatus()
{
//todo
//  FORMAT = TableFormatPtr(new TableFormat());
//  FORMAT->addField("<" + FIELD_NAME +"><S>");
//  FORMAT->addField("<" + FIELD_TIME + "><D><F=N>");
//  FORMAT->addField("<" + FIELD_DURATION + "><L><F=N>");
//  FORMAT->addField("<" + FIELD_UPDATED + "><B>");
//  char buf[10];
//  sprintf_s(buf,"%d",DeviceContext::DIRECTION_DEVICE_TO_SERVER);
//  FORMAT->addField("<" + FIELD_DIRECTION + "><I><A=" + buf + ">");
//  FORMAT->addField("<" + FIELD_ERROR + "><S><F=N>");
//  direction = DeviceContext::DIRECTION_DEVICE_TO_SERVER;
}


DatePtr DeviceSettingStatus::getTime()
{
  return time;
}

void DeviceSettingStatus::setTime(DatePtr time)
{
  this->time = time;
}

long DeviceSettingStatus::getDuration()
{
  return duration;
}

void DeviceSettingStatus::setDuration(long duration)
{
    this->duration = duration;
}

bool DeviceSettingStatus::isUpdated()
{
    return updated;
}

void DeviceSettingStatus::setUpdated(bool updated)
{
    this->updated = updated;
}

int DeviceSettingStatus::getDirection()
{
    return direction;
}

void DeviceSettingStatus::setDirection(int direction)
{
    this->direction = direction;
}

std::string DeviceSettingStatus::getError()
{
    return error;
}

void DeviceSettingStatus::setError(const std::string& error)
{
    this->error = error;
}