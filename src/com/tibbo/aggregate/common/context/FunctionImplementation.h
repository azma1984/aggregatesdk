// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionImplementation.java
#include "DataTable.h"
#include "FunctionDefinition.h"
#include "CallerController.h"
#include "RequestController.h"



class FunctionImplementation
{
  virtual  DataTable* execute(Context<FunctionImplementation>* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters);

};
