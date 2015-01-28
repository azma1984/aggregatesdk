#ifndef EventDataPtrH
#define EventDataPtrH
#define BOOST_THREAD_USE_LIB
#include "util/Comparable.h"
//#include "Log.h"
#include "context/EventDefinition.h"
#include "data/Event.h"
#include "event/ContextEventListener.h"
#include "event/ContextEventListenerSet.h"
#include "util/Util.h"

//todo - class stub
class EventDataPtr: public Comparable
{

private:
    EventDefinitionPtr definition;
    ContextEventListenerSetPtr listeners;
    std::list  history;
    long fireCount;
	void init();

public:
	void registerFiredEvent();
	EventDefinitionPtr getDefinition();
	::std::set  getListeners();
	::std::set  getListenersInfo();
	long getFireCount();
	bool addListener(ContextEventListenerPtr listener, bool weak);
	bool removeListener(ContextEventListenerPtr listener);
	void clearListeners();
	void dispatch(EventPtr event);
	EventPtr store(EventPtr event, int  customMemoryStorageSize);
	std::list  getHistory();
	const std::string & toString();
    int compareTo(EventDataPtr d);

	EventDataPtr(EventDefinitionPtr definition);


};
#endif