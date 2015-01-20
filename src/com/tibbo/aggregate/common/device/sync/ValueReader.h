#ifndef ValueReaderH
#define ValueReaderH

#include <context/RequestController.h>
#include <context/CallerController.h>
#include <util/Interface.h>
#include <boost/shared_ptr.hpp>
#include <datatable/DataTable.h>

class  ValueReader : public Interface
{
public:
    virtual boost::shared_ptr<DataTable> read(boost::shared_ptr<CallerController> callerController,boost::shared_ptr<RequestController> requestController) = 0;
};
#endif 