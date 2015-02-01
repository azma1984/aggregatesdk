///* ExpressionParserTokenManager.cc */
//#include ".\ExpressionParserTokenManager.h"
//static const unsigned long long jjbitVec0[] = {
//   0xfffffffffffffffeULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL
//};
//static const unsigned long long jjbitVec2[] = {
//   0x0ULL, 0x0ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL
//};
//static const int jjnextStates[] = {
//   16, 17, 18, 39, 40, 45, 46, 49, 50, 14, 26, 27, 28, 54, 56, 57,
//   3, 5, 10, 11, 14, 41, 42, 14, 49, 50, 14, 12, 13, 19, 20, 29,
//   30, 43, 44, 47, 48, 51, 52, 0, 1, 3,
//};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_0[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_1[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_2[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_3[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_4[] = {0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_5[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_6[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_7[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_8[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_9[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_10[] = {0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_11[] = {0x7c, 0x7c, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_12[] = {0x26, 0x26, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_13[] = {0x21, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_14[] = {0x7c, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_15[] = {0x5e, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_16[] = {0x26, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_17[] = {0x7e, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_18[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_19[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_20[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_21[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_22[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_23[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_24[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_25[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_26[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_27[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_28[] = {0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_29[] = {0x2b, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_30[] = {0x2d, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_31[] = {0x2a, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_32[] = {0x2f, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_33[] = {0x25, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_34[] = {0x3f, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_35[] = {0x3a, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_36[] = {0x2c, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_37[] = {0x3d, 0x3d, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_38[] = {0x21, 0x3d, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_39[] = {0x7e, 0x3d, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_40[] = {0x3c, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_41[] = {0x3e, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_42[] = {0x3c, 0x3d, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_43[] = {0x3e, 0x3d, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_44[] = {0x28, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_45[] = {0x29, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_46[] = {0x7b, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_47[] = {0x7d, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_48[] = {0x3e, 0x3e, 0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_49[] = {0x3e, 0x3e, 0x3e, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_50[] = {0x3c, 0x3c, 0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_51[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_52[] = {0};

//static JAVACC_CHAR_TYPE jjstrLiteralChars_53[] = {0};
//static JAVACC_CHAR_TYPE jjstrLiteralChars_54[] = {0};
//static const JAVACC_STRING_TYPE jjstrLiteralImages[] = {
//jjstrLiteralChars_0,
//jjstrLiteralChars_1,
//jjstrLiteralChars_2,
//jjstrLiteralChars_3,
//jjstrLiteralChars_4,
//jjstrLiteralChars_5,
//jjstrLiteralChars_6,
//jjstrLiteralChars_7,
//jjstrLiteralChars_8,
//jjstrLiteralChars_9,
//jjstrLiteralChars_10,
//jjstrLiteralChars_11,
//jjstrLiteralChars_12,
//jjstrLiteralChars_13,
//jjstrLiteralChars_14,
//jjstrLiteralChars_15,
//jjstrLiteralChars_16,
//jjstrLiteralChars_17,
//jjstrLiteralChars_18,
//jjstrLiteralChars_19,
//jjstrLiteralChars_20,
//jjstrLiteralChars_21,
//jjstrLiteralChars_22,
//jjstrLiteralChars_23,
//jjstrLiteralChars_24,
//jjstrLiteralChars_25,
//jjstrLiteralChars_26,
//jjstrLiteralChars_27,
//jjstrLiteralChars_28,
//jjstrLiteralChars_29,
//jjstrLiteralChars_30,
//jjstrLiteralChars_31,
//jjstrLiteralChars_32,
//jjstrLiteralChars_33,
//jjstrLiteralChars_34,
//jjstrLiteralChars_35,
//jjstrLiteralChars_36,
//jjstrLiteralChars_37,
//jjstrLiteralChars_38,
//jjstrLiteralChars_39,
//jjstrLiteralChars_40,
//jjstrLiteralChars_41,
//jjstrLiteralChars_42,
//jjstrLiteralChars_43,
//jjstrLiteralChars_44,
//jjstrLiteralChars_45,
//jjstrLiteralChars_46,
//jjstrLiteralChars_47,
//jjstrLiteralChars_48,
//jjstrLiteralChars_49,
//jjstrLiteralChars_50,
//jjstrLiteralChars_51,
//jjstrLiteralChars_52,
//jjstrLiteralChars_53,
//jjstrLiteralChars_54,
//};

///** Lexer state names. */
//static const JAVACC_CHAR_TYPE lexStateNames_arr_0[] =
//{0x44, 0x45, 0x46, 0x41, 0x55, 0x4c, 0x54, 0};
//static const JAVACC_CHAR_TYPE lexStateNames_arr_1[] =
//{0x49, 0x4e, 0x5f, 0x53, 0x49, 0x4e, 0x47, 0x4c, 0x45, 0x5f, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x4d, 0x45, 0x4e, 0x54, 0};
//static const JAVACC_CHAR_TYPE lexStateNames_arr_2[] =
//{0x49, 0x4e, 0x5f, 0x4d, 0x55, 0x4c, 0x54, 0x49, 0x5f, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x4d, 0x45, 0x4e, 0x54, 0};
//static const JAVACC_STRING_TYPE lexStateNames[] = {
//lexStateNames_arr_0,
//lexStateNames_arr_1,
//lexStateNames_arr_2,
//};

///** Lex State array. */
//static const int jjnewLexState[] = {
//   -1, -1, -1, -1, -1, -1, 1, 2, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
//   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
//   -1, -1, -1, -1, -1,
//};
//static const unsigned long long jjtoToken[] = {
//   0x1ffffff43ff801ULL,
//};
//static const unsigned long long jjtoSkip[] = {
//   0x33eULL,
//};
//static const unsigned long long jjtoSpecial[] = {
//   0x300ULL,
//};

//void  ExpressionParserTokenManager::setDebugStream(FILE *ds){ debugStream = ds; }

// int  ExpressionParserTokenManager::jjStopAtPos(int pos, int kind){
//   jjmatchedKind = kind;
//   jjmatchedPos = pos;
//   return pos + 1;
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa0_0(){
//   switch(curChar)
//   {
//      case 9:
//         jjmatchedKind = 2;
//         return jjMoveNfa_0(6, 0);
//      case 10:
//         jjmatchedKind = 3;
//         return jjMoveNfa_0(6, 0);
//      case 13:
//         jjmatchedKind = 4;
//         return jjMoveNfa_0(6, 0);
//      case 32:
//         jjmatchedKind = 1;
//         return jjMoveNfa_0(6, 0);
//      case 33:
//         jjmatchedKind = 13;
//         return jjMoveStringLiteralDfa1_0(0x4000000000ULL);
//      case 37:
//         jjmatchedKind = 33;
//         return jjMoveNfa_0(6, 0);
//      case 38:
//         jjmatchedKind = 16;
//         return jjMoveStringLiteralDfa1_0(0x1000ULL);
//      case 40:
//         jjmatchedKind = 44;
//         return jjMoveNfa_0(6, 0);
//      case 41:
//         jjmatchedKind = 45;
//         return jjMoveNfa_0(6, 0);
//      case 42:
//         jjmatchedKind = 31;
//         return jjMoveNfa_0(6, 0);
//      case 43:
//         jjmatchedKind = 29;
//         return jjMoveNfa_0(6, 0);
//      case 44:
//         jjmatchedKind = 36;
//         return jjMoveNfa_0(6, 0);
//      case 45:
//         jjmatchedKind = 30;
//         return jjMoveNfa_0(6, 0);
//      case 47:
//         jjmatchedKind = 32;
//         return jjMoveStringLiteralDfa1_0(0xc0ULL);
//      case 58:
//         jjmatchedKind = 35;
//         return jjMoveNfa_0(6, 0);
//      case 60:
//         jjmatchedKind = 40;
//         return jjMoveStringLiteralDfa1_0(0x4040000000000ULL);
//      case 61:
//         return jjMoveStringLiteralDfa1_0(0x2000000000ULL);
//      case 62:
//         jjmatchedKind = 41;
//         return jjMoveStringLiteralDfa1_0(0x3080000000000ULL);
//      case 63:
//         jjmatchedKind = 34;
//         return jjMoveNfa_0(6, 0);
//      case 70:
//         return jjMoveStringLiteralDfa1_0(0x80000ULL);
//      case 78:
//         return jjMoveStringLiteralDfa1_0(0x100000ULL);
//      case 84:
//         return jjMoveStringLiteralDfa1_0(0x40000ULL);
//      case 94:
//         jjmatchedKind = 15;
//         return jjMoveNfa_0(6, 0);
//      case 102:
//         return jjMoveStringLiteralDfa1_0(0x80000ULL);
//      case 110:
//         return jjMoveStringLiteralDfa1_0(0x100000ULL);
//      case 116:
//         return jjMoveStringLiteralDfa1_0(0x40000ULL);
//      case 123:
//         jjmatchedKind = 46;
//         return jjMoveNfa_0(6, 0);
//      case 124:
//         jjmatchedKind = 14;
//         return jjMoveStringLiteralDfa1_0(0x800ULL);
//      case 125:
//         jjmatchedKind = 47;
//         return jjMoveNfa_0(6, 0);
//      case 126:
//         jjmatchedKind = 17;
//         return jjMoveStringLiteralDfa1_0(0x8000000000ULL);
//      default :
//         return jjMoveNfa_0(6, 0);
//   }
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa1_0(unsigned long long active0){
//   if (input_stream->endOfInput()) {
//   return jjMoveNfa_0(6, 0);
//   }
//   curChar = input_stream->readChar();
//   switch(curChar)
//   {
//      case 38:
//         if ((active0 & 0x1000ULL) != 0L)
//         {
//            jjmatchedKind = 12;
//            jjmatchedPos = 1;
//         }
//         break;
//      case 42:
//         if ((active0 & 0x80ULL) != 0L)
//         {
//            jjmatchedKind = 7;
//            jjmatchedPos = 1;
//         }
//         break;
//      case 47:
//         if ((active0 & 0x40ULL) != 0L)
//         {
//            jjmatchedKind = 6;
//            jjmatchedPos = 1;
//         }
//         break;
//      case 60:
//         if ((active0 & 0x4000000000000ULL) != 0L)
//         {
//            jjmatchedKind = 50;
//            jjmatchedPos = 1;
//         }
//         break;
//      case 61:
//         if ((active0 & 0x2000000000ULL) != 0L)
//         {
//            jjmatchedKind = 37;
//            jjmatchedPos = 1;
//         }
//         else if ((active0 & 0x4000000000ULL) != 0L)
//         {
//            jjmatchedKind = 38;
//            jjmatchedPos = 1;
//         }
//         else if ((active0 & 0x8000000000ULL) != 0L)
//         {
//            jjmatchedKind = 39;
//            jjmatchedPos = 1;
//         }
//         else if ((active0 & 0x40000000000ULL) != 0L)
//         {
//            jjmatchedKind = 42;
//            jjmatchedPos = 1;
//         }
//         else if ((active0 & 0x80000000000ULL) != 0L)
//         {
//            jjmatchedKind = 43;
//            jjmatchedPos = 1;
//         }
//         break;
//      case 62:
//         if ((active0 & 0x1000000000000ULL) != 0L)
//         {
//            jjmatchedKind = 48;
//            jjmatchedPos = 1;
//         }
//         return jjMoveStringLiteralDfa2_0(active0, 0x2000000000000ULL);
//      case 65:
//         return jjMoveStringLiteralDfa2_0(active0, 0x80000ULL);
//      case 82:
//         return jjMoveStringLiteralDfa2_0(active0, 0x40000ULL);
//      case 85:
//         return jjMoveStringLiteralDfa2_0(active0, 0x100000ULL);
//      case 97:
//         return jjMoveStringLiteralDfa2_0(active0, 0x80000ULL);
//      case 114:
//         return jjMoveStringLiteralDfa2_0(active0, 0x40000ULL);
//      case 117:
//         return jjMoveStringLiteralDfa2_0(active0, 0x100000ULL);
//      case 124:
//         if ((active0 & 0x800ULL) != 0L)
//         {
//            jjmatchedKind = 11;
//            jjmatchedPos = 1;
//         }
//         break;
//      default :
//         break;
//   }
//   return jjMoveNfa_0(6, 1);
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa2_0(unsigned long long old0, unsigned long long active0){
//   if (((active0 &= old0)) == 0L)
//      return jjMoveNfa_0(6, 1);
//   if (input_stream->endOfInput()) {
//   return jjMoveNfa_0(6, 1);
//   }
//   curChar = input_stream->readChar();
//   switch(curChar)
//   {
//      case 62:
//         if ((active0 & 0x2000000000000ULL) != 0L)
//         {
//            jjmatchedKind = 49;
//            jjmatchedPos = 2;
//         }
//         break;
//      case 76:
//         return jjMoveStringLiteralDfa3_0(active0, 0x180000ULL);
//      case 85:
//         return jjMoveStringLiteralDfa3_0(active0, 0x40000ULL);
//      case 108:
//         return jjMoveStringLiteralDfa3_0(active0, 0x180000ULL);
//      case 117:
//         return jjMoveStringLiteralDfa3_0(active0, 0x40000ULL);
//      default :
//         break;
//   }
//   return jjMoveNfa_0(6, 2);
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa3_0(unsigned long long old0, unsigned long long active0){
//   if (((active0 &= old0)) == 0L)
//      return jjMoveNfa_0(6, 2);
//   if (input_stream->endOfInput()) {
//   return jjMoveNfa_0(6, 2);
//   }
//   curChar = input_stream->readChar();
//   switch(curChar)
//   {
//      case 69:
//         if ((active0 & 0x40000ULL) != 0L)
//         {
//            jjmatchedKind = 18;
//            jjmatchedPos = 3;
//         }
//         break;
//      case 76:
//         if ((active0 & 0x100000ULL) != 0L)
//         {
//            jjmatchedKind = 20;
//            jjmatchedPos = 3;
//         }
//         break;
//      case 83:
//         return jjMoveStringLiteralDfa4_0(active0, 0x80000ULL);
//      case 101:
//         if ((active0 & 0x40000ULL) != 0L)
//         {
//            jjmatchedKind = 18;
//            jjmatchedPos = 3;
//         }
//         break;
//      case 108:
//         if ((active0 & 0x100000ULL) != 0L)
//         {
//            jjmatchedKind = 20;
//            jjmatchedPos = 3;
//         }
//         break;
//      case 115:
//         return jjMoveStringLiteralDfa4_0(active0, 0x80000ULL);
//      default :
//         break;
//   }
//   return jjMoveNfa_0(6, 3);
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa4_0(unsigned long long old0, unsigned long long active0){
//   if (((active0 &= old0)) == 0L)
//      return jjMoveNfa_0(6, 3);
//   if (input_stream->endOfInput()) {
//   return jjMoveNfa_0(6, 3);
//   }
//   curChar = input_stream->readChar();
//   switch(curChar)
//   {
//      case 69:
//         if ((active0 & 0x80000ULL) != 0L)
//         {
//            jjmatchedKind = 19;
//            jjmatchedPos = 4;
//         }
//         break;
//      case 101:
//         if ((active0 & 0x80000ULL) != 0L)
//         {
//            jjmatchedKind = 19;
//            jjmatchedPos = 4;
//         }
//         break;
//      default :
//         break;
//   }
//   return jjMoveNfa_0(6, 4);
//}

//int ExpressionParserTokenManager::jjMoveNfa_0(int startState, int curPos){
//   int strKind = jjmatchedKind;
//   int strPos = jjmatchedPos;
//   int seenUpto;
//   input_stream->backup(seenUpto = curPos + 1);
//   assert(!input_stream->endOfInput());
//   curChar = input_stream->readChar();
//   curPos = 0;
//   int startsAt = 0;
//   jjnewStateCnt = 59;
//   int i = 1;
//   jjstateSet[0] = startState;
//   int kind = 0x7fffffff;
//   for (;;)
//   {
//      if (++jjround == 0x7fffffff)
//         ReInitRounds();
//      if (curChar < 64)
//      {
//         unsigned long long l = 1ULL << curChar;
//         (void)l;
//         do
//         {
//            switch(jjstateSet[--i])
//            {
//               case 6:
//                  if ((0xaffffffa00000000ULL & l) != 0L)
//                  {
//                     if (kind > 52)
//                        kind = 52;
//                  }
//                  else if (curChar == 34)
//                     { jjCheckNAddStates(0, 2); }
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddStates(3, 9); }
//                  else if (curChar == 39)
//                     { jjCheckNAddStates(10, 12); }
//                  else if (curChar == 46)
//                     { jjCheckNAdd(10); }
//                  else if (curChar == 47)
//                     jjstateSet[jjnewStateCnt++] = 0;
//                  if ((0x3fe000000000000ULL & l) != 0L)
//                  {
//                     if (kind > 21)
//                        kind = 21;
//                     { jjCheckNAdd(8); }
//                  }
//                  else if (curChar == 48)
//                  {
//                     if (kind > 21)
//                        kind = 21;
//                     { jjCheckNAddStates(13, 15); }
//                  }
//                  break;
//               case 0:
//                  if (curChar == 42)
//                     { jjCheckNAddTwoStates(1, 2); }
//                  break;
//               case 1:
//                  if ((0xfffffbffffffffffULL & l) != 0L)
//                     { jjCheckNAddTwoStates(1, 2); }
//                  break;
//               case 2:
//                  if (curChar == 42)
//                     { jjAddStates(16, 17); }
//                  break;
//               case 3:
//                  if ((0xffff7fffffffffffULL & l) != 0L)
//                     { jjCheckNAddTwoStates(4, 2); }
//                  break;
//               case 4:
//                  if ((0xfffffbffffffffffULL & l) != 0L)
//                     { jjCheckNAddTwoStates(4, 2); }
//                  break;
//               case 5:
//                  if (curChar == 47 && kind > 5)
//                     kind = 5;
//                  break;
//               case 7:
//                  if ((0x3fe000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 21)
//                     kind = 21;
//                  { jjCheckNAdd(8); }
//                  break;
//               case 8:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 21)
//                     kind = 21;
//                  { jjCheckNAdd(8); }
//                  break;
//               case 9:
//                  if (curChar == 46)
//                     { jjCheckNAdd(10); }
//                  break;
//               case 10:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 26)
//                     kind = 26;
//                  { jjCheckNAddStates(18, 20); }
//                  break;
//               case 12:
//                  if ((0x280000000000ULL & l) != 0L)
//                     { jjCheckNAdd(13); }
//                  break;
//               case 13:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 26)
//                     kind = 26;
//                  { jjCheckNAddTwoStates(13, 14); }
//                  break;
//               case 15:
//                  if (curChar == 34)
//                     { jjCheckNAddStates(0, 2); }
//                  break;
//               case 16:
//                  if ((0xfffffffbffffc8ffULL & l) != 0L)
//                     { jjCheckNAddStates(0, 2); }
//                  break;
//               case 17:
//                  if (curChar == 34 && kind > 28)
//                     kind = 28;
//                  break;
//               case 19:
//                  if ((0x8400000000ULL & l) != 0L)
//                     { jjCheckNAddStates(0, 2); }
//                  break;
//               case 21:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 22;
//                  break;
//               case 22:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 23;
//                  break;
//               case 23:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 24;
//                  break;
//               case 24:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddStates(0, 2); }
//                  break;
//               case 25:
//                  if (curChar == 39)
//                     { jjCheckNAddStates(10, 12); }
//                  break;
//               case 26:
//                  if ((0xffffff7fffffc8ffULL & l) != 0L)
//                     { jjCheckNAddStates(10, 12); }
//                  break;
//               case 27:
//                  if (curChar == 39 && kind > 28)
//                     kind = 28;
//                  break;
//               case 29:
//                  if ((0x8400000000ULL & l) != 0L)
//                     { jjCheckNAddStates(10, 12); }
//                  break;
//               case 31:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 32;
//                  break;
//               case 32:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 33;
//                  break;
//               case 33:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 34;
//                  break;
//               case 34:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddStates(10, 12); }
//                  break;
//               case 36:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 51)
//                     kind = 51;
//                  jjstateSet[jjnewStateCnt++] = 36;
//                  break;
//               case 37:
//                  if ((0xaffffffa00000000ULL & l) != 0L && kind > 52)
//                     kind = 52;
//                  break;
//               case 38:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddStates(3, 9); }
//                  break;
//               case 39:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddTwoStates(39, 40); }
//                  break;
//               case 40:
//                  if (curChar != 46)
//                     break;
//                  if (kind > 26)
//                     kind = 26;
//                  { jjCheckNAddStates(21, 23); }
//                  break;
//               case 41:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 26)
//                     kind = 26;
//                  { jjCheckNAddStates(21, 23); }
//                  break;
//               case 43:
//                  if ((0x280000000000ULL & l) != 0L)
//                     { jjCheckNAdd(44); }
//                  break;
//               case 44:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 26)
//                     kind = 26;
//                  { jjCheckNAddTwoStates(44, 14); }
//                  break;
//               case 45:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddTwoStates(45, 46); }
//                  break;
//               case 47:
//                  if ((0x280000000000ULL & l) != 0L)
//                     { jjCheckNAdd(48); }
//                  break;
//               case 48:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 26)
//                     kind = 26;
//                  { jjCheckNAddTwoStates(48, 14); }
//                  break;
//               case 49:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddStates(24, 26); }
//                  break;
//               case 51:
//                  if ((0x280000000000ULL & l) != 0L)
//                     { jjCheckNAdd(52); }
//                  break;
//               case 52:
//                  if ((0x3ff000000000000ULL & l) != 0L)
//                     { jjCheckNAddTwoStates(52, 14); }
//                  break;
//               case 53:
//                  if (curChar != 48)
//                     break;
//                  if (kind > 21)
//                     kind = 21;
//                  { jjCheckNAddStates(13, 15); }
//                  break;
//               case 55:
//                  if ((0x3ff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 21)
//                     kind = 21;
//                  jjstateSet[jjnewStateCnt++] = 55;
//                  break;
//               case 56:
//                  if ((0xff000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 21)
//                     kind = 21;
//                  { jjCheckNAdd(56); }
//                  break;
//               case 58:
//                  if ((0x3000000000000ULL & l) == 0L)
//                     break;
//                  if (kind > 21)
//                     kind = 21;
//                  jjstateSet[jjnewStateCnt++] = 58;
//                  break;
//               default : break;
//            }
//         } while(i != startsAt);
//      }
//      else if (curChar < 128)
//      {
//         unsigned long long l = 1ULL << (curChar & 077);
//         (void)l;
//         do
//         {
//            switch(jjstateSet[--i])
//            {
//               case 6:
//                  if ((0x67fffffebfffffffULL & l) != 0L)
//                  {
//                     if (kind > 52)
//                        kind = 52;
//                  }
//                  if ((0x7fffffe87fffffeULL & l) != 0L)
//                  {
//                     if (kind > 51)
//                        kind = 51;
//                     { jjCheckNAdd(36); }
//                  }
//                  break;
//               case 1:
//                  { jjCheckNAddTwoStates(1, 2); }
//                  break;
//               case 3:
//               case 4:
//                  { jjCheckNAddTwoStates(4, 2); }
//                  break;
//               case 11:
//                  if ((0x2000000020ULL & l) != 0L)
//                     { jjAddStates(27, 28); }
//                  break;
//               case 14:
//                  if ((0x5000000050ULL & l) != 0L && kind > 26)
//                     kind = 26;
//                  break;
//               case 16:
//                  if ((0xffffffffefffffffULL & l) != 0L)
//                     { jjCheckNAddStates(0, 2); }
//                  break;
//               case 18:
//                  if (curChar == 92)
//                     { jjAddStates(29, 30); }
//                  break;
//               case 19:
//                  if ((0x14404410000000ULL & l) != 0L)
//                     { jjCheckNAddStates(0, 2); }
//                  break;
//               case 20:
//                  if (curChar == 117)
//                     jjstateSet[jjnewStateCnt++] = 21;
//                  break;
//               case 21:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 22;
//                  break;
//               case 22:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 23;
//                  break;
//               case 23:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 24;
//                  break;
//               case 24:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     { jjCheckNAddStates(0, 2); }
//                  break;
//               case 26:
//                  if ((0xffffffffefffffffULL & l) != 0L)
//                     { jjCheckNAddStates(10, 12); }
//                  break;
//               case 28:
//                  if (curChar == 92)
//                     { jjAddStates(31, 32); }
//                  break;
//               case 29:
//                  if ((0x14404410000000ULL & l) != 0L)
//                     { jjCheckNAddStates(10, 12); }
//                  break;
//               case 30:
//                  if (curChar == 117)
//                     jjstateSet[jjnewStateCnt++] = 31;
//                  break;
//               case 31:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 32;
//                  break;
//               case 32:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 33;
//                  break;
//               case 33:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 34;
//                  break;
//               case 34:
//                  if ((0x7e0000007eULL & l) != 0L)
//                     { jjCheckNAddStates(10, 12); }
//                  break;
//               case 35:
//               case 36:
//                  if ((0x7fffffe87fffffeULL & l) == 0L)
//                     break;
//                  if (kind > 51)
//                     kind = 51;
//                  { jjCheckNAdd(36); }
//                  break;
//               case 37:
//                  if ((0x67fffffebfffffffULL & l) != 0L && kind > 52)
//                     kind = 52;
//                  break;
//               case 42:
//                  if ((0x2000000020ULL & l) != 0L)
//                     { jjAddStates(33, 34); }
//                  break;
//               case 46:
//                  if ((0x2000000020ULL & l) != 0L)
//                     { jjAddStates(35, 36); }
//                  break;
//               case 50:
//                  if ((0x2000000020ULL & l) != 0L)
//                     { jjAddStates(37, 38); }
//                  break;
//               case 54:
//                  if ((0x100000001000000ULL & l) != 0L)
//                     { jjCheckNAdd(55); }
//                  break;
//               case 55:
//                  if ((0x7e0000007eULL & l) == 0L)
//                     break;
//                  if (kind > 21)
//                     kind = 21;
//                  { jjCheckNAdd(55); }
//                  break;
//               case 57:
//                  if ((0x400000004ULL & l) != 0L)
//                     jjstateSet[jjnewStateCnt++] = 58;
//                  break;
//               default : break;
//            }
//         } while(i != startsAt);
//      }
//      else
//      {
//         int hiByte = (curChar >> 8);
//         int i1 = hiByte >> 6;
//         unsigned long long l1 = 1ULL << (hiByte & 077);
//         int i2 = (curChar & 0xff) >> 6;
//         unsigned long long l2 = 1ULL << (curChar & 077);
//         do
//         {
//            switch(jjstateSet[--i])
//            {
//               case 1:
//                  if (jjCanMove_0(hiByte, i1, i2, l1, l2))
//                     { jjCheckNAddTwoStates(1, 2); }
//                  break;
//               case 3:
//               case 4:
//                  if (jjCanMove_0(hiByte, i1, i2, l1, l2))
//                     { jjCheckNAddTwoStates(4, 2); }
//                  break;
//               case 16:
//                  if (jjCanMove_0(hiByte, i1, i2, l1, l2))
//                     { jjAddStates(0, 2); }
//                  break;
//               case 26:
//                  if (jjCanMove_0(hiByte, i1, i2, l1, l2))
//                     { jjAddStates(10, 12); }
//                  break;
//               default : if (i1 == 0 || l1 == 0 || i2 == 0 ||  l2 == 0) break; else break;
//            }
//         } while(i != startsAt);
//      }
//      if (kind != 0x7fffffff)
//      {
//         jjmatchedKind = kind;
//         jjmatchedPos = curPos;
//         kind = 0x7fffffff;
//      }
//      ++curPos;
//      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 59 - startsAt)))
//         break;
//      if (input_stream->endOfInput()) { break; }
//      curChar = input_stream->readChar();
//   }
//   if (jjmatchedPos > strPos)
//      return curPos;

//   int toRet = MAX(curPos, seenUpto);

//   if (curPos < toRet)
//      for (i = toRet - MIN(curPos, seenUpto); i-- > 0; )
//        {  assert(!input_stream->endOfInput());
//           curChar = input_stream->readChar(); }

//   if (jjmatchedPos < strPos)
//   {
//      jjmatchedKind = strKind;
//      jjmatchedPos = strPos;
//   }
//   else if (jjmatchedPos == strPos && jjmatchedKind > strKind)
//      jjmatchedKind = strKind;

//   return toRet;
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa0_2(){
//   switch(curChar)
//   {
//      case 42:
//         return jjMoveStringLiteralDfa1_2(0x200ULL);
//      default :
//         return 1;
//   }
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa1_2(unsigned long long active0){
//   if (input_stream->endOfInput()) {
//      return 1;
//   }
//   curChar = input_stream->readChar();
//   switch(curChar)
//   {
//      case 47:
//         if ((active0 & 0x200ULL) != 0L)
//            return jjStopAtPos(1, 9);
//         break;
//      default :
//         return 2;
//   }
//   return 2;
//}

// int  ExpressionParserTokenManager::jjMoveStringLiteralDfa0_1(){
//   return jjMoveNfa_1(4, 0);
//}

//int ExpressionParserTokenManager::jjMoveNfa_1(int startState, int curPos){
//   int startsAt = 0;
//   jjnewStateCnt = 4;
//   int i = 1;
//   jjstateSet[0] = startState;
//   int kind = 0x7fffffff;
//   for (;;)
//   {
//      if (++jjround == 0x7fffffff)
//         ReInitRounds();
//      if (curChar < 64)
//      {
//         unsigned long long l = 1ULL << curChar;
//         (void)l;
//         do
//         {
//            switch(jjstateSet[--i])
//            {
//               case 4:
//                  if ((0xfffffffffbffdbffULL & l) != 0L)
//                  {
//                     if (kind > 8)
//                        kind = 8;
//                     { jjCheckNAddStates(39, 41); }
//                  }
//                  else if ((0x2400ULL & l) != 0L)
//                  {
//                     if (kind > 8)
//                        kind = 8;
//                  }
//                  if (curChar == 13)
//                     jjstateSet[jjnewStateCnt++] = 2;
//                  break;
//               case 0:
//                  if ((0xfffffffffbffdbffULL & l) == 0L)
//                     break;
//                  kind = 8;
//                  { jjCheckNAddStates(39, 41); }
//                  break;
//               case 1:
//                  if ((0x2400ULL & l) != 0L && kind > 8)
//                     kind = 8;
//                  break;
//               case 2:
//                  if (curChar == 10 && kind > 8)
//                     kind = 8;
//                  break;
//               case 3:
//                  if (curChar == 13)
//                     jjstateSet[jjnewStateCnt++] = 2;
//                  break;
//               default : break;
//            }
//         } while(i != startsAt);
//      }
//      else if (curChar < 128)
//      {
//         unsigned long long l = 1ULL << (curChar & 077);
//         (void)l;
//         do
//         {
//            switch(jjstateSet[--i])
//            {
//               case 4:
//               case 0:
//                  kind = 8;
//                  { jjCheckNAddStates(39, 41); }
//                  break;
//               default : break;
//            }
//         } while(i != startsAt);
//      }
//      else
//      {
//         int hiByte = (curChar >> 8);
//         int i1 = hiByte >> 6;
//         unsigned long long l1 = 1ULL << (hiByte & 077);
//         int i2 = (curChar & 0xff) >> 6;
//         unsigned long long l2 = 1ULL << (curChar & 077);
//         do
//         {
//            switch(jjstateSet[--i])
//            {
//               case 4:
//               case 0:
//                  if (!jjCanMove_0(hiByte, i1, i2, l1, l2))
//                     break;
//                  if (kind > 8)
//                     kind = 8;
//                  { jjCheckNAddStates(39, 41); }
//                  break;
//               default : if (i1 == 0 || l1 == 0 || i2 == 0 ||  l2 == 0) break; else break;
//            }
//         } while(i != startsAt);
//      }
//      if (kind != 0x7fffffff)
//      {
//         jjmatchedKind = kind;
//         jjmatchedPos = curPos;
//         kind = 0x7fffffff;
//      }
//      ++curPos;
//      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 4 - startsAt)))
//         return curPos;
//      if (input_stream->endOfInput()) { return curPos; }
//      curChar = input_stream->readChar();
//   }
//}

//bool ExpressionParserTokenManager::jjCanMove_0(int hiByte, int i1, int i2, unsigned long long l1, unsigned long long l2){
//   switch(hiByte)
//   {
//      case 0:
//         return ((jjbitVec2[i2] & l2) != 0L);
//      default :
//         if ((jjbitVec0[i1] & l1) != 0L)
//            return true;
//         return false;
//   }
//}

///** Token literal values. */

//Token * ExpressionParserTokenManager::jjFillToken(){
//   Token *t;
//   JAVACC_STRING_TYPE curTokenImage;
//   int beginLine;
//   int endLine;
//   int beginColumn;
//   int endColumn;
//   if (jjmatchedPos < 0)
//   {
//       curTokenImage = image.c_str();
//   if (input_stream->getTrackLineColumn()) {
//      beginLine = endLine = input_stream->getEndLine();
//      beginColumn = endColumn = input_stream->getEndColumn();
//   }
//   }
//   else
//   {
//      JAVACC_STRING_TYPE im = jjstrLiteralImages[jjmatchedKind];
//      curTokenImage = (im.length() == 0) ? input_stream->GetImage() : im;
//   if (input_stream->getTrackLineColumn()) {
//      beginLine = input_stream->getBeginLine();
//      beginColumn = input_stream->getBeginColumn();
//      endLine = input_stream->getEndLine();
//      endColumn = input_stream->getEndColumn();
//   }
//   }
//   t = Token::newToken(jjmatchedKind, curTokenImage);
//   t->specialToken = NULL;
//   t->next = NULL;

//   if (input_stream->getTrackLineColumn()) {
//   t->beginLine = beginLine;
//   t->endLine = endLine;
//   t->beginColumn = beginColumn;
//   t->endColumn = endColumn;
//   }

//   return t;
//}
//const int defaultLexState = 0;
///** Get the next Token. */

//Token * ExpressionParserTokenManager::getNextToken(){
//  Token *specialToken = NULL;
//  Token *matchedToken;
//  int curPos = 0;

//  for (;;)
//  {
//   EOFLoop:
//   if (input_stream->endOfInput())
//   {
//      jjmatchedKind = 0;
//      jjmatchedPos = -1;
//      matchedToken = jjFillToken();
//      matchedToken->specialToken = specialToken;
//      return matchedToken;
//   }
//   curChar = input_stream->BeginToken();
//   image = jjimage;
//   image.clear();
//   jjimageLen = 0;

//   for (;;)
//   {
//     switch(curLexState)
//     {
//       case 0:
//         jjmatchedKind = 0x7fffffff;
//         jjmatchedPos = 0;
//         curPos = jjMoveStringLiteralDfa0_0();
//         break;
//       case 1:
//         jjmatchedKind = 8;
//         jjmatchedPos = -1;
//         curPos = 0;
//         curPos = jjMoveStringLiteralDfa0_1();
//         if (jjmatchedPos < 0 || (jjmatchedPos == 0 && jjmatchedKind > 10))
//         {
//            jjmatchedKind = 10;
//            jjmatchedPos = 0;
//         }
//         break;
//       case 2:
//         jjmatchedKind = 0x7fffffff;
//         jjmatchedPos = 0;
//         curPos = jjMoveStringLiteralDfa0_2();
//         if (jjmatchedPos == 0 && jjmatchedKind > 10)
//         {
//            jjmatchedKind = 10;
//         }
//         break;
//     }
//     if (jjmatchedKind != 0x7fffffff)
//     {
//        if (jjmatchedPos + 1 < curPos)
//           input_stream->backup(curPos - jjmatchedPos - 1);
//        if ((jjtoToken[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
//        {
//           matchedToken = jjFillToken();
//           matchedToken->specialToken = specialToken;
//       if (jjnewLexState[jjmatchedKind] != -1)
//         curLexState = jjnewLexState[jjmatchedKind];
//           return matchedToken;
//        }
//        else if ((jjtoSkip[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
//        {
//           if ((jjtoSpecial[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
//           {
//              matchedToken = jjFillToken();
//              if (specialToken == NULL)
//                 specialToken = matchedToken;
//              else
//              {
//                 matchedToken->specialToken = specialToken;
//                 specialToken = (specialToken->next = matchedToken);
//              }
//              SkipLexicalActions(matchedToken);
//           }
//           else
//              SkipLexicalActions(NULL);
//         if (jjnewLexState[jjmatchedKind] != -1)
//           curLexState = jjnewLexState[jjmatchedKind];
//           goto EOFLoop;
//        }
//        jjimageLen += jjmatchedPos + 1;
//      if (jjnewLexState[jjmatchedKind] != -1)
//        curLexState = jjnewLexState[jjmatchedKind];
//        curPos = 0;
//        jjmatchedKind = 0x7fffffff;
//     if (!input_stream->endOfInput()) {
//           curChar = input_stream->readChar();
//     continue;
//   }
//     }
//     int error_line = input_stream->getEndLine();
//     int error_column = input_stream->getEndColumn();
//     JAVACC_STRING_TYPE error_after;
//     bool EOFSeen = false;
//     if (input_stream->endOfInput()) {
//        EOFSeen = true;
//        error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
//        if (curChar == '\n' || curChar == '\r') {
//           error_line++;
//           error_column = 0;
//        }
//        else
//           error_column++;
//     }
//     if (!EOFSeen) {
//        error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
//     }
//     errorHandler->lexicalError(EOFSeen, curLexState, error_line, error_column, error_after, curChar, this);
//   }
//  }
//}


//void  ExpressionParserTokenManager::SkipLexicalActions(Token *matchedToken){
//   switch(jjmatchedKind)
//   {
//      default :
//         break;
//   }
//}
//  /** Reinitialise parser. */
//  void ExpressionParserTokenManager::ReInit(JAVACC_CHARSTREAM *stream, int lexState, ExpressionParser *parserArg) {
//    if (input_stream) delete input_stream;
//    jjmatchedPos = jjnewStateCnt = 0;
//    curLexState = lexState;
//    input_stream = stream;
//    ReInitRounds();
//    debugStream = stdout; // init
//    SwitchTo(lexState);
//    parser = parserArg;
//    errorHandler = new TokenManagerErrorHandler();
//    errorHandlerCreated = true;
//  }

//  void ExpressionParserTokenManager::ReInitRounds() {
//    int i;
//    jjround = 0x80000001;
//    for (i = 59; i-- > 0;)
//      jjrounds[i] = 0x80000000;
//  }

//  /** Switch to specified lex state. */
//  void ExpressionParserTokenManager::SwitchTo(int lexState) {
//    if (lexState >= 3 || lexState < 0)
//      assert(false);
//      //throw 1;//new TokenMgrError("Error: Ignoring invalid lexical state : " + lexState + ". State unchanged.", TokenMgrError.INVALID_LEXICAL_STATE);
//    else
//      curLexState = lexState;
//  }

//  /** Constructor. */
//  ExpressionParserTokenManager::ExpressionParserTokenManager (JAVACC_CHARSTREAM *stream, int lexState, ExpressionParser *parserArg)
//  {
//    input_stream = NULL;
//    ReInit(stream, lexState, parserArg);
//  }

//  // Destructor
//  ExpressionParserTokenManager::~ExpressionParserTokenManager () {
//    if (input_stream) delete input_stream;
//    if (errorHandlerCreated) delete errorHandler;
//  }

