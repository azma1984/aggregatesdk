// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/ServerContextConstants.java

#ifndef ServerContextConstantsH
#define ServerContextConstantsH

namespace ServerContextConstants
{
  static const std::string  V_VISIBLE_INFO = "visibleInfo";
  static const std::string  V_VISIBLE_CHILDREN = "visibleChildren";
  static const std::string  V_CONTEXT_STATUS = "contextStatus";
  static const std::string  V_CONTEXT_STATISTICS = "contextStatistics";
  static const std::string  V_PERMS = "perms";
  static const std::string  V_ACTIVE_ALERTS = "activeAlerts";
  static const std::string  V_GROUP_MEMBERSHIP = "groupMembership";
  
  static const std::string  F_REORDER = "reorder";
  static const std::string  F_INIT_ACTION = "initAction";
  static const std::string  F_STEP_ACTION = "stepAction";
  
  static const std::string  E_VISIBLE_INFO_CHANGED = "visibleInfoChanged";
  static const std::string  E_VISIBLE_CHILD_REMOVED = "visibleChildRemoved";
  static const std::string  E_VISIBLE_CHILD_ADDED = "visibleChildAdded";
  static const std::string  E_CONTEXT_STATUS_CHANGED = "contextStatusChanged";
  
  static const std::string  A_PERMS = "perms";
  static const std::string  A_EDIT_CUSTOM_PROPERTIES = "editCustomProperties";
  static const std::string  A_REPLICATE = "replicate";
  
  static const std::string  VF_VISIBLE_INFO_DYNAMIC = "dynamic";
  static const std::string  VF_VISIBLE_INFO_CHILDREN_REORDERABLE = "childrenReorderable";
  static const std::string  VF_VISIBLE_INFO_EXPANDED = "expanded";
  static const std::string  VF_VISIBLE_INFO_OWNER = "owner";
  static const std::string  VF_VISIBLE_CHILDREN_PATH = "path";
  static const std::string  VF_CONTEXT_STATUS_STATUS = "status";
  static const std::string  VF_CONTEXT_STATUS_COMMENT = "comment";
  static const std::string  VF_PERMS_TYPE = "type";
  static const std::string  VF_PERMS_USER = "user";
  static const std::string  VF_GROUP_MEMBERSHIP_GROUP = "group";
  static const std::string  VF_GROUP_MEMBERSHIP_LOCATION = "location";
  static const std::string  VF_ACTIVE_ALERTS_LOCATION = "location";
  static const std::string  VF_ACTIVE_ALERTS_EVENT = "event";
  static const std::string  VF_ACTIVE_ALERTS_ALERT = "alert";
  static const std::string  VF_ACTIVE_ALERTS_TYPE = "type";
  static const std::string  VF_ACTIVE_ALERTS_TIME = "time";
  static const std::string  VF_ACTIVE_ALERTS_LEVEL = "level";
  static const std::string  VF_ACTIVE_ALERTS_CAUSE = "cause";
  static const std::string  VF_ACTIVE_ALERTS_MESSAGE = "message";
  static const std::string  VF_ACTIVE_ALERTS_TRIGGER = "trigger";
  static const std::string  VF_ACTIVE_ALERTS_DATA = "data";
  
  static const std::string  FIF_INIT_ACTION_INPUT_DATA = "inputData";
  static const std::string  FIF_INIT_ACTION_INITIAL_PARAMETERS = "initialParameters";
  static const std::string  FIF_INIT_ACTION_ACTION_NAME = "actionName";
  static const std::string  FIF_INIT_ACTION_EXECUTION_MODE = "executionMode";
  static const std::string  FIF_STEP_ACTION_ACTION_RESPONSE = "actionResponse";
  static const std::string  FIF_STEP_ACTION_ACTION_ID = "actionId";
  static const std::string  FIF_REORDER_INDEX = "index";
  static const std::string  FIF_REORDER_CHILD = "child";
  
  static const std::string  FOF_INIT_ACTION_ACTION_ID = "actionId";
  static const std::string  FOF_STEP_ACTION_ACTION_COMMAND = "actionCommand";
  
  static const std::string  EF_CONTEXT_STATUS_CHANGED_STATUS = "status";
  static const std::string  EF_CONTEXT_STATUS_CHANGED_COMMENT = "comment";
  static const std::string  EF_CONTEXT_STATUS_CHANGED_OLD_STATUS = "oldStatus";
  static const std::string  EF_VISIBLE_CHILD_ADDED_PATH = "path";
  static const std::string  EF_VISIBLE_CHILD_REMOVED_PATH = "path";
};

#endif