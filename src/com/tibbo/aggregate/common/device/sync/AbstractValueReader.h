#ifndef AbstractValueReaderH
#define AbstractValueReaderH

#include "device/sync/ValueReader.h"
#include <string>


//Singleton 
class AbstractValueReader: public ValueReader
{
 private:
	AbstractValueReader();
	AbstractValueReader(const std::string & name);
    ~AbstractValueReader();
    AbstractValueReader(AbstractValueReader const&);
    void operator=(AbstractValueReader const&);
    std::string name;

 public:
    DataTablePtr read(CallerControllerPtr callerController,RequestControllerPtr requestController);

	static AbstractValueReader& getInstance()
    {
     static AbstractValueReader instance;
     return instance;
    }
    const std::string& toString();

 
    
};

#endif 