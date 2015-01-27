#pragma once

#include <list>
#include "util/Pointers.h"

class DataTableConstruction
{
public:
    static DataTablePtr constructTable(AgObjectPtr object);
    static DataTablePtr constructTable(std::list<AgObjectPtr> parameters);
    static DataTablePtr constructTable(std::list<AgObjectPtr> parameters, TableFormatPtr format);
    static DataTablePtr constructTable(std::list<AgObjectPtr> parameters, TableFormatPtr format, EvaluatorPtr evaluator, EvaluationEnvironmentPtr environment);

private:
    static std::list<AgObjectPtr> resolveParameters(std::list<AgObjectPtr> parameters, EvaluatorPtr evaluator, EvaluationEnvironmentPtr environment);
    static DataTablePtr fillDataTable(TableFormatPtr format, std::list<AgObjectPtr> params);
};
