#ifndef _VariableGetter_H_
#define _VariableGetter_H_

#include "context/Context.h"
#include "context/RequestController.h"
#include "datatable/datatable.h"
class VariableGetter
{
 public:

   virtual  DataTable* get(Context* con, VariableDefinition* def, CallerController* caller, RequestController* request) ;

   
};

#endif
