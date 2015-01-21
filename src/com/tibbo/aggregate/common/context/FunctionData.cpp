// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionData.java
//#include <com/tibbo/aggregate/common/context/FunctionData.h"

#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
/*
//#include <java/lang/NullPointerException.h"
//#include <java/lang/reflect/Method.h"
//#include <java/util/concurrent/locks/std::mutex *.h"
*/
template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

FunctionData::FunctionData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

FunctionData::FunctionData(FunctionDefinition* definition) 
    : FunctionData(*static_cast< ::default_init_tag* >(0))
{
    ctor(definition);
}

void FunctionData::init()
{
    executionLock = new ::java::util::concurrent::locks::std::mutex *();
}

void FunctionData::ctor(FunctionDefinition* definition)
{
    super::ctor();
    init();
    this->definition = definition;
}

void FunctionData::registerExecution()
{
    executionCount++;
}

FunctionDefinition* FunctionData::getDefinition()
{
    return definition;
}

java::util::concurrent::locks::std::mutex ** FunctionData::getExecutionLock()
{
    return executionLock;
}

long FunctionData::getExecutionCount()
{
    return executionCount;
}

bool FunctionData::isImplementationCached()
{
    return implementationCached;
}

void FunctionData::setImplementationCached(bool implementationCached)
{
    this->implementationCached = implementationCached;
}

java::lang::reflect::Method* FunctionData::getImplementationMethod()
{
    return implementationMethod;
}

void FunctionData::setImplementationMethod(::java::lang::reflect::Method* implementationMethod)
{
    this->implementationMethod = implementationMethod;
}

int FunctionData::compareTo(FunctionData* d)
{
    if(d != 0) {
        return definition)->compareTo(d)->getDefinition());
    }
    return 0;
}

int FunctionData::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< FunctionData* >(arg0));
}



java::lang::Class* FunctionData::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.FunctionData", 47);
    return c;
}

java::lang::Class* FunctionData::getClass0()
{
    return class_();
}

