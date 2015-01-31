#include "event/ContextEventListenerInfo.h"


ContextEventListenerInfo::ContextEventListenerInfo(ContextEventListenerPtr listener, bool weak) 
{
  this->listener = listener;
  this->weak = weak;
}


ContextEventListenerPtr ContextEventListenerInfo::getListener()
{
    return listener;
}

bool ContextEventListenerInfo::isWeak()
{
    return weak;
}



