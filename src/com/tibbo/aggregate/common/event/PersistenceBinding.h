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
    : public AggreGateBean
    , public ::java::lang::Cloneable
{

public:
    typedef AggreGateBean super;

private:
    static const std::string TYPE_BOOLEAN_;
    static const std::string TYPE_STRING_;
    static const std::string TYPE_INT_;
    static const std::string TYPE_LONG_;
    static const std::string TYPE_FLOAT_;
    static const std::string TYPE_DOUBLE_;
    static const std::string TYPE_TIMESTAMP_;
    static TableFormat* FORMAT_;
    const std::string & name;
    const std::string & type;
    const std::string & index;
    const std::string & expression;
    ::com::tibbo::aggregate::common::expression::Expression* compiledExpression;
protected:
    void ctor();
    void ctor(DataRecord* record);
    void ctor(const std::string & name, const std::string & type, const std::string & index, const std::string & expression);

public:
    const std::string & getType();
    const std::string & getIndex();
    const std::string & getName();
    const std::string & getExpression();
    ::com::tibbo::aggregate::common::expression::Expression* getCompiledExpression();
    void setName(const std::string & name);
    void setType(const std::string & type);
    void setIndex(const std::string & index);
    void setExpression(const std::string & expression);
    PersistenceBinding* clone();
    int hashCode();
    bool equals(void* obj);
    const std::string & toString();

    // Generated
    PersistenceBinding();
    PersistenceBinding(DataRecord* record);
    PersistenceBinding(const std::string & name, const std::string & type, const std::string & index, const std::string & expression);
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
    static TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
