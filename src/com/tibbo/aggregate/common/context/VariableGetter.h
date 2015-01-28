#ifndef _VariableGetter_H_
#define _VariableGetter_H_

#include "context/Context.h"
#include "context/RequestController.h"
#include "datatable/DataTable.h"
class VariableGetter
{
 public:

   virtual  DataTablePtr get(ContextPtr con, VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;

   
};

#endif
