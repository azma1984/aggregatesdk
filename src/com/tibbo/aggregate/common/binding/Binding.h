#ifndef _BINDING_H_
#define _BINDING_H_

#include "util/Cloneable.h"
#include "expression/Expression.h"
#include "expression/Reference.h"
#include <boost/shared_ptr.hpp>

class Binding : public Cloneable
{
public:
    Binding(Reference* reference, Expression* expression);
    Binding(const std::string& reference, const std::string& expression);

    Expression* getExpression();
    Reference* getReference();
    int hashCode();
    bool equals(void* obj);
    Binding* clone();
    std::string toString();
    long getId() const;
    void setId(long id);

protected:
    void ctor(Reference* reference, Expression* expression);
    void ctor(const std::string& reference, const std::string& expression);

private:
    boost::shared_ptr<Reference> reference;
    boost::shared_ptr<Expression> expression;
    long id;
};

#endif
