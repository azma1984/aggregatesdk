// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableData.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/reflect/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Comparable.h"



class VariableData
    
    , public ::java::lang::Comparable
{

public:
    typedef void super;

private:
    VariableDefinition* definition;
    void* value;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* readWriteLock;
    long getCount;
    long setCount;
    bool getterCached;
    bool setterCached;
    ::java::lang::reflect::Method* getterMethod;
    ::java::lang::reflect::Method* setterMethod;
protected:
    void ctor(VariableDefinition* definition);

public:
    void registerGetOperation();
    void registerSetOperation();
    VariableDefinition* getDefinition();

public: /* package */
    void* getValue();
    void setValue(void* value);

public:
    ::java::util::concurrent::locks::ReentrantReadWriteLock* getReadWriteLock();
    long getGetCount();
    long getSetCount();
    bool isGetterCached();
    void setGetterCached(bool getterCached);
    bool isSetterCached();
    void setSetterCached(bool setterCached);
    ::java::lang::reflect::Method* getGetterMethod();
    void setGetterMethod(::java::lang::reflect::Method* getter);
    ::java::lang::reflect::Method* getSetterMethod();
    void setSetterMethod(::java::lang::reflect::Method* setter);
    int compareTo(VariableData* d);

    // Generated
    VariableData(VariableDefinition* definition);
protected:
    VariableData(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    int compareTo(void* arg0);

private:
    ::java::lang::Class* getClass0();
};
