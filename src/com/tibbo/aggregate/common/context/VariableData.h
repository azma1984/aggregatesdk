#ifndef VariableDataH
#define VariableDataH
#include "context/VariableDefinition.h"
#include <boost/thread/shared_mutex.hpp>

//todo - class stub
class VariableData:Comparable
{
private:
    VariableDefinitionPtr definition;
    AgObjectPtr value;
	boost::shared_mutex readWriteLock;
    long getCount;
    long setCount;
    bool getterCached;
    bool setterCached;
   //	::java::lang::reflect::Method* getterMethod;    todo
   //	::java::lang::reflect::Method* setterMethod;    todo

public:
    void registerGetOperation();
    void registerSetOperation();
    VariableDefinitionPtr getDefinition();
    AgObjectPtr getValue();
    void setValue(AgObjectPtr value);

public:
    boost::shared_mutex& getReadWriteLock();
    long getGetCount();
    long getSetCount();
    bool isGetterCached();
    void setGetterCached(bool getterCached);
    bool isSetterCached();
    void setSetterCached(bool setterCached);
  //  ::java::lang::reflect::Method* getGetterMethod();  todo
  //  void setGetterMethod(::java::lang::reflect::Method* getter); todo
   // ::java::lang::reflect::Method* getSetterMethod(); todo
  //  void setSetterMethod(::java::lang::reflect::Method* setter); todo
    int compareTo(VariableData *d);


    VariableData(VariableDefinitionPtr definition);



};

#endif
