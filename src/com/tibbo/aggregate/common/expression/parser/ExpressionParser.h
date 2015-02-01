#ifndef EXPRESSIONPARSER_H
#define EXPRESSIONPARSER_H
#include "JavaCC.h"
#include "CharStream.h"
#include "Token.h"
#include "TokenManager.h"
#include "ExpressionParserTokenManager.h"
#include "ExpressionParserConstants.h"
#include "JJTExpressionParserState.h"
#include "ErrorHandler.h"
#include "ExpressionParserTree.h"

struct JJCalls {
    int gen;
    Token *first;
    int arg;
    JJCalls *next;

    ~JJCalls() { if (next) delete next; }
    JJCalls() { next = NULL; arg = 0; gen = -1; first = NULL; }
};

class ExpressionParser {
public:

    std::string skip_to_matching_brace();

    ASTStart* Start();

    void Expression();

    void ConditionalExpression();

    void LogicalOrExpression();

    void LogicalAndExpression();

    void BitwiseOrExpression();

    void BitwiseXorExpression();

    void BitwiseAndExpression();

    void EqualityExpression();

    void RelationalExpression();

    void ShiftExpression();

    void AdditiveExpression();

    void MultiplicativeExpression();

    void UnaryExpression();

    void LogicalNotExpression();

    void BitwiseNotExpression();

    void PrimaryExpression();

    void Function();

    void Arguments();

    void ArgumentList();

    void ValueReference();

    void Literal();

    void BooleanLiteral();
  public: TokenManager *token_source;
  public: CharStream *jj_input_stream;
  /** Current token. */
  public: Token *token;
  /** Next token. */
  public: Token *jj_nt;
  private: int jj_ntk;
  private: JJCalls jj_2_rtns[1];
  private: bool jj_rescan;
  private: int jj_gc;
  private: Token *jj_scanpos, *jj_lastpos;
  private: int jj_la;
  /** Whether we are looking ahead. */
  private: bool jj_lookingAhead;
  private: bool jj_semLA;
  private: int jj_gen;
  private: int jj_la1[26];
  private: ErrorHandler *errorHandler;
  private: bool errorHandlerCreated;
  protected: bool hasError;
  public: void setErrorHandler(ErrorHandler *eh) {
    if (errorHandlerCreated) delete errorHandler;
    errorHandler = eh;
    errorHandlerCreated = false;
  }
 Token *head; 
 public: 

 ExpressionParser(TokenManager *tm);
   public: virtual ~ExpressionParser();

void ReInit(TokenManager *tm);

Token * jj_consume_token(int kind);

Token * getNextToken();

Token * getToken(int index);

int jj_ntk_f();
 private: int jj_kind;
  int **jj_expentries;
  int *jj_expentry;

  /** Generate ParseException. */

protected: virtual void  parseError();
  private: int trace_indent;
  private: bool trace_enabled;
  /** Enable tracing. */

public: void enable_tracing();

public: void disable_tracing();
//package com.tibbo.aggregate.common.expression.parser;

//class ExpressionParser {
//}

//string skip_to_matching_brace() :
//{
//        string res = "";
//        Token* tok;
//        int nesting = 1;
//        while (true) {
//        tok = getToken(1);
//        if (tok.kind == EOF) break;
//        if (tok.kind == LBRACE) nesting++;
//        if (tok.kind == RBRACE) {
//          nesting--;
//          if (nesting == 0) break;
//        }
//        if (tok.kind == STRING_LITERAL) {
//          res += tok.image.replace("\\\\", "\\");
//        }
//        else
//        {
//          res += tok.image;
//        }
//        tok = getNextToken();
//  }

//  return res;
//}
  JJTExpressionParserState jjtree;
private: bool jj_done;

};
#endif
