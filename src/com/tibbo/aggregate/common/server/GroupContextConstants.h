// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/GroupContextConstants.java

#ifndef GroupContextConstantsH
#define GroupContextConstantsH

namespace GroupContextConstants
{
    
  static const std::string V_REPLICATION = "replication";
  static const std::string V_MEMBERS = "members";
  static const std::string V_GROUP_INFO = "groupInfo";
  static const std::string V_GROUP_STATUS = "groupStatus";
  static const std::string V_STATIC_MEMBERS = "staticMembers";
  static const std::string V_MEMBER_STATUS = "memberStatus";
  static const std::string V_GROUP_STATUS_VALUE = "groupStatusValue";
  
  static const std::string F_CALL = "call";
  static const std::string F_REMOVE = "remove";
  static const std::string F_ADD = "add";
  
  static const std::string A_CREATE_NESTED_GROUP = "createNestedGroup";
  static const std::string A_REPLICATE_OR_ADD = "replicateOrAdd";
  static const std::string A_PRO_REMOVE_FROM_GROUP = "proRemoveFromGroup";
  static const std::string A_FILTER = "filter";
  static const std::string A_CONVERT_TO_STATIC = "convertToStatic";
  
  static const std::string VF_REPLICATION_VARIABLE = "variable";
  static const std::string VF_REPLICATION_DESCRIPTION = "description";
  static const std::string VF_REPLICATION_REPLICATE = "replicate";
  static const std::string VF_REPLICATION_USE_MASTER = "useMaster";
  static const std::string VF_REPLICATION_MASTER = "master";
  
  static const std::string VF_STATIC_MEMBERS_CONTEXT = "context";
  
  static const std::string VF_MEMBERS_PATH = "path";
  
  static const std::string VF_GROUP_INFO_MEMBER_TYPE = "memberType";
  
  static const std::string VF_GROUP_STATUS_VALUE_STATUS = "status";
  
  static const std::string FIF_REMOVE_CONTEXT = "context";
  static const std::string FIF_ADD_CONTEXT = "context";
  
  static const std::string FIF_CALL_FUNCTION = "function";
  static const std::string FIF_CALL_PARAMETERS = "parameters";
};
  #endif