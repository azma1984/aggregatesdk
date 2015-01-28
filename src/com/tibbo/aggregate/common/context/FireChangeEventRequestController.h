#ifndef FireChangeEventRequestControllerH
#define FireChangeEventRequestControllerH

#include "event/FireEventRequestController.h"
#include "context/AbstractContext.h"
//#include "context/VariableDefinition.h"
#include "data/Event.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/ClassicEncodingSettings.h"

//todo - class stub
class FireChangeEventRequestController : public FireEventRequestController
{
 private:
    VariableDefinitionPtr def;
    DataTablePtr value;
 public:
    EventPtr process(EventPtr event);
	FireChangeEventRequestController(long  customExpirationPeriod, VariableDefinitionPtr def, DataTablePtr value);
};

#endif
