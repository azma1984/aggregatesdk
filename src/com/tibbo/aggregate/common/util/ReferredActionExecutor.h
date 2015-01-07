#ifndef _ReferredActionExecutor_H_
#define  _ReferredActionExecutor_H_

#include <util/Interface.h>
#include <util/RemoteConnector.h>
#include <expression/Reference.h>
#include <datatable/DataTable.h>

class ReferredActionExecutor : Interface   
{
    virtual bool executeReferredAction(Reference* ref, RemoteConnector* connector, DataTable* parameters);
};
#endif	// _ReferredActionExecutor_H_