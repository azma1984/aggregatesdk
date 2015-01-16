// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListenerSet.java

#ifndef _ContextEventListenerSet_H_
#define _ContextEventListenerSet_H_

//#include <com/tibbo/aggregate/common/context/ContextRuntimeException.h"
#include "event/ContextEventListener.h"
#include "event/ContextEventListenerInfo.h"

#include <unordered_set>

class ContextEventListenerSet
{

private:
    std::unordered_set<ContextEventListener> listeners;
	std::unordered_set<ContextEventListener> listeners_info;
	static ContextEventListenerInfo* getListenerInfo(void* ref);

public:
  //  std::unordered_set<ContextEventListener>    getListeners();
    std::unordered_set<ContextEventListenerInfo> getListenersInfo();
    bool addListener(ContextEventListener* listener, bool weak);
    bool removeListener(ContextEventListener* listener);
    bool contains(ContextEventListener* listener);
    void clear();
    int size();

};

#endif 
