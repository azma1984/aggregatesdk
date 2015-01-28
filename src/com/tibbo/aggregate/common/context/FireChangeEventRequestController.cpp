#include "context/FireChangeEventRequestController.h"



//FireChangeEventRequestController::FireChangeEventRequestController(long  customExpirationPeriod, VariableDefinitionPtr def, DataTablePtr value):FireEventRequestController() 
//{
//    this->def = def;
//    this->value = value;
//}
//
//EventPtr FireChangeEventRequestController::process(EventPtr event)
//{
//    if(event->getExpirationtime() == 0) 
//	{
//       return 0;
//    }
//    DataTablePtr fullValue = def->getFormat() == 0 ? 0;
//    event->getData()->rec()->setValue(AbstractContext::EF_CHANGE_VALUE, fullValue);
//
//    std::string dataOnly = def->getFormat() == 0 ? 0 : value->getEncodedData(new encoding::ClassicEncodingSettings(false, true));
//    event->getData()->rec()->setValue(AbstractContext::EF_CHANGE_DATA, dataOnly);
//    return event;
//}


