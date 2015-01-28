#ifndef ChangeCacheH
#define ChangeCacheH

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
    std::map<ContextPtr, std::map<std::string, DataTablePtr> variableChanges;

public:
    void setVariableField(ContextPtr context, const std::string& variable,
                          const std::string& field, int record, AgObjectPtr value, CallerControllerPtr cc) ;
    void commit(BindingProviderPtr provider, CallerControllerSelectorPtr selector);
};

#endif

