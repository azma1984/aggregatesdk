#ifndef BindingEventsHelperH
#define BindingEventsHelperH
  #define BOOST_THREAD_USE_LIB
#include "binding/EvaluationOptions.h"
#include "context/Context.h"
#include "datatable/TableFormat.h"
#include "datatable/DataTable.h"
#include <string>
#include <boost/shared_ptr.hpp>
//#include "Cres.h"
//#include "binding/Binding.h"
//#include "context/Context.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/FieldFormat.h"
//#include "datatable/TableFormat.h"
//#include "datatable/field/StringFieldFormat.h"
//#include "expression/Expression.h"
//#include "expression/Reference.h"
//#include "util/ThreadUtils.h"

class BindingEventsHelper
{
private:
	static const std::string executionTypeDescription(int method);



public:
	static const std::string E_BINDING_ERROR;
	static const std::string E_BINDING_EXECUTION;
	static const std::string EF_BINDING_CONTEXT;
	static const std::string EF_BINDING_TARGET;
	static const std::string EF_BINDING_EXPRESSION;
	static const std::string EF_BINDING_ACTIVATOR;
	static const std::string EF_BINDING_EXECUTION;
	static const std::string EF_BINDING_CONDITION;
	static const std::string EF_BINDING_VALUE;
	static const std::string EF_BINDING_CAUSE;
	static const std::string EF_BINDING_ERROR;
	static const std::string EF_BINDING_ERROR_STACK;
	static TableFormatPtr EFT_BINDING_EXECUTION;
	static TableFormatPtr EFT_BINDING_EXECUTION_EXT;
	static TableFormatPtr EFT_BINDING_ERROR;
	static TableFormatPtr EFT_BINDING_ERROR_EXT;
	static DataTablePtr createBindingErrorEventDataPtr(ContextPtr con,BindingPtr binding, int method,
																	const std::string & activator, ExceptionPtr error);
    static DataTablePtr createBindingExecutionEventDataPtr(ContextPtr con, int method,
																		BindingPtr binding,
																		EvaluationOptionsPtr options,
																		ReferencePtr cause, AgObjectPtr result);
};

#endif
