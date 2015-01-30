#ifndef FunctionImplementationH
#define FunctionImplementationH

//#include "datatable/DataTable.h"

//#include "FunctionDefinition.h"
#include "context/CallerController.h"
#include "context/RequestController.h"

class FunctionDefinition;
class Context;
class FunctionImplementation
{
  DataTablePtr execute(ContextPtr con, FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters);

};
#endif