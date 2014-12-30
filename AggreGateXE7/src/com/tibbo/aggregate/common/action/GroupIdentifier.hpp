// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/GroupIdentifier.java

#pragma once

//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/StringIdentifier.h"



class com::tibbo::aggregate::common::action::GroupIdentifier
    : public StringIdentifier
{

public:
    typedef StringIdentifier super;
protected:
    void ctor();
    void ctor(std::string* id);

    // Generated

public: /* protected */
    GroupIdentifier();

public:
    GroupIdentifier(std::string* id);
protected:
    GroupIdentifier(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
