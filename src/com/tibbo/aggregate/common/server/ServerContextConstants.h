// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/ServerContextConstants.java

#ifndef ServerContextConstantsH
#define ServerContextConstantsH

class ServerContextConstants
{
public:

    static const std::string V_VISIBLE_INFO;
    static const std::string V_VISIBLE_CHILDREN;
    static const std::string V_CONTEXT_STATUS;
    static const std::string V_CONTEXT_STATISTICS;
    static const std::string V_PERMS;
    static const std::string V_ACTIVE_ALERTS;
    static const std::string V_GROUP_MEMBERSHIP;
    static const std::string F_REORDER;
    static const std::string F_INIT_ACTION;
    static const std::string F_STEP_ACTION;
    static const std::string E_VISIBLE_INFO_CHANGED;
    static const std::string E_VISIBLE_CHILD_REMOVED;
    static const std::string E_VISIBLE_CHILD_ADDED;
    static const std::string E_CONTEXT_STATUS_CHANGED;
    static const std::string A_PERMS;
    static const std::string A_EDIT_CUSTOM_PROPERTIES;
    static const std::string A_REPLICATE;
    static const std::string VF_VISIBLE_INFO_DYNAMIC;
    static const std::string VF_VISIBLE_INFO_CHILDREN_REORDERABLE;
    static const std::string VF_VISIBLE_INFO_EXPANDED;
    static const std::string VF_VISIBLE_INFO_OWNER;
    static const std::string VF_VISIBLE_CHILDREN_PATH;
    static const std::string VF_CONTEXT_STATUS_STATUS;
    static const std::string VF_CONTEXT_STATUS_COMMENT;
    static const std::string VF_PERMS_TYPE;
    static const std::string VF_PERMS_USER;
    static const std::string VF_GROUP_MEMBERSHIP_GROUP;
    static const std::string VF_GROUP_MEMBERSHIP_LOCATION;
    static const std::string VF_ACTIVE_ALERTS_LOCATION;
    static const std::string VF_ACTIVE_ALERTS_EVENT;
    static const std::string VF_ACTIVE_ALERTS_ALERT;
    static const std::string VF_ACTIVE_ALERTS_TYPE;
    static const std::string VF_ACTIVE_ALERTS_TIME;
    static const std::string VF_ACTIVE_ALERTS_LEVEL;
    static const std::string VF_ACTIVE_ALERTS_CAUSE;
    static const std::string VF_ACTIVE_ALERTS_MESSAGE;
    static const std::string VF_ACTIVE_ALERTS_TRIGGER;
    static const std::string VF_ACTIVE_ALERTS_DATA;
    static const std::string FIF_INIT_ACTION_INPUT_DATA;
    static const std::string FIF_INIT_ACTION_INITIAL_PARAMETERS;
    static const std::string FIF_INIT_ACTION_ACTION_NAME;
    static const std::string FIF_INIT_ACTION_EXECUTION_MODE;
    static const std::string FIF_STEP_ACTION_ACTION_RESPONSE;
    static const std::string FIF_STEP_ACTION_ACTION_ID;
    static const std::string FIF_REORDER_INDEX;
    static const std::string FIF_REORDER_CHILD;
    static const std::string FOF_INIT_ACTION_ACTION_ID;
    static const std::string FOF_STEP_ACTION_ACTION_COMMAND;
    static const std::string EF_CONTEXT_STATUS_CHANGED_STATUS;
    static const std::string EF_CONTEXT_STATUS_CHANGED_COMMENT;
    static const std::string EF_CONTEXT_STATUS_CHANGED_OLD_STATUS;
    static const std::string EF_VISIBLE_CHILD_ADDED_PATH;
    static const std::string EF_VISIBLE_CHILD_REMOVED_PATH;
};

  const std::string ServerContextConstants::V_VISIBLE_INFO = "visibleInfo";
  const std::string ServerContextConstants::V_VISIBLE_CHILDREN = "visibleChildren";
  const std::string ServerContextConstants::V_CONTEXT_STATUS = "contextStatus";
  const std::string ServerContextConstants::V_CONTEXT_STATISTICS = "contextStatistics";
  const std::string ServerContextConstants::V_PERMS = "perms";
  const std::string ServerContextConstants::V_ACTIVE_ALERTS = "activeAlerts";
  const std::string ServerContextConstants::V_GROUP_MEMBERSHIP = "groupMembership";
  
  const std::string ServerContextConstants::F_REORDER = "reorder";
  const std::string ServerContextConstants::F_INIT_ACTION = "initAction";
  const std::string ServerContextConstants::F_STEP_ACTION = "stepAction";
  
  const std::string ServerContextConstants::E_VISIBLE_INFO_CHANGED = "visibleInfoChanged";
  const std::string ServerContextConstants::E_VISIBLE_CHILD_REMOVED = "visibleChildRemoved";
  const std::string ServerContextConstants::E_VISIBLE_CHILD_ADDED = "visibleChildAdded";
  const std::string ServerContextConstants::E_CONTEXT_STATUS_CHANGED = "contextStatusChanged";
  
  const std::string ServerContextConstants::A_PERMS = "perms";
  const std::string ServerContextConstants::A_EDIT_CUSTOM_PROPERTIES = "editCustomProperties";
  const std::string ServerContextConstants::A_REPLICATE = "replicate";
  
  const std::string ServerContextConstants::VF_VISIBLE_INFO_DYNAMIC = "dynamic";
  const std::string ServerContextConstants::VF_VISIBLE_INFO_CHILDREN_REORDERABLE = "childrenReorderable";
  const std::string ServerContextConstants::VF_VISIBLE_INFO_EXPANDED = "expanded";
  const std::string ServerContextConstants::VF_VISIBLE_INFO_OWNER = "owner";
  const std::string ServerContextConstants::VF_VISIBLE_CHILDREN_PATH = "path";
  const std::string ServerContextConstants::VF_CONTEXT_STATUS_STATUS = "status";
  const std::string ServerContextConstants::VF_CONTEXT_STATUS_COMMENT = "comment";
  const std::string ServerContextConstants::VF_PERMS_TYPE = "type";
  const std::string ServerContextConstants::VF_PERMS_USER = "user";
  const std::string ServerContextConstants::VF_GROUP_MEMBERSHIP_GROUP = "group";
  const std::string ServerContextConstants::VF_GROUP_MEMBERSHIP_LOCATION = "location";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_LOCATION = "location";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_EVENT = "event";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_ALERT = "alert";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_TYPE = "type";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_TIME = "time";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_LEVEL = "level";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_CAUSE = "cause";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_MESSAGE = "message";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_TRIGGER = "trigger";
  const std::string ServerContextConstants::VF_ACTIVE_ALERTS_DATA = "data";
  
  const std::string ServerContextConstants::FIF_INIT_ACTION_INPUT_DATA = "inputData";
  const std::string ServerContextConstants::FIF_INIT_ACTION_INITIAL_PARAMETERS = "initialParameters";
  const std::string ServerContextConstants::FIF_INIT_ACTION_ACTION_NAME = "actionName";
  const std::string ServerContextConstants::FIF_INIT_ACTION_EXECUTION_MODE = "executionMode";
  const std::string ServerContextConstants::FIF_STEP_ACTION_ACTION_RESPONSE = "actionResponse";
  const std::string ServerContextConstants::FIF_STEP_ACTION_ACTION_ID = "actionId";
  const std::string ServerContextConstants::FIF_REORDER_INDEX = "index";
  const std::string ServerContextConstants::FIF_REORDER_CHILD = "child";
  
  const std::string ServerContextConstants::FOF_INIT_ACTION_ACTION_ID = "actionId";
  const std::string ServerContextConstants::FOF_STEP_ACTION_ACTION_COMMAND = "actionCommand";
  
  const std::string ServerContextConstants::EF_CONTEXT_STATUS_CHANGED_STATUS = "status";
  const std::string ServerContextConstants::EF_CONTEXT_STATUS_CHANGED_COMMENT = "comment";
  const std::string ServerContextConstants::EF_CONTEXT_STATUS_CHANGED_OLD_STATUS = "oldStatus";
  const std::string ServerContextConstants::EF_VISIBLE_CHILD_ADDED_PATH = "path";
  const std::string ServerContextConstants::EF_VISIBLE_CHILD_REMOVED_PATH = "path";


    #endif