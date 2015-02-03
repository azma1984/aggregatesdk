#ifndef FunctionDataH
#define FunctionDataH

#define BOOST_THREAD_USE_LIB

#include "context/FunctionDefinition.h"
#include "util/Comparable.h"
#include <boost/thread/mutex.hpp>


//todo - class stub
class FunctionData: public Comparable
{

private:
	FunctionDefinitionPtr definition;
	boost::mutex executionLock;
	long executionCount;
	bool implementationCached;
  //	::java::lang::reflect::Method* implementationMethod;  todo
	void init();
public:
	void registerExecution();
	FunctionDefinitionPtr getDefinition();
    boost::mutex&  getExecutionLock();
	long getExecutionCount();
	bool isImplementationCached();
	void setImplementationCached(bool implementationCached);
  //	::java::lang::reflect::Method* getImplementationMethod(); todo
 //	void setImplementationMethod(::java::lang::reflect::Method* implementationMethod); //todo
    int compareTo(FunctionData *d) const;

	FunctionData(FunctionDefinitionPtr definition);
};

#endif
