// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventEnrichmentRule.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/AggreGateBean.h"



class com::tibbo::aggregate::common::event::EventEnrichmentRule
    : public ::com::tibbo::aggregate::common::datatable::AggreGateBean
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::AggreGateBean super;

private:
    static const std::string FIELD_NAME_;
    static const std::string FIELD_EXPRESSION_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* name;
    std::string* expression;
    ::com::tibbo::aggregate::common::expression::Expression* enrichmentExpression;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::datatable::DataRecord* data);

public:
    std::string* getName();
    void setName(std::string* name);
    std::string* getExpression();
    void setExpression(std::string* expression);
    ::com::tibbo::aggregate::common::expression::Expression* getEnrichmentExpression();

    // Generated
    EventEnrichmentRule();
    EventEnrichmentRule(::com::tibbo::aggregate::common::datatable::DataRecord* data);
protected:
    EventEnrichmentRule(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& FIELD_NAME();
    static const std::string& FIELD_EXPRESSION();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
