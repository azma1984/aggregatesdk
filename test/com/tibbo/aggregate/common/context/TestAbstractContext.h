// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/context/TestAbstractContext.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::context::TestAbstractContext
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual void testInvalidNames();
    virtual void testValidNames();

    // Generated
    TestAbstractContext();
protected:
    TestAbstractContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
