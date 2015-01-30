#ifndef DeviceSettingStatusH
#define DeviceSettingStatusH

 #define BOOST_THREAD_USE_LIB
#include "datatable/TableFormat.h"
#include "device/DeviceContext.h"
#include <cstdio>
#include <string>
#include <boost/shared_ptr.hpp>

class DeviceSettingStatus
{
	
private:

    DatePtr time;
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
	
	static TableFormatPtr FORMAT;


    DatePtr getTime();
    void setTime( DatePtr time);
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