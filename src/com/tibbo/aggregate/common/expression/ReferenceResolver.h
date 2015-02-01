#pragma once

#include "context/Context.h"
#include "context/ContextManager.h"
#include "context/CallerController.h"
#include "datatable/DataTable.h"
#include "expression/Evaluator.h"
//#include "expression/EvaluationEnvironment.h"
//#include "expression/Reference.h"
#include "util/Interface.h"
#include <boost/shared_ptr.hpp>

class ReferenceResolver : public Interface
{
public:

    virtual void* resolveReference(boost::shared_ptr<Reference> ref, boost::shared_ptr<EvaluationEnvironment> environment) = 0/* throws(SyntaxErrorException, EvaluationException, ContextException) */;
    virtual void setContextManager(boost::shared_ptr<ContextManager> cm) = 0;
    virtual boost::shared_ptr<ContextManager> getContextManager() = 0;
    virtual void setDefaultTable(boost::shared_ptr<DataTable> defaultTable) = 0;
    virtual boost::shared_ptr<DataTable> getDefaultTable() = 0;
    virtual void setDefaultContext(boost::shared_ptr<Context> defaultContext) = 0;
    virtual boost::shared_ptr<Context> getDefaultContext() = 0;
    virtual void setCallerController(boost::shared_ptr<CallerController> callerController) = 0;
    virtual boost::shared_ptr<CallerController> getCallerController() = 0;
    virtual void setEvaluator(boost::shared_ptr<Evaluator> evaluator) = 0;
    virtual boost::shared_ptr<Evaluator> getEvaluator() = 0;
    virtual void setDefaultRow(int  defaultRow) = 0;
    virtual int  getDefaultRow() = 0;
};
