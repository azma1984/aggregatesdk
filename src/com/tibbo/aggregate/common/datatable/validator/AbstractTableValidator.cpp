// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/AbstractTableValidator.java
#include <com/tibbo/aggregate/common/datatable/validator/AbstractTableValidator.h"

#include <com/tibbo/aggregate/common/datatable/validator/TableValidator.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Character.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/Throwable.h"

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

com::tibbo::aggregate::common::datatable::validator::AbstractTableValidator::AbstractTableValidator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::validator::AbstractTableValidator::AbstractTableValidator()
    : AbstractTableValidator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool com::tibbo::aggregate::common::datatable::validator::AbstractTableValidator::equals(void* obj)
{
    if(obj == 0) {
        return false;
    }
    if(!(dynamic_cast< TableValidator* >(obj) != 0)) {
        return false;
    }
    return ::com::tibbo::aggregate::common::util::Util::equals(getType(), (java_cast< TableValidator* >(obj)))->getType());
}

void* com::tibbo::aggregate::common::datatable::validator::AbstractTableValidator::clone()
{
    try {
        return super::clone();
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* com::tibbo::aggregate::common::datatable::validator::AbstractTableValidator::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.validator.AbstractTableValidator", 69);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::validator::AbstractTableValidator::getClass0()
{
    return class_();
}

