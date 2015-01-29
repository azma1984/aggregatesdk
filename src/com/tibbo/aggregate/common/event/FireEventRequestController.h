
#ifndef _FireEventRequestController_H_
#define _FireEventRequestController_H_
#include "context/DefaultRequestController.h"
//#include "data/Event.h"

//todo - class stub
class FireEventRequestController  : public DefaultRequestController
{

private:
    long  customExpirationPeriod;
    bool ignoreStorageErrors;

public:
    long  getCustomExpirationPeriod();
    void setCustomExpirationPeriod(long  customExpirationPeriod);
    bool isIgnoreStorageErrors();
    void setIgnoreStorageErrors(bool ignoreStorageErrors);
    EventPtr process(EventPtr event);


    FireEventRequestController(long  customExpirationPeriod);
    FireEventRequestController(bool ignoreStorageErrors);


};

#endif 
