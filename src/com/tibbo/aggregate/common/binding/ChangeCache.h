#pragma once

#include <binding/BindingProvider.h>
#include <binding/CallerControllerSelector.h>
#include <context/Context.h>
#include <context/CallerController.h>
#include <datatable/DataTable.h>
#include <string>
#include <map>
#include <boost/shared_ptr.hpp>

class ChangeCache
{
private:
    std::map<boost::shared_ptr<Context>, std::map<std::string, boost::shared_ptr<DataTable>> variableChanges;

public:
    void setVariableField(boost::shared_ptr<Context> context, const std::string& variable,
                          const std::string& field, int record, void* value, boost::shared_ptr<CallerController> cc) /* throws(ContextException) */;
    void commit(boost::shared_ptr<BindingProvider> provider, boost::shared_ptr<CallerControllerSelector> selector);
};
