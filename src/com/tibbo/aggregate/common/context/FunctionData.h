// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionData.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/reflect/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Comparable.h"



class com::tibbo::aggregate::common::context::FunctionData
    
    , public ::java::lang::Comparable
{

public:
    typedef void super;

private:
    FunctionDefinition* definition;
    ::java::util::concurrent::locks::std::mutex ** executionLock;
    long executionCount;
    bool implementationCached;
    ::java::lang::reflect::Method* implementationMethod;
protected:
    void ctor(FunctionDefinition* definition);

public:
    void registerExecution();
    FunctionDefinition* getDefinition();
    ::java::util::concurrent::locks::std::mutex ** getExecutionLock();
    long getExecutionCount();
    bool isImplementationCached();
    void setImplementationCached(bool implementationCached);
    ::java::lang::reflect::Method* getImplementationMethod();
    void setImplementationMethod(::java::lang::reflect::Method* implementationMethod);
    int compareTo(FunctionData* d);

    // Generated
    FunctionData(FunctionDefinition* definition);
protected:
    FunctionData(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    int compareTo(void* arg0);

private:
    ::java::lang::Class* getClass0();
};
