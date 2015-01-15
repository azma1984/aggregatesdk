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

com::tibbo::aggregate::common::context::FunctionData::FunctionData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::FunctionData::FunctionData(FunctionDefinition* definition) 
    : FunctionData(*static_cast< ::default_init_tag* >(0))
{
    ctor(definition);
}

void com::tibbo::aggregate::common::context::FunctionData::init()
{
    executionLock = new ::java::util::concurrent::locks::std::mutex *();
}

void com::tibbo::aggregate::common::context::FunctionData::ctor(FunctionDefinition* definition)
{
    super::ctor();
    init();
    this->definition = definition;
}

void com::tibbo::aggregate::common::context::FunctionData::registerExecution()
{
    executionCount++;
}

com::tibbo::aggregate::common::context::FunctionDefinition* com::tibbo::aggregate::common::context::FunctionData::getDefinition()
{
    return definition;
}

java::util::concurrent::locks::std::mutex ** com::tibbo::aggregate::common::context::FunctionData::getExecutionLock()
{
    return executionLock;
}

long com::tibbo::aggregate::common::context::FunctionData::getExecutionCount()
{
    return executionCount;
}

bool com::tibbo::aggregate::common::context::FunctionData::isImplementationCached()
{
    return implementationCached;
}

void com::tibbo::aggregate::common::context::FunctionData::setImplementationCached(bool implementationCached)
{
    this->implementationCached = implementationCached;
}

java::lang::reflect::Method* com::tibbo::aggregate::common::context::FunctionData::getImplementationMethod()
{
    return implementationMethod;
}

void com::tibbo::aggregate::common::context::FunctionData::setImplementationMethod(::java::lang::reflect::Method* implementationMethod)
{
    this->implementationMethod = implementationMethod;
}

int com::tibbo::aggregate::common::context::FunctionData::compareTo(FunctionData* d)
{
    if(d != 0) {
        return definition)->compareTo(d)->getDefinition());
    }
    return 0;
}

int com::tibbo::aggregate::common::context::FunctionData::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< FunctionData* >(arg0));
}



java::lang::Class* com::tibbo::aggregate::common::context::FunctionData::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.FunctionData", 47);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::FunctionData::getClass0()
{
    return class_();
}

