// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/JJTExpressionParserState.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class JJTExpressionParserState
    
{

public:
    typedef void super;

private:
    std::list  nodes;
    std::list  marks;
    int sp;
    int mk;
    bool node_created;
protected:
    void ctor();

public:
    bool nodeCreated();
    void reset();
    Node* rootNode();
    void pushNode(Node* n);
    Node* popNode();
    Node* peekNode();
    int nodeArity();
    void clearNodeScope(Node* n);
    void openNodeScope(Node* n);
    void closeNodeScope(Node* n, int num);
    void closeNodeScope(Node* n, bool condition);

    // Generated
    JJTExpressionParserState();
protected:
    JJTExpressionParserState(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
