// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AbstractClientController.java
#include "AbstractClientController.h"



/*
AbstractClientController::AbstractClientController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

AbstractClientController::AbstractClientController() 
    : AbstractClientController(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

AbstractClientController::AbstractClientController(ContextManager* contextManager) 
    : AbstractClientController(*static_cast< ::default_init_tag* >(0))
{
    ctor(contextManager);
}

AbstractClientController::AbstractClientController(ContextManager* contextManager, CallerController* callerController) 
    : AbstractClientController(*static_cast< ::default_init_tag* >(0))
{
    ctor(contextManager,callerController);
}

void AbstractClientController::init()
{
    listeners = ::java::util::Collections::synchronizedMap(new ::java::util::Hashtable());
}

void AbstractClientController::ctor()
{
    super::ctor();
    init();
}

void AbstractClientController::ctor(ContextManager* contextManager)
{
    super::ctor();
    init();
    this->contextManager = contextManager;
}

void AbstractClientController::ctor(ContextManager* contextManager, CallerController* callerController)
{
    super::ctor();
    init();
    this->contextManager = contextManager;
    this->callerController = callerController;
}

CallerController* AbstractClientController::getCallerController()
{
    return callerController;
}

void AbstractClientController::setCallerController(CallerController* callerController)
{
    this->callerController = callerController;
}

void AbstractClientController::addMaskListener(const std::string & context, const std::string & name, ContextEventListener* cel, bool weak)
{
    contextManager)->addMaskEventListener(context, name, cel, weak);
    if(weak) {
        auto contextListeners = java_cast< std::map >(listeners)->get(context));
        if(contextListeners == 0) {
            contextListeners = new ::java::util::HashMap();
            listeners)->put(context, contextListeners);
        }
        auto eventListeners = java_cast< ContextEventListenerSet* >(contextListeners)->get(name));
        if(eventListeners == 0) {
            eventListeners = new ContextEventListenerSet();
            contextListeners)->put(name, eventListeners);
        }
        eventListeners)->addListener(cel, false);
    }
}

void AbstractClientController::removeMaskListener(const std::string & context, const std::string & name, ContextEventListener* cel)
{
    contextManager)->removeMaskEventListener(context, name, cel);
    listeners)->remove(cel);
}

ContextManager* AbstractClientController::getContextManager()
{
    return contextManager;
}

void AbstractClientController::shutdown()
{
    listeners)->clear();
}



java::lang::Class* AbstractClientController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.AbstractClientController", 60);
    return c;
}

java::lang::Class* AbstractClientController::getClass0()
{
    return class_();
}
*/
