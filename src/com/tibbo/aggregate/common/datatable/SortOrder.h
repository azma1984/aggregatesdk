#pragma once
#include <string>

class SortOrder
{
private:
    std::string     field;
    bool            ascending;

public:
  SortOrder(const std::string &field, bool ascending);
  std::string getField();
  void setField(const std::string &field);
  bool isAscending();
  void setAscending(bool ascending);

};
