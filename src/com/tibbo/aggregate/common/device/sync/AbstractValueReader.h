#ifndef AbstractValueReaderH
#define AbstractValueReaderH

#include "device/sync/ValueReader.h"
#include <string>


//Singleton      todo - cannot instantiate abstract class in getInstance()
class AbstractValueReader//: public ValueReader
{
 private:
	AbstractValueReader();
	AbstractValueReader(const std::string & name);
    ~AbstractValueReader();
    AbstractValueReader(AbstractValueReader const&);
    void operator=(AbstractValueReader const&);
    std::string name;

 public:
    

	static AbstractValueReader& getInstance()
    {
     static AbstractValueReader instance;
     return instance;
    }
    const std::string& toString();

 
    
};

#endif 