#ifndef _ServiceFunction_H_
#define _ServiceFunction_H_

#include "util/Interface.h"
#include "context/FunctionDefinition.h"
#include "datatable/DataTable.h"
#include <boost/shared_ptr.hpp>

/**
 * Simple way to define service functions.
 * For example may be used as
 *   Map<String, ServiceFunction> functionsByName;
 */
class ServiceFunction : public Interface
{
    virtual FunctionDefinition getFunctionDefinition() = 0;

    virtual boost::shared_ptr<DataTable> execute(boost::shared_ptr<DataTable> parametersDataTable) = 0;//throws DeviceException;
};
#endif  //_ServiceFunction_H_
