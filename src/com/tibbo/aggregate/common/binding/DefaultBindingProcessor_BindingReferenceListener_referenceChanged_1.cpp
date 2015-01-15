// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1.h"

#include <com/tibbo/aggregate/common/binding/BindingException.h"
#include <com/tibbo/aggregate/common/binding/BindingProvider.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_BindingReferenceListener.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
////#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1::DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1(DefaultBindingProcessor_BindingReferenceListener *DefaultBindingProcessor_BindingReferenceListener_this, ::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultBindingProcessor_BindingReferenceListener_this(DefaultBindingProcessor_BindingReferenceListener_this)
    , cause(cause)
    , environment(environment)
    , cache(cache)
{
    
    ctor();
}

void* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1::call()
{
    try {
        DefaultBindingProcessor_BindingReferenceListener_this->processReferenceChange(cause, environment, cache);
    } catch (BindingException* ex) {
        DefaultBindingProcessor_BindingReferenceListener_this->DefaultBindingProcessor_this->provider)->processError(DefaultBindingProcessor_BindingReferenceListener_this->binding, EvaluationOptions::EVENT, cause, ex);
    }
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1::getClass0()
{
    return class_();
}

