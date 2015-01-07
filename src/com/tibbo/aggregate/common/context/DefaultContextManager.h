// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java

#pragma once

#include <ContextManager.h>


template <class T> class DefaultContextManager: public ContextManager<T>
{
   /*
public:
    typedef void super;

private:
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

public:
    void start();
    void stop();
    void restart();

private:
    void ensureDispatcher(int eventQueueLength);

public:
    Context* getRoot();
    void setRoot(Context* newRoot);
    Context* get(std::string* contextName, CallerController* caller);
    Context* get(std::string* contextName);

private:
    void addEventListener(std::string* context, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask, bool weak);

public:
    void addListenerToContext(Context* con, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask, bool weak);

private:
    void removeEventListener(std::string* context, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask);

public:
    void removeListenerFromContext(Context* con, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask);

public:
    void addMaskEventListener(std::string* mask, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    void addMaskEventListener(std::string* mask, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool weak);
    void removeMaskEventListener(std::string* mask, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);

public:
    ::com::tibbo::aggregate::common::event::ContextEventListenerSet* getListeners(std::string* context, std::string* event);

private:
    std::map getContextListeners(std::string* context);
    ::com::tibbo::aggregate::common::event::ContextEventListenerSet* getMaskListeners(std::string* mask, std::string* event);
    std::map getContextMaskListeners(std::string* mask);

public:
    void contextAdded(Context* con);
    void contextRemoved(Context* con);
    void contextInfoChanged(Context* con);
    void variableAdded(Context* con, VariableDefinition* vd);
    void variableRemoved(Context* con, VariableDefinition* vd);
    void functionAdded(Context* con, FunctionDefinition* fd);
    void functionRemoved(Context* con, FunctionDefinition* fd);
    void eventAdded(Context* con, EventDefinition* ed);
    void eventRemoved(Context* con, EventDefinition* ed);
    void queue(EventData* ed, ::com::tibbo::aggregate::common::data::Event* ev);

public:
    void setExecutorService(::java::util::concurrent::ThreadPoolExecutor* executorService);

public:
    ::java::util::concurrent::ThreadPoolExecutor* getExecutorService();
    CallerController* getCallerController();
    int getEventQueueLength();
    bool isStarted();


    DefaultContextManager(bool async);
    DefaultContextManager(bool async, int eventQueueLength);
    DefaultContextManager(Context* rootContext, bool async);
protected:
    DefaultContextManager(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
    friend class DefaultContextManager_contextRemoved_1;
    friend class DefaultContextManager_contextRemoved_2;
    friend class DefaultContextManager_EventDispatcher;
    friend class DefaultContextManager_EventDispatcher_queue_1;
	friend class DefaultContextManager_QueuedEvent; */
};
