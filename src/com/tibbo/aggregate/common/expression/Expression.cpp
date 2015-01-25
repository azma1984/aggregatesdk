#include "expression/Expression.h"

const std::string Expression::REFERENCE_START = "{";
const std::string Expression::REFERENCE_END = "}";


Expression::Expression(boost::shared_ptr<Reference> reference)
{
    this->text = std::string(REFERENCE_START).append(reference->getImage()).append(REFERENCE_END);
}

Expression::Expression(const std::string & text)
{
    this->text = text;
}

std::string Expression::getText()
{
    return text;
}

boost::shared_ptr<ASTStart> Expression::getRootNode()
{
    return rootNode;
}

void Expression::setRootNode(boost::shared_ptr<ASTStart> rootNode)
{
    this->rootNode = rootNode;
}

std::string Expression::toString()
{
    return text;
}

//int Expression::hashCode()
//{
//    auto const prime = int(31);
//    auto result = int(1);
//    result = prime * result + ((text == 0) ? int(0) : text)->hashCode());
//    return result;
//}

bool Expression::equals(Expression* other)
{
    if (this == other) {
        return true;
    }

    if (other == 0) {
        return false;
    }

    if (text != other->text) {
        return false;
    }

    return true;
}

Expression* Expression::clone()
{
    //TODO: need copy ASTStart* rootNode ?
    return new Expression(this);
}


