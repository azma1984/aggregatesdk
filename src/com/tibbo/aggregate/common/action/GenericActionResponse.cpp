#include "GenericActionResponse.h"



GenericActionResponse::GenericActionResponse(DataTablePtr parameters)
{
   this(parameters, false, 0);
}


void GenericActionResponse::GenericActionResponse(DataTablePtr parameters, bool remember, RequestIdentifierPtr requestId)
{
  this->parameters = parameters->clone();
  this->remember = remember;
  *this->requestId = requestId;
}

DataTablePtr GenericActionResponse::getParameters()
{
    return parameters.get();
}

bool GenericActionResponse::shouldRemember()
{
    return remember;
}

RequestIdentifierPtr GenericActionResponse::getRequestId()
{
    return requestId.get();
}

void GenericActionResponse::setParameters(DataTablePtr parameters)
{
    this->parameters = parameters;
}

void GenericActionResponse::setRemember(bool remember)
{
    this->remember = remember;
}

void GenericActionResponse::setRequestId(RequestIdentifierPtr requestId)
{
    this->requestId = requestId;
}



