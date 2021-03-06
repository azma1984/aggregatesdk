/* Generated By:JJTree: Do not edit this line. ExpressionParserTree.cc Version 6.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ExpressionParserTree.h"
#include "ExpressionParserVisitor.h"

  SimpleNode::SimpleNode(int i)
{
    id = i;
    parser = NULL;
    value = NULL;
  }

  SimpleNode::SimpleNode(ExpressionParser *p, int i)
{
    id = i;
    parser = p;
    value = NULL;
  }

  void SimpleNode::jjtOpen() const {
  }

  void SimpleNode::jjtClose() const {
  }

  void SimpleNode::jjtSetParent(Node *n) { parent = n; }
  Node *SimpleNode::jjtGetParent() const { return parent; }

  void SimpleNode::jjtAddChild(Node *n, int i) {
    if (i >= children.size()) {
      children.resize(i + 1, NULL);
    }

    children[i] = n;
  }

  Node *SimpleNode::jjtGetChild(int i) const {
    return i < children.size() ? children[i] : NULL;
  }

  int SimpleNode::jjtGetNumChildren() const {
    return children.size();
  }

  void SimpleNode::jjtSetValue(void * value) { this->value = value; }
  void * SimpleNode::jjtGetValue() const { return value; }

  Token* SimpleNode::jjtGetFirstToken() const { return firstToken; }
  void SimpleNode::jjtSetFirstToken(Token* token) { this->firstToken = token; }
  Token* SimpleNode::jjtGetLastToken() const { return lastToken; }
  void SimpleNode::jjtSetLastToken(Token *token) { this->lastToken = token; }

  /** Accept the visitor. **/
  void  SimpleNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
  }

  /** Accept the visitor. **/
  void SimpleNode::childrenAccept(ExpressionParserVisitor *visitor, void * data) const {
    for (int i = 0; i < children.size(); ++i) {
      children[i]->jjtAccept(visitor, data);
    }
  }

  /* You can override these two methods in subclasses of SimpleNode to
     customize the way the node appears when the tree is dumped.  If
     your output uses more than one line you should override
     toString(string), otherwise overriding toString() is probably all
     you need to do. */

  JAVACC_STRING_TYPE SimpleNode::toString() const { return jjtNodeName[id]; }
  JAVACC_STRING_TYPE SimpleNode::toString(JAVACC_STRING_TYPE prefix) const { return prefix + toString(); }

  static JAVACC_CHAR_TYPE space_char_arr_[] = { ' ', '\0' };
  static JAVACC_CHAR_TYPE newline_char_arr_[] = { '\n', '\0' };
  static JAVACC_STRING_TYPE space = space_char_arr_;
  static JAVACC_STRING_TYPE newline = newline_char_arr_;

  /* Override this method if you want to customize how the node dumps
     out its children. */

  void SimpleNode::dumpToBuffer(JAVACC_STRING_TYPE prefix, JAVACC_STRING_TYPE separator, JAVACC_STRING_TYPE *buffer) const {
    buffer->append(toString(prefix));
    buffer->append(separator);
    for (int i = 0; i < children.size(); ++i) {
      SimpleNode *n = (SimpleNode*)children[i];
      if (n != NULL) {
        n->dumpToBuffer(prefix + space, separator, buffer);
      }
    }
  }
  
  void SimpleNode::dump(JAVACC_STRING_TYPE prefix) const {
    JAVACC_STRING_TYPE *buffer = new JAVACC_STRING_TYPE();
    dumpToBuffer(prefix, newline, buffer);
    for (int i = 0; i < buffer->size(); i++) {
      printf("%c", (*buffer)[i]);
    }
    delete buffer;
  }

  SimpleNode::~SimpleNode() {
    for (int i = 0; i < children.size(); ++i) {
      delete children[i];
    }
  }
  ASTLogicalOrExpression::ASTLogicalOrExpression(int id) : SimpleNode(id){
  }

  ASTLogicalOrExpression::ASTLogicalOrExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLogicalOrExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLogicalOrExpression::~ASTLogicalOrExpression() {
  }
  ASTLogicalAndExpression::ASTLogicalAndExpression(int id) : SimpleNode(id){
  }

  ASTLogicalAndExpression::ASTLogicalAndExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLogicalAndExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLogicalAndExpression::~ASTLogicalAndExpression() {
  }
  ASTStart::ASTStart(int id) : SimpleNode(id){
  }

  ASTStart::ASTStart(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTStart::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTStart::~ASTStart() {
  }
  ASTLogicalNotExpression::ASTLogicalNotExpression(int id) : SimpleNode(id){
  }

  ASTLogicalNotExpression::ASTLogicalNotExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLogicalNotExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLogicalNotExpression::~ASTLogicalNotExpression() {
  }
  ASTAddNode::ASTAddNode(int id) : SimpleNode(id){
  }

  ASTAddNode::ASTAddNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTAddNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTAddNode::~ASTAddNode() {
  }
  ASTBitwiseAndExpression::ASTBitwiseAndExpression(int id) : SimpleNode(id){
  }

  ASTBitwiseAndExpression::ASTBitwiseAndExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseAndExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseAndExpression::~ASTBitwiseAndExpression() {
  }
  ASTConditionalNode::ASTConditionalNode(int id) : SimpleNode(id){
  }

  ASTConditionalNode::ASTConditionalNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTConditionalNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTConditionalNode::~ASTConditionalNode() {
  }
  ASTUnaryNode::ASTUnaryNode(int id) : SimpleNode(id){
  }

  ASTUnaryNode::ASTUnaryNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTUnaryNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTUnaryNode::~ASTUnaryNode() {
  }
  ASTMulNode::ASTMulNode(int id) : SimpleNode(id){
  }

  ASTMulNode::ASTMulNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTMulNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTMulNode::~ASTMulNode() {
  }
  ASTLogicalAndNode::ASTLogicalAndNode(int id) : SimpleNode(id){
  }

  ASTLogicalAndNode::ASTLogicalAndNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLogicalAndNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLogicalAndNode::~ASTLogicalAndNode() {
  }
  ASTBitwiseNotNode::ASTBitwiseNotNode(int id) : SimpleNode(id){
  }

  ASTBitwiseNotNode::ASTBitwiseNotNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseNotNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseNotNode::~ASTBitwiseNotNode() {
  }
  ASTGTNode::ASTGTNode(int id) : SimpleNode(id){
  }

  ASTGTNode::ASTGTNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTGTNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTGTNode::~ASTGTNode() {
  }
  ASTExpression::ASTExpression(int id) : SimpleNode(id){
  }

  ASTExpression::ASTExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTExpression::~ASTExpression() {
  }
  ASTLogicalOrNode::ASTLogicalOrNode(int id) : SimpleNode(id){
  }

  ASTLogicalOrNode::ASTLogicalOrNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLogicalOrNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLogicalOrNode::~ASTLogicalOrNode() {
  }
  ASTLongConstNode::ASTLongConstNode(int id) : SimpleNode(id){
  }

  ASTLongConstNode::ASTLongConstNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLongConstNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLongConstNode::~ASTLongConstNode() {
  }
  ASTBitwiseNotExpression::ASTBitwiseNotExpression(int id) : SimpleNode(id){
  }

  ASTBitwiseNotExpression::ASTBitwiseNotExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseNotExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseNotExpression::~ASTBitwiseNotExpression() {
  }
  ASTGENode::ASTGENode(int id) : SimpleNode(id){
  }

  ASTGENode::ASTGENode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTGENode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTGENode::~ASTGENode() {
  }
  ASTBitwiseXorNode::ASTBitwiseXorNode(int id) : SimpleNode(id){
  }

  ASTBitwiseXorNode::ASTBitwiseXorNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseXorNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseXorNode::~ASTBitwiseXorNode() {
  }
  ASTBitwiseOrNode::ASTBitwiseOrNode(int id) : SimpleNode(id){
  }

  ASTBitwiseOrNode::ASTBitwiseOrNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseOrNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseOrNode::~ASTBitwiseOrNode() {
  }
  ASTEQNode::ASTEQNode(int id) : SimpleNode(id){
  }

  ASTEQNode::ASTEQNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTEQNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTEQNode::~ASTEQNode() {
  }
  ASTskip_to_matching_brace::ASTskip_to_matching_brace(int id) : SimpleNode(id){
  }

  ASTskip_to_matching_brace::ASTskip_to_matching_brace(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTskip_to_matching_brace::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTskip_to_matching_brace::~ASTskip_to_matching_brace() {
  }
  ASTRegexMatchNode::ASTRegexMatchNode(int id) : SimpleNode(id){
  }

  ASTRegexMatchNode::ASTRegexMatchNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTRegexMatchNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTRegexMatchNode::~ASTRegexMatchNode() {
  }
  ASTFalseNode::ASTFalseNode(int id) : SimpleNode(id){
  }

  ASTFalseNode::ASTFalseNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTFalseNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTFalseNode::~ASTFalseNode() {
  }
  ASTNENode::ASTNENode(int id) : SimpleNode(id){
  }

  ASTNENode::ASTNENode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTNENode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTNENode::~ASTNENode() {
  }
  ASTTrueNode::ASTTrueNode(int id) : SimpleNode(id){
  }

  ASTTrueNode::ASTTrueNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTTrueNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTTrueNode::~ASTTrueNode() {
  }
  ASTUnaryExpression::ASTUnaryExpression(int id) : SimpleNode(id){
  }

  ASTUnaryExpression::ASTUnaryExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTUnaryExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTUnaryExpression::~ASTUnaryExpression() {
  }
  ASTLTNode::ASTLTNode(int id) : SimpleNode(id){
  }

  ASTLTNode::ASTLTNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLTNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLTNode::~ASTLTNode() {
  }
  ASTDivNode::ASTDivNode(int id) : SimpleNode(id){
  }

  ASTDivNode::ASTDivNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTDivNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTDivNode::~ASTDivNode() {
  }
  ASTStringConstNode::ASTStringConstNode(int id) : SimpleNode(id){
  }

  ASTStringConstNode::ASTStringConstNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTStringConstNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTStringConstNode::~ASTStringConstNode() {
  }
  ASTLogicalNotNode::ASTLogicalNotNode(int id) : SimpleNode(id){
  }

  ASTLogicalNotNode::ASTLogicalNotNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLogicalNotNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLogicalNotNode::~ASTLogicalNotNode() {
  }
  ASTBitwiseOrExpression::ASTBitwiseOrExpression(int id) : SimpleNode(id){
  }

  ASTBitwiseOrExpression::ASTBitwiseOrExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseOrExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseOrExpression::~ASTBitwiseOrExpression() {
  }
  ASTLENode::ASTLENode(int id) : SimpleNode(id){
  }

  ASTLENode::ASTLENode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLENode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLENode::~ASTLENode() {
  }
  ASTBitwiseXorExpression::ASTBitwiseXorExpression(int id) : SimpleNode(id){
  }

  ASTBitwiseXorExpression::ASTBitwiseXorExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseXorExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseXorExpression::~ASTBitwiseXorExpression() {
  }
  ASTModNode::ASTModNode(int id) : SimpleNode(id){
  }

  ASTModNode::ASTModNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTModNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTModNode::~ASTModNode() {
  }
  ASTUnsignedRightShiftNode::ASTUnsignedRightShiftNode(int id) : SimpleNode(id){
  }

  ASTUnsignedRightShiftNode::ASTUnsignedRightShiftNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTUnsignedRightShiftNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTUnsignedRightShiftNode::~ASTUnsignedRightShiftNode() {
  }
  ASTBitwiseAndNode::ASTBitwiseAndNode(int id) : SimpleNode(id){
  }

  ASTBitwiseAndNode::ASTBitwiseAndNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTBitwiseAndNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTBitwiseAndNode::~ASTBitwiseAndNode() {
  }
  ASTConditionalExpression::ASTConditionalExpression(int id) : SimpleNode(id){
  }

  ASTConditionalExpression::ASTConditionalExpression(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTConditionalExpression::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTConditionalExpression::~ASTConditionalExpression() {
  }
  ASTNullNode::ASTNullNode(int id) : SimpleNode(id){
  }

  ASTNullNode::ASTNullNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTNullNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTNullNode::~ASTNullNode() {
  }
  ASTValueReferenceNode::ASTValueReferenceNode(int id) : SimpleNode(id){
  }

  ASTValueReferenceNode::ASTValueReferenceNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTValueReferenceNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTValueReferenceNode::~ASTValueReferenceNode() {
  }
  ASTFunctionNode::ASTFunctionNode(int id) : SimpleNode(id){
  }

  ASTFunctionNode::ASTFunctionNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTFunctionNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTFunctionNode::~ASTFunctionNode() {
  }
  ASTSubtractNode::ASTSubtractNode(int id) : SimpleNode(id){
  }

  ASTSubtractNode::ASTSubtractNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTSubtractNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTSubtractNode::~ASTSubtractNode() {
  }
  ASTRightShiftNode::ASTRightShiftNode(int id) : SimpleNode(id){
  }

  ASTRightShiftNode::ASTRightShiftNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTRightShiftNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTRightShiftNode::~ASTRightShiftNode() {
  }
  ASTFloatConstNode::ASTFloatConstNode(int id) : SimpleNode(id){
  }

  ASTFloatConstNode::ASTFloatConstNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTFloatConstNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTFloatConstNode::~ASTFloatConstNode() {
  }
  ASTLeftShiftNode::ASTLeftShiftNode(int id) : SimpleNode(id){
  }

  ASTLeftShiftNode::ASTLeftShiftNode(ExpressionParser *p, int id) : SimpleNode(p, id){
  }

  /** Accept the visitor. **/
  void  ASTLeftShiftNode::jjtAccept(ExpressionParserVisitor *visitor, void * data) const {
    return 
    visitor->visit(this, data);
  }
  ASTLeftShiftNode::~ASTLeftShiftNode() {
  }
/* JavaCC - OriginalChecksum=3d17391da7130c8d6b52a94eb2c368b6 (do not edit this line) */
