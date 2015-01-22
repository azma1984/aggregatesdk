#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

#include "util/Cloneable.h"
#include "expression/Reference.h"
//#include "expression/parser/ASTStart.h"
#include <string>

class Expression//: public Cloneable
{

private:
//    static const std::string REFERENCE_START_;
//    static const std::string REFERENCE_END_;
     std::string text;
//    ::ASTStart* rootNode;
//protected:
//    void ctor(Reference* reference);
//    void ctor(const std::string & text);
//
public:
//    
//	const std::string & getText();
//    ::ASTStart* getRootNode();
//    void setRootNode(::ASTStart* rootNode);
//    const std::string & toString();
//    int hashCode();
//    bool equals(void* obj);
//    Expression* clone();
//
//
//    Expression(Reference* reference);
//
	Expression(const std::string & text);
//protected:
//    Expression(const ::default_init_tag&);
//
//
//public:
//    
//    static void 
//    static const std::string& REFERENCE_START();
//    static const std::string& REFERENCE_END();
};
#endif//_EXPRESSION_H_
