#include "datatable/DataTableQuery.h"


DataTableQuery::DataTableQuery()
{
}

DataTableQuery::DataTableQuery(std::list<QueryConditionPtr> conditions)
{
    this->conditions = conditions;
}

std::list<QueryConditionPtr> DataTableQuery::getConditions()
{
    return conditions;
}

void DataTableQuery::addCondition(QueryConditionPtr condition)
{
    conditions.push_back(condition);
}

std::list<QueryConditionPtr>::iterator DataTableQuery::iterator()
{
    return conditions.begin();
}
