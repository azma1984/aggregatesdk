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
    void write(boost::shared_ptr<DataTable> value, boost::shared_ptr<CallerController> callerController,boost::shared_ptr<RequestController> requestController);

	static AbstractValueWriter& getInstance()
    {
     static AbstractValueWriter instance;
     return instance;
    }
    const std::string& toString();
};

#endif 
