#include "context/DefaultContextEventListener.h"


//
//DefaultContextEventListener::DefaultContextEventListener(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//DefaultContextEventListener::DefaultContextEventListener() 
//    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//DefaultContextEventListener::DefaultContextEventListener(CallerControllerPtr callerController) 
//    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(callerController);
//}
//
//DefaultContextEventListener::DefaultContextEventListener(CallerControllerPtr callerController, int  listenerCode) 
//    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(callerController,listenerCode);
//}
//
//DefaultContextEventListener::DefaultContextEventListener(CallerControllerPtr callerController, int  listenerCode, ExpressionPtr filter) 
//    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(callerController,listenerCode,filter);
//}
//
//DefaultContextEventListener::DefaultContextEventListener(int  listenerCode) 
//    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(listenerCode);
//}
//
//void DefaultContextEventListener::ctor()
//{
//    super::ctor();
//}
//
//void DefaultContextEventListener::ctor(CallerControllerPtr callerController)
//{
//    ctor();
//    this->callerController = callerController;
//}
//
//void DefaultContextEventListener::ctor(CallerControllerPtr callerController, int  listenerCode)
//{
//    ctor(callerController);
//    this->listenerCode = listenerCode;
//}
//
//void DefaultContextEventListener::ctor(CallerControllerPtr callerController, int  listenerCode, ExpressionPtr filter)
//{
//    ctor(callerController, listenerCode);
//    this->filter = filter;
//}
//
//void DefaultContextEventListener::ctor(int  listenerCode)
//{
//    ctor();
//    this->listenerCode = listenerCode;
//}
//
//bool DefaultContextEventListener::shouldHandle(EventPtr ev) /* throws(EventHandlingException) */
//{
//    if(filter != 0) {
//        if(evaluator == 0) {
//            evaluator = new Evaluator(0, 0, ev)->getData(), java_cast< CallerControllerPtr >(callerController));
//        } else {
//            evaluator)->getDefaultResolver())->setDefaultTable(ev)->getData());
//        }
//        try {
//            if(!evaluator)->evaluateToBoolean(filter)) {
//                return false;
//            }
//        } catch (::java::lang::Exception* ex) {
//            throw new EventHandlingException(ex)->getMessage(), ex);
//        }
//    }
//    if(listenerCode != 0) {
//        if(ev)->getListener() != 0 && !listenerCode)->equals(ev)->getListener()))) {
//            return false;
//        }
//        if(ev)->getListener() == 0 && !acceptEventsWithoutListenerCode) {
//            return false;
//        }
//    }
//    return true;
//}
//
//CallerControllerPtr DefaultContextEventListener::getCallerController()
//{
//    return java_cast< CallerControllerPtr >(callerController);
//}
//
//java::lang::Integer* DefaultContextEventListener::getListenerCode()
//{
//    return listenerCode;
//}
//
//void DefaultContextEventListener::setCallerController(CallerControllerPtr callerController)
//{
//    this->callerController = callerController;
//    if(evaluator != 0) {
//        evaluator)->getDefaultResolver())->setCallerController(callerController);
//    }
//}
//
//void DefaultContextEventListener::setAcceptEventsWithoutListenerCode(bool acceptEventsWithoutListenerCode)
//{
//    this->acceptEventsWithoutListenerCode = acceptEventsWithoutListenerCode;
//}
//
//void DefaultContextEventListener::setFilter(ExpressionPtr filter)
//{
//    this->filter = filter;
//}
//
//ExpressionPtr DefaultContextEventListener::getFilter()
//{
//    return filter;
//}
//
//



