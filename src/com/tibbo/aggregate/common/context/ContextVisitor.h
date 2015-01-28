#ifndef ContextVisitorH
#define ContextVisitorH

#include "context/Context.h"
#include <boost/shared_ptr.hpp>

class ContextVisitor : public Context
{
 public:
    virtual bool shouldVisit(ContextPtr context) = 0;
    virtual void visit(ContextPtr context) = 0;
};

#endif
