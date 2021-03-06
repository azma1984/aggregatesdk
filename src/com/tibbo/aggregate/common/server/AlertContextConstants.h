// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/AlertContextConstants.java


#ifndef AlertContextConstantsH
#define AlertContextConstantsH

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

   static const std::string   V_ALERT_ACTIONS = L"alertActions";
   static const std::string   V_ESCALATION = L"escalation";
   static const std::string   V_EVENT_TRIGGERS = L"eventTriggers";
   static const std::string   V_VARIABLE_TRIGGERS = L"variableTriggers";
   static const std::string   V_STATUS = L"status";
   static const std::string   V_EVENT_TRIGGER_STATUS = L"eventTriggerStatus";
   static const std::string   V_VARIABLE_TRIGGER_STATUS = L"variableTriggerStatus";
   static const std::string   V_NOTIFICATIONS = L"notifications";
   static const std::string   V_INTERACTIVE_ACTIONS = L"interactiveActions";
   static const std::string   V_ACTIVE_INSTANCES = L"activeInstances";
   static const std::string   E_ALERT = L"alert";
   static const std::string   E_ALERTNOTIFY = L"alertnotify";
   static const std::string   E_DEACTIVATION = L"deactivation";
   static const std::string   A_PENDING_ALERTS = L"pendingAlerts";
   static const std::string   VF_ALERT_ACTIONS_EXECUTION_TYPE = L"executionType";
   static const std::string   VF_ALERT_ACTIONS_MASK = L"mask";
   static const std::string   VF_ALERT_ACTIONS_ACTION = L"action";
   static const std::string   VF_ALERT_ACTIONS_INPUT = L"input";
   static const std::string   VF_ALERT_ACTIONS_CONDITION = L"condition";
   static const std::string   VF_ALERT_ACTIONS_RUN_FROM_SOURCE = L"runFromSource";
   static const std::string   VF_INTERACTIVE_ACTIONS_EXECUTION_TYPE = L"executionType";
   static const std::string   VF_INTERACTIVE_ACTIONS_MASK = L"mask";
   static const std::string   VF_INTERACTIVE_ACTIONS_ACTION = L"action";
   static const std::string   VF_INTERACTIVE_ACTIONS_INPUT = L"input";
   static const std::string   VF_INTERACTIVE_ACTIONS_RUN_FROM_SOURCE = L"runFromSource";

   static const std::string   VF_STATUS_ENABLED = L"enabled";
   static const std::string   VF_STATUS_PENDING_INSTANCE_COUNT = L"pendingInstanceCount";
   static const std::string   VF_STATUS_MAX_PENDING_TIME = L"maxPendingTime";
   static const std::string   VF_STATUS_ESCALATED = L"escalated";
   static const std::string   VF_STATUS_ESCALATION_REASON = L"escalationReason";

   static const std::string   VF_ACTIVE_INSTANCES_EVENT = L"event";
   static const std::string   VF_ACTIVE_INSTANCES_TYPE = L"type";
   static const std::string   VF_ACTIVE_INSTANCES_TIME = L"time";
   static const std::string   VF_ACTIVE_INSTANCES_LEVEL = L"level";
   static const std::string   VF_ACTIVE_INSTANCES_SOURCE = L"source";
   static const std::string   VF_ACTIVE_INSTANCES_KEY = L"key";
   static const std::string   VF_ACTIVE_INSTANCES_CAUSE = L"cause";
   static const std::string   VF_ACTIVE_INSTANCES_MESSAGE = L"message";
   static const std::string   VF_ACTIVE_INSTANCES_TRIGGER = L"trigger";
   static const std::string   VF_ACTIVE_INSTANCES_DATA = L"data";

   static const std::string   VF_EVENT_TRIGGER_STATUS_TRIGGER = L"trigger";
   static const std::string   VF_EVENT_TRIGGER_STATUS_ACTIVE = L"active";
   static const std::string   VF_EVENT_TRIGGER_STATUS_DETAILS = L"details";

   static const std::string   VF_EVENT_TRIGGER_STATUS_DETAILS_CONTEXT = L"context";
   static const std::string   VF_EVENT_TRIGGER_STATUS_DETAILS_ACTIVE = L"active";
   static const std::string   VF_EVENT_TRIGGER_STATUS_DETAILS_EVENTS = L"events";

   static const std::string   VF_VARIABLE_TRIGGER_STATUS_TRIGGER = L"trigger";
   static const std::string   VF_VARIABLE_TRIGGER_STATUS_ACTIVE = L"active";
   static const std::string   VF_VARIABLE_TRIGGER_STATUS_DETAILS = L"details";

   static const std::string   VF_VARIABLE_TRIGGER_STATUS_DETAILS_CONTEXT = L"context";
   static const std::string   VF_VARIABLE_TRIGGER_STATUS_DETAILS_KEY = L"key";
   static const std::string   VF_VARIABLE_TRIGGER_STATUS_DETAILS_ACTIVE = L"active";
   static const std::string   VF_VARIABLE_TRIGGER_STATUS_DETAILS_TIME = L"time";
   static const std::string   VF_VARIABLE_TRIGGER_STATUS_DETAILS_FLAPPING = L"flapping";

   static const std::string   VF_NOTIFICATIONS_NOTIFY_OWNER = L"notifyOwner";
   static const std::string   VF_NOTIFICATIONS_ACK_REQUIRED = L"ackRequired";
   static const std::string   VF_NOTIFICATIONS_LIFETIME = L"lifetime";
   static const std::string   VF_NOTIFICATIONS_SOUND = L"sound";
   static const std::string   VF_NOTIFICATIONS_MAIL_TO_OWNER = L"mailToOwner";
   static const std::string   VF_NOTIFICATIONS_MAIL_RECIPIENTS = L"mailRecipients";
   static const std::string   VF_NOTIFICATIONS_ADDITIONAL_MAIL_RECIPIENTS = L"additionalMailRecipients";
   static const std::string   VF_NOTIFICATIONS_SMS_RECIPIENTS = L"smsRecipients";
   static const std::string   VF_NOTIFICATIONS_SMS_RECIPIENTS_PHONE = L"phone";
   static const std::string   VF_NOTIFICATIONS_MAIL_RECIPIENTS_USERNAME = L"username";

   static const std::string   EF_ALERT_DESCRIPTION = L"description";
   static const std::string   EF_ALERT_CONTEXT = L"context";
   static const std::string   EF_ALERT_ENTITY = L"entity";
   static const std::string   EF_ALERT_CAUSE = L"cause";
   static const std::string   EF_ALERT_MESSAGE = L"message";
   static const std::string   EF_ALERT_TRIGGER = L"trigger";
   static const std::string   EF_ALERT_DATA = L"data";

   static const std::string   EF_DEACTIVATION_ID = L"id";
   static const std::string   EF_DEACTIVATION_CONTEXT = L"context";
   static const std::string   EF_DEACTIVATION_DURATION = L"duration";

   static const std::string   EF_ALERTNOTIFY_DESCRIPTION = L"description";
   static const std::string   EF_ALERTNOTIFY_CONTEXT = L"context";
   static const std::string   EF_ALERTNOTIFY_ENTITY = L"entity";
   static const std::string   EF_ALERTNOTIFY_CAUSE = L"cause";
   static const std::string   EF_ALERTNOTIFY_MESSAGE = L"message";
   static const std::string   EF_ALERTNOTIFY_TRIGGER = L"trigger";
   static const std::string   EF_ALERTNOTIFY_DATA = L"data";
   static const std::string   EF_ALERTNOTIFY_ALERT_EVENT_ID = L"alertEventId";
};


#endif