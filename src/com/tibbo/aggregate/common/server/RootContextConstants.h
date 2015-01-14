// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/RootContextConstants.java
#ifndef RootContextConstantsH
#define RootContextConstantsH


class RootContextConstants
{
 public:
    static const std::string V_VERSION;
    static const std::string V_ENVIRONMENT;
    static const std::string V_SYSINFO;
    static const std::string V_PLUGINS;
    static const std::string V_LICENSE;
    static const std::string V_STATUS;
    static const std::string V_DATABASE;
    static const std::string V_DATABASE_CLUSTER;
    static const std::string V_TABLES;
    static const std::string V_CONNECTIONS;
    static const std::string V_THREADS;
    static const std::string V_POOLS;
    static const std::string V_CLUSTER;
    static const std::string V_EVENT_RULE_STATISTICS;
    static const std::string V_EVENT_STATISTICS;
    static const std::string V_VARIABLE_STATISTICS;
    static const std::string F_REGISTER;
    static const std::string F_LOGIN;
    static const std::string F_LOGOUT;
    static const std::string F_STOP;
    static const std::string F_RESTART;
    static const std::string F_CHANGE_PASSWORD;
    static const std::string F_EXECUTE_QUERY;
    static const std::string F_EXECUTE_NATIVE_QUERY;
    static const std::string F_ADSORB_QUERY_RESULTS;
    static const std::string E_FEEDBACK;
    static const std::string E_CONTEXT_ADDED;
    static const std::string E_CONTEXT_REMOVED;
    static const std::string E_CONTEXT_INFO_CHANGED;
    static const std::string E_CONTEXT_CREATED;
    static const std::string E_CONTEXT_DESTROYED;
    static const std::string E_CONTEXT_RELOCATED;
    static const std::string A_CREATE_RESOURCES;
    static const std::string A_DELETE_RESOURCES;
    static const std::string A_STOP_SERVER;
    static const std::string A_RESTART_SERVER;
    static const std::string A_CHANGE_PASSWORD;
    static const std::string A_DELETE_EVENTS;
    static const std::string A_EVENT_HISTORY;
    static const std::string A_VARIABLE_HISTORY;
    static const std::string A_VIEW_STATISTICS;
    static const std::string A_VIEW_RAW_STATISTICS;
    static const std::string A_VIEW_SERVER_INFO;
    static const std::string A_VIEW_DATABASE_STATISTICS;
    static const std::string A_CONFIGURE_SERVER;
    static const std::string A_SEND_MAIL;
    static const std::string A_SEND_SMS;
    static const std::string A_UPDATE_HOST;
    static const std::string A_CHECK_MAIL;
    static const std::string A_EXECUTE;
    static const std::string A_PURGE_STATISTICS;
    static const std::string A_FILL_STATISTICS_FROM_HISTORY;
    static const std::string A_BROWSE;
    static const std::string VF_VERSION_VERSION;
    static const std::string VF_VERSION_TIME;
    static const std::string VF_STATUS_NAME;
    static const std::string VF_STATUS_VERSION;
    static const std::string VF_STATUS_START_TIME;
    static const std::string VF_STATUS_STARTUP_DURATION;
    static const std::string VF_STATUS_UPTIME;
    static const std::string VF_STATUS_FREE_MEMORY;
    static const std::string VF_STATUS_MAX_MEMORY;
    static const std::string VF_STATUS_TOTAL_MEMORY;
    static const std::string VF_STATUS_EVENT_QUEUE_LENGTH;
    static const std::string VF_PLUGINS_ID;
    static const std::string VF_PLUGINS_TYPE;
    static const std::string VF_PLUGINS_NAME;
    static const std::string VF_THREADS_ID;
    static const std::string VF_THREADS_NAME;
    static const std::string VF_THREADS_GROUP;
    static const std::string VF_THREADS_PRIORITY;
    static const std::string VF_THREADS_STATE;
    static const std::string VF_THREADS_DAEMON;
    static const std::string VF_THREADS_INTERRUPTED;
    static const std::string VF_THREADS_STACK;
    static const std::string FIF_REGISTER_NAME;
    static const std::string FIF_REGISTER_PASSWORD;
    static const std::string FIF_REGISTER_PASSWORD_RE;
    static const std::string FIF_REGISTER_PERMISSIONS;
    static const std::string FIF_REGISTER_ADMIN_PERMISSIONS;
    static const std::string FIF_REGISTER_GLOBAL_PERMISSIONS;
    static const std::string FIF_LOGIN_USERNAME;
    static const std::string FIF_LOGIN_PASSWORD;
    static const std::string FIF_RESTART_ISTANTLY;
    static const std::string FIF_RESTART_DELAY;
    static const std::string FIF_RESTART_REASON;
    static const std::string FIF_STOP_INSTANTLY;
    static const std::string FIF_STOP_DELAY;
    static const std::string FIF_STOP_REASON;
    static const std::string FIF_EXECUTE_NATIVE_QUERY_UPDATE;
    static const std::string FIF_EXECUTE_NATIVE_QUERY_QUERY;
    static const std::string FIF_EXECUTE_QUERY_QUERY;
    static const std::string FIF_CHANGE_PASSWORD_OLD_PASSWORD;
    static const std::string FIF_CHANGE_PASSWORD_NEW_PASSWORD;
    static const std::string FIF_CHANGE_PASSWORD_REPEAT_PASSWORD;
    static const std::string EF_CONTEXT_ADDED_CONTEXT;
    static const std::string EF_CONTEXT_REMOVED_CONTEXT;
    static const std::string EF_CONTEXT_CREATED_CONTEXT;
    static const std::string EF_CONTEXT_DESTROYED_CONTEXT;
    static const std::string EF_CONTEXT_INFO_CHANGED_CONTEXT;
    static const std::string EF_FEEDBACK_MESSAGE;
    static const std::string EF_CONTEXT_RELOCATED_OLD_PATH;
    static const std::string EF_CONTEXT_RELOCATED_NEW_PATH;
};


  const std::string RootContextConstants:: V_VERSION = "version";
  const std::string RootContextConstants:: V_ENVIRONMENT = "environment";
  const std::string RootContextConstants:: V_SYSINFO = "sysinfo";
  const std::string RootContextConstants:: V_PLUGINS = "plugins";
  const std::string RootContextConstants:: V_LICENSE = "license";
  const std::string RootContextConstants:: V_STATUS = "status";
  const std::string RootContextConstants:: V_DATABASE = "database";
  const std::string RootContextConstants:: V_DATABASE_CLUSTER = "databaseCluster";
  const std::string RootContextConstants:: V_TABLES = "tables";
  const std::string RootContextConstants:: V_CONNECTIONS = "connections";
  const std::string RootContextConstants:: V_THREADS = "threads";
  const std::string RootContextConstants:: V_POOLS = "pools";
  const std::string RootContextConstants:: V_CLUSTER = "cluster";
  const std::string RootContextConstants:: V_EVENT_RULE_STATISTICS = "eventRuleStatistics";
  const std::string RootContextConstants:: V_EVENT_STATISTICS = "eventStatistics";
  const std::string RootContextConstants:: V_VARIABLE_STATISTICS = "variableStatistics";
  
  const std::string RootContextConstants:: F_REGISTER = "register";
  const std::string RootContextConstants:: F_LOGIN = "login";
  const std::string RootContextConstants:: F_LOGOUT = "logout";
  const std::string RootContextConstants:: F_STOP = "stop";
  const std::string RootContextConstants:: F_RESTART = "restart";
  const std::string RootContextConstants:: F_CHANGE_PASSWORD = "changePassword";
  const std::string RootContextConstants:: F_EXECUTE_QUERY = "executeQuery";
  const std::string RootContextConstants:: F_EXECUTE_NATIVE_QUERY = "executeNativeQuery";
  const std::string RootContextConstants:: F_ADSORB_QUERY_RESULTS = "adsorbQueryResults";
  
  const std::string RootContextConstants:: E_FEEDBACK = "feedback";
  const std::string RootContextConstants:: E_CONTEXT_ADDED = "contextAdded";
  const std::string RootContextConstants:: E_CONTEXT_REMOVED = "contextRemoved";
  const std::string RootContextConstants:: E_CONTEXT_INFO_CHANGED = "contextInfoChanged";
  const std::string RootContextConstants:: E_CONTEXT_CREATED = "contextCreated";
  const std::string RootContextConstants:: E_CONTEXT_DESTROYED = "contextDestroyed";
  const std::string RootContextConstants:: E_CONTEXT_RELOCATED = "contextRelocated";
  
  const std::string RootContextConstants:: A_CREATE_RESOURCES = "createResources";
  const std::string RootContextConstants:: A_DELETE_RESOURCES = "deleteResources";
  const std::string RootContextConstants:: A_STOP_SERVER = "stop";
  const std::string RootContextConstants:: A_RESTART_SERVER = "restart";
  const std::string RootContextConstants:: A_CHANGE_PASSWORD = "changePassword";
  const std::string RootContextConstants:: A_DELETE_EVENTS = "deleteEvents";
  const std::string RootContextConstants:: A_EVENT_HISTORY = "eventHistory";
  const std::string RootContextConstants:: A_VARIABLE_HISTORY = "variableHistory";
  const std::string RootContextConstants:: A_VIEW_STATISTICS = "viewStatistics";
  const std::string RootContextConstants:: A_VIEW_RAW_STATISTICS = "viewRawStatistics";
  const std::string RootContextConstants:: A_VIEW_SERVER_INFO = "viewServerInfo";
  const std::string RootContextConstants:: A_VIEW_DATABASE_STATISTICS = "viewDatabaseStatistics";
  const std::string RootContextConstants:: A_CONFIGURE_SERVER = "configureServer";
  const std::string RootContextConstants:: A_SEND_MAIL = "sendMail";
  const std::string RootContextConstants:: A_SEND_SMS = "sendSms";
  const std::string RootContextConstants:: A_UPDATE_HOST = "updateHost";
  const std::string RootContextConstants:: A_CHECK_MAIL = "checkMail";
  const std::string RootContextConstants:: A_EXECUTE = "execute";
  const std::string RootContextConstants:: A_PURGE_STATISTICS = "purgeStatistics";
  const std::string RootContextConstants:: A_FILL_STATISTICS_FROM_HISTORY = "fillStatisticsFromHistory";
  const std::string RootContextConstants:: A_BROWSE = "browse";
  
  const std::string RootContextConstants:: VF_VERSION_VERSION = "version";
  const std::string RootContextConstants:: VF_VERSION_TIME = "time";
  const std::string RootContextConstants:: VF_STATUS_NAME = "name";
  const std::string RootContextConstants:: VF_STATUS_VERSION = "version";
  const std::string RootContextConstants:: VF_STATUS_START_TIME = "startTime";
  const std::string RootContextConstants:: VF_STATUS_STARTUP_DURATION = "startupDuration";
  const std::string RootContextConstants:: VF_STATUS_UPTIME = "uptime";
  const std::string RootContextConstants:: VF_STATUS_FREE_MEMORY = "freeMemory";
  const std::string RootContextConstants:: VF_STATUS_MAX_MEMORY = "maxMemory";
  const std::string RootContextConstants:: VF_STATUS_TOTAL_MEMORY = "totalMemory";
  const std::string RootContextConstants:: VF_STATUS_EVENT_QUEUE_LENGTH = "eventQueueLength";
  const std::string RootContextConstants:: VF_PLUGINS_ID = "id";
  const std::string RootContextConstants:: VF_PLUGINS_TYPE = "type";
  const std::string RootContextConstants:: VF_PLUGINS_NAME = "name";
  const std::string RootContextConstants:: VF_THREADS_ID = "id";
  const std::string RootContextConstants:: VF_THREADS_NAME = "name";
  const std::string RootContextConstants:: VF_THREADS_GROUP = "group";
  const std::string RootContextConstants:: VF_THREADS_PRIORITY = "priority";
  const std::string RootContextConstants:: VF_THREADS_STATE = "state";
  const std::string RootContextConstants:: VF_THREADS_DAEMON = "daemon";
  const std::string RootContextConstants:: VF_THREADS_INTERRUPTED = "interrupted";
  const std::string RootContextConstants:: VF_THREADS_STACK = "stack";
  
  const std::string RootContextConstants:: FIF_REGISTER_NAME = "name";
  const std::string RootContextConstants:: FIF_REGISTER_PASSWORD = "password";
  const std::string RootContextConstants:: FIF_REGISTER_PASSWORD_RE = "passwordRe";
  const std::string RootContextConstants:: FIF_REGISTER_PERMISSIONS = "permissions";
  const std::string RootContextConstants:: FIF_REGISTER_ADMIN_PERMISSIONS = "adminPermissions";
  const std::string RootContextConstants:: FIF_REGISTER_GLOBAL_PERMISSIONS = "globalPermissions";
  const std::string RootContextConstants:: FIF_LOGIN_USERNAME = "username";
  const std::string RootContextConstants:: FIF_LOGIN_PASSWORD = "password";
  const std::string RootContextConstants:: FIF_RESTART_ISTANTLY = "instantly";
  const std::string RootContextConstants:: FIF_RESTART_DELAY = "delay";
  const std::string RootContextConstants:: FIF_RESTART_REASON = "reason";
  const std::string RootContextConstants:: FIF_STOP_INSTANTLY = "instantly";
  const std::string RootContextConstants:: FIF_STOP_DELAY = "delay";
  const std::string RootContextConstants:: FIF_STOP_REASON = "reason";
  const std::string RootContextConstants:: FIF_EXECUTE_NATIVE_QUERY_UPDATE = "update";
  const std::string RootContextConstants:: FIF_EXECUTE_NATIVE_QUERY_QUERY = "query";
  const std::string RootContextConstants:: FIF_EXECUTE_QUERY_QUERY = "query";
  const std::string RootContextConstants:: FIF_CHANGE_PASSWORD_OLD_PASSWORD = "oldPassword";
  const std::string RootContextConstants:: FIF_CHANGE_PASSWORD_NEW_PASSWORD = "newPassword";
  const std::string RootContextConstants:: FIF_CHANGE_PASSWORD_REPEAT_PASSWORD = "repeatPassword";
  
  const std::string RootContextConstants:: EF_CONTEXT_ADDED_CONTEXT = "context";
  const std::string RootContextConstants:: EF_CONTEXT_REMOVED_CONTEXT = "context";
  const std::string RootContextConstants:: EF_CONTEXT_CREATED_CONTEXT = "context";
  const std::string RootContextConstants:: EF_CONTEXT_DESTROYED_CONTEXT = "context";
  const std::string RootContextConstants:: EF_CONTEXT_INFO_CHANGED_CONTEXT = "context";
  const std::string RootContextConstants:: EF_FEEDBACK_MESSAGE = "message";
  const std::string RootContextConstants:: EF_CONTEXT_RELOCATED_OLD_PATH = "oldPath";
  const std::string RootContextConstants:: EF_CONTEXT_RELOCATED_NEW_PATH = "newPath";
  #endif