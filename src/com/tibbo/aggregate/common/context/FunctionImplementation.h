#ifndef FunctionImplementationH
#define FunctionImplementationH

#include "datatable/DataTable.h"

//#include "FunctionDefinition.h"
#include "context/CallerController.h"
#include "context/RequestController.h"

class FunctionDefinition;
class Context;
class FunctionImplementation
{
  DataTable* execute(Context* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters);

};
#endif