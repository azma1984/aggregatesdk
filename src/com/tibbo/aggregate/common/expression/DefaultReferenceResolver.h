#pragma once

#include "expression/AbstractReferenceResolver.h"
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Pointers.h"

class DefaultReferenceResolver : public AbstractReferenceResolver
{
public:
    static const std::string ROW;
    static const std::string DESCRIPTION;
    static const std::string NAME;
    static const std::string ICON;
    static const std::string TYPE;
    static const std::string READABLE;
    static const std::string WRITABLE;
    static const std::string RECORDS;
    static const std::string FORMAT;
    static const std::string HELP;
    static const std::string OPTIONS;
    static const std::string SELECTION_VALUE_DESCRIPTION;

    DefaultReferenceResolver();
    DefaultReferenceResolver(DataTablePtr defaultTable);

    boost::shared_ptr<void> resolveReference(boost::shared_ptr<Reference> ref, boost::shared_ptr<EvaluationEnvironment> environment) /* throws(SyntaxErrorException, EvaluationException, ContextException) */;
    std::list<boost::shared_ptr<Context>>  getContexts(boost::shared_ptr<Reference> ref) ;
    boost::shared_ptr<Context> getContext(boost::shared_ptr<Reference> ref) ;

private:
    std::string resolveEntityDescription(boost::shared_ptr<Reference> ref, boost::shared_ptr<Context> con) /* throws(IllegalStateException) */;

protected:
    boost::shared_ptr<void> getDefaultTableAggregate(boost::shared_ptr<DataTable> table);
    int  getRow(boost::shared_ptr<Reference> ref, boost::shared_ptr<EvaluationEnvironment> environment);
    boost::shared_ptr<DataTable> resolveEntity(boost::shared_ptr<Reference> ref, boost::shared_ptr<Context> con,
                                               boost::shared_ptr<EvaluationEnvironment> environment) /* throws(ContextException, SyntaxErrorException, EvaluationException) */;
};
