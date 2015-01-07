// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/context/TestEventData.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"



class com::tibbo::aggregate::common::context::TestEventData_TestListener
    : public DefaultContextEventListener
{

public:
    typedef DefaultContextEventListener super;

private:
    ::std::string name;

protected:
    void ctor(::std::string name);

public:
    void handle(::com::tibbo::aggregate::common::data::Event* event) override;
    ::std::string toString() override;

    // Generated
    TestEventData_TestListener(::std::string name);
protected:
    TestEventData_TestListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
