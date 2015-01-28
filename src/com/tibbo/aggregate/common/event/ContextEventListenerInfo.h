#ifndef _ContextEventListenerInfo_H_
#define _ContextEventListenerInfo_H_

#include <boost/shared_ptr.hpp>
#include "event/ContextEventListener.h"

class ContextEventListenerInfo
{

private:
    ContextEventListenerPtr listener;
    bool weak;   

public:
    ContextEventListenerPtr getListener(); 

    bool isWeak(); 

    ContextEventListenerInfo(ContextEventListenerPtr listener, bool weak); 

};
#endif  //_ContextEventListenerInfo_H_
