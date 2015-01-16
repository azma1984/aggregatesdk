#pragma once

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
    static boost::shared_ptr<TableFormat> EFT_BINDING_EXECUTION_;
    static boost::shared_ptr<TableFormat> EFT_BINDING_EXECUTION_EXT_;
    static boost::shared_ptr<TableFormat> EFT_BINDING_ERROR_;
    static boost::shared_ptr<TableFormat> EFT_BINDING_ERROR_EXT_;

public:
    static boost::shared_ptr<DataTable> createBindingErrorEventData(boost::shared_ptr<Context> con,
                                                                    boost::shared_ptr<Binding> binding, int method,
                                                                    const std::string & activator, boost::shared_ptr<Exception> error);
    static boost::shared_ptr<DataTable> createBindingExecutionEventData(boost::shared_ptr<Context> con, int method,
                                                                        boost::shared_ptr<Binding> binding,
                                                                        boost::shared_ptr<EvaluationOptions> options,
                                                                        boost::shared_ptr<Reference> cause, void* result);

    static boost::shared_ptr<TableFormat> EFT_BINDING_EXECUTION();
    static boost::shared_ptr<TableFormat> EFT_BINDING_EXECUTION_EXT();
    static boost::shared_ptr<TableFormat> EFT_BINDING_ERROR();
    static boost::shared_ptr<TableFormat> EFT_BINDING_ERROR_EXT();

private:
    static const std::string executionTypeDescription(int method);    
};
