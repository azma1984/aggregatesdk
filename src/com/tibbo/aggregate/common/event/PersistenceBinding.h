// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/PersistenceBinding.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/AggreGateBean.h"
//#include <java/lang/Cloneable.h"



class com::tibbo::aggregate::common::event::PersistenceBinding
    : public ::com::tibbo::aggregate::common::datatable::AggreGateBean
    , public ::java::lang::Cloneable
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::AggreGateBean super;

private:
    static const std::string TYPE_BOOLEAN_;
    static const std::string TYPE_STRING_;
    static const std::string TYPE_INT_;
    static const std::string TYPE_LONG_;
    static const std::string TYPE_FLOAT_;
    static const std::string TYPE_DOUBLE_;
    static const std::string TYPE_TIMESTAMP_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* name;
    std::string* type;
    std::string* index;
    std::string* expression;
    ::com::tibbo::aggregate::common::expression::Expression* compiledExpression;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::datatable::DataRecord* record);
    void ctor(std::string* name, std::string* type, std::string* index, std::string* expression);

public:
    std::string* getType();
    std::string* getIndex();
    std::string* getName();
    std::string* getExpression();
    ::com::tibbo::aggregate::common::expression::Expression* getCompiledExpression();
    void setName(std::string* name);
    void setType(std::string* type);
    void setIndex(std::string* index);
    void setExpression(std::string* expression);
    PersistenceBinding* clone();
    int hashCode();
    bool equals(void* obj);
    std::string* toString();

    // Generated
    PersistenceBinding();
    PersistenceBinding(::com::tibbo::aggregate::common::datatable::DataRecord* record);
    PersistenceBinding(std::string* name, std::string* type, std::string* index, std::string* expression);
protected:
    PersistenceBinding(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& TYPE_BOOLEAN();
    static const std::string& TYPE_STRING();
    static const std::string& TYPE_INT();
    static const std::string& TYPE_LONG();
    static const std::string& TYPE_FLOAT();
    static const std::string& TYPE_DOUBLE();
    static const std::string& TYPE_TIMESTAMP();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
