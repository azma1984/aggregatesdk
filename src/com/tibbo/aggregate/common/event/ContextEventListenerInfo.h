#ifndef _ContextEventListenerInfo_H_
#define _ContextEventListenerInfo_H_

#include <boost/shared_ptr.hpp>
#include "event/ContextEventListener.h"

class ContextEventListenerInfo
{

private:
    boost::shared_ptr<ContextEventListener> listener;
    bool weak;   

public:
    boost::shared_ptr<ContextEventListener> getListener(); 

    bool isWeak(); 

    ContextEventListenerInfo(boost::shared_ptr<ContextEventListener> listener, bool weak); 

};
#endif  //_ContextEventListenerInfo_H_
