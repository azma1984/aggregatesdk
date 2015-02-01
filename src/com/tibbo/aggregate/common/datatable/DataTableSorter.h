#pragma once
#include <list>
#include <datatable/SortOrder.h>

class DataTableSorter
{
private:
    std::list<SortOrder>  orders;

public:
    DataTableSorter(const std::list<SortOrder> &orders);
    std::list<SortOrder> getOrder();
    void addOrder(SortOrder order);
    std::list<SortOrder>::iterator iterator();
};
