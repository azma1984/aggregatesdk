#include "binding/AbstractBindingProvider.h"

//#include <com/tibbo/aggregate/common/Cres.h"
//#include <com/tibbo/aggregate/common/Log.h"
//#include <com/tibbo/aggregate/common/binding/Binding.h"
//#include <com/tibbo/aggregate/common/binding/BindingException.h"
#include "binding/EvaluationOptions.h"
//#include <com/tibbo/aggregate/common/device/DisconnectionException.h"
//#include <com/tibbo/aggregate/common/expression/Expression.h"
//#include <com/tibbo/aggregate/common/expression/Reference.h"


AbstractBindingProvider::AbstractBindingProvider()
{

}

AbstractBindingProvider::AbstractBindingProvider(ErrorCollectorPtr errorCollector)
{
    this->errorCollector = errorCollector;
}

void AbstractBindingProvider::processExecution(
    int event,
    boost::BindingPtr binding,
    boost::EvaluationOptionsPtr options,
    boost::ReferencePtr cause,
    AgObjectPtr result
) {
    switch (event)
    {
        case EvaluationOptions::STARTUP:
//            if (LOGGER.isDebugEnabled())
//            {
//              LOGGER.debug("Evaluating '" + binding.getExpression() + "' on startup and writing result (" + result + ") into '" + binding.getReference() + "'");
//            }
        break;

        case EvaluationOptions::EVENT:
//            if (LOGGER.isDebugEnabled())
//            {
//              LOGGER.debug("Change of '" + cause + "' caused evaluation of '" + binding.getExpression() + "' and writing result (" + result + ") into '" + binding.getReference() + "'");
//            }
        break;

        case EvaluationOptions::PERIODIC:
//            if (LOGGER.isDebugEnabled())
//            {
//              LOGGER.debug("Periodical evaluation of '" + binding.getExpression() + "' caused writing result (" + result + ") into '" + binding.getReference() + "'");
//            }
        break;
    }
}

void AbstractBindingProvider::processError(
    boost::BindingPtr binding,
    int method,
    boost::ReferencePtr cause,
    boost::ExceptionPtr error
) {
//    std::string message = MessageFormat.format(Cres::get()->getString("binBindingError"), binding) + error.getMessage();
    std::string message = std::string(Cres::get()->getString("binBindingError")).append(binding->toString())
                                    .append(error->getMessage());

    if (errorCollector != NULL)
    {
        errorCollector->addError(new BindingException(message, error));
    }else {
        //bool disconnected = ExceptionUtils.indexOfType(error, DisconnectionException.class) != -1;
        //LOGGER.log(disconnected ? Level.DEBUG : Level.ERROR, message, error);
    }
}
