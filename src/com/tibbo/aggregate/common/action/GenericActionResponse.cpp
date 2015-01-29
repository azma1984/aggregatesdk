#include "GenericActionResponse.h"



GenericActionResponse::GenericActionResponse(DataTablePtr parameters)
{
//todo
  // GenericActionResponse(parameters, false, 0);
}


GenericActionResponse::GenericActionResponse(DataTablePtr parameters, bool remember, RequestIdentifierPtr requestId)
{
//todo
//  this->parameters = parameters->clone();
//  this->remember = remember;
//  *this->requestId = requestId;
}

DataTablePtr GenericActionResponse::getParameters()
{
	return parameters;
}

bool GenericActionResponse::shouldRemember()
{
    return remember;
}

RequestIdentifierPtr GenericActionResponse::getRequestId()
{
	return requestId;
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



