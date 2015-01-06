// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/GenericActionResponse.java
#include "GenericActionResponse.h"



GenericActionResponse::GenericActionResponse(DataTable* parameters)
{
   this(parameters, false, 0);
}


void GenericActionResponse::GenericActionResponse(datatable::DataTable* parameters, bool remember, RequestIdentifier* requestId)
{
  this->parameters = parameters;
  this->remember = remember;
  this->requestId = requestId;
}

DataTable* GenericActionResponse::getParameters()
{
    return parameters;
}

bool GenericActionResponse::shouldRemember()
{
    return remember;
}

RequestIdentifier* GenericActionResponse::getRequestId()
{
    return requestId;
}

void GenericActionResponse::setParameters(DataTable* parameters)
{
    this->parameters = parameters;
}

void GenericActionResponse::setRemember(bool remember)
{
    this->remember = remember;
}

void GenericActionResponse::setRequestId(RequestIdentifier* requestId)
{
    this->requestId = requestId;
}



