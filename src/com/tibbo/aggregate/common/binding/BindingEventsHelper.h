#ifndef BindingEventsHelperH
#define BindingEventsHelperH

#include "binding/EvaluationOptions.h"
#include "context/Context.h"
#include "datatable/TableFormat.h"
#include "datatable/DataTable.h"
#include <string>
#include <boost/shared_ptr.hpp>

class BindingEventsHelper
{
private:
    static const std::string E_BINDING_ERROR_;
    static const std::string E_BINDING_EXECUTION_;
    static const std::string EF_BINDING_CONTEXT_;
    static const std::string EF_BINDING_TARGET_;
    static const std::string EF_BINDING_EXPRESSION_;
    static const std::string EF_BINDING_ACTIVATOR_;
    static const std::string EF_BINDING_EXECUTION_;
    static const std::string EF_BINDING_CONDITION_;
    static const std::string EF_BINDING_VALUE_;
    static const std::string EF_BINDING_CAUSE_;
    static const std::string EF_BINDING_ERROR_;
    static const std::string EF_BINDING_ERROR_STACK_;
    static TableFormatPtr EFT_BINDING_EXECUTION_;
    static TableFormatPtr EFT_BINDING_EXECUTION_EXT_;
    static TableFormatPtr EFT_BINDING_ERROR_;
    static TableFormatPtr EFT_BINDING_ERROR_EXT_;

public:
    static DataTablePtr createBindingErrorEventDataPtr(ContextPtr con,
                                                                    boost::BindingPtr binding, int method,
                                                                    const std::string & activator, boost::ExceptionPtr error);
    static DataTablePtr createBindingExecutionEventDataPtr(ContextPtr con, int method,
                                                                        boost::BindingPtr binding,
                                                                        boost::EvaluationOptionsPtr options,
                                                                        boost::ReferencePtr cause, AgObjectPtr result);

    static TableFormatPtr EFT_BINDING_EXECUTION();
    static TableFormatPtr EFT_BINDING_EXECUTION_EXT();
    static TableFormatPtr EFT_BINDING_ERROR();
    static TableFormatPtr EFT_BINDING_ERROR_EXT();

private:
    static const std::string executionTypeDescription(int method);    
};

#endif
