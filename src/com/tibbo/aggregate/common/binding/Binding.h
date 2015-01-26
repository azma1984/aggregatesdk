#ifndef _BINDING_H_
#define _BINDING_H_

#include "util/Cloneable.h"
//#include "expression/Expression.h"
//#include "expression/Reference.h"
//#include "expression/ExpressionUtils.h"
#include <boost/shared_ptr.hpp>

//todo - Required Expression.h and Reference.h
class Binding : public Cloneable
{
public:
  //  Binding(boost::shared_ptr<Reference> reference, boost::shared_ptr<Expression> expression);
 //   Binding(const std::string& reference, const std::string& expression);

  //  boost::shared_ptr<Expression> getExpression();
  //  boost::shared_ptr<Reference> getReference();
    int hashCode();
    bool equals(Binding* obj);
    Binding* clone();
    std::string toString();
    long getId() const;
    void setId(long id);

private:
  //  boost::shared_ptr<Reference> reference;
  //  boost::shared_ptr<Expression> expression;
    long id;
};

#endif
