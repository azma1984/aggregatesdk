#ifndef _VariableSetter_H_
#define _VariableSetter_H_

//#include "context/Context.h"
//#include "context/RequestController.h"
//#include "datatable/DataTable.h"

#include "util/Pointers.h"

class VariableSetter
{
public:
  virtual  bool set(ContextPtr con, VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value);

};
#endif
