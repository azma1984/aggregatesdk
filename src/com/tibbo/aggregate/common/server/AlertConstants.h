// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/AlertConstants.java

#ifndef AlertConstantsH
#define AlertConstantsH

#include <string>

class AlertConstants
{
 public:
    static const int POPUP_MODE_OWN = 0;
    static const int POPUP_MODE_ALL = 1;

    static const std::string V_ALERTS_CONFIG;
    static const std::string VF_ALERTS_CONFIG_POPUP_MODE;

};

const std::string AlertConstants::V_ALERTS_CONFIG = "alertsConfig";
const std::string AlertConstants::VF_ALERTS_CONFIG_POPUP_MODE = "mode";

#endif
