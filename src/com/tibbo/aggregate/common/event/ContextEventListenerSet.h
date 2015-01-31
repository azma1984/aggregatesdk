#ifndef _ContextEventListenerSet_H_
#define _ContextEventListenerSet_H_

//#include "context/ContextRuntimeException.h"
#include "event/ContextEventListener.h"
#include "event/ContextEventListenerInfo.h"
#include "util/AgObject.h"

#include <boost/unordered_set.hpp>

class ContextEventListenerSet
{
private:
    boost::unordered_set<AgObjectPtr> listeners;
    boost::unordered_set<AgObjectPtr> listeners_info;
	static ContextEventListenerInfoPtr getListenerInfo(AgObjectPtr ref);

public:
    boost::unordered_set<ContextEventListenerPtr>    getListeners();
    boost::unordered_set<ContextEventListenerInfoPtr> getListenersInfo();
    bool addListener(ContextEventListenerPtr listener, bool weak);
    bool removeListener(ContextEventListenerPtr listener);
    bool contains(ContextEventListenerPtr listener);
    void clear();
    int size();

};

#endif 
