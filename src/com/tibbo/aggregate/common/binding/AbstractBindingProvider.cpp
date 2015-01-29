#include "binding/AbstractBindingProvider.h"

//#include "Cres.h"
//#include "Log.h"
//#include "binding/Binding.h"
//#include "binding/BindingException.h"
#include "binding/EvaluationOptions.h"
//#include "device/DisconnectionException.h"
//#include "expression/Expression.h"
//#include "expression/Reference.h"


AbstractBindingProvider::AbstractBindingProvider()
{

}

AbstractBindingProvider::AbstractBindingProvider(ErrorCollectorPtr errorCollector)
{
	this->errorCollector = errorCollector;
}

//void AbstractBindingProvider::processExecution(
//	int event,
//	BindingPtr binding,
//	EvaluationOptionsPtr options,
//	ReferencePtr cause,
//    AgObjectPtr result
//) {
//    switch (event)
//    {
//		case EvaluationOptions::STARTUP:
////            if (LOGGER.isDebugEnabled())
////            {
////              LOGGER.debug("Evaluating '" + binding.getExpression() + "' on startup and writing result (" + result + ") into '" + binding.getReference() + "'");
////            }
//        break;
//
//		case EvaluationOptions::EVENT:
////            if (LOGGER.isDebugEnabled())
////            {
////              LOGGER.debug("Change of '" + cause + "' caused evaluation of '" + binding.getExpression() + "' and writing result (" + result + ") into '" + binding.getReference() + "'");
////            }
//		break;
//
//        case EvaluationOptions::PERIODIC:
////            if (LOGGER.isDebugEnabled())
////            {
////              LOGGER.debug("Periodical evaluation of '" + binding.getExpression() + "' caused writing result (" + result + ") into '" + binding.getReference() + "'");
////            }
//		break;
//    }
//}
//
//void AbstractBindingProvider::processError(
//	BindingPtr binding,
//    int method,
//	ReferencePtr cause,
//	ExceptionPtr error
//) {
////    std::string message = MessageFormat.format(Cres::get()->getString("binBindingError"), binding) + error.getMessage();
//    std::string message = std::string(Cres::get()->getString("binBindingError")).append(binding->toString())
//                                    .append(error->getMessage());
//
//    if (errorCollector != NULL)
//	{
//        errorCollector->addError(new BindingException(message, error));
//	}else {
//        //bool disconnected = ExceptionUtils.indexOfType(error, DisconnectionException.class) != -1;
//		//LOGGER.log(disconnected ? Level.DEBUG : Level.ERROR, message, error);
//	}
//}
