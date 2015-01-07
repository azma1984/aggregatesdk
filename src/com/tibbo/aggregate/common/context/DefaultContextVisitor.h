// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextVisitor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/ContextVisitor.h"



class com::tibbo::aggregate::common::context::DefaultContextVisitor
    
    , public ContextVisitor
{

public:
    typedef void super;
    bool shouldVisit(Context* context) /* throws(ContextException) */;

    // Generated
    DefaultContextVisitor();
protected:
    DefaultContextVisitor(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
