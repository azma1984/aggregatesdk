#include "datatable/DataTableSorter.h"


DataTableSorter::DataTableSorter(const std::list<SortOrder> &orders)
{
    this->orders = orders;
}

std::list<SortOrder> DataTableSorter::getOrder()
{
    return orders;
}

void DataTableSorter::addOrder(SortOrder order)
{
    orders.push_back(order);
}

std::list<SortOrder>::iterator DataTableSorter::iterator()
{
    return orders.begin();
}
