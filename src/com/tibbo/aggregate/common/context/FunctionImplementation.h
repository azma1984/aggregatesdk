// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionImplementation.java

#ifndef FunctionImplementationH
#define FunctionImplementationH

#include "DataTable.h"

#include "FunctionDefinition.h"
#include "CallerController.h"
#include "RequestController.h"



class FunctionImplementation
{
  DataTable* execute(Context* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters);

};
#endif