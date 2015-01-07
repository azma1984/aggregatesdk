// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/Pair.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::Pair
    
{

public:
    typedef void super;

private:
    void* first;
    void* second;
protected:
    void ctor(void* first, void* second);

public:
    void* getFirst();
    void setFirst(void* first);
    void* getSecond();
    void setSecond(void* second);
    std::string* toString();

    // Generated
    Pair(void* first, void* second);
protected:
    Pair(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
