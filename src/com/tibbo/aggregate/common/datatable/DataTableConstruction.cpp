#include "datatable/DataTableConstruction.h"


DataTablePtr DataTableConstruction::constructTable(AgObjectPtr object)
{
    return 0;
}

DataTablePtr DataTableConstruction::constructTable(std::list<AgObjectPtr> parameters)
{
    return 0;
}

DataTablePtr DataTableConstruction::constructTable(std::list<AgObjectPtr> parameters, TableFormatPtr format)
{
    return 0;
}

DataTablePtr DataTableConstruction::constructTable(std::list<AgObjectPtr> parameters, TableFormatPtr format, EvaluatorPtr evaluator, EvaluationEnvironmentPtr environment)
{
    return 0;
}

std::list<AgObjectPtr> DataTableConstruction::resolveParameters(std::list<AgObjectPtr> parameters, EvaluatorPtr evaluator, EvaluationEnvironmentPtr environment)
{
    return std::list<AgObjectPtr>();
}

DataTablePtr DataTableConstruction::fillDataTable(TableFormatPtr format, std::list<AgObjectPtr> params)
{
    return 0;
}
