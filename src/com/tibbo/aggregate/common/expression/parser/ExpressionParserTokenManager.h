#ifndef EXPRESSIONPARSERTOKENMANAGER_H
#define EXPRESSIONPARSERTOKENMANAGER_H
#include "JavaCC.h"
#include "CharStream.h"
#include "Token.h"
#include "ErrorHandler.h"
#include "TokenManager.h"
#include "ExpressionParserConstants.h"
class ExpressionParser;

/** Token Manager. */
class ExpressionParserTokenManager : public TokenManager {
   public:

  /** Debug output. */
  FILE *debugStream;
  /** Set debug output. */

void  setDebugStream(FILE *ds);

 int  jjStopAtPos(int pos, int kind);

 int  jjMoveStringLiteralDfa0_0();

 int  jjMoveStringLiteralDfa1_0(unsigned long long active0);

 int  jjMoveStringLiteralDfa2_0(unsigned long long old0, unsigned long long active0);

 int  jjMoveStringLiteralDfa3_0(unsigned long long old0, unsigned long long active0);

 int  jjMoveStringLiteralDfa4_0(unsigned long long old0, unsigned long long active0);

int jjMoveNfa_0(int startState, int curPos);

 int  jjMoveStringLiteralDfa0_2();

 int  jjMoveStringLiteralDfa1_2(unsigned long long active0);

 int  jjMoveStringLiteralDfa0_1();

int jjMoveNfa_1(int startState, int curPos);

bool jjCanMove_0(int hiByte, int i1, int i2, unsigned long long l1, unsigned long long l2);

Token * jjFillToken();

public: int curLexState;
public: int jjnewStateCnt;
public: int jjround;
public: int jjmatchedPos;
public: int jjmatchedKind;


Token * getNextToken();

void  SkipLexicalActions(Token *matchedToken);
#define jjCheckNAdd(state)\
{\
   if (jjrounds[state] != jjround)\
   {\
      jjstateSet[jjnewStateCnt++] = state;\
      jjrounds[state] = jjround;\
   }\
}
#define jjAddStates(start, end)\
{\
   for (int x = start; x <= end; x++) {\
      jjstateSet[jjnewStateCnt++] = jjnextStates[x];\
   } /*while (start++ != end);*/\
}
#define jjCheckNAddTwoStates(state1, state2)\
{\
   jjCheckNAdd(state1);\
   jjCheckNAdd(state2);\
}

#define jjCheckNAddStates(start, end)\
{\
   for (int x = start; x <= end; x++) {\
      jjCheckNAdd(jjnextStates[x]);\
   } /*while (start++ != end);*/\
}

#ifndef JAVACC_CHARSTREAM
#define JAVACC_CHARSTREAM CharStream
#endif
  private: ExpressionParser*parser;
  private: void ReInitRounds();
  public: ExpressionParserTokenManager(JAVACC_CHARSTREAM *stream, int lexState = 0, ExpressionParser *parserArg = NULL);
  public: virtual ~ExpressionParserTokenManager();
  void ReInit(JAVACC_CHARSTREAM *stream, int lexState = 0, ExpressionParser *parserArg = NULL);
  void SwitchTo(int lexState);
  const JAVACC_SIMPLE_STRING jjKindsForBitVector(int i, unsigned long long vec);
  const JAVACC_SIMPLE_STRING jjKindsForStateVector(int lexState, int vec[], int start, int end);
    JAVACC_CHARSTREAM  *input_stream;
    int jjrounds[59];
    int jjstateSet[2 * 59];
    JAVACC_STRING_TYPE jjimage;
    JAVACC_STRING_TYPE image;
    int jjimageLen;
    int lengthOfMatch;
    JAVACC_CHAR_TYPE curChar;
    TokenManagerErrorHandler *errorHandler;
    bool errorHandlerCreated;
    public: void setErrorHandler(TokenManagerErrorHandler *eh) {
      if (errorHandlerCreated && errorHandler != NULL) delete errorHandler;
      errorHandler = eh;
      errorHandlerCreated = false;
    }
};
#endif
