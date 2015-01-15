// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ExpressionParserTokenManager.java

#pragma once



class ExpressionParserTokenManager
{
public:
    /** Token literal values. */
     static const std::string jjstrLiteralImages = {
    "", null, null, null, null, null, null, null, null, null, null, "\174\174",
    "\46\46", "\41", "\174", "\136", "\46", "\176", null, null, null, null, null, null, null,
    null, null, null, null, "\53", "\55", "\52", "\57", "\45", "\77", "\72", "\54",
    "\75\75", "\41\75", "\176\75", "\74", "\76", "\74\75", "\76\75", "\50", "\51", "\173",
    "\175", "\76\76", "\76\76\76", "\74\74", null, null, null, null, };

    /** Lexer state names. */
    static const std::string lexStateNames = {
       "DEFAULT",
       "IN_SINGLE_LINE_COMMENT",
       "IN_MULTI_LINE_COMMENT",
    };

    /** Lex State array. */
    static const int jjnewLexState = {
       -1, -1, -1, -1, -1, -1, 1, 2, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
       -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
       -1, -1, -1, -1, -1,
    };
    static const long jjtoToken = {
       0x1ffffff43ff801L,
    };
    static const long jjtoSkip = {
       0x33eL,
    };
    static const long jjtoSpecial = {
       0x300L,
    };
    static const long jjtoMore = {
       0x4c0L,
    };

    int curLexState;
    int defaultLexState;
    int jjnewStateCnt;
    int jjround[59];
    int jjstateSet [118];
    int jjmatchedPos;
    int jjmatchedKind;
    char curChar;
    SimpleCharStream* input_stream;
private:
    int jjStopAtPos(int pos, int kind);
    int jjMoveStringLiteralDfa0_0();
    int jjMoveStringLiteralDfa1_0(long active0);
    int jjMoveStringLiteralDfa2_0(long old0, long active0);
    int jjMoveStringLiteralDfa3_0(long old0, long active0);
    int jjMoveStringLiteralDfa4_0(long old0, long active0);

    static const long jjbitVec0 = {
       0xfffffffffffffffeL, 0xffffffffffffffffL, 0xffffffffffffffffL, 0xffffffffffffffffL
    };
    static const long jjbitVec2 = {
       0x0L, 0x0L, 0xffffffffffffffffL, 0xffffffffffffffffL
    };


    int jjMoveNfa_0(int startState, int curPos);
    int jjMoveStringLiteralDfa0_2();
    int jjMoveStringLiteralDfa1_2(long active0);
    int jjMoveStringLiteralDfa0_1();
    int jjMoveNfa_1(int startState, int curPos);

    static const int jjnextStates = {
       16, 17, 18, 39, 40, 45, 46, 49, 50, 14, 26, 27, 28, 54, 56, 57,
       3, 5, 10, 11, 14, 41, 42, 14, 49, 50, 14, 12, 13, 19, 20, 29,
       30, 43, 44, 47, 48, 51, 52, 0, 1, 3,
    };

    static bool jjCanMove_0(int hiByte, int i1, int i2, long l1, long l2);




    const std::string & jjimage;
    const std::string & image;
    int jjimageLen;
    int lengthOfMatch;

    void ReInit(SimpleCharStream* stream);


    void ReInitRounds();


    void ReInit(SimpleCharStream* stream, int lexState);
    void SwitchTo(int lexState);


    Token* jjFillToken();

    Token* getNextToken();

    void SkipLexicalActions(Token* matchedToken);

    void jjCheckNAdd(int state);
    void jjAddStates(int start, int end);
    void jjCheckNAddTwoStates(int state1, int state2);
    void jjCheckNAddStates(int start, int end);

    // Generated


    void ExpressionParserTokenManager();



};
