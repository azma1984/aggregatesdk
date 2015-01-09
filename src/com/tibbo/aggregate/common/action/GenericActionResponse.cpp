#include "GenericActionResponse.h"



GenericActionResponse::GenericActionResponse(DataTable* parameters)
{
   this(parameters, false, 0);
}


void GenericActionResponse::GenericActionResponse(DataTable* parameters, bool remember, RequestIdentifier* requestId)
{
  this->parameters = parameters->clone();
  this->remember = remember;
  *this->requestId = requestId;
}

DataTable* GenericActionResponse::getParameters()
{
    return parameters.get();
}

bool GenericActionResponse::shouldRemember()
{
    return remember;
}

RequestIdentifier* GenericActionResponse::getRequestId()
{
    return requestId.get();
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



