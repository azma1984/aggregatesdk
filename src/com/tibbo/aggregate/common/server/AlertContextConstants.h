// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/AlertContextConstants.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"

//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::server::AlertContextConstants
    
{
    static const int INSTANCE_TYPE_PENDING) };
    static const int INSTANCE_TYPE_ACTIVE = 1) };
    static const int STATUS_ENABLED) };
    static const int STATUS_DISABLED = 1) };
    static const int STATUS_ACTIVE = 2) };
    static const int STATUS_ESCALATED = 3) };
    static const int CORRECTIVE_ACTION_TYPE_RISE) };
    static const int CORRECTIVE_ACTION_TYPE_ACTIVATION = 1) };
    static const int CORRECTIVE_ACTION_TYPE_DEACTIVATION = 2) };
    static const int CORRECTIVE_ACTION_TYPE_ESCALATION = 3) };
    static const int CORRECTIVE_ACTION_TYPE_DEESCALATION = 4) };
    static const int CORRECTIVE_ACTION_TYPE_ACKNOWLEDGEMENT = 5) };

private:
    static const std::string V_ALERT_ACTIONS_;
    static const std::string V_ESCALATION_;
    static const std::string V_EVENT_TRIGGERS_;
    static const std::string V_VARIABLE_TRIGGERS_;
    static const std::string V_STATUS_;
    static const std::string V_EVENT_TRIGGER_STATUS_;
    static const std::string V_VARIABLE_TRIGGER_STATUS_;
    static const std::string V_NOTIFICATIONS_;
    static const std::string V_INTERACTIVE_ACTIONS_;
    static const std::string V_ACTIVE_INSTANCES_;
    static const std::string E_ALERT_;
    static const std::string E_ALERTNOTIFY_;
    static const std::string E_DEACTIVATION_;
    static const std::string A_PENDING_ALERTS_;
    static const std::string VF_ALERT_ACTIONS_EXECUTION_TYPE_;
    static const std::string VF_ALERT_ACTIONS_MASK_;
    static const std::string VF_ALERT_ACTIONS_ACTION_;
    static const std::string VF_ALERT_ACTIONS_INPUT_;
    static const std::string VF_ALERT_ACTIONS_CONDITION_;
    static const std::string VF_ALERT_ACTIONS_RUN_FROM_SOURCE_;
    static const std::string VF_INTERACTIVE_ACTIONS_EXECUTION_TYPE_;
    static const std::string VF_INTERACTIVE_ACTIONS_MASK_;
    static const std::string VF_INTERACTIVE_ACTIONS_ACTION_;
    static const std::string VF_INTERACTIVE_ACTIONS_INPUT_;
    static const std::string VF_INTERACTIVE_ACTIONS_RUN_FROM_SOURCE_;
    static const std::string VF_STATUS_ENABLED_;
    static const std::string VF_STATUS_PENDING_INSTANCE_COUNT_;
    static const std::string VF_STATUS_MAX_PENDING_TIME_;
    static const std::string VF_STATUS_ESCALATED_;
    static const std::string VF_STATUS_ESCALATION_REASON_;
    static const std::string VF_ACTIVE_INSTANCES_EVENT_;
    static const std::string VF_ACTIVE_INSTANCES_TYPE_;
    static const std::string VF_ACTIVE_INSTANCES_TIME_;
    static const std::string VF_ACTIVE_INSTANCES_LEVEL_;
    static const std::string VF_ACTIVE_INSTANCES_SOURCE_;
    static const std::string VF_ACTIVE_INSTANCES_KEY_;
    static const std::string VF_ACTIVE_INSTANCES_CAUSE_;
    static const std::string VF_ACTIVE_INSTANCES_MESSAGE_;
    static const std::string VF_ACTIVE_INSTANCES_TRIGGER_;
    static const std::string VF_ACTIVE_INSTANCES_DATA_;
    static const std::string VF_EVENT_TRIGGER_STATUS_TRIGGER_;
    static const std::string VF_EVENT_TRIGGER_STATUS_ACTIVE_;
    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS_;
    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS_CONTEXT_;
    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS_ACTIVE_;
    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS_EVENTS_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_TRIGGER_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_ACTIVE_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_CONTEXT_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_KEY_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_ACTIVE_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_TIME_;
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_FLAPPING_;
    static const std::string VF_NOTIFICATIONS_NOTIFY_OWNER_;
    static const std::string VF_NOTIFICATIONS_ACK_REQUIRED_;
    static const std::string VF_NOTIFICATIONS_LIFETIME_;
    static const std::string VF_NOTIFICATIONS_SOUND_;
    static const std::string VF_NOTIFICATIONS_MAIL_TO_OWNER_;
    static const std::string VF_NOTIFICATIONS_MAIL_RECIPIENTS_;
    static const std::string VF_NOTIFICATIONS_ADDITIONAL_MAIL_RECIPIENTS_;
    static const std::string VF_NOTIFICATIONS_SMS_RECIPIENTS_;
    static const std::string VF_NOTIFICATIONS_SMS_RECIPIENTS_PHONE_;
    static const std::string VF_NOTIFICATIONS_MAIL_RECIPIENTS_USERNAME_;
    static const std::string EF_ALERT_DESCRIPTION_;
    static const std::string EF_ALERT_CONTEXT_;
    static const std::string EF_ALERT_ENTITY_;
    static const std::string EF_ALERT_CAUSE_;
    static const std::string EF_ALERT_MESSAGE_;
    static const std::string EF_ALERT_TRIGGER_;
    static const std::string EF_ALERT_DATA_;
    static const std::string EF_DEACTIVATION_ID_;
    static const std::string EF_DEACTIVATION_CONTEXT_;
    static const std::string EF_DEACTIVATION_DURATION_;
    static const std::string EF_ALERTNOTIFY_DESCRIPTION_;
    static const std::string EF_ALERTNOTIFY_CONTEXT_;
    static const std::string EF_ALERTNOTIFY_ENTITY_;
    static const std::string EF_ALERTNOTIFY_CAUSE_;
    static const std::string EF_ALERTNOTIFY_MESSAGE_;
    static const std::string EF_ALERTNOTIFY_TRIGGER_;
    static const std::string EF_ALERTNOTIFY_DATA_;
    static const std::string EF_ALERTNOTIFY_ALERT_EVENT_ID_;

    // Generated

public:
    
    static const std::string& V_ALERT_ACTIONS();
    static const std::string& V_ESCALATION();
    static const std::string& V_EVENT_TRIGGERS();
    static const std::string& V_VARIABLE_TRIGGERS();
    static const std::string& V_STATUS();
    static const std::string& V_EVENT_TRIGGER_STATUS();
    static const std::string& V_VARIABLE_TRIGGER_STATUS();
    static const std::string& V_NOTIFICATIONS();
    static const std::string& V_INTERACTIVE_ACTIONS();
    static const std::string& V_ACTIVE_INSTANCES();
    static const std::string& E_ALERT();
    static const std::string& E_ALERTNOTIFY();
    static const std::string& E_DEACTIVATION();
    static const std::string& A_PENDING_ALERTS();
    static const std::string& VF_ALERT_ACTIONS_EXECUTION_TYPE();
    static const std::string& VF_ALERT_ACTIONS_MASK();
    static const std::string& VF_ALERT_ACTIONS_ACTION();
    static const std::string& VF_ALERT_ACTIONS_INPUT();
    static const std::string& VF_ALERT_ACTIONS_CONDITION();
    static const std::string& VF_ALERT_ACTIONS_RUN_FROM_SOURCE();
    static const std::string& VF_INTERACTIVE_ACTIONS_EXECUTION_TYPE();
    static const std::string& VF_INTERACTIVE_ACTIONS_MASK();
    static const std::string& VF_INTERACTIVE_ACTIONS_ACTION();
    static const std::string& VF_INTERACTIVE_ACTIONS_INPUT();
    static const std::string& VF_INTERACTIVE_ACTIONS_RUN_FROM_SOURCE();
    static const std::string& VF_STATUS_ENABLED();
    static const std::string& VF_STATUS_PENDING_INSTANCE_COUNT();
    static const std::string& VF_STATUS_MAX_PENDING_TIME();
    static const std::string& VF_STATUS_ESCALATED();
    static const std::string& VF_STATUS_ESCALATION_REASON();
    static const std::string& VF_ACTIVE_INSTANCES_EVENT();
    static const std::string& VF_ACTIVE_INSTANCES_TYPE();
    static const std::string& VF_ACTIVE_INSTANCES_TIME();
    static const std::string& VF_ACTIVE_INSTANCES_LEVEL();
    static const std::string& VF_ACTIVE_INSTANCES_SOURCE();
    static const std::string& VF_ACTIVE_INSTANCES_KEY();
    static const std::string& VF_ACTIVE_INSTANCES_CAUSE();
    static const std::string& VF_ACTIVE_INSTANCES_MESSAGE();
    static const std::string& VF_ACTIVE_INSTANCES_TRIGGER();
    static const std::string& VF_ACTIVE_INSTANCES_DATA();
    static const std::string& VF_EVENT_TRIGGER_STATUS_TRIGGER();
    static const std::string& VF_EVENT_TRIGGER_STATUS_ACTIVE();
    static const std::string& VF_EVENT_TRIGGER_STATUS_DETAILS();
    static const std::string& VF_EVENT_TRIGGER_STATUS_DETAILS_CONTEXT();
    static const std::string& VF_EVENT_TRIGGER_STATUS_DETAILS_ACTIVE();
    static const std::string& VF_EVENT_TRIGGER_STATUS_DETAILS_EVENTS();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_TRIGGER();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_ACTIVE();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_DETAILS();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_DETAILS_CONTEXT();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_DETAILS_KEY();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_DETAILS_ACTIVE();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_DETAILS_TIME();
    static const std::string& VF_VARIABLE_TRIGGER_STATUS_DETAILS_FLAPPING();
    static const std::string& VF_NOTIFICATIONS_NOTIFY_OWNER();
    static const std::string& VF_NOTIFICATIONS_ACK_REQUIRED();
    static const std::string& VF_NOTIFICATIONS_LIFETIME();
    static const std::string& VF_NOTIFICATIONS_SOUND();
    static const std::string& VF_NOTIFICATIONS_MAIL_TO_OWNER();
    static const std::string& VF_NOTIFICATIONS_MAIL_RECIPIENTS();
    static const std::string& VF_NOTIFICATIONS_ADDITIONAL_MAIL_RECIPIENTS();
    static const std::string& VF_NOTIFICATIONS_SMS_RECIPIENTS();
    static const std::string& VF_NOTIFICATIONS_SMS_RECIPIENTS_PHONE();
    static const std::string& VF_NOTIFICATIONS_MAIL_RECIPIENTS_USERNAME();
    static const std::string& EF_ALERT_DESCRIPTION();
    static const std::string& EF_ALERT_CONTEXT();
    static const std::string& EF_ALERT_ENTITY();
    static const std::string& EF_ALERT_CAUSE();
    static const std::string& EF_ALERT_MESSAGE();
    static const std::string& EF_ALERT_TRIGGER();
    static const std::string& EF_ALERT_DATA();
    static const std::string& EF_DEACTIVATION_ID();
    static const std::string& EF_DEACTIVATION_CONTEXT();
    static const std::string& EF_DEACTIVATION_DURATION();
    static const std::string& EF_ALERTNOTIFY_DESCRIPTION();
    static const std::string& EF_ALERTNOTIFY_CONTEXT();
    static const std::string& EF_ALERTNOTIFY_ENTITY();
    static const std::string& EF_ALERTNOTIFY_CAUSE();
    static const std::string& EF_ALERTNOTIFY_MESSAGE();
    static const std::string& EF_ALERTNOTIFY_TRIGGER();
    static const std::string& EF_ALERTNOTIFY_DATA();
    static const std::string& EF_ALERTNOTIFY_ALERT_EVENT_ID();
};
