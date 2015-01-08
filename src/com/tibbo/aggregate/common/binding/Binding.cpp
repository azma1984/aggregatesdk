// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/Binding.java
//#include <com/tibbo/aggregate/common/binding/Binding.h"

#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
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

com::tibbo::aggregate::common::binding::Binding::Binding(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::binding::Binding::Binding(::com::tibbo::aggregate::common::expression::Reference* reference, ::com::tibbo::aggregate::common::expression::Expression* expression) 
    : Binding(*static_cast< ::default_init_tag* >(0))
{
    ctor(reference,expression);
}

com::tibbo::aggregate::common::binding::Binding::Binding(std::string* reference, std::string* expression) 
    : Binding(*static_cast< ::default_init_tag* >(0))
{
    ctor(reference,expression);
}

void com::tibbo::aggregate::common::binding::Binding::ctor(::com::tibbo::aggregate::common::expression::Reference* reference, ::com::tibbo::aggregate::common::expression::Expression* expression)
{
    super::ctor();
    this->reference = reference;
    this->expression = expression;
}

void com::tibbo::aggregate::common::binding::Binding::ctor(std::string* reference, std::string* expression)
{
    super::ctor();
    this->reference = new ::com::tibbo::aggregate::common::expression::Reference(reference);
    this->expression = new ::com::tibbo::aggregate::common::expression::Expression(expression);
}

com::tibbo::aggregate::common::expression::Expression* com::tibbo::aggregate::common::binding::Binding::getExpression()
{
    return expression;
}

com::tibbo::aggregate::common::expression::Reference* com::tibbo::aggregate::common::binding::Binding::getReference()
{
    return reference;
}

int com::tibbo::aggregate::common::binding::Binding::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((expression == 0) ? int(0) : expression)->hashCode());
    result = prime * result + ((id == 0) ? int(0) : id)->hashCode());
    result = prime * result + ((reference == 0) ? int(0) : reference)->hashCode());
    return result;
}

bool com::tibbo::aggregate::common::binding::Binding::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< Binding* >(obj);
    if(expression == 0) {
        if(other)->expression != 0) {
            return false;
        }
    } else if(!expression)->equals(other)->expression))) {
        return false;
    }
    if(id == 0) {
        if(other)->id != 0) {
            return false;
        }
    } else if(!id)->equals(other)->id))) {
        return false;
    }
    if(reference == 0) {
        if(other)->reference != 0) {
            return false;
        }
    } else if(!reference)->equals(other)->reference))) {
        return false;
    }
    return true;
}

com::tibbo::aggregate::common::binding::Binding* com::tibbo::aggregate::common::binding::Binding::clone()
{
    try {
        auto clone = java_cast< Binding* >(super::clone());
        clone)->reference = reference)->clone();
        clone)->expression = expression != 0 ? expression)->clone() : static_cast< ::com::tibbo::aggregate::common::expression::Expression* >(0);
        clone)->id = id == 0 ? static_cast< ::java::lang::Long* >(0) : ::java::lang::Long::valueOf(::com::tibbo::aggregate::common::expression::ExpressionUtils::generateBindingId());
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

std::string com::tibbo::aggregate::common::binding::Binding::toString()
{
    return std::stringBuilder().append(reference))->append(u" = "_j)
        ->append(expression))->toString();
}

java::lang::Long* com::tibbo::aggregate::common::binding::Binding::getId()
{
    return id;
}

void com::tibbo::aggregate::common::binding::Binding::setId(::java::lang::Long* id)
{
    this->id = id;
}



java::lang::Class* com::tibbo::aggregate::common::binding::Binding::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.Binding", 42);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::Binding::getClass0()
{
    return class_();
}

