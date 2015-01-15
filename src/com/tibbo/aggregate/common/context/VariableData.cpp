// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableData.java
//#include <com/tibbo/aggregate/common/context/VariableData.h"

#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/lang/reflect/Method.h"
////#include <java/util/concurrent/locks/ReentrantReadWriteLock.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::VariableData::VariableData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::VariableData::VariableData(VariableDefinition* definition) 
    : VariableData(*static_cast< ::default_init_tag* >(0))
{
    ctor(definition);
}

void com::tibbo::aggregate::common::context::VariableData::init()
{
    readWriteLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
}

void com::tibbo::aggregate::common::context::VariableData::ctor(VariableDefinition* definition)
{
    super::ctor();
    init();
    this->definition = definition;
}

void com::tibbo::aggregate::common::context::VariableData::registerGetOperation()
{
    getCount++;
}

void com::tibbo::aggregate::common::context::VariableData::registerSetOperation()
{
    setCount++;
}

com::tibbo::aggregate::common::context::VariableDefinition* com::tibbo::aggregate::common::context::VariableData::getDefinition()
{
    return definition;
}

void* com::tibbo::aggregate::common::context::VariableData::getValue()
{
    return value;
}

void com::tibbo::aggregate::common::context::VariableData::setValue(void* value)
{
    this->value = value;
}

java::util::concurrent::locks::ReentrantReadWriteLock* com::tibbo::aggregate::common::context::VariableData::getReadWriteLock()
{
    return readWriteLock;
}

long com::tibbo::aggregate::common::context::VariableData::getGetCount()
{
    return getCount;
}

long com::tibbo::aggregate::common::context::VariableData::getSetCount()
{
    return setCount;
}

bool com::tibbo::aggregate::common::context::VariableData::isGetterCached()
{
    return getterCached;
}

void com::tibbo::aggregate::common::context::VariableData::setGetterCached(bool getterCached)
{
    this->getterCached = getterCached;
}

bool com::tibbo::aggregate::common::context::VariableData::isSetterCached()
{
    return setterCached;
}

void com::tibbo::aggregate::common::context::VariableData::setSetterCached(bool setterCached)
{
    this->setterCached = setterCached;
}

java::lang::reflect::Method* com::tibbo::aggregate::common::context::VariableData::getGetterMethod()
{
    return getterMethod;
}

void com::tibbo::aggregate::common::context::VariableData::setGetterMethod(::java::lang::reflect::Method* getter)
{
    this->getterMethod = getter;
}

java::lang::reflect::Method* com::tibbo::aggregate::common::context::VariableData::getSetterMethod()
{
    return setterMethod;
}

void com::tibbo::aggregate::common::context::VariableData::setSetterMethod(::java::lang::reflect::Method* setter)
{
    this->setterMethod = setter;
}

int com::tibbo::aggregate::common::context::VariableData::compareTo(VariableData* d)
{
    if(d != 0) {
        return definition)->compareTo(d)->getDefinition());
    }
    return 0;
}

int com::tibbo::aggregate::common::context::VariableData::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< VariableData* >(arg0));
}



java::lang::Class* com::tibbo::aggregate::common::context::VariableData::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.VariableData", 47);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::VariableData::getClass0()
{
    return class_();
}

