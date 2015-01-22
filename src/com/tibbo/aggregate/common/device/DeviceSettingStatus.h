#ifndef _DeviceSettingStatus_H_
#define _DeviceSettingStatus_H_

#include "datatable/TableFormat.h"
#include "device/DeviceContext.h"
#include <cstdio>
#include <string>
#include <boost/shared_ptr.hpp>

class DeviceSettingStatus
{
	
private:

    boost::shared_ptr<Date> time;
    long duration;
    bool updated;
    int direction;
    std::string error;
public:
    static const std::string FIELD_NAME;
    static const std::string FIELD_TIME;
    static const std::string FIELD_DURATION;
    static const std::string FIELD_UPDATED;
    static const std::string FIELD_DIRECTION;
    static const std::string FIELD_ERROR;
	
	static boost::shared_ptr<TableFormat> FORMAT;


    boost::shared_ptr<Date> getTime();
    void setTime( boost::shared_ptr<Date> time);
    long getDuration();
    void setDuration(long duration);
    bool isUpdated();
    void setUpdated(bool updated);
    int getDirection();
    void setDirection(int direction);
    std::string getError();
    void setError(const std::string& error);

    DeviceSettingStatus();

};
#endif