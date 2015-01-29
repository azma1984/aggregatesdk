
#ifndef AbstractClientControllerH
#define AbstractClientControllerH

#include "context/CallerController.h"
#include "context/ContextManager.h"
#include "event/ContextEventListener.h"
#include "event/ContextEventListenerSet.h"



class AbstractClientController
{

private:
    ContextManagerPtr contextManager;
    CallerControllerPtr callerController;
    std::map< std::string, std::map<std::string, ContextEventListenerSet> > listeners;

public:
    CallerControllerPtr getCallerController();
    void setCallerController(CallerControllerPtr callerController);
    void addMaskListener(const std::string & context, const std::string & name, ContextEventListenerPtr cel, bool weak);
    void removeMaskListener(const std::string & context, const std::string & name, ContextEventListenerPtr cel);
    ContextManagerPtr getContextManager();
    void shutdown();


    AbstractClientController();
    AbstractClientController(ContextManagerPtr contextManager);
    AbstractClientController(ContextManagerPtr contextManager, CallerControllerPtr callerController);

};

#endif
