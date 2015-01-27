#ifndef _ContextEventListenerSet_H_
#define _ContextEventListenerSet_H_

//#include <com/tibbo/aggregate/common/context/ContextRuntimeException.h"
#include "event/ContextEventListener.h"
#include "event/ContextEventListenerInfo.h"
#include "util/AgObject.h"

#include <unordered_set>

class ContextEventListenerSet
{

private:
  //using namespace std; 
    std::unordered_set <AgObject*> listeners;
    std::unordered_set <AgObject*> listeners_info;
    static ContextEventListenerInfo* getListenerInfo(void* ref);

public:
  //  std::unordered_set<ContextEventListener*>    getListeners();
    std::unordered_set<ContextEventListenerInfo*> getListenersInfo();
    bool addListener(ContextEventListener* listener, bool weak);
    bool removeListener(ContextEventListener* listener);
    bool contains(ContextEventListener* listener);
    void clear();
    int size();

};

#endif 
