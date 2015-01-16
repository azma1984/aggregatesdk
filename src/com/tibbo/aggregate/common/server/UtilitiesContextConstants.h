// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/UtilitiesContextConstants.java

#ifndef UtilitiesContextConstantsH
#define UtilitiesContextConstantsH


#include "server/ServerContextConstants.h"

namespace UtilitiesContextConstants
{
  static const int AGGREGATE_SORT_PRIORITY_PERIODS=0;
  static const int AGGREGATE_SORT_PRIORITY_CONTEXTS = 1;

  static const std::string  F_DEBUG = "debug";
  static const std::string  F_VARIABLE_ACTIONS = "variableActions";
  static const std::string  F_EVENT_ACTIONS = "eventActions";
  static const std::string  F_INIT_ACTIONS = "initActions";
  static const std::string  F_GET_DATA = "getData";
  static const std::string  F_GET_FORMAT = "getFormat";
  static const std::string  F_CHART_DATA = "chartData";
  static const std::string  F_ACTIONS_BY_MASK = "actionsByMask";
  static const std::string  F_EVENTS_BY_MASK = "eventsByMask";
  static const std::string  F_VARIABLES_BY_MASK = "variablesByMask";
  static const std::string  F_EVENT_FIELDS = "eventFields";
  static const std::string  F_VARIABLE_FIELDS = "variableFields";
  static const std::string  F_VARIABLE_HISTORY = "variableHistory";
  static const std::string  F_STATISTICS = "statistics";
  static const std::string  F_RAW_STATISTICS = "rawStatistics";
  static const std::string  F_TOPOLOGY = "topology";
  static const std::string  F_DELETE_STATISTICS = "deleteStatistics";
  static const std::string  F_FILL_STATISTICS_FROM_HISTORY = "fillStatisticsFromHistory";
  static const std::string  F_UPDATE_HOST = "updateHost";
  static const std::string  F_SEND_SMS = "sendSms";
  static const std::string  F_SEND_MAIL = "sendMail";
  static const std::string  F_CHECK_MAIL = "checkMail";
  static const std::string  F_ACTION_EXECUTION_PARAMETERS = "actionExecutionParameters";
  static const std::string  F_USERS = "users";
  static const std::string  F_VARIABLE_INFO = "variableInfo";
  static const std::string  F_EVENT_INFO = "eventInfo";
  static const std::string  F_EXECUTE = "execute";
  static const std::string  F_LIST_VARIABLES = "listVariables";
  static const std::string  F_SELECTION_VALUES = "selectionValues";
  static const std::string  F_SUMMARY = "summary";
  
  static const std::string  A_VARIABLE_HISTORY = "variableHistory";
  static const std::string  A_VARIABLE_INFO = "variableInfo";
  static const std::string  A_EVENT_INFO = "eventInfo";
  static const std::string  A_SHOW_DATA = "showData";
  
  static const std::string  FIF_INIT_ACTIONS_CONTEXT = "context";
  static const std::string  FIF_INIT_ACTIONS_ACTION_NAME = ServerContextConstants::FIF_INIT_ACTION_ACTION_NAME;
  static const std::string  FIF_INIT_ACTIONS_PARAMETERS =  ServerContextConstants::FIF_INIT_ACTION_INITIAL_PARAMETERS;
  static const std::string  FIF_GET_DATA_ID = "id";
  static const std::string  FIF_GET_FORMAT_ID = "id";
  static const std::string  FIF_TOPOLOGY_PROVIDER = "provider";
  static const std::string  FIF_TOPOLOGY_NODE_MASK = "nodeMask";
  static const std::string  FIF_TOPOLOGY_TOPOLOGY_EXPRESSION = "topologyExpression";
  static const std::string  FIF_TOPOLOGY_SOURCE_EXPRESSION = "sourceExpression";
  static const std::string  FIF_TOPOLOGY_TARGET_EXPRESSION = "targetExpression";
  static const std::string  FIF_TOPOLOGY_DESCRIPTION_EXPRESSION = "descriptionExpression";
  static const std::string  FIF_TOPOLOGY_COLOR_EXPRESSION = "colorExpression";
  static const std::string  FIF_TOPOLOGY_TYPE_EXPRESSION = "typeExpression";
  static const std::string  FIF_TOPOLOGY_INTERFACE_EXPRESSION = "interfaceExpression";
  static const std::string  FIF_TOPOLOGY_DIRECTED_EXPRESSION = "directedExpression";
  static const std::string  FIF_TOPOLOGY_WIDTH_EXPRESSION = "widthExpression";
  static const std::string  FIF_TOPOLOGY_LINK_DESCRIPTION_EXPRESSION = "linkDescriptionExpression";
  static const std::string  FIF_TOPOLOGY_LINK_COLOR_EXPRESSION = "linkColorExpression";
  static const std::string  FIF_VARIABLES_BY_MASK_MASK = "mask";
  static const std::string  FIF_VARIABLES_BY_MASK_GROUP = "group";
  static const std::string  FIF_EXECUTE_COMMAND = "command";
  static const std::string  FIF_EXECUTE_DIRECTORY = "directory";
  static const std::string  FIF_EVENTS_BY_MASK_MASK = "mask";
  static const std::string  FIF_EVENTS_BY_MASK_ALLOW_ALL = "allowAll";
  static const std::string  FIF_ACTIONS_BY_MASK_MASK = "mask";
  static const std::string  FIF_ACTIONS_BY_MASK_INCLUDE_NON_HEADLESS = "includeNonHeadless";
  static const std::string  FIF_ACTION_EXECUTION_PARAMETERS_MASK = "mask";
  static const std::string  FIF_ACTION_EXECUTION_PARAMETERS_ACTION = "action";
  static const std::string  FIF_ACTION_EXECUTION_PARAMETERS_ORIGINAL = "original";
  static const std::string  FIF_ACTION_EXECUTION_PARAMETERS_INTERACTIVE = "interactive";
  static const std::string  FIF_EVENT_FIELDS_MASK = "mask";
  static const std::string  FIF_EVENT_FIELDS_EVENT = "event";
  static const std::string  FIF_VARIABLE_FIELDS_MASK = "mask";
  static const std::string  FIF_VARIABLE_FIELDS_VARIABLE = "variable";
  static const std::string  FIF_SEND_MAIL_RECIPIENTS = "recipients";
  static const std::string  FIF_SEND_MAIL_SUBJECT = "subject";
  static const std::string  FIF_SEND_MAIL_MESSAGE = "message";
  static const std::string  FIF_SEND_MAIL_HTML = "html";
  static const std::string  FIF_SEND_SMS_RECIPIENT = "recipient";
  static const std::string  FIF_SEND_SMS_MESSAGE = "message";
  static const std::string  FIF_UPDATE_HOST_HOST = "host";
  static const std::string  FIF_UPDATE_HOST_IP = "ip";
  static const std::string  FIF_UPDATE_HOST_REMOVE = "remove";
  static const std::string  FIF_VARIABLE_HISTORY_CONTEXT = "context";
  static const std::string  FIF_VARIABLE_HISTORY_VARIABLE = "variable";
  static const std::string  FIF_VARIABLE_HISTORY_FROM_DATE = "fromDate";
  static const std::string  FIF_VARIABLE_HISTORY_TO_DATE = "toDate";
  static const std::string  FIF_VARIABLE_HISTORY_DATA_AS_TABLE = "dataAsTable";
  static const std::string  FIF_VARIABLE_HISTORY_LIMIT = "limit";
  static const std::string  FIF_VARIABLE_HISTORY_SORT_ASCENDING = "sortAscending";
  static const std::string  FIF_VARIABLE_INFO_CONTEXT = "context";
  static const std::string  FIF_VARIABLE_INFO_VARIABLE = "variable";
  static const std::string  FIF_RAW_STATISTICS_CONTEXT = "context";
  static const std::string  FIF_RAW_STATISTICS_NAME = "name";
  static const std::string  FIF_EVENT_INFO_CONTEXT = "context";
  static const std::string  FIF_EVENT_INFO_EVENT = "event";
  static const std::string  FIF_LIST_VARIABLES_GROUP = "group";
  static const std::string  FIF_LIST_VARIABLES_MASK = "mask";
  static const std::string  FOF_LIST_VARIABLES_CONTEXT = "context";
  static const std::string  FOF_LIST_VARIABLES_VARIABLE = "variable";
  static const std::string  FOF_LIST_VARIABLES_VALUE = "value";
  static const std::string  FIF_SELECTION_VALUES_TABLE_EXPRESSION = "tableExpression";
  static const std::string  FIF_SELECTION_VALUES_VALUE_EXPRESSION = "valueExpression";
  static const std::string  FIF_SELECTION_VALUES_DESCRIPTION_EXPRESSSION = "descriptionExpresssion";
  static const std::string  FIF_STATISTICS_MASK = "mask";
  static const std::string  FIF_STATISTICS_CHANNEL = "channel";
  static const std::string  FIF_STATISTICS_KEY = "key";
  static const std::string  FIF_STATISTICS_PERIOD = "period";
  static const std::string  FIF_STATISTICS_FULL = "full";
  static const std::string  FIF_STATISTICS_AVERAGE = "average";
  static const std::string  FIF_STATISTICS_MINIMUM = "minimum";
  static const std::string  FIF_STATISTICS_MAXIMUM = "maximum";
  static const std::string  FIF_STATISTICS_SUM = "sum";
  static const std::string  FIF_STATISTICS_FIRST = "first";
  static const std::string  FIF_STATISTICS_LAST = "last";
  
  static const std::string  FOF_STATISTICS_CONTEXT = "context";
  static const std::string  FOF_STATISTICS_START = "start";
  static const std::string  FOF_STATISTICS_END = "end";
  static const std::string  FOF_STATISTICS_KEY = "key";
  static const std::string  FOF_STATISTICS_AVERAGE = "average";
  static const std::string  FOF_STATISTICS_MINIMUM = "minimum";
  static const std::string  FOF_STATISTICS_MAXIMUM = "maximum";
  static const std::string  FOF_STATISTICS_SUM = "sum";
  static const std::string  FOF_STATISTICS_FIRST = "first";
  static const std::string  FOF_STATISTICS_LAST = "last";
  
  static const std::string  FOF_INIT_ACTIONS_ACTION_ID = "actionId";
  static const std::string  FOF_GET_DATA_DATA = "data";
  static const std::string  FOF_GET_FORMAT_DATA = "data";
  
  static const std::string  FIF_SUMMARY_SERIES_NAME = "seriesName";
  static const std::string  FIF_SUMMARY_SERIES_DESCRIPTION = "seriesDescription";
  static const std::string  FIF_SUMMARY_START_DATE = "startDate";
  static const std::string  FIF_SUMMARY_END_DATE = "endDate";
  static const std::string  FIF_SUMMARY_MASKS = "masks";
  static const std::string  FIF_SUMMARY_ENTITY = "entity";
  static const std::string  FIF_SUMMARY_ENTITY_TYPE = "entityType";
  static const std::string  FIF_SUMMARY_EXPRESSION = "expression";
  static const std::string  FIF_SUMMARY_DATE_EXPRESSION = "dateExpression";
  static const std::string  FIF_SUMMARY_GROUPING = "grouping";
  static const std::string  FIF_SUMMARY_AGGREGATION = "aggregation";
  static const std::string  FIF_SUMMARY_CHANGE_TYPE = "changeType";
  static const std::string  FIF_SUMMARY_OUT_OF_RANGE_VALUES_HANDLING = "outOfRangeValuesHandling";
  static const std::string  FIF_SUMMARY_MIN_VALUE = "minValue";
  static const std::string  FIF_SUMMARY_MAX_VALUE = "maxValue";
  static const std::string  FIF_SUMMARY_SHOW_DETAILS = "showDetails";
  static const std::string  FIF_SUMMARY_SHOW_TOTALS = "showTotals";
  static const std::string  FIF_SUMMARY_SORT_PRIORITY = "sortPriority";
  static const std::string  FIF_SUMMARY_TIME_ZONE = "timeZone";
  
  static const std::string  FOF_SUMMARY_PERIOD_NAME = "periodName";
  static const std::string  FOF_SUMMARY_PERIOD_START = "periodStart";
  static const std::string  FOF_SUMMARY_PERIOD_MIDDLE = "periodMiddle";
  static const std::string  FOF_SUMMARY_PERIOD_END = "periodEnd";
  static const std::string  FOF_SUMMARY_CONTEXT = "context";
};


 
  #endif