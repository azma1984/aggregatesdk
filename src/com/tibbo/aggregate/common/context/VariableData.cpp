// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableData.java
#include "context/VariableData.h"



VariableData::VariableData(VariableDefinitionPtr definition)
{
    this->getCount = 0;
    this->setCount = 0;
    this->getterCached = false;
    this->setterCached = false;
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

VariableDefinitionPtr VariableData::getDefinition()
{
    return definition;
}

AgObjectPtr VariableData::getValue()
{
    return value;
}

void VariableData::setValue(AgObjectPtr value)
{
    this->value = value;
}

boost::shared_mutex& VariableData::getReadWriteLock()
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

//TODO:
//java::lang::reflect::Method* VariableData::getGetterMethod()
//{
//    return getterMethod;
//}

//void VariableData::setGetterMethod(::java::lang::reflect::Method* getter)
//{
//    this->getterMethod = getter;
//}

//Method* VariableData::getSetterMethod()
//{
//    return setterMethod;
//}

//void VariableData::setSetterMethod(::java::lang::reflect::Method* setter)
//{
//    this->setterMethod = setter;
//}

int VariableData::compareTo(VariableData* d)
{
    if(d != 0) {
        return definition->compareTo(d->getDefinition().get());
    }
    return 0;
}
