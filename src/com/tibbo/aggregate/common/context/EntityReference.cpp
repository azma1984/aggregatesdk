// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EntityReference.java
#include <com/tibbo/aggregate/common/context/EntityReference.h"

////#include <java/lang/Class.h"
////#include <java/lang/ClassCastException.h"
////#include <java/lang/CloneNotSupportedException.h"
////#include <java/lang/IllegalStateException.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/lang/String.h"
////#include <java/lang/StringBuilder.h"

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

EntityReference::EntityReference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

EntityReference::EntityReference() 
    : EntityReference(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

EntityReference::EntityReference(const std::string & context, const std::string & entity) 
    : EntityReference(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,entity);
}

void EntityReference::ctor()
{
    super::ctor();
}

void EntityReference::ctor(const std::string & context, const std::string & entity)
{
    super::ctor();
    this->context = context;
    this->entity = entity;
}

std::string EntityReference::getContext()
{
    return context;
}

std::string EntityReference::getEntity()
{
    return entity;
}

std::string EntityReference::getProperty()
{
    return entity;
}

void EntityReference::setContext(const std::string & context)
{
    this->context = context;
}

void EntityReference::setEntity(const std::string & entity)
{
    this->entity = entity;
}

void EntityReference::setProperty(const std::string & property)
{
    this->entity = property;
}

int EntityReference::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((context == 0) ? int(0) : context)->hashCode());
    result = prime * result + ((entity == 0) ? int(0) : entity)->hashCode());
    return result;
}

bool EntityReference::equals(void* obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< EntityReference* >(obj);
    if(context == 0) {
        if(other)->context != 0)
            return false;

    } else if(!context)->equals(other)->context)))
        return false;

    if(entity == 0) {
        if(other)->entity != 0)
            return false;

    } else if(!entity)->equals(other)->entity)))
        return false;

    return true;
}

int EntityReference::compareTo(EntityReference* ref)
{
    return toString())->compareTo(ref)->toString());
}

int EntityReference::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< EntityReference* >(arg0));
}

std::string EntityReference::toString()
{
    return std::stringBuilder().append(context)->append(u":"_j)
        ->append(entity)->toString();
}

EntityReference* EntityReference::clone()
{
    try {
        return java_cast< EntityReference* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}



java::lang::Class* EntityReference::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.EntityReference", 50);
    return c;
}

java::lang::Class* EntityReference::getClass0()
{
    return class_();
}

