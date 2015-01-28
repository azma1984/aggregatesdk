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
    virtual DataTablePtr read(CallerControllerPtr callerController,RequestControllerPtr requestController) = 0;
};
#endif 