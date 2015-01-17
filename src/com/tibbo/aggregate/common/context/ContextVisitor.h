#pragma once

#include "context/Context.h"
#include <boost/shared_ptr.hpp>

class ContextVisitor : public Context
{
public:
    virtual bool shouldVisit(boost::shared_ptr<Context> context) = 0/* throws(ContextException) */;
    virtual void visit(boost::shared_ptr<Context> context) = 0/* throws(ContextException) */;
};
