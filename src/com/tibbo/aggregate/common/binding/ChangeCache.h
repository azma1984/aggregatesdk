#ifndef ChangeCacheH
#define ChangeCacheH
  #define BOOST_THREAD_USE_LIB
#include <binding/BindingProvider.h>
#include <binding/CallerControllerSelector.h>
#include <context/Context.h>
#include <context/CallerController.h>
#include <datatable/DataTable.h>
#include <string>
#include <map>
#include <boost/shared_ptr.hpp>

//#include "binding/BindingProvider.h"
//#include "binding/CallerControllerSelector.h"
//#include "binding/EvaluationOptions.h"
//#include "context/CallerController.h"
//#include "context/Context.h"
//#include "context/ContextUtils.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"

class ChangeCache
{
private:
	std::map< ContextPtr, std::map<std::string, DataTablePtr > > variableChanges;

public:
    void setVariableField(ContextPtr context, const std::string& variable,
                          const std::string& field, int record, AgObjectPtr value, CallerControllerPtr cc) ;
	void commit(BindingProviderPtr provider, CallerControllerSelectorPtr selector);
};

#endif

