#ifndef DefaultContextVisitorH
#define DefaultContextVisitorH

class DefaultContextVisitor: public ContextVisitor
{
public:

	bool shouldVisit(ContextPtr context)
	{
	  return !context.isDistributed();
    }

};

#endif
