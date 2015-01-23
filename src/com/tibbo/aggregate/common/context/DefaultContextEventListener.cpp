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
//DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController) 
//    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(callerController);
//}
//
//DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController, int  listenerCode) 
//    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(callerController,listenerCode);
//}
//
//DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController, int  listenerCode, Expression* filter) 
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
//void DefaultContextEventListener::ctor(CallerController* callerController)
//{
//    ctor();
//    this->callerController = callerController;
//}
//
//void DefaultContextEventListener::ctor(CallerController* callerController, int  listenerCode)
//{
//    ctor(callerController);
//    this->listenerCode = listenerCode;
//}
//
//void DefaultContextEventListener::ctor(CallerController* callerController, int  listenerCode, Expression* filter)
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
//bool DefaultContextEventListener::shouldHandle(Event* ev) /* throws(EventHandlingException) */
//{
//    if(filter != 0) {
//        if(evaluator == 0) {
//            evaluator = new Evaluator(0, 0, ev)->getData(), java_cast< CallerController* >(callerController));
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
//CallerController* DefaultContextEventListener::getCallerController()
//{
//    return java_cast< CallerController* >(callerController);
//}
//
//java::lang::Integer* DefaultContextEventListener::getListenerCode()
//{
//    return listenerCode;
//}
//
//void DefaultContextEventListener::setCallerController(CallerController* callerController)
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
//void DefaultContextEventListener::setFilter(Expression* filter)
//{
//    this->filter = filter;
//}
//
//Expression* DefaultContextEventListener::getFilter()
//{
//    return filter;
//}
//
//



