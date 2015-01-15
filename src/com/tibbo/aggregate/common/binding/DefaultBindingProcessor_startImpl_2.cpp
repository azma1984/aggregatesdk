// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java
//#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_startImpl_2.h"

#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/binding/BindingProvider.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
/*
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Map.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_startImpl_2::DefaultBindingProcessor_startImpl_2(DefaultBindingProcessor *DefaultBindingProcessor_this, Binding* binding, std::map bindings)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultBindingProcessor_this(DefaultBindingProcessor_this)
    , binding(binding)
    , bindings(bindings)
{
    
    ctor();
}

void* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_startImpl_2::call() /* throws(Exception) */
{
    try {
        DefaultBindingProcessor_this->initBinding(binding, java_cast< EvaluationOptions* >(bindings)->get(binding)));
    } catch (::java::lang::Exception* ex) {
        DefaultBindingProcessor_this->provider)->processError(binding, EvaluationOptions::STARTUP, 0, ex);
    }
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_startImpl_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_startImpl_2::getClass0()
{
    return class_();
}

