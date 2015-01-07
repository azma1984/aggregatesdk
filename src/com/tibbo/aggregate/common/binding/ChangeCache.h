// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/ChangeCache.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::binding::ChangeCache
    
{

public:
    typedef void super;

private:
    std::map variableChanges;

public:
    void setVariableField(::com::tibbo::aggregate::common::context::Context* context, std::string* variable, std::string* field, int record, void* value, ::com::tibbo::aggregate::common::context::CallerController* cc) /* throws(ContextException) */;
    void commit(BindingProvider* provider, CallerControllerSelector* selector);

    // Generated
    ChangeCache();
protected:
    void ctor();
    ChangeCache(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
