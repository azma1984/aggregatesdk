// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/DefaultReferenceResolver.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/AbstractReferenceResolver.h"



class com::tibbo::aggregate::common::expression::DefaultReferenceResolver
    : public AbstractReferenceResolver
{

public:
    typedef AbstractReferenceResolver super;

private:
    static const std::string ROW_;
    static const std::string DESCRIPTION_;
    static const std::string NAME_;
    static const std::string ICON_;
    static const std::string TYPE_;
    static const std::string READABLE_;
    static const std::string WRITABLE_;
    static const std::string RECORDS_;
    static const std::string FORMAT_;
    static const std::string HELP_;
    static const std::string OPTIONS_;
    static const std::string SELECTION_VALUE_DESCRIPTION_;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::datatable::DataTable* defaultTable);

public:
    void* resolveReference(Reference* ref, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException, ContextException) */;

public: /* protected */
    void* getDefaultTableAggregate(::com::tibbo::aggregate::common::datatable::DataTable* table);
    ::java::lang::Integer* getRow(Reference* ref, EvaluationEnvironment* environment);

private:
    std::string* resolveEntityDescription(Reference* ref, ::com::tibbo::aggregate::common::context::Context* con) /* throws(IllegalStateException) */;

public:
    std::list  getContexts(Reference* ref) /* throws(ContextException) */;
    ::com::tibbo::aggregate::common::context::Context* getContext(Reference* ref) /* throws(ContextException) */;

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* resolveEntity(Reference* ref, ::com::tibbo::aggregate::common::context::Context* con, EvaluationEnvironment* environment) /* throws(ContextException, SyntaxErrorException, EvaluationException) */;

    // Generated

public:
    DefaultReferenceResolver();
    DefaultReferenceResolver(::com::tibbo::aggregate::common::datatable::DataTable* defaultTable);
protected:
    DefaultReferenceResolver(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& ROW();
    static const std::string& DESCRIPTION();
    static const std::string& NAME();
    static const std::string& ICON();
    static const std::string& TYPE();
    static const std::string& READABLE();
    static const std::string& WRITABLE();
    static const std::string& RECORDS();
    static const std::string& FORMAT();
    static const std::string& HELP();
    static const std::string& OPTIONS();
    static const std::string& SELECTION_VALUE_DESCRIPTION();

private:
    ::java::lang::Class* getClass0();
};
