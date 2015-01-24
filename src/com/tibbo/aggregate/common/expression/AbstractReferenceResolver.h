#pragma once

#include "expression/ReferenceResolver.h"
#include <boost/shared_ptr.hpp>


class AbstractReferenceResolver : public ReferenceResolver
{
private:
    boost::shared_ptr<Evaluator> evaluator;
    boost::shared_ptr<ContextManager> contextManager;
    boost::shared_ptr<Context> defaultContext;
    boost::shared_ptr<DataTable> defaultTable;
    boost::shared_ptr<CallerController> callerController;
    int  defaultRow;

public:
    boost::shared_ptr<CallerController> getCallerController();
    boost::shared_ptr<Context> getDefaultContext();
    boost::shared_ptr<ContextManager> getContextManager();
    boost::shared_ptr<DataTable> getDefaultTable();
    boost::shared_ptr<Evaluator> getEvaluator();
    int  getDefaultRow();
    void addContextManager(const std::string& schema, boost::shared_ptr<ContextManager> cm);
    void setCallerController(boost::shared_ptr<CallerController> callerController);
    void setDefaultContext(boost::shared_ptr<Context> defaultContext);
    void setContextManager(boost::shared_ptr<ContextManager> contextManager);
    void setDefaultTable(boost::shared_ptr<DataTable> defaultTable);
    void setEvaluator(boost::shared_ptr<Evaluator> evaluator);
    void setDefaultRow(int  defaultRow);

    // Generated
    AbstractReferenceResolver();
};
