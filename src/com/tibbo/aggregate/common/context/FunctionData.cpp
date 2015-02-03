#include "context/FunctionData.h"


FunctionData::FunctionData(FunctionDefinitionPtr definition)
{
    this->definition = definition;
}


void FunctionData::registerExecution()
{
    executionCount++;
}

FunctionDefinitionPtr FunctionData::getDefinition()
{
    return definition;
}

boost::mutex& FunctionData::getExecutionLock()
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

//java::lang::reflect::Method* FunctionData::getImplementationMethod()
//{
//    return implementationMethod;
//}

//void FunctionData::setImplementationMethod(::java::lang::reflect::Method* implementationMethod)
//{
//    this->implementationMethod = implementationMethod;
//}

int FunctionData::compareTo(FunctionData* d) const
{
    if(d != 0) {
        return definition->compareTo(d->getDefinition().get());
    }
    return 0;
}

