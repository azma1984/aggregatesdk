#include "binding/Binding.h"





//Binding::Binding(boost::ReferencePtr reference, ExpressionPtr expression)
//{
//    id = 0;
//    this->reference = reference;
//    this->expression = expression;
//}
//
//Binding::Binding(const std::string& reference, const std::string& expression)
//{
//    id = 0;
//    this->reference = new Reference(reference);
//    this->expression = new Expression(expression);
//}

//ExpressionPtr Binding::getExpression()
//{
//    return expression;
//}

//boost::ReferencePtr Binding::getReference()
//{
//    return reference;
//}
/*
int Binding::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((expression == 0) ? int(0) : expression)->hashCode());
    result = prime * result + ((id == 0) ? int(0) : id)->hashCode());
    result = prime * result + ((reference == 0) ? int(0) : reference)->hashCode());
    return result;
}
*/

bool Binding::equals(BindingPtr obj)
{

    //if(this == obj) {
    //    return true;
    //}

    //if(obj == 0) {
    //    return false;
    //}

    //BindingPtr other = dynamic_cast<BindingPtr>(obj);
    //if(other == 0) {
    //    return false;
    //}

    //if(expression == 0) {
    //    if(other->expression != 0) {
    //        return false;
    //    }
    //}else if(!expression->equals(other->expression)) {
    //    return false;
    //}

    //if (id != other->id) {
    //    return false;
    //}

    //if(reference == 0) {
    //    if(other->reference != 0) {
    //        return false;
    //    }
    //}else if(!reference->equals(other->reference)) {
    //    return false;
    //}

    return true;
}

BindingPtr Binding::clone()
{
    //try {
        //BindingPtr clone = new Binding();
        //clone->reference = reference->clone();
        //clone->expression = (expression != 0) ? expression->clone() : NULL;
        //clone->id = (id == 0) ? 0 : ExpressionUtils::generateBindingId();
        //return clone;
//    } catch (::java::lang::CloneNotSupportedException* ex) {
//        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//    }
 return BindingPtr();
}

std::string Binding::toString()
{
//    return std::string(reference->toString()).append(" = ").append(expression->toString());
	return "";
}

long Binding::getId() const
{
    return id;
}

void Binding::setId(long id)
{
    this->id = id;
}
