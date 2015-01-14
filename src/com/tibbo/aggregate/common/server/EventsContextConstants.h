// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/EventsContextConstants.java

#ifndef EventsContextConstantsH
#define EventsContextConstantsH


namespace EventsContextConstants
{


public:
    static const std::string F_ACKNOWLEDGE = "acknowledge";
  static const std::string F_ENRICH = "enrich";
  static const std::string F_DELETE = "delete";
  static const std::string F_INIT_HISTORY = "initHistory";
  static const std::string F_GET_HISTORY = "getHistory";
  static const std::string F_SORT_HISTORY = "sortHistory";
  static const std::string F_MASS_DELETE = "massDelete";
  static const std::string F_REMOVE_EXPIRED = "removeExpired";
  static const std::string F_GET = "get";
  static const std::string F_GET_BY_ID = "getById";
  
  static const std::string E_ACKNOWLEDGEMENT = "acknowledgement";
  static const std::string E_ENRICHMENT = "enrichment";
  static const std::string E_REMOVAL = "removal";
  
  static const std::string A_REMOVE_EXPIRED = "removeExpired";
  static const std::string A_ACKNOWLEDGE_ALERT = "acknowledgeAlert";
  
  static const std::string FIF_SOFT_HISTORY_LISTENER = "listener";
  static const std::string FIF_SOFT_HISTORY_FIELD = "field";
  static const std::string FIF_SOFT_HISTORY_DATATABLEFIELD = "datatablefield";
  static const std::string FIF_SOFT_HISTORY_ASCENDING = "ascending";
  
  static const std::string FIF_GET_HISTORY_LISTENER = "listener";
  static const std::string FIF_GET_HISTORY_FIRST = "first";
  static const std::string FIF_GET_HISTORY_NUMBER = "number";
  
  static const std::string FIF_GET_BY_ID_CONTEXT = "context";
  static const std::string FIF_GET_BY_ID_EVENT = "event";
  static const std::string FIF_GET_BY_ID_ID = "id";
  static const std::string FIF_GET_BY_ID_DATA_AS_TABLE = "dataAsTable";
  
  static const std::string FIF_INIT_HISTORY_LISTENER = "listener";
  static const std::string FIF_INIT_HISTORY_EVENTLIST = "eventlist";
  static const std::string FIF_INIT_HISTORY_START_TIME = "startTime";
  static const std::string FIF_INIT_HISTORY_END_TIME = "endTime";
  
  static const std::string FIF_ACKNOWLEDGE_CONTEXT = "context";
  static const std::string FIF_ACKNOWLEDGE_NAME = "name";
  static const std::string FIF_ACKNOWLEDGE_ID = "id";
  static const std::string FIF_ACKNOWLEDGE_ACK = "ack";
  static const std::string FIF_ACKNOWLEDGE_AUTHOR = "author";
  
  static const std::string FIF_ENRICH_CONTEXT = "context";
  static const std::string FIF_ENRICH_NAME = "name";
  static const std::string FIF_ENRICH_ID = "id";
  static const std::string FIF_ENRICH_ENRICHMENT_NAME = "enrichmentName";
  static const std::string FIF_ENRICH_ENRICHMENT_VALUE = "enrichmentValue";
  
  static const std::string FIF_DELETE_CONTEXT = "context";
  static const std::string FIF_DELETE_NAME = "name";
  static const std::string FIF_DELETE_ID = "id";
  
  static const std::string FIF_MASS_DELETE_MASK = "mask";
  static const std::string FIF_MASS_DELETE_EVENT = "event";
  static const std::string FIF_MASS_DELETE_START_DATE = "startDate";
  static const std::string FIF_MASS_DELETE_END_DATE = "endDate";
  
  static const std::string FIF_GET_MASK = "mask";
  static const std::string FIF_GET_EVENT = "event";
  static const std::string FIF_GET_FILTER = "filter";
  static const std::string FIF_GET_FROM_DATE = "fromDate";
  static const std::string FIF_GET_TO_DATE = "toDate";
  static const std::string FIF_GET_DATA_AS_TABLE = "dataAsTable";
  static const std::string FIF_GET_SORT_FIELD = "sortField";
  static const std::string FIF_GET_SORT_ASCENDING = "sortOrder";
  static const std::string FIF_GET_LIMIT = "limit";
  
  static const std::string FOF_INIT_HISTORY_FOUND = "found";
  static const std::string FOF_INIT_HISTORY_SEVERITY = "severity";
  
  static const std::string FOF_GET_HISTORY_DATA = "data";
  static const std::string FOF_GET_HISTORY_ACKNOWLEDGEMENTS = "acknowledgements";
  static const std::string FOF_GET_HISTORY_ENRICHMENTS = "enrichments";
  static const std::string FOF_GET_HISTORY_LEVEL = "level";
  static const std::string FOF_GET_HISTORY_COUNT = "count";
  static const std::string FOF_GET_HISTORY_NAME = "name";
  static const std::string FOF_GET_HISTORY_CONTEXT = "context";
  static const std::string FOF_GET_HISTORY_CREATIONTIME = "creationtime";
  static const std::string FOF_GET_HISTORY_ID = "id";
  static const std::string FOF_GET_HISTORY_INDEX = "index";
  
  static const std::string EF_ACKNOWLEDGEMENT_EVENT = "event";
  static const std::string EF_ENRICHMENT_EVENT = "event";
  static const std::string EF_REMOVAL_EVENT = "event";
   
};
  #endif