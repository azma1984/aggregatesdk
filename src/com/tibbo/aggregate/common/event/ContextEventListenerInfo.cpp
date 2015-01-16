// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListenerInfo.java
#include "event/ContextEventListenerInfo.h"




ContextEventListenerInfo::ContextEventListenerInfo(boost::shared_ptr<ContextEventListener> listener, bool weak) 
{
  this->listener = listener;
  this->weak = weak;
}


boost::shared_ptr<ContextEventListener> ContextEventListenerInfo::getListener()
{
    return listener;
}

bool ContextEventListenerInfo::isWeak()
{
    return weak;
}



