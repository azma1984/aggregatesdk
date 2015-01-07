#pragma once
#include <string>

class SortOrder
{
private:
    std::string     field;
    bool            ascending;

public:
  SortOrder(const std::string &field, bool ascending)
  {
    this.field = field;
    this.ascending = ascending;
  }

  std::string getField()
  {
    return field;
  }

  void setField(const std::string &field)
  {
    this.field = field;
  }

  bool isAscending()
  {
    return ascending;
  }

  void setAscending(bool ascending)
  {
    this.ascending = ascending;
  }

};