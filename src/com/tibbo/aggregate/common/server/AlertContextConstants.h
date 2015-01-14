#ifndef AlertContextConstantsH
#define AlertContextConstantsH

#include <string>

namespace AlertContextConstants
{   
    static const int INSTANCE_TYPE_PENDING = 0;
    static const int INSTANCE_TYPE_ACTIVE = 1;

    static const int STATUS_ENABLED = 0;
    static const int STATUS_DISABLED = 1;
    static const int STATUS_ACTIVE = 2;
    static const int STATUS_ESCALATED = 3;

    static const int CORRECTIVE_ACTION_TYPE_RISE = 0;
    static const int CORRECTIVE_ACTION_TYPE_ACTIVATION = 1;
    static const int CORRECTIVE_ACTION_TYPE_DEACTIVATION = 2;
    static const int CORRECTIVE_ACTION_TYPE_ESCALATION = 3;
    static const int CORRECTIVE_ACTION_TYPE_DEESCALATION = 4;
    static const int CORRECTIVE_ACTION_TYPE_ACKNOWLEDGEMENT = 5;

    static const std::string V_ALERT_ACTIONS = "alertActions";
    static const std::string V_ESCALATION = "escalation";
    static const std::string V_EVENT_TRIGGERS = "eventTriggers";
    static const std::string V_VARIABLE_TRIGGERS = "variableTriggers";
    static const std::string V_STATUS = "status";
    static const std::string V_EVENT_TRIGGER_STATUS = "eventTriggerStatus";
    static const std::string V_VARIABLE_TRIGGER_STATUS = "variableTriggerStatus";
    static const std::string V_NOTIFICATIONS = "notifications";
    static const std::string V_INTERACTIVE_ACTIONS = "interactiveActions";
    static const std::string V_ACTIVE_INSTANCES = "activeInstances";

    static const std::string E_ALERT = "alert";
    static const std::string E_ALERTNOTIFY = "alertnotify";
    static const std::string E_DEACTIVATION = "deactivation";

    static const std::string A_PENDING_ALERTS = "pendingAlerts";

    static const std::string VF_ALERT_ACTIONS_EXECUTION_TYPE = "executionType";
    static const std::string VF_ALERT_ACTIONS_MASK = "mask";
    static const std::string VF_ALERT_ACTIONS_ACTION = "action";
    static const std::string VF_ALERT_ACTIONS_INPUT = "input";
    static const std::string VF_ALERT_ACTIONS_CONDITION = "condition";
    static const std::string VF_ALERT_ACTIONS_RUN_FROM_SOURCE = "runFromSource";

    static const std::string VF_INTERACTIVE_ACTIONS_EXECUTION_TYPE = "executionType";
    static const std::string VF_INTERACTIVE_ACTIONS_MASK = "mask";
    static const std::string VF_INTERACTIVE_ACTIONS_ACTION = "action";
    static const std::string VF_INTERACTIVE_ACTIONS_INPUT = "input";
    static const std::string VF_INTERACTIVE_ACTIONS_RUN_FROM_SOURCE = "runFromSource";

    static const std::string VF_STATUS_ENABLED = "enabled";
    static const std::string VF_STATUS_PENDING_INSTANCE_COUNT = "pendingInstanceCount";
    static const std::string VF_STATUS_MAX_PENDING_TIME = "maxPendingTime";
    static const std::string VF_STATUS_ESCALATED = "escalated";
    static const std::string VF_STATUS_ESCALATION_REASON = "escalationReason";

    static const std::string VF_ACTIVE_INSTANCES_EVENT = "event";
    static const std::string VF_ACTIVE_INSTANCES_TYPE = "type";
    static const std::string VF_ACTIVE_INSTANCES_TIME = "time";
    static const std::string VF_ACTIVE_INSTANCES_LEVEL = "level";
    static const std::string VF_ACTIVE_INSTANCES_SOURCE = "source";
    static const std::string VF_ACTIVE_INSTANCES_KEY = "key";
    static const std::string VF_ACTIVE_INSTANCES_CAUSE = "cause";
    static const std::string VF_ACTIVE_INSTANCES_MESSAGE = "message";
    static const std::string VF_ACTIVE_INSTANCES_TRIGGER = "trigger";
    static const std::string VF_ACTIVE_INSTANCES_DATA = "data";

    static const std::string VF_EVENT_TRIGGER_STATUS_TRIGGER = "trigger";
    static const std::string VF_EVENT_TRIGGER_STATUS_ACTIVE = "active";
    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS = "details";

    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS_CONTEXT = "context";
    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS_ACTIVE = "active";
    static const std::string VF_EVENT_TRIGGER_STATUS_DETAILS_EVENTS = "events";

    static const std::string VF_VARIABLE_TRIGGER_STATUS_TRIGGER = "trigger";
    static const std::string VF_VARIABLE_TRIGGER_STATUS_ACTIVE = "active";
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS = "details";

    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_CONTEXT = "context";
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_KEY = "key";
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_ACTIVE = "active";
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_TIME = "time";
    static const std::string VF_VARIABLE_TRIGGER_STATUS_DETAILS_FLAPPING = "flapping";

    static const std::string VF_NOTIFICATIONS_NOTIFY_OWNER = "notifyOwner";
    static const std::string VF_NOTIFICATIONS_ACK_REQUIRED = "ackRequired";
    static const std::string VF_NOTIFICATIONS_LIFETIME = "lifetime";
    static const std::string VF_NOTIFICATIONS_SOUND = "sound";
    static const std::string VF_NOTIFICATIONS_MAIL_TO_OWNER = "mailToOwner";
    static const std::string VF_NOTIFICATIONS_MAIL_RECIPIENTS = "mailRecipients";
    static const std::string VF_NOTIFICATIONS_ADDITIONAL_MAIL_RECIPIENTS = "additionalMailRecipients";
    static const std::string VF_NOTIFICATIONS_SMS_RECIPIENTS = "smsRecipients";
    static const std::string VF_NOTIFICATIONS_SMS_RECIPIENTS_PHONE = "phone";
    static const std::string VF_NOTIFICATIONS_MAIL_RECIPIENTS_USERNAME = "username";

    static const std::string EF_ALERT_DESCRIPTION = "description";
    static const std::string EF_ALERT_CONTEXT = "context";
    static const std::string EF_ALERT_ENTITY = "entity";
    static const std::string EF_ALERT_CAUSE = "cause";
    static const std::string EF_ALERT_MESSAGE = "message";
    static const std::string EF_ALERT_TRIGGER = "trigger";
    static const std::string EF_ALERT_DATA = "data";

    static const std::string EF_DEACTIVATION_ID = "id";
    static const std::string EF_DEACTIVATION_CONTEXT = "context";
    static const std::string EF_DEACTIVATION_DURATION = "duration";

    static const std::string EF_ALERTNOTIFY_DESCRIPTION = "description";
    static const std::string EF_ALERTNOTIFY_CONTEXT = "context";
    static const std::string EF_ALERTNOTIFY_ENTITY = "entity";
    static const std::string EF_ALERTNOTIFY_CAUSE = "cause";
    static const std::string EF_ALERTNOTIFY_MESSAGE = "message";
    static const std::string EF_ALERTNOTIFY_TRIGGER = "trigger";
    static const std::string EF_ALERTNOTIFY_DATA = "data";
    static const std::string EF_ALERTNOTIFY_ALERT_EVENT_ID = "alertEventId";
}
#endif
