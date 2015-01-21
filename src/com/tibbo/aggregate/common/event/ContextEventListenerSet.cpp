// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListenerSet.java
#include "event/ContextEventListenerSet.h"

//todo - It is necessary to study as the std::unordered_set works.

//std::unordered_set<ContextEventListener> ContextEventListenerSet::getListeners()
//{
    
//	std::unordered_set<ContextEventListener> localListeners;
   /* for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        localListeners)->add(li)->getListener()));
    }
    return ::java::util::Collections::unmodifiableSet(localListeners);
	*/

//	return localListeners;
//}

std::unordered_set<ContextEventListenerInfo> ContextEventListenerSet::getListenersInfo()
{
	
    std::unordered_set<ContextEventListenerInfo> localListeners;
   /* 
    for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        localListeners)->add(li));
    }
    return ::java::util::Collections::unmodifiableSet(localListeners);
	*/


	return localListeners;
}

bool ContextEventListenerSet::addListener(ContextEventListener* listener, bool weak)
{
   /*
	if(contains(listener)) {
        return false;
    }
    listeners)->add(weak ? new ::java::lang::ref::WeakReference(listener)) : listener)));
	*/
	return true;
}

bool ContextEventListenerSet::removeListener(ContextEventListener* listener)
{
    /*
	for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        if(li)->getListener())->equals(listener)) {
            iterator)->remove();
            return true;
        }
    }
	*/
    return false;
}

bool ContextEventListenerSet::contains(ContextEventListener* listener)
{
    /*
	for (auto *iterator = listeners)->iterator(); iterator)->hasNext(); ) {
        auto ref = java_cast< void* >(iterator)->next());
        auto li = getListenerInfo(ref);
        if(li == 0) {
            iterator)->remove();
            continue;
        }
        if(li)->getListener())->equals(listener)) {
            return true;
        }
    }
	*/
    return false;
}

void ContextEventListenerSet::clear()
{
	/*
  synchronized synchronized_0(listeners);
   {
    listeners->clear();
   }
   */
}

int ContextEventListenerSet::size()
{
  return listeners.size();
}

ContextEventListenerInfo* ContextEventListenerSet::getListenerInfo(void* ref)
{
	/*
    
    if(dynamic_cast< ContextEventListener* >(ref) != 0) {
        return new ContextEventListenerInfo(java_cast< ContextEventListener* >(ref), false);
    } else if(dynamic_cast< ::java::lang::ref::Reference* >(ref) != 0) {
        auto cel = java_cast< ContextEventListener* >((java_cast< ::java::lang::ref::Reference* >(ref)))->get());
        return cel != 0 ? new ContextEventListenerInfo(cel, true) : static_cast< ContextEventListenerInfo* >(0);
    } else {
        throw new ContextRuntimeException(std::stringBuilder().append(u"Unexpected reference: "_j)->append(ref))->toString());
    }
	*/
 return 0;
}


