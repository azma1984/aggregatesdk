// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/RootContextConstants.java
#ifndef RootContextConstantsH
#define RootContextConstantsH


namespace RootContextConstants
{
  static const std::string   V_VERSION = "version";
  static const std::string   V_ENVIRONMENT = "environment";
  static const std::string   V_SYSINFO = "sysinfo";
  static const std::string   V_PLUGINS = "plugins";
  static const std::string   V_LICENSE = "license";
  static const std::string   V_STATUS = "status";
  static const std::string   V_DATABASE = "database";
  static const std::string   V_DATABASE_CLUSTER = "databaseCluster";
  static const std::string   V_TABLES = "tables";
  static const std::string   V_CONNECTIONS = "connections";
  static const std::string   V_THREADS = "threads";
  static const std::string   V_POOLS = "pools";
  static const std::string   V_CLUSTER = "cluster";
  static const std::string   V_EVENT_RULE_STATISTICS = "eventRuleStatistics";
  static const std::string   V_EVENT_STATISTICS = "eventStatistics";
  static const std::string   V_VARIABLE_STATISTICS = "variableStatistics";
  
  static const std::string   F_REGISTER = "register";
  static const std::string   F_LOGIN = "login";
  static const std::string   F_LOGOUT = "logout";
  static const std::string   F_STOP = "stop";
  static const std::string   F_RESTART = "restart";
  static const std::string   F_CHANGE_PASSWORD = "changePassword";
  static const std::string   F_EXECUTE_QUERY = "executeQuery";
  static const std::string   F_EXECUTE_NATIVE_QUERY = "executeNativeQuery";
  static const std::string   F_ADSORB_QUERY_RESULTS = "adsorbQueryResults";
  
  static const std::string   E_FEEDBACK = "feedback";
  static const std::string   E_CONTEXT_ADDED = "contextAdded";
  static const std::string   E_CONTEXT_REMOVED = "contextRemoved";
  static const std::string   E_CONTEXT_INFO_CHANGED = "contextInfoChanged";
  static const std::string   E_CONTEXT_CREATED = "contextCreated";
  static const std::string   E_CONTEXT_DESTROYED = "contextDestroyed";
  static const std::string   E_CONTEXT_RELOCATED = "contextRelocated";
  
  static const std::string   A_CREATE_RESOURCES = "createResources";
  static const std::string   A_DELETE_RESOURCES = "deleteResources";
  static const std::string   A_STOP_SERVER = "stop";
  static const std::string   A_RESTART_SERVER = "restart";
  static const std::string   A_CHANGE_PASSWORD = "changePassword";
  static const std::string   A_DELETE_EVENTS = "deleteEvents";
  static const std::string   A_EVENT_HISTORY = "eventHistory";
  static const std::string   A_VARIABLE_HISTORY = "variableHistory";
  static const std::string   A_VIEW_STATISTICS = "viewStatistics";
  static const std::string   A_VIEW_RAW_STATISTICS = "viewRawStatistics";
  static const std::string   A_VIEW_SERVER_INFO = "viewServerInfo";
  static const std::string   A_VIEW_DATABASE_STATISTICS = "viewDatabaseStatistics";
  static const std::string   A_CONFIGURE_SERVER = "configureServer";
  static const std::string   A_SEND_MAIL = "sendMail";
  static const std::string   A_SEND_SMS = "sendSms";
  static const std::string   A_UPDATE_HOST = "updateHost";
  static const std::string   A_CHECK_MAIL = "checkMail";
  static const std::string   A_EXECUTE = "execute";
  static const std::string   A_PURGE_STATISTICS = "purgeStatistics";
  static const std::string   A_FILL_STATISTICS_FROM_HISTORY = "fillStatisticsFromHistory";
  static const std::string   A_BROWSE = "browse";
  
  static const std::string   VF_VERSION_VERSION = "version";
  static const std::string   VF_VERSION_TIME = "time";
  static const std::string   VF_STATUS_NAME = "name";
  static const std::string   VF_STATUS_VERSION = "version";
  static const std::string   VF_STATUS_START_TIME = "startTime";
  static const std::string   VF_STATUS_STARTUP_DURATION = "startupDuration";
  static const std::string   VF_STATUS_UPTIME = "uptime";
  static const std::string   VF_STATUS_FREE_MEMORY = "freeMemory";
  static const std::string   VF_STATUS_MAX_MEMORY = "maxMemory";
  static const std::string   VF_STATUS_TOTAL_MEMORY = "totalMemory";
  static const std::string   VF_STATUS_EVENT_QUEUE_LENGTH = "eventQueueLength";
  static const std::string   VF_PLUGINS_ID = "id";
  static const std::string   VF_PLUGINS_TYPE = "type";
  static const std::string   VF_PLUGINS_NAME = "name";
  static const std::string   VF_THREADS_ID = "id";
  static const std::string   VF_THREADS_NAME = "name";
  static const std::string   VF_THREADS_GROUP = "group";
  static const std::string   VF_THREADS_PRIORITY = "priority";
  static const std::string   VF_THREADS_STATE = "state";
  static const std::string   VF_THREADS_DAEMON = "daemon";
  static const std::string   VF_THREADS_INTERRUPTED = "interrupted";
  static const std::string   VF_THREADS_STACK = "stack";
  
  static const std::string   FIF_REGISTER_NAME = "name";
  static const std::string   FIF_REGISTER_PASSWORD = "password";
  static const std::string   FIF_REGISTER_PASSWORD_RE = "passwordRe";
  static const std::string   FIF_REGISTER_PERMISSIONS = "permissions";
  static const std::string   FIF_REGISTER_ADMIN_PERMISSIONS = "adminPermissions";
  static const std::string   FIF_REGISTER_GLOBAL_PERMISSIONS = "globalPermissions";
  static const std::string   FIF_LOGIN_USERNAME = "username";
  static const std::string   FIF_LOGIN_PASSWORD = "password";
  static const std::string   FIF_RESTART_ISTANTLY = "instantly";
  static const std::string   FIF_RESTART_DELAY = "delay";
  static const std::string   FIF_RESTART_REASON = "reason";
  static const std::string   FIF_STOP_INSTANTLY = "instantly";
  static const std::string   FIF_STOP_DELAY = "delay";
  static const std::string   FIF_STOP_REASON = "reason";
  static const std::string   FIF_EXECUTE_NATIVE_QUERY_UPDATE = "update";
  static const std::string   FIF_EXECUTE_NATIVE_QUERY_QUERY = "query";
  static const std::string   FIF_EXECUTE_QUERY_QUERY = "query";
  static const std::string   FIF_CHANGE_PASSWORD_OLD_PASSWORD = "oldPassword";
  static const std::string   FIF_CHANGE_PASSWORD_NEW_PASSWORD = "newPassword";
  static const std::string   FIF_CHANGE_PASSWORD_REPEAT_PASSWORD = "repeatPassword";
  
  static const std::string   EF_CONTEXT_ADDED_CONTEXT = "context";
  static const std::string   EF_CONTEXT_REMOVED_CONTEXT = "context";
  static const std::string   EF_CONTEXT_CREATED_CONTEXT = "context";
  static const std::string   EF_CONTEXT_DESTROYED_CONTEXT = "context";
  static const std::string   EF_CONTEXT_INFO_CHANGED_CONTEXT = "context";
  static const std::string   EF_FEEDBACK_MESSAGE = "message";
  static const std::string   EF_CONTEXT_RELOCATED_OLD_PATH = "oldPath";
  static const std::string   EF_CONTEXT_RELOCATED_NEW_PATH = "newPath";
};



  #endif