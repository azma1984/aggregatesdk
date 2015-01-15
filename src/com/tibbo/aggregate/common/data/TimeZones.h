#ifndef _TIME_ZONES_H_
#define _TIME_ZONES_H_

#include <string>
#include <map>

class TimeZones
{
private:
    static const std::string DEFAULT_TIME_ZONE_ID;
    static std::map<std::string, std::string> ZONES;
    static std::map SELECTION_VALUES;

    static const std::string getZoneDesc(const std::string & zoneId);    

public:

    static std::map<std::string, std::string> getTimeZones();
    static const std::string getZoneDescSimple(int offset);
    static std::map getSelectionValues(bool allowNotSelected);
    static const std::string getDefaultTimezoneId();    
};
#endif  //_TIME_ZONES_H_
