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

VariableData::VariableData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

VariableData::VariableData(VariableDefinition* definition) 
    : VariableData(*static_cast< ::default_init_tag* >(0))
{
    ctor(definition);
}

void VariableData::init()
{
    readWriteLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
}

void VariableData::ctor(VariableDefinition* definition)
{
    super::ctor();
    init();
    this->definition = definition;
}

void VariableData::registerGetOperation()
{
    getCount++;
}

void VariableData::registerSetOperation()
{
    setCount++;
}

VariableDefinition* VariableData::getDefinition()
{
    return definition;
}

void* VariableData::getValue()
{
    return value;
}

void VariableData::setValue(void* value)
{
    this->value = value;
}

java::util::concurrent::locks::ReentrantReadWriteLock* VariableData::getReadWriteLock()
{
    return readWriteLock;
}

long VariableData::getGetCount()
{
    return getCount;
}

long VariableData::getSetCount()
{
    return setCount;
}

bool VariableData::isGetterCached()
{
    return getterCached;
}

void VariableData::setGetterCached(bool getterCached)
{
    this->getterCached = getterCached;
}

bool VariableData::isSetterCached()
{
    return setterCached;
}

void VariableData::setSetterCached(bool setterCached)
{
    this->setterCached = setterCached;
}

java::lang::reflect::Method* VariableData::getGetterMethod()
{
    return getterMethod;
}

void VariableData::setGetterMethod(::java::lang::reflect::Method* getter)
{
    this->getterMethod = getter;
}

java::lang::reflect::Method* VariableData::getSetterMethod()
{
    return setterMethod;
}

void VariableData::setSetterMethod(::java::lang::reflect::Method* setter)
{
    this->setterMethod = setter;
}

int VariableData::compareTo(VariableData* d)
{
    if(d != 0) {
        return definition)->compareTo(d)->getDefinition());
    }
    return 0;
}

int VariableData::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< VariableData* >(arg0));
}



java::lang::Class* VariableData::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.VariableData", 47);
    return c;
}

java::lang::Class* VariableData::getClass0()
{
    return class_();
}

