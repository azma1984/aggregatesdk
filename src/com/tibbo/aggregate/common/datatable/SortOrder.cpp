#include "datatable/SortOrder.h"

SortOrder::SortOrder(const std::string &field, bool ascending)
{
    this->field = field;
    this->ascending = ascending;
}

std::string SortOrder::getField()
{
    return field;
}

void SortOrder::setField(const std::string &field)
{
    this->field = field;
}

bool SortOrder::isAscending()
{
    return ascending;
}

void SortOrder::setAscending(bool ascending)
{
    this->ascending = ascending;
}




