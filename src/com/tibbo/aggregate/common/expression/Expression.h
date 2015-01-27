#pragma once

#include "util/Cloneable.h"
#include "expression/Reference.h"
#include "expression/parser/ExpressionParserTree.h"
#include <string>
#include <boost/shared_ptr.hpp>

class Expression : public Cloneable
{

private:
    static const std::string REFERENCE_START;
    static const std::string REFERENCE_END;
    std::string text;
    boost::shared_ptr<ASTStart> rootNode;
public:
    std::string getText();
    boost::shared_ptr<ASTStart> getRootNode();
    void setRootNode(boost::shared_ptr<ASTStart> rootNode);
    std::string toString();
//    int hashCode();
    bool equals(Expression* obj);
    Expression* clone();

    Expression(boost::shared_ptr<Reference> reference);
	Expression(const std::string & text);
};
