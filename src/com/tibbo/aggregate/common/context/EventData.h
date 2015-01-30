#ifndef EventDataH
#define EventDataH
#define BOOST_THREAD_USE_LIB
#include "util/Comparable.h"
//#include "Log.h"
#include "context/EventDefinition.h"
#include "data/Event.h"
#include "event/ContextEventListener.h"
#include "event/ContextEventListenerSet.h"
#include "util/Util.h"
#include "util/pointers.h"
//todo - class stub
class EventData: public Comparable
{

private:
	EventDefinitionPtr definition;
    ContextEventListenerSetPtr listeners;
	std::list<EventPtr>  history;
	long fireCount;
	void init();

public:
	void registerFiredEvent();
	EventDefinitionPtr getDefinition();
	std::set<ContextEventListenerPtr>  getListeners();
	std::set<ContextEventListenerInfoPtr>  getListenersInfo();
	long getFireCount();
	bool addListener(ContextEventListenerPtr listener, bool weak);
	bool removeListener(ContextEventListenerPtr listener);
	void clearListeners();
	void dispatch(EventPtr event);
	EventPtr store(EventPtr event, int  customMemoryStorageSize);
	std::list<EventPtr>  getHistory();
	const std::string & toString();
    int compareTo(EventDataPtr d);

	EventData(EventDefinitionPtr definition);
};
#endif