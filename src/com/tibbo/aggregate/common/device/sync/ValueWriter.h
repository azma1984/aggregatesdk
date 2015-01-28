#ifndef ValueWriterH
#define ValueWriterH

#include <context/RequestController.h>
#include <context/CallerController.h>
#include <datatable/DataTable.h>
#include <util/Interface.h>
#include <boost/shared_ptr.hpp>

class ValueWriter : public Interface
{
public:
    virtual void write(DataTablePtr value, CallerControllerPtr callerController,RequestControllerPtr requestController) = 0;
};
#endif 