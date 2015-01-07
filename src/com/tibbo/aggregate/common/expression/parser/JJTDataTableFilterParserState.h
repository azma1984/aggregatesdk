// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/JJTDataTableFilterParserState.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class JJTDataTableFilterParserState
    
{

public:
    typedef void super;

private:
    ::java::util::Stack* nodes;
    ::java::util::Stack* marks;
    int sp;
    int mk;
    bool node_created;
protected:
    void ctor();

public: /* package */
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
    JJTDataTableFilterParserState();
protected:
    JJTDataTableFilterParserState(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
