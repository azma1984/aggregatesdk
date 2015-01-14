#include "device/DeviceSettingStatus.h"

static const std::string FIELD_NAME = "name";
static const std::string FIELD_TIME = "time";
static const std::string FIELD_DURATION = "duration";
static const std::string FIELD_UPDATED = "updated";
static const std::string FIELD_DIRECTION = "direction";
static const std::string FIELD_ERROR = "error";


static boost::shared_ptr<TableFormat> DeviceSettingStatus::FORMAT()
{
    if (!FORMAT_) {
        FORMAT_ = new TableFormat();
        FORMAT->addField( std::string("<").append(FIELD_NAME).append("><S>") );
        FORMAT->addField("<" + FIELD_TIME + "><D><F=N>");
        FORMAT->addField("<" + FIELD_DURATION + "><L><F=N>");
        FORMAT->addField("<" + FIELD_UPDATED + "><B>");
        FORMAT->addField("<" + FIELD_DIRECTION + "><I><A=" + DeviceContext.DIRECTION_DEVICE_TO_SERVER + ">");
        FORMAT->addField("<" + FIELD_ERROR + "><S><F=N>");
    }

    return FORMAT_;
}


boost::shared_ptr<Date> DeviceSettingStatus::getTime()
{
    return time;
}

void DeviceSettingStatus::setTime(boost::shared_ptr<Date> time)
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
