#include "device/DeviceSettingStatus.h"
#include "util/SString.h"

const std::string DeviceSettingStatus::FIELD_NAME = "name";
const std::string DeviceSettingStatus::FIELD_TIME = "time";
const std::string DeviceSettingStatus::FIELD_DURATION = "duration";
const std::string DeviceSettingStatus::FIELD_UPDATED = "updated";
const std::string DeviceSettingStatus::FIELD_DIRECTION = "direction";
const std::string DeviceSettingStatus::FIELD_ERROR = "error";


DeviceSettingStatus::DeviceSettingStatus()
{
    this->duration = 0;
    this->direction = DeviceContext::DIRECTION_DEVICE_TO_SERVER;
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

TableFormatPtr DeviceSettingStatus::FORMAT()
{
    if (!FORMAT_) {
        FORMAT_ = TableFormatPtr(new TableFormat());
        FORMAT_->addField("<" + FIELD_NAME + "><S>");
        FORMAT_->addField("<" + FIELD_TIME + "><D><F=N>");
        FORMAT_->addField("<" + FIELD_DURATION + "><L><F=N>");
        FORMAT_->addField("<" + FIELD_UPDATED + "><B>");
        FORMAT_->addField("<" + FIELD_DIRECTION + "><I><A=" + SString::fromNumber(DeviceContext::DIRECTION_DEVICE_TO_SERVER) + ">");
        FORMAT_->addField("<" + FIELD_ERROR + "><S><F=N>");
    }

    return FORMAT_;
}
