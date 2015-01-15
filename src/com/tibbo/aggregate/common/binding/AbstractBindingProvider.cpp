// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/AbstractBindingProvider.java
#include <com/tibbo/aggregate/common/binding/AbstractBindingProvider.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/binding/BindingException.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
#include <com/tibbo/aggregate/common/device/DisconnectionException.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/util/ErrorCollector.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/ResourceBundle.h"*/
//#include <org/apache/commons/lang/exception/ExceptionUtils.h"
//#include <org/apache/log4j/Level.h"
//#include <org/apache/log4j/Logger.h"
//#include <org/apache/log4j/Priority.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::binding::AbstractBindingProvider::AbstractBindingProvider(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::binding::AbstractBindingProvider::AbstractBindingProvider() 
    : AbstractBindingProvider(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::binding::AbstractBindingProvider::AbstractBindingProvider(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector) 
    : AbstractBindingProvider(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorCollector);
}

org::apache::log4j::Logger*& com::tibbo::aggregate::common::binding::AbstractBindingProvider::LOGGER()
{
    
    return LOGGER_;
}
org::apache::log4j::Logger* com::tibbo::aggregate::common::binding::AbstractBindingProvider::LOGGER_;

void com::tibbo::aggregate::common::binding::AbstractBindingProvider::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::binding::AbstractBindingProvider::ctor(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector)
{
    super::ctor();
    this->errorCollector = errorCollector;
}

void com::tibbo::aggregate::common::binding::AbstractBindingProvider::processExecution(int method, Binding* binding, EvaluationOptions* options, ::com::tibbo::aggregate::common::expression::Reference* cause, void* result)
{
    switch (method) {
    case EvaluationOptions::STARTUP:
        if(LOGGER())->isDebugEnabled()) {
            LOGGER())->debug(std::stringBuilder().append(u"Evaluating '"_j)->append(binding)->getExpression()))
                ->append(u"' on startup and writing result ("_j)
                ->append(result))
                ->append(u") into '"_j)
                ->append(binding)->getReference()))
                ->append(u"'"_j)->toString());
        }
        break;
    case EvaluationOptions::EVENT:
        if(LOGGER())->isDebugEnabled()) {
            LOGGER())->debug(std::stringBuilder().append(u"Change of '"_j)->append(cause))
                ->append(u"' caused evaluation of '"_j)
                ->append(binding)->getExpression()))
                ->append(u"' and writing result ("_j)
                ->append(result))
                ->append(u") into '"_j)
                ->append(binding)->getReference()))
                ->append(u"'"_j)->toString());
        }
        break;
    case EvaluationOptions::PERIODIC:
        if(LOGGER())->isDebugEnabled()) {
            LOGGER())->debug(std::stringBuilder().append(u"Periodical evaluation of '"_j)->append(binding)->getExpression()))
                ->append(u"' caused writing result ("_j)
                ->append(result))
                ->append(u") into '"_j)
                ->append(binding)->getReference()))
                ->append(u"'"_j)->toString());
        }
        break;
    }

}

void com::tibbo::aggregate::common::binding::AbstractBindingProvider::processError(Binding* binding, int method, ::com::tibbo::aggregate::common::expression::Reference* cause, ::java::lang::Exception* error)
{
    auto message = std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"binBindingError"_j), new voidArray({binding)})))->append(error)->getMessage())->toString();
    if(errorCollector != 0) {
        errorCollector)->addError(new BindingException(message, error));
    } else {
        auto disconnected = ::org::apache::commons::lang::exception::ExceptionUtils::indexOfType(error, ::com::tibbo::aggregate::common::device::DisconnectionException::class_()) != -int(1);
        LOGGER())->log(disconnected ? static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::DEBUG()) : static_cast< ::org::apache::log4j::Priority* >(::org::apache::log4j::Level::ERROR()), message, error);
    }
}



java::lang::Class* com::tibbo::aggregate::common::binding::AbstractBindingProvider::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.AbstractBindingProvider", 58);
    return c;
}

void com::tibbo::aggregate::common::binding::AbstractBindingProvider::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOGGER_ = ::com::tibbo::aggregate::common::Log::BINDINGS();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::binding::AbstractBindingProvider::getClass0()
{
    return class_();
}

