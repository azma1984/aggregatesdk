// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/XPathFunction.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/other/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <org/w3c/dom/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::other::XPathFunction
    : public ::com::tibbo::aggregate::common::expression::function::AbstractFunction
{

public:
    typedef ::com::tibbo::aggregate::common::expression::function::AbstractFunction super;

private:
    static const std::string FIELD_NODE_NAME_;
    static const std::string FIELD_NODE_CONTENT_;
    static const std::string FIELD_NODE_CHILDREN_;
protected:
    void ctor();

public:
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

private:
    ::com::tibbo::aggregate::common::datatable::DataTable* tableFromNodes(std::list  nodes);
    ::com::tibbo::aggregate::common::datatable::TableFormat* formatFromNodes(std::list  nodes);
    std::list  nodesToList(::org::w3c::dom::NodeList* nodeList);
    std::string* buildAttributeFieldName(::org::w3c::dom::Node* attribute);

    // Generated

public:
    XPathFunction();
protected:
    XPathFunction(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& FIELD_NODE_NAME();
    static const std::string& FIELD_NODE_CONTENT();
    static const std::string& FIELD_NODE_CHILDREN();

private:
    ::java::lang::Class* getClass0();
    friend class XPathFunction_execute_1;
};
