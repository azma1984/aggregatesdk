#ifndef _AccessSettingReinizializer_H_
#define _AccessSettingReinizializer_H_

#include <boost/shared_ptr.hpp>
#include "util/Interface.h"
//#include "context/VariableDefinition.h"
//#include "context/CallerController.h"
//#include "datatable/DataTable.h"
 #include "util/pointers.h"
class AccessSettingReinizializer : public Interface
{
  /**
   * This method is called when the value of the device access setting variable is changed.
   * 
   * @return True if reconnection to the device and its resynchronization is necessary, false otherwise
   */
   virtual bool reinitialize(VariableDefinitionPtr def, CallerControllerPtr caller, DataTablePtr value)  = 0;
};
#endif  //_AccessSettingReinizializer_H_
