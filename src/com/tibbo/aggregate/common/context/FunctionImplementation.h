#ifndef FunctionImplementationH
#define FunctionImplementationH

#include "DataTable/DataTable.h"

//#include "FunctionDefinition.h"
#include "Context/CallerController.h"
#include "Context/RequestController.h"

class FunctionDefinition;
class Context;
class FunctionImplementation
{
  DataTable* execute(Context* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters);

};
#endif