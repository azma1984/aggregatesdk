#ifndef _BINDING_H_
#define _BINDING_H_

#include "util/Cloneable.h"
//#include "expression/Expression.h"
//#include "expression/Reference.h"
//#include "expression/ExpressionUtils.h"
#include <boost/shared_ptr.hpp>

//Required Expression.h and Reference.h
class Binding : public Cloneable
{
public:
	Binding(ReferencePtr reference, ExpressionPtr expression);
	Binding(const std::string& reference, const std::string& expression);

	ExpressionPtr getExpression();
	ReferencePtr getReference();
    int hashCode();
    bool equals(BindingPtr obj);
    BindingPtr clone();
    std::string toString();
    long getId() const;
    void setId(long id);

private:
	ReferencePtr reference;
	ExpressionPtr expression;
    long id;
};

#endif
