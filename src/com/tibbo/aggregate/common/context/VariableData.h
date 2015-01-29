#ifndef VariableDataH
#define VariableDataH
#include "context/VariableDefinition.h"


//todo - class stub
class VariableData:Comparable
{
private:
    VariableDefinitionPtr definition;
    AgObjectPtr value;
   // boost::shared_mutex readWriteLock;  todo
    long getCount;
    long setCount;
    bool getterCached;
    bool setterCached;
   //	::java::lang::reflect::Method* getterMethod;    todo
   //	::java::lang::reflect::Method* setterMethod;    todo
	 void init();

public:
    void registerGetOperation();
    void registerSetOperation();
    VariableDefinitionPtr getDefinition();

public: 
    AgObjectPtr getValue();
    void setValue(AgObjectPtr value);

public:
   // boost::shared_mutex getReadWriteLock();  todo
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
    int compareTo(VariableDataPtr d);


    VariableData(VariableDefinitionPtr definition);



};

#endif
