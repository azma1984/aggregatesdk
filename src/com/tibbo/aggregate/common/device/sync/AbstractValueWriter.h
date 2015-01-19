#ifndef AbstractValueWriterH
#define AbstractValueWriterH


#include "device/sync/ValueWriter.h"
#include <string>


//Singleton               //todo - cannot instantiate abstract class in getInstance()
class AbstractValueWriter //: public ValueWriter
{

 private:
	AbstractValueWriter();
	AbstractValueWriter(const std::string & name);
    ~AbstractValueWriter();
    AbstractValueWriter(AbstractValueWriter const&);
   void operator=(AbstractValueWriter const&);
    std::string name;

 public:
    

	static AbstractValueWriter& getInstance()
    {
     static AbstractValueWriter instance;
     return instance;
    }
    const std::string& toString();


};

#endif 
