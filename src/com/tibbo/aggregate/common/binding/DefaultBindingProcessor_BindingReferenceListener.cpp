// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_BindingReferenceListener.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/binding/BindingException.h"
#include <com/tibbo/aggregate/common/binding/BindingProvider.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
////#include <java/lang/Boolean.h"
////#include <java/lang/Exception.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/lang/String.h"
////#include <java/lang/StringBuilder.h"
////#include <java/util/ResourceBundle.h"
////#include <java/util/concurrent/ExecutorService.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::DefaultBindingProcessor_BindingReferenceListener(DefaultBindingProcessor *DefaultBindingProcessor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultBindingProcessor_this(DefaultBindingProcessor_this)
{
    
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::DefaultBindingProcessor_BindingReferenceListener(DefaultBindingProcessor *DefaultBindingProcessor_this, Binding* binding, EvaluationOptions* options) 
    : DefaultBindingProcessor_BindingReferenceListener(DefaultBindingProcessor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(binding,options);
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::ctor(Binding* binding, EvaluationOptions* options)
{
    super::ctor();
    this->binding = binding;
    this->options = options;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache) /* throws(BindingException) */
{
    referenceChanged(cause, environment, cache, static_cast< ::java::lang::Boolean* >(0));
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache, bool asynchronousProcessing) /* throws(BindingException) */
{
    referenceChanged(cause, environment, cache, ::java::lang::Boolean::valueOf(asynchronousProcessing));
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache, ::java::lang::Boolean* asynchronousProcessing) /* throws(BindingException) */
{
    if(DefaultBindingProcessor_this->stopped || !DefaultBindingProcessor_this->enabled) {
        return;
    }
    auto async = DefaultBindingProcessor_this->executionService != 0 && (asynchronousProcessing == 0 || (asynchronousProcessing))->booleanValue());
    if(async) {
        ::java::util::concurrent::Callable* const task = new DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1(this, cause, environment, cache);
        try {
            DefaultBindingProcessor_this->submit(task);
        } catch (::java::lang::Exception* ex) {
            DefaultBindingProcessor_this->provider)->processError(binding, EvaluationOptions::EVENT, 0, new BindingException(Cres::get())->getString(u"binBindingQueueOverflow"_j), ex));
        }
    } else {
        processReferenceChange(cause, environment, cache);
    }
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::processReferenceChange(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache) /* throws(BindingException) */
{
    if(DefaultBindingProcessor_this->stopped || !DefaultBindingProcessor_this->enabled) {
        return;
    }
    auto evaluationEnvironment = new ::com::tibbo::aggregate::common::expression::EvaluationEnvironment(cause, environment);
    if(DefaultBindingProcessor_this->checkCondition(options, evaluationEnvironment)) {
        try {
            auto result = DefaultBindingProcessor_this->evaluator)->evaluate(binding)->getExpression(), evaluationEnvironment);
            DefaultBindingProcessor_this->provider)->processExecution(EvaluationOptions::EVENT, binding, options, cause, result);
            DefaultBindingProcessor_this->writeReference(EvaluationOptions::EVENT, binding)->getReference(), cause, result, cache);
        } catch (::java::lang::Exception* ex) {
            throw new BindingException(ex)->getMessage(), ex);
        }
    }
}

com::tibbo::aggregate::common::binding::Binding* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::getBinding()
{
    return binding;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::setContent(void* content)
{
    this->content = content;
}

void* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::getContent()
{
    return content;
}

com::tibbo::aggregate::common::binding::BindingProcessor* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::getBindingProcessor()
{
    return DefaultBindingProcessor_this;
}

com::tibbo::aggregate::common::binding::EvaluationOptions* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::getEvaluationOptions()
{
    return options;
}

std::string com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::toString()
{
    return std::stringBuilder().append(u"[binding: "_j)->append(binding))
        ->append(u", options: "_j)
        ->append(options))
        ->append(u"]"_j)->toString();
}



java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.DefaultBindingProcessor.BindingReferenceListener", 83);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener::getClass0()
{
    return class_();
}

