#ifndef DefaultContextManagerH
#define DefaultContextManagerH

#define BOOST_THREAD_USE_LIB
//#include "context/ContextManager.h"

//#include "context/CallerController.h"
#include "context/Context.h"
//#include "context/ContextException.h"
//#include "context/ContextUtils.h"
//#include "context/DefaultContextManager_contextRemoved_2.h"
//#include "context/DefaultContextManager_contextRemoved_1.h"
//#include "context/DefaultContextManager_EventDispatcher.h"
//#include "context/DefaultContextManager_QueuedEvent.h"
//#include "context/EventDataPtr.h"
#include "context/EventDefinition.h"
//#include "context/UncheckedCallerController.h"
//#include "data/Event.h"
//#include "event/ContextEventListener.h"
//#include "event/ContextEventListenerInfo.h"
//#include "event/ContextEventListenerSet.h"
//#include "event/EventUtils.h"


//todo - class stub
template <class T> class DefaultContextManager: public ContextManager<T>
{
  private:
	void init();

  public:

    bool async;
	ContextPtr rootContext;
    CallerControllerPtr callerController;
	EventDispatcherPtr eventDispatcher;
	std::map eventListeners;
    std::map maskListeners;
    boost::shared_mutex maskListenersLock;
  //  ::java::util::concurrent::ThreadPoolExecutor* executorService;  todo
    bool started;

    void start();
    void stop();
    void restart();

private:
    void ensureDispatcher(int eventQueueLength);

public:
    ContextPtr getRoot();
    void setRoot(ContextPtr newRoot);
    ContextPtr get(const std::string & contextName, CallerControllerPtr caller);
    ContextPtr get(const std::string & contextName);

private:
    void addEventListener(const std::string & context, const std::string & event, ContextEventListenerPtr listener, bool mask, bool weak);

public:
    void addListenerToContext(ContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask, bool weak);

private:
    void removeEventListener(const std::string & context, const std::string & event, ContextEventListenerPtr listener, bool mask);

public:
    void removeListenerFromContext(ContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask);

public:
    void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener);
    void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener, bool weak);
    void removeMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener);

public:
    ContextEventListenerSetPtr getListeners(const std::string & context, const std::string & event);

private:
    std::map getContextListeners(const std::string & context);
    ContextEventListenerSetPtr getMaskListeners(const std::string & mask, const std::string & event);
    std::map getContextMaskListeners(const std::string & mask);

public:
    void contextAdded(ContextPtr con);
    void contextRemoved(ContextPtr con);
    void contextInfoChanged(ContextPtr con);
    void variableAdded(ContextPtr con, VariableDefinitionPtr vd);
    void variableRemoved(ContextPtr con, VariableDefinitionPtr vd);
    void functionAdded(ContextPtr con, FunctionDefinitionPtr fd);
	void functionRemoved(ContextPtr con, FunctionDefinitionPtr fd);
	void eventAdded(ContextPtr con, EventDefinitionPtr ed);
    void eventRemoved(ContextPtr con, EventDefinitionPtr ed);
    void queue(EventDataPtr ed, EventPtr ev);

	//todo
  //  void setExecutorService(::java::util::concurrent::ThreadPoolExecutor* executorService);

   //todo
   // ::java::util::concurrent::ThreadPoolExecutor* getExecutorService();
    CallerControllerPtr getCallerController();
    int getEventQueueLength();
    bool isStarted();


	DefaultContextManager(bool async);
    DefaultContextManager(bool async, int eventQueueLength);
    DefaultContextManager(ContextPtrrootContext, bool async);



};
#endif