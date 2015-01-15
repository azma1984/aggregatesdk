// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java
#include "DefaultContextManager.h"



 template <class T> void DefaultContextManager<T>::init()
{
  //  rootContext;
  //  callerController = new UncheckedCallerController();
 //   eventListeners = ::java::util::Collections::synchronizedMap(new ::java::util::Hashtable());
 //   maskListeners = new ::java::util::Hashtable();
 //   maskListenersLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
}

template <class T> DefaultContextManager<T>::DefaultContextManager(bool async)
{
   // init();
	//DefaultContextManager(async,MAX_VALUE);
}

template <class T> DefaultContextManager<T>::DefaultContextManager(bool async, int eventQueueLength)
{
  //  init();
   // this->async = async;
  //  if(async) 
//	{
  //    ensureDispatcher(eventQueueLength);
  //  }
}

 template <class T> DefaultContextManager<T>::DefaultContextManager(Context* rootContext, bool async)
{
   // DefaultContextManager(async);
  //  setRoot(rootContext);
  //  start();
}
/*
void DefaultContextManager::start()
{
    if(async) {
        ensureDispatcher(::java::lang::Integer::MAX_VALUE);
        eventDispatcher)->start();
    }
    if(java_cast< Context* >(rootContext) != 0) {
        java_cast< Context* >(rootContext))->start();
    }
    started = true;
}

void DefaultContextManager::stop()
{
    started = false;
    if(eventDispatcher != 0) {
        eventDispatcher)->interrupt();
        eventDispatcher;
    }
    if(java_cast< Context* >(rootContext) != 0) {
        java_cast< Context* >(rootContext))->stop();
    }
}

void DefaultContextManager::restart()
{
    stop();
    start();
}

void DefaultContextManager::ensureDispatcher(int eventQueueLength)
{
    if(eventDispatcher == 0) {
        eventDispatcher = new DefaultContextManager_EventDispatcher(this, eventQueueLength);
    }
}

Context* DefaultContextManager::getRoot()
{
    return java_cast< Context* >(rootContext);
}

void DefaultContextManager::setRoot(Context* newRoot)
{
    rootContext = newRoot;
    java_cast< Context* >(rootContext))->setup(this);
    contextAdded(newRoot);
}

Context* DefaultContextManager::get(const std::string & contextName, CallerController* caller)
{
    auto root = java_cast< Context* >(getRoot());
    return root != 0 ? java_cast< Context* >(java_cast< Context* >(root)->get(contextName, caller))) : static_cast< Context* >(0);
}

Context* DefaultContextManager::get(const std::string & contextName)
{
    auto root = java_cast< Context* >(getRoot());
    return root != 0 ? java_cast< Context* >(java_cast< Context* >(root)->get(contextName))) : static_cast< Context* >(0);
}

void DefaultContextManager::addEventListener(const std::string & context, const std::string & event, ContextEventListener* listener, bool mask, bool weak)
{
    auto con = java_cast< Context* >(get(context, listener)->getCallerController()));
    if(con != 0) {
        auto events = EventUtils::getEvents(con, event, listener)->getCallerController());
        for (auto _i = events)->iterator(); _i->hasNext(); ) {
            EventDefinition* ed = java_cast< EventDefinition* >(_i->next());
            {
                addListenerToContext(con, ed)->getName(), listener, mask, weak);
            }
        }
    } else {
        if(!mask) {
            auto eel = getListeners(context, event);
            if(!eel)->contains(listener)) {
                eel)->addListener(listener, weak);
            }
        }
    }
}

void DefaultContextManager::addListenerToContext(Context* con, const std::string & event, ContextEventListener* listener, bool mask, bool weak)
{
    auto ed = con)->getEventDefinition(event, listener)->getCallerController());
    if(ed != 0) {
        con)->addEventListener(event, listener, weak);
    }
}

void DefaultContextManager::removeEventListener(const std::string & context, const std::string & event, ContextEventListener* listener, bool mask)
{
    auto con = java_cast< Context* >(get(context, listener)->getCallerController()));
    if(con != 0) {
        if(con)->getEventDefinition(event) != 0) {
            removeListenerFromContext(con, event, listener, mask);
        }
    } else {
        if(!mask) {
            auto eel = getListeners(context, event);
            if(eel != 0) {
                eel)->removeListener(listener);
            }
        }
    }
}

void DefaultContextManager::removeListenerFromContext(Context* con, const std::string & event, ContextEventListener* listener, bool mask)
{
    con)->removeEventListener(event, listener);
}

void DefaultContextManager::addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener)
{
    addMaskEventListener(mask, event, listener, false);
}

void DefaultContextManager::addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener, bool weak)
{
    auto contexts = ContextUtils::expandMaskToPaths(mask, this, listener)->getCallerController());
    for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
        const std::string & con = java_cast< const std::string & >(_i->next());
        {
            addEventListener(con, event, listener, true, weak);
        }
    }
    auto listeners = getMaskListeners(mask, event);
    listeners)->addListener(listener, weak);
}

void DefaultContextManager::removeMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener)
{
    auto contexts = ContextUtils::expandMaskToContexts(mask, this, listener)->getCallerController());
    for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
        Context* con = java_cast< Context* >(_i->next());
        {
            if(!con)->isInitializedEvents()) {
                continue;
            }
            auto events = EventUtils::getEvents(con, event, listener)->getCallerController());
            for (auto _i = events)->iterator(); _i->hasNext(); ) {
                EventDefinition* ed = java_cast< EventDefinition* >(_i->next());
                {
                    removeEventListener(con)->getPath(), ed)->getName(), listener, true);
                }
            }
        }
    }
    auto listeners = getMaskListeners(mask, event);
    listeners)->removeListener(listener);
}

com::tibbo::aggregate::common::event::ContextEventListenerSet* DefaultContextManager::getListeners(const std::string & context, const std::string & event)
{
    auto cel = getContextListeners(context);
    auto cels = java_cast< ContextEventListenerSet* >(cel)->get(event));
    if(cels == 0) {
        cels = new ContextEventListenerSet();
        cel)->put(event, cels);
    }
    return cels;
}

java::util::Map* DefaultContextManager::getContextListeners(const std::string & context)
{
    auto cel = java_cast< std::map >(eventListeners)->get(context));
    if(cel == 0) {
        cel = ::java::util::Collections::synchronizedMap(new ::java::util::Hashtable());
        eventListeners)->put(context, cel);
    }
    return cel;
}

com::tibbo::aggregate::common::event::ContextEventListenerSet* DefaultContextManager::getMaskListeners(const std::string & mask, const std::string & event)
{
    auto cel = getContextMaskListeners(mask);
    auto eel = java_cast< ContextEventListenerSet* >(cel)->get(event));
    if(eel == 0) {
        eel = new ContextEventListenerSet();
        cel)->put(event, eel);
    }
    return eel;
}

java::util::Map* DefaultContextManager::getContextMaskListeners(const std::string & mask)
{
    std::map cel;
    maskListenersLock)->readLock())->lock();
    {
        auto finally0 = finally([&] {
            maskListenersLock)->readLock())->unlock();
        });
        {
            cel = java_cast< std::map >(maskListeners)->get(mask));
        }
    }

    if(cel == 0) {
        cel = ::java::util::Collections::synchronizedMap(new ::java::util::Hashtable());
        maskListenersLock)->writeLock())->lock();
        {
            auto finally1 = finally([&] {
                maskListenersLock)->writeLock())->unlock();
            });
            {
                maskListeners)->put(mask, cel);
            }
        }

    }
    return cel;
}

void DefaultContextManager::contextAdded(Context* con)
{
    auto cel = java_cast< std::map >(eventListeners)->get(con)->getPath()));
    if(cel != 0) {
        for (auto _i = cel)->keySet())->iterator(); _i->hasNext(); ) {
            const std::string & event = java_cast< const std::string & >(_i->next());
            {
                auto cels = java_cast< ContextEventListenerSet* >(cel)->get(event));
                {
                    synchronized synchronized_0(cels);
                    {
                        for (auto _i = cels)->getListenersInfo())->iterator(); _i->hasNext(); ) {
                            ContextEventListenerInfo* celi = java_cast< ContextEventListenerInfo* >(_i->next());
                            {
                                if(con)->getEventData(event) != 0) {
                                    con)->addEventListener(event, celi)->getListener(), celi)->isWeak());
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    maskListenersLock)->readLock())->lock();
    {
        auto finally2 = finally([&] {
            maskListenersLock)->readLock())->unlock();
        });
        {
            for (auto _i = maskListeners)->keySet())->iterator(); _i->hasNext(); ) {
                const std::string & mask = java_cast< const std::string & >(_i->next());
                {
                    if(ContextUtils::matchesToMask(mask, con)->getPath())) {
                        auto mcel = getContextMaskListeners(mask);
                        for (auto _i = mcel)->keySet())->iterator(); _i->hasNext(); ) {
                            const std::string & event = java_cast< const std::string & >(_i->next());
                            {
                                auto listeners = java_cast< ContextEventListenerSet* >(mcel)->get(event));
                                {
                                    synchronized synchronized_1(listeners);
                                    {
                                        for (auto _i = listeners)->getListenersInfo())->iterator(); _i->hasNext(); ) {
                                            ContextEventListenerInfo* li = java_cast< ContextEventListenerInfo* >(_i->next());
                                            {
                                                auto events = EventUtils::getEvents(con, event, li)->getListener())->getCallerController());
                                                for (auto _i = events)->iterator(); _i->hasNext(); ) {
                                                    EventDefinition* ed = java_cast< EventDefinition* >(_i->next());
                                                    {
                                                        addListenerToContext(con, ed)->getName(), li)->getListener(), true, li)->isWeak());
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}

void DefaultContextManager::contextRemoved(Context* con)
{
    try {
        con)->accept(new DefaultContextManager_contextRemoved_1(this));
        con)->accept(new DefaultContextManager_contextRemoved_2(this));
    } catch (ContextException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

void DefaultContextManager::contextInfoChanged(Context* con)
{
}

void DefaultContextManager::variableAdded(Context* con, VariableDefinition* vd)
{
}

void DefaultContextManager::variableRemoved(Context* con, VariableDefinition* vd)
{
}

void DefaultContextManager::functionAdded(Context* con, FunctionDefinition* fd)
{
}

void DefaultContextManager::functionRemoved(Context* con, FunctionDefinition* fd)
{
}

void DefaultContextManager::eventAdded(Context* con, EventDefinition* ed)
{
    maskListenersLock)->readLock())->lock();
    {
        auto finally3 = finally([&] {
            maskListenersLock)->readLock())->unlock();
        });
        {
            for (auto _i = maskListeners)->keySet())->iterator(); _i->hasNext(); ) {
                const std::string & mask = java_cast< const std::string & >(_i->next());
                {
                    if(ContextUtils::matchesToMask(mask, con)->getPath())) {
                        auto cel = getContextMaskListeners(mask);
                        for (auto _i = cel)->keySet())->iterator(); _i->hasNext(); ) {
                            const std::string & event = java_cast< const std::string & >(_i->next());
                            {
                                if(EventUtils::matchesToMask(event, ed)) {
                                    auto listeners = java_cast< ContextEventListenerSet* >(cel)->get(event));
                                    {
                                        synchronized synchronized_2(listeners);
                                        {
                                            for (auto _i = listeners)->getListenersInfo())->iterator(); _i->hasNext(); ) {
                                                ContextEventListenerInfo* li = java_cast< ContextEventListenerInfo* >(_i->next());
                                                {
                                                    addListenerToContext(java_cast< Context* >(con), ed)->getName(), li)->getListener(), true, li)->isWeak());
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}

void DefaultContextManager::eventRemoved(Context* con, EventDefinition* ed)
{
}

void DefaultContextManager::queue(EventData* ed, Event* ev)
{
    if(!async || ed)->getDefinition())->isSynchronous()) {
        ed)->dispatch(ev);
    } else {
        if(eventDispatcher == 0) {
            Log::CONTEXT_EVENTS())->debug(std::stringBuilder().append(u"Cannot queue event '"_j)->append(ev))
                ->append(u"': context manager is not running"_j)->toString());
            return;
        }
        auto qe = new DefaultContextManager_QueuedEvent(this, ed, ev);
        try {
            eventDispatcher)->queue(qe);
        } catch (::java::lang::InterruptedException* ex1) {
            auto interrupted = ::java::lang::Thread::interrupted();
            {
                auto finally4 = finally([&] {
                    if(interrupted) {
                        ::java::lang::Thread::currentThread())->interrupt();
                    }
                });
                try {
                    eventDispatcher)->queue(qe);
                } catch (::java::lang::InterruptedException* ex) {
                    throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
                }
            }
        }
    }
}

void DefaultContextManager::setExecutorService(::java::util::concurrent::ThreadPoolExecutor* executorService)
{
    this->executorService = executorService;
}

java::util::concurrent::ThreadPoolExecutor* DefaultContextManager::getExecutorService()
{
    return executorService;
}

CallerController* DefaultContextManager::getCallerController()
{
    return callerController;
}

int DefaultContextManager::getEventQueueLength()
{
    return eventDispatcher != 0 ? eventDispatcher)->getQueueLength() : int(0);
}

bool DefaultContextManager::isStarted()
{
    return started;
}

*/
