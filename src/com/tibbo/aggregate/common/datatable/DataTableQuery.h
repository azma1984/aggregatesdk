#pragma once
#include <list>
#include "util/Pointers.h"

class DataTableQuery
{
private:
    std::list<QueryConditionPtr>  conditions;

public:
    DataTableQuery(std::list<QueryConditionPtr> conditions);
    std::list<QueryConditionPtr> getConditions();
    void addCondition(QueryConditionPtr condition);

    std::list<QueryConditionPtr>::iterator iterator();
};
