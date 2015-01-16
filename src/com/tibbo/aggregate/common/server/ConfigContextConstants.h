// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/ConfigContextConstants.java

#ifndef ConfigContextConstantsH
#define ConfigContextConstantsH

namespace ConfigContextConstants
{
  static const std::string  V_GENERAL = "general";
  static const std::string  V_DATABASE = "database";
  static const std::string  V_CLUSTER = "cluster";
  static const std::string  V_WEBAPPS = "webapps";
  static const std::string  V_DDNS = "ddns";
  static const std::string  V_MAIL = "mail";
  static const std::string  V_MAIL_PROPERTIES = "mailProperties";
  static const std::string  V_SMS = "sms";
  static const std::string  V_SMS_PROPERTIES = "smsProperties";
  
  static const std::string  V_STATISTICS = "statistics";
  static const std::string  V_DEFAULT_SYNC_OPTIONS = "defaultSyncOptions";
  static const std::string  V_EVENT_STORAGES = "eventStorages";
  static const std::string  V_EVENT_PROCESSING_RULES = "eventProcessingRules";
  static const std::string  V_EVENT_WRITERS = "eventWriters";
  static const std::string  V_DEFAULT_PERMISSIONS = "defaultPermissions";
  static const std::string  V_ADDITIONAL_PERMISSIONS = "additionalPermissions";
  static const std::string  V_PLUGINS = "plugins";
  static const std::string  V_LDAP_AUTH = "ldapAuth";
  static const std::string  V_VIRTUAL_NETWORKS = "virtualNetworks";
  
  static const std::string  VF_GENERAL_SERVER_DESCRIPTION = "serverDescription";
  static const std::string  VF_GENERAL_TIMEZONE = "timezone";
  static const std::string  VF_GENERAL_SERVER_IP = "serverIp";
  static const std::string  VF_GENERAL_SERVER_HOST_NAME = "serverHostName";
  static const std::string  VF_GENERAL_USERS_SELF_REGISTRATION = "usersSelfRegistration";
  static const std::string  VF_GENERAL_CONFIG_GUI_MODE = "configGuiMode";
  static const std::string  VF_GENERAL_CLIENT_PORT = "clientPort";
  static const std::string  VF_GENERAL_NET_ADMIN_ENABLED = "netAdminEnabled";
  static const std::string  VF_GENERAL_NET_ADMIN_PORT = "netAdminPort";
  static const std::string  VF_GENERAL_STATISTICS_FOLDER = "statisticsFolder";
  
  static const std::string  VF_DATABASE_CLUSTER = "databaseCluster";
  static const std::string  VF_DATABASE_DRIVER = "databaseDriver";
  static const std::string  VF_DATABASE_URL = "databaseUrl";
  static const std::string  VF_DATABASE_CLUSTER_DATABASES = "databaseClusterDatabases";
  static const std::string  VF_DATABASE_USERNAME = "databaseUsername";
  static const std::string  VF_DATABASE_PASSWORD = "databasePassword";
  static const std::string  VF_DATABASE_SQL_DIALECT = "databaseSqlDialect";
  static const std::string  VF_DATABASE_MINIMUM_POOL_SIZE = "databaseMinimumPoolSize";
  static const std::string  VF_DATABASE_MAXIMUM_POOL_SIZE = "databaseMaximumPoolSize";
  static const std::string  VF_DATABASE_BATCH_SIZE = "databaseBatchSize";
  static const std::string  VF_DATABASE_CHECKOUT_TIMEOUT = "databaseCheckoutTimeout";
  static const std::string  VF_DATABASE_DISABLE_POOLING = "databaseDisablePooling";
  
  static const std::string  VF_DATABASES_ID = "id";
  static const std::string  VF_DATABASES_URL = "url";
  static const std::string  VF_DATABASES_WEIGHT = "weight";
  static const std::string  VF_DATABASES_LOCAL = "local";
  
  static const std::string  VF_CLUSTER_FAILURE_DETECTION_TIME = "clusterFailureDetectionTime";
  static const std::string  VF_CLUSTER_FAILOVER_READONLY = "clusterFailoverReadonly";
  static const std::string  VF_CLUSTER_ROLE = "clusterRole";
  
  static const std::string  VF_WEBAPPS_WEB_SERVER_ENABLED = "webServerEnabled";
  static const std::string  VF_WEBAPPS_WEB_DESKTOP_ENABLED = "webDesktopEnabled";
  static const std::string  VF_WEBAPPS_WEB_SERVICE_ENABLED = "webServiceEnabled";
  static const std::string  VF_WEBAPPS_WEB_NON_SECURE_ACCESS_ENABLED = "webNonSecureAccessEnabled";
  static const std::string  VF_WEBAPPS_WEB_APPS_ALIASES = "webAppsAliases";
  static const std::string  VF_WEBAPPS_WEB_APPS_SSL_PORT = "webAppsSslPort";
  static const std::string  VF_WEBAPPS_WEB_APPS_NON_SSL_PORT = "webAppsNonSslPort";
  static const std::string  VF_WEBAPPS_WEB_WIDGETS_MODE = "webAppsWidgetsMode";
  static const std::string  VF_WEBAPPS_WEB_KEYSTORE_FILE = "webAppsKeyStoreFile";
  static const std::string  VF_WEBAPPS_WEB_KEYSTORE_PASSWORD = "webAppsKeyStorePassword";
  static const std::string  VF_WEBAPPS_WEB_KEY_PASSWORD = "webAppsKeyPassword";
  
  static const std::string  VF_PLUGINS_ID = "id";
  static const std::string  VF_PLUGINS_NAME = "name";
  static const std::string  VF_PLUGINS_ENABLED = "enabled";
  
  static const std::string  VF_ADDITIONAL_PERMISSIONS_TYPE = "type";
  static const std::string  VF_ADDITIONAL_PERMISSIONS_MASK = "mask";
  
  static const std::string  VF_LDAP_AUTH_ENABLED = "enabled";
  static const std::string  VF_LDAP_AUTH_ADDRESS = "address";
  static const std::string  VF_LDAP_AUTH_PORT = "port";
  static const std::string  VF_LDAP_AUTH_MAPPINGS = "mappings";
  static const std::string  VF_LDAP_AUTH_TIMEOUT = "timeout";
};




  #endif