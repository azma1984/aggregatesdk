// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java

#ifndef DefaultContextManagerH
#define DefaultContextManagerH

#include "ContextManager.h"

//#include <com/tibbo/aggregate/common/context/CallerController.h"
#include "context/Context.h"
//#include <com/tibbo/aggregate/common/context/ContextException.h"
//#include <com/tibbo/aggregate/common/context/ContextUtils.h"
//#include <com/tibbo/aggregate/common/context/DefaultContextManager_contextRemoved_2.h"
//#include <com/tibbo/aggregate/common/context/DefaultContextManager_contextRemoved_1.h"
//#include <com/tibbo/aggregate/common/context/DefaultContextManager_EventDispatcher.h"
//#include <com/tibbo/aggregate/common/context/DefaultContextManager_QueuedEvent.h"
//#include <com/tibbo/aggregate/common/context/EventData.h"
#include "context/EventDefinition.h"
//#include <com/tibbo/aggregate/common/context/UncheckedCallerController.h"
//#include <com/tibbo/aggregate/common/data/Event.h"
//#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
//#include <com/tibbo/aggregate/common/event/ContextEventListenerInfo.h"
//#include <com/tibbo/aggregate/common/event/ContextEventListenerSet.h"
//#include <com/tibbo/aggregate/common/event/EventUtils.h"



template <class T> class DefaultContextManager: public ContextManager<T>
{
  private:
	void init();

  public:
   /*


    bool async;
	Context* rootContext;
    CallerController* callerController;
    DefaultContextManager_EventDispatcher* eventDispatcher;
    std::map eventListeners;
    std::map maskListeners;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* maskListenersLock;
    ::java::util::concurrent::ThreadPoolExecutor* executorService;
    bool started;
protected:
    void ctor(bool async);
    void ctor(bool async, int eventQueueLength);
    void ctor(Context* rootContext, bool async);


    void start();
    void stop();
    void restart();

private:
    void ensureDispatcher(int eventQueueLength);

public:
    Context* getRoot();
    void setRoot(Context* newRoot);
    Context* get(const std::string & contextName, CallerController* caller);
    Context* get(const std::string & contextName);

private:
    void addEventListener(const std::string & context, const std::string & event, ContextEventListener* listener, bool mask, bool weak);

public:
    void addListenerToContext(Context* con, const std::string & event, ContextEventListener* listener, bool mask, bool weak);

private:
    void removeEventListener(const std::string & context, const std::string & event, ContextEventListener* listener, bool mask);

public:
    void removeListenerFromContext(Context* con, const std::string & event, ContextEventListener* listener, bool mask);

public:
    void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener);
    void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener, bool weak);
    void removeMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener);

public:
    ContextEventListenerSet* getListeners(const std::string & context, const std::string & event);

private:
    std::map getContextListeners(const std::string & context);
    ContextEventListenerSet* getMaskListeners(const std::string & mask, const std::string & event);
    std::map getContextMaskListeners(const std::string & mask);

public:
    void contextAdded(Context* con);
    void contextRemoved(Context* con);
    void contextInfoChanged(Context* con);
    void variableAdded(Context* con, VariableDefinition* vd);
    void variableRemoved(Context* con, VariableDefinition* vd);
    void functionAdded(Context* con, FunctionDefinition* fd);
    void functionRemoved(Context* con, FunctionDefinition* fd);*/
    void eventAdded(Context* con, EventDefinition* ed);/*
    void eventRemoved(Context* con, EventDefinition* ed);
    void queue(EventData* ed, Event* ev);


    void setExecutorService(::java::util::concurrent::ThreadPoolExecutor* executorService);


    ::java::util::concurrent::ThreadPoolExecutor* getExecutorService();
    CallerController* getCallerController();
    int getEventQueueLength();
    bool isStarted();
	*/
public:
    DefaultContextManager(bool async);
    DefaultContextManager(bool async, int eventQueueLength);
    DefaultContextManager(Context *rootContext, bool async);

	/*

public:
    

private:
    
    friend class DefaultContextManager_contextRemoved_1;
    friend class DefaultContextManager_contextRemoved_2;
    friend class DefaultContextManager_EventDispatcher;
    friend class DefaultContextManager_EventDispatcher_queue_1;
	friend class DefaultContextManager_QueuedEvent; */
};
#endif