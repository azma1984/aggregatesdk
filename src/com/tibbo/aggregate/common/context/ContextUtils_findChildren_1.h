// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextUtils.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextVisitor.h"



class com::tibbo::aggregate::common::context::ContextUtils_findChildren_1
    : public DefaultContextVisitor
{

public:
    typedef DefaultContextVisitor super;
    void visit(Context* context);

    // Generated
    ContextUtils_findChildren_1(std::string* type, std::list  res);
    
    std::string* type;
    std::list  res;

private:
    ::java::lang::Class* getClass0();
    friend class ContextUtils;
};
