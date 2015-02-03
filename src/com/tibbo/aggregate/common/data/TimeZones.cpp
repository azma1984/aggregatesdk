#include "data/TimeZones.h"

#include "Cres.h"

const std::string TimeZones::DEFAULT_TIME_ZONE_ID;
std::map<std::string, std::string> TimeZones::ZONES;

/*
public final static String DEFAULT_TIME_ZONE_ID = "GMT";

  private static final Map<String, String> ZONES = new LinkedHashMap<String, String>();
  private static final Map<Object, String> SELECTION_VALUES = new LinkedHashMap<Object, String>();

  static
  {
    String[] zoneIds = TimeZone.getAvailableIDs();

    for (int i = 0; i < zoneIds.length; i++)
    {
      ZONES.put(zoneIds[i], getZoneDesc(zoneIds[i]));
      SELECTION_VALUES.put(zoneIds[i], getZoneDesc(zoneIds[i]));
    }

    for (int i = -12; i <= 14; i++)
    {
      final String desc = getZoneDescSimple(i);
      ZONES.put(desc, desc);
      SELECTION_VALUES.put(desc, desc);
    }
  }
*/

//TODO:
//std::string TimeZones::getZoneDesc(const std::string & zoneId)
//{
    /*
    TimeZone tz = TimeZone.getTimeZone(zoneId);

    int rawOffset = tz.getRawOffset();
    int hour = rawOffset / (60 * 60 * 1000);
    int min = Math.abs(rawOffset / (60 * 1000)) % 60;

    boolean hasDST = tz.useDaylightTime();

    DecimalFormat form = new DecimalFormat("00");

    return "GMT" + ((hour >= 0) ? "+" : "-") + form.format(Math.abs(hour)) + ":" + form.format(min) + ", " + zoneId + (hasDST ? ", with DST" : "");
    */
//	return "";
//}

std::map<std::string, std::string> TimeZones::getTimeZones()
{
    return ZONES;
}

//TODO:
const std::string TimeZones::getZoneDescSimple(int offset)
{
    /*
    DecimalFormat form = new DecimalFormat("00");

    return "GMT" + ((offset >= 0) ? "+" : "-") + form.format(Math.abs(offset)) + ":" + form.format(0);
    */
    return "";
}

//TODO:
//std::map<AgObjectPtr, std::string> TimeZones::getSelectionValues(bool allowNotSelected)
//{
//	std::map<AgObjectPtr, std::string> sv;
//
//	if (allowNotSelected) {
//		sv.put(0, /*Cres::get().getString("notSelected")*/"notSelected");
//	}
//
//	std::copy(SELECTION_VALUES.begin(), SELECTION_VALUES.end(), std::inserter(sv, sv.begin()) );
//
//	return sv;
//}

//TODO:
const std::string TimeZones::getDefaultTimezoneId()
{
    //return Arrays.asList(TimeZone.getAvailableIDs()).contains(TimeZone.getDefault().getID()) ? TimeZone.getDefault().getID() : DEFAULT_TIME_ZONE_ID;
    return "";
}
