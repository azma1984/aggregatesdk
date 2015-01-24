#pragma once

#include "util/Cloneable.h"
#include "expression/Reference.h"
//#include "expression/parser/ASTStart.h"
#include <string>
#include <boost/shared_ptr.hpp>

class Expression : public Cloneable
{

private:
    static const std::string REFERENCE_START;
    static const std::string REFERENCE_END;
    std::string text;
    //TODO: ASTStart
//    ::ASTStart* rootNode;
public:
    const std::string & getText();
//    ::ASTStart* getRootNode();
//    void setRootNode(::ASTStart* rootNode);
    std::string toString();
//    int hashCode();
    bool equals(Expression* obj);
    Expression* clone();

    Expression(boost::shared_ptr<Reference> reference);
	Expression(const std::string & text);
};
