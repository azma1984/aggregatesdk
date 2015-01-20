#ifndef _VariableSetter_H_
#define _VariableSetter_H_

#include "context/Context.h"
#include "context/RequestController.h"
#include "datatable/datatable.h"

class VariableSetter
{
public:
  virtual  bool set(Context* con, VariableDefinition* def, CallerController* caller, RequestController* request, DataTable* value);

};
#endif
