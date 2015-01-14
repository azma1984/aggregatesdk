// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/ModelContextConstants.java

#ifndef ModelContextConstantsH
#define ModelContextConstantsH

namespace ModelContextConstants
{
public:

	static const int STATUS_DISABLED = 10;
    static const int STORAGE_DATABASE=0;
    static const int STORAGE_MEMORY = 1;
    static const int FUNCTION_TYPE_JAVA=0;
    static const int FUNCTION_TYPE_EXPRESSION = 1;
    static const int FUNCTION_TYPE_QUERY = 2;



	static const std::string V_MODEL_VARIABLES = "modelVariables";
  static const std::string V_MODEL_FUNCTIONS = "modelFunctions";
  static const std::string V_MODEL_EVENTS = "modelEvents";
  static const std::string V_RULE_SETS = "ruleSets";
  static const std::string V_BINDINGS = "bindings";
  static const std::string V_THREAD_POOL_STATUS = "threadPoolStatus";
  
  static const std::string E_BINDING_EXECUTION = "bindingExecution";
  
  static const std::string FIELD_VD_READ_PERMISSIONS = "readPermissions";
  static const std::string FIELD_VD_WRITE_PERMISSIONS = "writePermissions";
  static const std::string FIELD_VD_STORAGE_MODE = "storageMode";
  static const std::string FIELD_VD_UPDATE_HISTORY_STORAGE_TIME = "updateHistoryStorageTime";
  static const std::string FIELD_FD_PERMISSIONS = "permissions";
  static const std::string FIELD_FD_TYPE = "type";
  static const std::string FIELD_FD_IMPLEMENTATION = "implementation";
  static const std::string FIELD_FD_EXPRESSION = "expresion";
  static const std::string FIELD_FD_QUERY = "query";
  static const std::string FIELD_FD_PLUGIN = "plugin";
  static const std::string FIELD_ED_PERMISSIONS = "permissions";
  static const std::string FIELD_ED_FIRE_PERMISSIONS = "firePermissions";
  static const std::string FIELD_ED_HISTORY_STORAGE_TIME = "historyStorageTime";


};
  #endif