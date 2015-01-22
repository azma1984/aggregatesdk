#ifndef _Comparable_H_
#define _Comparable_H_

#include <boost/shared_ptr.hpp>
#include <string>

//todo - class stub
class Comparable
{
public:
 std::string	toString(){return "";}

 bool equals(boost::shared_ptr<Comparable>)
 {
  return true;
 }

 int compareTo(boost::shared_ptr<Comparable>)
 {
  return true;
 }

};

#endif