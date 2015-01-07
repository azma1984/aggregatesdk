// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/Binding.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"
#include <com/tibbo/aggregate/common/util/PublicCloneable.h"



class com::tibbo::aggregate::common::binding::Binding
    
    , public ::java::lang::Cloneable
    , public ::com::tibbo::aggregate::common::util::PublicCloneable
{

public:
    typedef void super;

private:
    ::com::tibbo::aggregate::common::expression::Reference* reference;
    ::com::tibbo::aggregate::common::expression::Expression* expression;
    ::java::lang::Long* id;
protected:
    void ctor(::com::tibbo::aggregate::common::expression::Reference* reference, ::com::tibbo::aggregate::common::expression::Expression* expression);
    void ctor(std::string* reference, std::string* expression);

public:
    ::com::tibbo::aggregate::common::expression::Expression* getExpression();
    ::com::tibbo::aggregate::common::expression::Reference* getReference();
    int hashCode();
    bool equals(void* obj);
    Binding* clone();
    std::string* toString();
    ::java::lang::Long* getId();
    void setId(::java::lang::Long* id);

    // Generated
    Binding(::com::tibbo::aggregate::common::expression::Reference* reference, ::com::tibbo::aggregate::common::expression::Expression* expression);
    Binding(std::string* reference, std::string* expression);
protected:
    Binding(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
