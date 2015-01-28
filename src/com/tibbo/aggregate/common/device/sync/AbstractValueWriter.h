#ifndef AbstractValueWriterH
#define AbstractValueWriterH


#include "device/sync/ValueWriter.h"
#include <string>


//Singleton           
class AbstractValueWriter : public ValueWriter
{

 private:
	AbstractValueWriter();
	AbstractValueWriter(const std::string & name);
    ~AbstractValueWriter();
    AbstractValueWriter(AbstractValueWriter const&);
   void operator=(AbstractValueWriter const&);
    std::string name;

 public:
    void write(DataTablePtr value, CallerControllerPtr callerController,RequestControllerPtr requestController);

	static AbstractValueWriter& getInstance()
    {
     static AbstractValueWriter instance;
     return instance;
    }
    const std::string& toString();
};

#endif 
