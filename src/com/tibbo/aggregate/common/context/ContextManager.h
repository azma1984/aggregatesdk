#pragma once

#include <boost/shared_ptr.hpp>

class Context;
class CallerController;
class ContextEventListener;
class VariableDefinition;
class FunctionDefinition;
class EventDefinition;
class EventData;
class Event;
class ExecutorService;

class ContextManager
{
public:

    /**
     * Starts event dispatcher thread<br>
     */
    virtual void start() = 0;

    /**
     * Calls stop() and then start()
     */
    virtual void restart() = 0;

    /**
     * 1. Stops the event dispatcher<br>
     * 2. Calls stop() of root context
     */
    virtual void stop() = 0;

    /**
     * Get root context.
     *
     * @return Root context of the managed context tree
     */
    virtual boost::shared_ptr<Context> getRoot() = 0;

    /**
      * Get specified context using specified CallerController for permission checking.
      *
      * Note: getting contexts via context manager should not be used in distributed environment. Use {@link Context#get(String, CallerController)} method of a "reference" context instead to ensure
      * proper paths conversion.
      *
      * @param caller
      *          CallerController used for permission checking
      * @param contextName
      *          Context full name
      * @return Requested context or null if this context not exist or not available with current permissions
      */
    virtual boost::shared_ptr<Context> get(const std::string &contextName, boost::shared_ptr<CallerController> caller) = 0;

    /**
      * Get specifies context without CallerController. Internally calls get(null, contextName);
      *
      * Note: getting contexts via context manager should not be used in distributed environment. Use {@link Context#get(String)} method of a "reference" context instead to ensure proper paths
      * conversion.
      *
      * @param contextName
      *          Context full name
      * @return Requested context or null if this context not exist or not available with current permissions
      */
     virtual boost::shared_ptr<Context> get(const std::string &contextName) = 0;

     /**
      * Adds event listener to specified event to every context satisfying context mask.
      */
     virtual void addMaskEventListener(const std::string &mask, const std::string &event, boost::shared_ptr<ContextEventListener> listener) = 0;

     /**
      * Adds event listener to specified event to every context satisfying context mask.
      */
     virtual void addMaskEventListener(const std::string &mask, const std::string &event, boost::shared_ptr<ContextEventListener> listener, bool weak) = 0;

     /**
      * Removes event listener of event 'event' from every context satisfying event mask.
      */
     virtual void removeMaskEventListener(const std::string &mask, const std::string &event, boost::shared_ptr<ContextEventListener> listener) = 0;

     /**
      * Called when new context is added to the context manager
      */
     virtual void contextAdded(boost::shared_ptr<Context> con) = 0;

     /**
      * Called when context is removed from the context manager
      */
     virtual void contextRemoved(boost::shared_ptr<Context> con) = 0;

     /**
      * Called when context basic info is changed
      */
     virtual void contextInfoChanged(boost::shared_ptr<Context> con) = 0;

     /**
      * Called when new variable definition is added to a context
      */
     virtual void variableAdded(boost::shared_ptr<Context> con, boost::shared_ptr<VariableDefinition> vd) = 0;

     /**
      * Called when variable definition is removed from a context
      */
     virtual void variableRemoved(boost::shared_ptr<Context> con, boost::shared_ptr<VariableDefinition> vd) = 0;

     /**
      * Called when new function definition is added to a context
      */
     virtual void functionAdded(boost::shared_ptr<Context> con, boost::shared_ptr<FunctionDefinition> fd) = 0;

     /**
      * Called when function definition is removed from a context
      */
     virtual void functionRemoved(boost::shared_ptr<Context> con, boost::shared_ptr<FunctionDefinition> fd) = 0;

     /**
      * Called when new event definition is added to a context
      */
     virtual void eventAdded(boost::shared_ptr<Context> con, boost::shared_ptr<EventDefinition> ed) = 0;

     /**
      * Called when event definition is removed from a context
      */
     virtual void eventRemoved(boost::shared_ptr<Context> con, boost::shared_ptr<EventDefinition> ed) = 0;

     /**
      * Called when event if fired in one of the contexts in the tree
      */
     virtual void queue(boost::shared_ptr<EventData> ed, boost::shared_ptr<Event> ev) = 0;

     /**
      * Returns context manager's task execution service
      */
     virtual boost::shared_ptr<ExecutorService> getExecutorService() = 0;

     /**
      * Returns caller controller used by context manager for internal operations. This controller is unsafe since it doesn't perform any permission checking.
      */
     virtual boost::shared_ptr<CallerController> getCallerController() = 0;

};
