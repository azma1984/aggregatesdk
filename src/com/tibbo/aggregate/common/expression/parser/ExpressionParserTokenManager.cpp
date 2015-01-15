// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ExpressionParserTokenManager.java
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserTokenManager.h"
#include <com/tibbo/aggregate/common/expression/parser/SimpleCharStream.h"
#include <com/tibbo/aggregate/common/expression/parser/Token.h"
#include <com/tibbo/aggregate/common/expression/parser/TokenMgrError.h"

void ExpressionParserTokenManager::ExpressionParserTokenManager()
{
   curLexState = 0;
   defaultLexState = 0;
}


int ExpressionParserTokenManager::jjStopAtPos(int pos, int kind)
{
    jjmatchedKind = kind;
    jjmatchedPos = pos;
    return pos + int(1);
}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa0_0()
{
    switch (curChar) {
    case int(9):
        jjmatchedKind = 2;
        return jjMoveNfa_0(6, 0);
    case int(10):
        jjmatchedKind = 3;
        return jjMoveNfa_0(6, 0);
    case int(13):
        jjmatchedKind = 4;
        return jjMoveNfa_0(6, 0);
    case int(32):
        jjmatchedKind = 1;
        return jjMoveNfa_0(6, 0);
    case int(33):
        jjmatchedKind = 13;
        return jjMoveStringLiteralDfa1_0(274877906944LL);
    case int(37):
        jjmatchedKind = 33;
        return jjMoveNfa_0(6, 0);
    case int(38):
        jjmatchedKind = 16;
        return jjMoveStringLiteralDfa1_0(4096LL);
    case int(40):
        jjmatchedKind = 44;
        return jjMoveNfa_0(6, 0);
    case int(41):
        jjmatchedKind = 45;
        return jjMoveNfa_0(6, 0);
    case int(42):
        jjmatchedKind = 31;
        return jjMoveNfa_0(6, 0);
    case int(43):
        jjmatchedKind = 29;
        return jjMoveNfa_0(6, 0);
    case int(44):
        jjmatchedKind = 36;
        return jjMoveNfa_0(6, 0);
    case int(45):
        jjmatchedKind = 30;
        return jjMoveNfa_0(6, 0);
    case int(47):
        jjmatchedKind = 32;
        return jjMoveStringLiteralDfa1_0(192LL);
    case int(58):
        jjmatchedKind = 35;
        return jjMoveNfa_0(6, 0);
    case int(60):
        jjmatchedKind = 40;
        return jjMoveStringLiteralDfa1_0(1130297953353728LL);
    case int(61):
        return jjMoveStringLiteralDfa1_0(137438953472LL);
    case int(62):
        jjmatchedKind = 41;
        return jjMoveStringLiteralDfa1_0(853221023154176LL);
    case int(63):
        jjmatchedKind = 34;
        return jjMoveNfa_0(6, 0);
    case int(70):
        return jjMoveStringLiteralDfa1_0(524288LL);
    case int(78):
        return jjMoveStringLiteralDfa1_0(1048576LL);
    case int(84):
        return jjMoveStringLiteralDfa1_0(262144LL);
    case int(94):
        jjmatchedKind = 15;
        return jjMoveNfa_0(6, 0);
    case int(102):
        return jjMoveStringLiteralDfa1_0(524288LL);
    case int(110):
        return jjMoveStringLiteralDfa1_0(1048576LL);
    case int(116):
        return jjMoveStringLiteralDfa1_0(262144LL);
    case int(123):
        jjmatchedKind = 46;
        return jjMoveNfa_0(6, 0);
    case int(124):
        jjmatchedKind = 14;
        return jjMoveStringLiteralDfa1_0(2048LL);
    case int(125):
        jjmatchedKind = 47;
        return jjMoveNfa_0(6, 0);
    case int(126):
        jjmatchedKind = 17;
        return jjMoveStringLiteralDfa1_0(549755813888LL);
    default:
        return jjMoveNfa_0(6, 0);
    }

}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa1_0(long active0)
{
    try {
        curChar = input_stream->readChar();
    } catch (std::exception* e) {
        return jjMoveNfa_0(6, 0);
    }
    switch (curChar) {
    case int(38):
        if((active0 & long(4096LL)) != 0LL) {
            jjmatchedKind = 12;
            jjmatchedPos = 1;
        }
        break;
    case int(42):
        if((active0 & long(128LL)) != 0LL) {
            jjmatchedKind = 7;
            jjmatchedPos = 1;
        }
        break;
    case int(47):
        if((active0 & long(64LL)) != 0LL) {
            jjmatchedKind = 6;
            jjmatchedPos = 1;
        }
        break;
    case int(60):
        if((active0 & long(1125899906842624LL)) != 0LL) {
            jjmatchedKind = 50;
            jjmatchedPos = 1;
        }
        break;
    case int(61):
        if((active0 & long(137438953472LL)) != 0LL) {
            jjmatchedKind = 37;
            jjmatchedPos = 1;
        } else if((active0 & long(274877906944LL)) != 0LL) {
            jjmatchedKind = 38;
            jjmatchedPos = 1;
        } else if((active0 & long(549755813888LL)) != 0LL) {
            jjmatchedKind = 39;
            jjmatchedPos = 1;
        } else if((active0 & long(4398046511104LL)) != 0LL) {
            jjmatchedKind = 42;
            jjmatchedPos = 1;
        } else if((active0 & long(8796093022208LL)) != 0LL) {
            jjmatchedKind = 43;
            jjmatchedPos = 1;
        }
        break;
    case int(62):
        if((active0 & long(281474976710656LL)) != 0LL) {
            jjmatchedKind = 48;
            jjmatchedPos = 1;
        }
        return jjMoveStringLiteralDfa2_0(active0, 562949953421312LL);
    case int(65):
        return jjMoveStringLiteralDfa2_0(active0, 524288LL);
    case int(82):
        return jjMoveStringLiteralDfa2_0(active0, 262144LL);
    case int(85):
        return jjMoveStringLiteralDfa2_0(active0, 1048576LL);
    case int(97):
        return jjMoveStringLiteralDfa2_0(active0, 524288LL);
    case int(114):
        return jjMoveStringLiteralDfa2_0(active0, 262144LL);
    case int(117):
        return jjMoveStringLiteralDfa2_0(active0, 1048576LL);
    case int(124):
        if((active0 & long(2048LL)) != 0LL) {
            jjmatchedKind = 11;
            jjmatchedPos = 1;
        }
        break;
    default:
        break;
    }

    return jjMoveNfa_0(6, 1);
}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa2_0(long old0, long active0)
{
    if(((active0 &= old0)) == 0LL)
        return jjMoveNfa_0(6, 1);

    try {
        curChar = input_stream->readChar();
    } catch (std::exception* e) {
        return jjMoveNfa_0(6, 1);
    }
    switch (curChar) {
    case int(62):
        if((active0 & long(562949953421312LL)) != 0LL) {
            jjmatchedKind = 49;
            jjmatchedPos = 2;
        }
        break;
    case int(76):
        return jjMoveStringLiteralDfa3_0(active0, 1572864LL);
    case int(85):
        return jjMoveStringLiteralDfa3_0(active0, 262144LL);
    case int(108):
        return jjMoveStringLiteralDfa3_0(active0, 1572864LL);
    case int(117):
        return jjMoveStringLiteralDfa3_0(active0, 262144LL);
    default:
        break;
    }

    return jjMoveNfa_0(6, 2);
}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa3_0(long old0, long active0)
{
    if(((active0 &= old0)) == 0LL)
        return jjMoveNfa_0(6, 2);

    try {
        curChar = input_stream->readChar();
    } catch (std::exception* e) {
        return jjMoveNfa_0(6, 2);
    }
    switch (curChar) {
    case int(69):
        if((active0 & long(262144LL)) != 0LL) {
            jjmatchedKind = 18;
            jjmatchedPos = 3;
        }
        break;
    case int(76):
        if((active0 & long(1048576LL)) != 0LL) {
            jjmatchedKind = 20;
            jjmatchedPos = 3;
        }
        break;
    case int(83):
        return jjMoveStringLiteralDfa4_0(active0, 524288LL);
    case int(101):
        if((active0 & long(262144LL)) != 0LL) {
            jjmatchedKind = 18;
            jjmatchedPos = 3;
        }
        break;
    case int(108):
        if((active0 & long(1048576LL)) != 0LL) {
            jjmatchedKind = 20;
            jjmatchedPos = 3;
        }
        break;
    case int(115):
        return jjMoveStringLiteralDfa4_0(active0, 524288LL);
    default:
        break;
    }

    return jjMoveNfa_0(6, 3);
}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa4_0(long old0, long active0)
{
    if(((active0 &= old0)) == 0LL)
        return jjMoveNfa_0(6, 3);

    try {
        curChar = input_stream->readChar();
    } catch (std::exception* e) {
        return jjMoveNfa_0(6, 3);
    }
    switch (curChar) {
    case int(69):
        if((active0 & long(524288LL)) != 0LL) {
            jjmatchedKind = 19;
            jjmatchedPos = 4;
        }
        break;
    case int(101):
        if((active0 & long(524288LL)) != 0LL) {
            jjmatchedKind = 19;
            jjmatchedPos = 4;
        }
        break;
    default:
        break;
    }

    return jjMoveNfa_0(6, 4);
}

int64_tArray*& ExpressionParserTokenManager::jjbitVec0()
{
    
    return jjbitVec0_;
}
int64_tArray* ExpressionParserTokenManager::jjbitVec0_;

int64_tArray*& ExpressionParserTokenManager::jjbitVec2()
{
    
    return jjbitVec2_;
}
int64_tArray* ExpressionParserTokenManager::jjbitVec2_;

int ExpressionParserTokenManager::jjMoveNfa_0(int startState, int curPos)
{
    auto strKind = jjmatchedKind;
    auto strPos = jjmatchedPos;
    int seenUpto;
    input_stream->backup(seenUpto = curPos + int(1));
    try {
        curChar = input_stream->readChar();
    } catch (std::exception* e) {
        throw new ::java::lang::Error(u"Internal Error"_j);
    }
    curPos;
    auto startsAt = int(0);
    jjnewStateCnt = 59;
    auto i = int(1);
    (*jjstateSet)[int(0)] = startState;
    auto kind = int(2147483647);
    for (; ; ) {
        if(++jjround == 2147483647)
            ReInitRounds();

        if(curChar < 64) {
            auto l = long(1LL) << curChar;
            do {
                switch ((*jjstateSet)[--i]) {
                case int(6):
                    if((long(-5764607548804038656LL) & l) != 0LL) {
                        if(kind > 52)
                            kind = 52;

                    } else if(curChar == 34)
                        jjCheckNAddStates(0, 2);

                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddStates(3, 9);
                    else if(curChar == 39)
                        jjCheckNAddStates(10, 12);
                    else if(curChar == 46)
                        jjCheckNAdd(10);
                    else if(curChar == 47)
                        (*jjstateSet)[jjnewStateCnt++];

                    if((long(287667426198290432LL) & l) != 0LL) {
                        if(kind > 21)
                            kind = 21;

                        jjCheckNAdd(8);
                    } else if(curChar == 48) {
                        if(kind > 21)
                            kind = 21;

                        jjCheckNAddStates(13, 15);
                    }
                    break;
                case int(0):
                    if(curChar == 42)
                        jjCheckNAddTwoStates(1, 2);

                    break;
                case int(1):
                    if((long(-4398046511105LL) & l) != 0LL)
                        jjCheckNAddTwoStates(1, 2);

                    break;
                case int(2):
                    if(curChar == 42)
                        jjAddStates(16, 17);

                    break;
                case int(3):
                    if((long(-140737488355329LL) & l) != 0LL)
                        jjCheckNAddTwoStates(4, 2);

                    break;
                case int(4):
                    if((long(-4398046511105LL) & l) != 0LL)
                        jjCheckNAddTwoStates(4, 2);

                    break;
                case int(5):
                    if(curChar == 47 && kind > 5)
                        kind = 5;

                    break;
                case int(7):
                    if((long(287667426198290432LL) & l) == 0LL)
                        break;

                    if(kind > 21)
                        kind = 21;

                    jjCheckNAdd(8);
                    break;
                case int(8):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 21)
                        kind = 21;

                    jjCheckNAdd(8);
                    break;
                case int(9):
                    if(curChar == 46)
                        jjCheckNAdd(10);

                    break;
                case int(10):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 26)
                        kind = 26;

                    jjCheckNAddStates(18, 20);
                    break;
                case int(12):
                    if((long(43980465111040LL) & l) != 0LL)
                        jjCheckNAdd(13);

                    break;
                case int(13):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 26)
                        kind = 26;

                    jjCheckNAddTwoStates(13, 14);
                    break;
                case int(15):
                    if(curChar == 34)
                        jjCheckNAddStates(0, 2);

                    break;
                case int(16):
                    if((long(-17179883265LL) & l) != 0LL)
                        jjCheckNAddStates(0, 2);

                    break;
                case int(17):
                    if(curChar == 34 && kind > 28)
                        kind = 28;

                    break;
                case int(19):
                    if((long(566935683072LL) & l) != 0LL)
                        jjCheckNAddStates(0, 2);

                    break;
                case int(21):
                    if((long(287948901175001088LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 22;

                    break;
                case int(22):
                    if((long(287948901175001088LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 23;

                    break;
                case int(23):
                    if((long(287948901175001088LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 24;

                    break;
                case int(24):
                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddStates(0, 2);

                    break;
                case int(25):
                    if(curChar == 39)
                        jjCheckNAddStates(10, 12);

                    break;
                case int(26):
                    if((long(-549755827969LL) & l) != 0LL)
                        jjCheckNAddStates(10, 12);

                    break;
                case int(27):
                    if(curChar == 39 && kind > 28)
                        kind = 28;

                    break;
                case int(29):
                    if((long(566935683072LL) & l) != 0LL)
                        jjCheckNAddStates(10, 12);

                    break;
                case int(31):
                    if((long(287948901175001088LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 32;

                    break;
                case int(32):
                    if((long(287948901175001088LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 33;

                    break;
                case int(33):
                    if((long(287948901175001088LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 34;

                    break;
                case int(34):
                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddStates(10, 12);

                    break;
                case int(36):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 51)
                        kind = 51;

                    (*jjstateSet)[jjnewStateCnt++] = 36;
                    break;
                case int(37):
                    if((long(-5764607548804038656LL) & l) != 0LL && kind > 52)
                        kind = 52;

                    break;
                case int(38):
                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddStates(3, 9);

                    break;
                case int(39):
                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddTwoStates(39, 40);

                    break;
                case int(40):
                    if(curChar != 46)
                        break;

                    if(kind > 26)
                        kind = 26;

                    jjCheckNAddStates(21, 23);
                    break;
                case int(41):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 26)
                        kind = 26;

                    jjCheckNAddStates(21, 23);
                    break;
                case int(43):
                    if((long(43980465111040LL) & l) != 0LL)
                        jjCheckNAdd(44);

                    break;
                case int(44):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 26)
                        kind = 26;

                    jjCheckNAddTwoStates(44, 14);
                    break;
                case int(45):
                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddTwoStates(45, 46);

                    break;
                case int(47):
                    if((long(43980465111040LL) & l) != 0LL)
                        jjCheckNAdd(48);

                    break;
                case int(48):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 26)
                        kind = 26;

                    jjCheckNAddTwoStates(48, 14);
                    break;
                case int(49):
                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddStates(24, 26);

                    break;
                case int(51):
                    if((long(43980465111040LL) & l) != 0LL)
                        jjCheckNAdd(52);

                    break;
                case int(52):
                    if((long(287948901175001088LL) & l) != 0LL)
                        jjCheckNAddTwoStates(52, 14);

                    break;
                case int(53):
                    if(curChar != 48)
                        break;

                    if(kind > 21)
                        kind = 21;

                    jjCheckNAddStates(13, 15);
                    break;
                case int(55):
                    if((long(287948901175001088LL) & l) == 0LL)
                        break;

                    if(kind > 21)
                        kind = 21;

                    (*jjstateSet)[jjnewStateCnt++] = 55;
                    break;
                case int(56):
                    if((long(71776119061217280LL) & l) == 0LL)
                        break;

                    if(kind > 21)
                        kind = 21;

                    jjCheckNAdd(56);
                    break;
                case int(58):
                    if((long(844424930131968LL) & l) == 0LL)
                        break;

                    if(kind > 21)
                        kind = 21;

                    (*jjstateSet)[jjnewStateCnt++] = 58;
                    break;
                default:
                    break;
                }

            } while (i != startsAt);
        } else if(curChar < 128) {
            auto l = long(1LL) << (curChar & int(63));
            do {
                switch ((*jjstateSet)[--i]) {
                case int(6):
                    if((long(7493989774575796223LL) & l) != 0LL) {
                        if(kind > 52)
                            kind = 52;

                    }
                    if((long(576460745995190270LL) & l) != 0LL) {
                        if(kind > 51)
                            kind = 51;

                        jjCheckNAdd(36);
                    }
                    break;
                case int(1):
                    jjCheckNAddTwoStates(1, 2);
                    break;
                case int(3):
                case int(4):
                    jjCheckNAddTwoStates(4, 2);
                    break;
                case int(11):
                    if((long(137438953504LL) & l) != 0LL)
                        jjAddStates(27, 28);

                    break;
                case int(14):
                    if((long(343597383760LL) & l) != 0LL && kind > 26)
                        kind = 26;

                    break;
                case int(16):
                    if((long(-268435457LL) & l) != 0LL)
                        jjCheckNAddStates(0, 2);

                    break;
                case int(18):
                    if(curChar == 92)
                        jjAddStates(29, 30);

                    break;
                case int(19):
                    if((long(5700160604602368LL) & l) != 0LL)
                        jjCheckNAddStates(0, 2);

                    break;
                case int(20):
                    if(curChar == 117)
                        (*jjstateSet)[jjnewStateCnt++] = 21;

                    break;
                case int(21):
                    if((long(541165879422LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 22;

                    break;
                case int(22):
                    if((long(541165879422LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 23;

                    break;
                case int(23):
                    if((long(541165879422LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 24;

                    break;
                case int(24):
                    if((long(541165879422LL) & l) != 0LL)
                        jjCheckNAddStates(0, 2);

                    break;
                case int(26):
                    if((long(-268435457LL) & l) != 0LL)
                        jjCheckNAddStates(10, 12);

                    break;
                case int(28):
                    if(curChar == 92)
                        jjAddStates(31, 32);

                    break;
                case int(29):
                    if((long(5700160604602368LL) & l) != 0LL)
                        jjCheckNAddStates(10, 12);

                    break;
                case int(30):
                    if(curChar == 117)
                        (*jjstateSet)[jjnewStateCnt++] = 31;

                    break;
                case int(31):
                    if((long(541165879422LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 32;

                    break;
                case int(32):
                    if((long(541165879422LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 33;

                    break;
                case int(33):
                    if((long(541165879422LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 34;

                    break;
                case int(34):
                    if((long(541165879422LL) & l) != 0LL)
                        jjCheckNAddStates(10, 12);

                    break;
                case int(35):
                case int(36):
                    if((long(576460745995190270LL) & l) == 0LL)
                        break;

                    if(kind > 51)
                        kind = 51;

                    jjCheckNAdd(36);
                    break;
                case int(37):
                    if((long(7493989774575796223LL) & l) != 0LL && kind > 52)
                        kind = 52;

                    break;
                case int(42):
                    if((long(137438953504LL) & l) != 0LL)
                        jjAddStates(33, 34);

                    break;
                case int(46):
                    if((long(137438953504LL) & l) != 0LL)
                        jjAddStates(35, 36);

                    break;
                case int(50):
                    if((long(137438953504LL) & l) != 0LL)
                        jjAddStates(37, 38);

                    break;
                case int(54):
                    if((long(72057594054705152LL) & l) != 0LL)
                        jjCheckNAdd(55);

                    break;
                case int(55):
                    if((long(541165879422LL) & l) == 0LL)
                        break;

                    if(kind > 21)
                        kind = 21;

                    jjCheckNAdd(55);
                    break;
                case int(57):
                    if((long(17179869188LL) & l) != 0LL)
                        (*jjstateSet)[jjnewStateCnt++] = 58;

                    break;
                default:
                    break;
                }

            } while (i != startsAt);
        } else {
            auto hiByte = curChar >> int(8);
            auto i1 = hiByte >> int(6);
            auto l1 = long(1LL) << (hiByte & int(63));
            auto i2 = (curChar & int(255)) >> int(6);
            auto l2 = long(1LL) << (curChar & int(63));
            do {
                switch ((*jjstateSet)[--i]) {
                case int(1):
                    if(jjCanMove_0(hiByte, i1, i2, l1, l2))
                        jjCheckNAddTwoStates(1, 2);

                    break;
                case int(3):
                case int(4):
                    if(jjCanMove_0(hiByte, i1, i2, l1, l2))
                        jjCheckNAddTwoStates(4, 2);

                    break;
                case int(16):
                    if(jjCanMove_0(hiByte, i1, i2, l1, l2))
                        jjAddStates(0, 2);

                    break;
                case int(26):
                    if(jjCanMove_0(hiByte, i1, i2, l1, l2))
                        jjAddStates(10, 12);

                    break;
                default:
                    break;
                }

            } while (i != startsAt);
        }
        if(kind != 2147483647) {
            jjmatchedKind = kind;
            jjmatchedPos = curPos;
            kind = 2147483647;
        }
        ++curPos;
        if((i = jjnewStateCnt) == (startsAt = int(59) - (jjnewStateCnt = startsAt)))
            break;

        try {
            curChar = input_stream->readChar();
        } catch (std::exception* e) {
            break;
        }
    }
    if(jjmatchedPos > strPos)
        return curPos;

    auto toRet = ::java::lang::Math::max(curPos, seenUpto);
    if(curPos < toRet)
        for (i = toRet - ::java::lang::Math::min(curPos, seenUpto); i-- > 0; ) 
                        try {
                curChar = input_stream->readChar();
            } catch (std::exception* e) {
                throw new ::java::lang::Error(u"Internal Error : Please send a bug report."_j);
            }


    if(jjmatchedPos < strPos) {
        jjmatchedKind = strKind;
        jjmatchedPos = strPos;
    } else if(jjmatchedPos == strPos && jjmatchedKind > strKind)
        jjmatchedKind = strKind;

    return toRet;
}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa0_2()
{
    switch (curChar) {
    case int(42):
        return jjMoveStringLiteralDfa1_2(512LL);
    default:
        return 1;
    }

}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa1_2(long active0)
{
    try {
        curChar = input_stream->readChar();
    } catch (std::exception* e) {
        return 1;
    }
    switch (curChar) {
    case int(47):
        if((active0 & long(512LL)) != 0LL)
            return jjStopAtPos(1, 9);

        break;
    default:
        return 2;
    }

    return 2;
}

int ExpressionParserTokenManager::jjMoveStringLiteralDfa0_1()
{
    return jjMoveNfa_1(4, 0);
}

int ExpressionParserTokenManager::jjMoveNfa_1(int startState, int curPos)
{
    auto startsAt = int(0);
    jjnewStateCnt = 4;
    auto i = int(1);
    (*jjstateSet)[int(0)] = startState;
    auto kind = int(2147483647);
    for (; ; ) {
        if(++jjround == 2147483647)
            ReInitRounds();

        if(curChar < 64) {
            auto l = long(1LL) << curChar;
            do {
                switch ((*jjstateSet)[--i]) {
                case int(4):
                    if((long(-67118081LL) & l) != 0LL) {
                        if(kind > 8)
                            kind = 8;

                        jjCheckNAddStates(39, 41);
                    } else if((long(9216LL) & l) != 0LL) {
                        if(kind > 8)
                            kind = 8;

                    }
                    if(curChar == 13)
                        (*jjstateSet)[jjnewStateCnt++] = 2;

                    break;
                case int(0):
                    if((long(-67118081LL) & l) == 0LL)
                        break;

                    kind = 8;
                    jjCheckNAddStates(39, 41);
                    break;
                case int(1):
                    if((long(9216LL) & l) != 0LL && kind > 8)
                        kind = 8;

                    break;
                case int(2):
                    if(curChar == 10 && kind > 8)
                        kind = 8;

                    break;
                case int(3):
                    if(curChar == 13)
                        (*jjstateSet)[jjnewStateCnt++] = 2;

                    break;
                default:
                    break;
                }

            } while (i != startsAt);
        } else if(curChar < 128) {
            auto l = long(1LL) << (curChar & int(63));
            do {
                switch ((*jjstateSet)[--i]) {
                case int(4):
                case int(0):
                    kind = 8;
                    jjCheckNAddStates(39, 41);
                    break;
                default:
                    break;
                }

            } while (i != startsAt);
        } else {
            auto hiByte = curChar >> int(8);
            auto i1 = hiByte >> int(6);
            auto l1 = long(1LL) << (hiByte & int(63));
            auto i2 = (curChar & int(255)) >> int(6);
            auto l2 = long(1LL) << (curChar & int(63));
            do {
                switch ((*jjstateSet)[--i]) {
                case int(4):
                case int(0):
                    if(!jjCanMove_0(hiByte, i1, i2, l1, l2))
                        break;

                    if(kind > 8)
                        kind = 8;

                    jjCheckNAddStates(39, 41);
                    break;
                default:
                    break;
                }

            } while (i != startsAt);
        }
        if(kind != 2147483647) {
            jjmatchedKind = kind;
            jjmatchedPos = curPos;
            kind = 2147483647;
        }
        ++curPos;
        if((i = jjnewStateCnt) == (startsAt = int(4) - (jjnewStateCnt = startsAt)))
            return curPos;

        try {
            curChar = input_stream->readChar();
        } catch (std::exception* e) {
            return curPos;
        }
    }
}

intArray*& ExpressionParserTokenManager::jjnextStates()
{
    
    return jjnextStates_;
}
intArray* ExpressionParserTokenManager::jjnextStates_;

bool ExpressionParserTokenManager::jjCanMove_0(int hiByte, int i1, int i2, long l1, long l2)
{
    
    switch (hiByte) {
    case int(0):
        return (((*jjbitVec2_)[i2] & l2) != 0LL);
    default:
        if(((*jjbitVec0_)[i1] & l1) != 0LL)
            return true;

        return false;
    }

}

java::lang::StringArray*& ExpressionParserTokenManager::jjstrLiteralImages()
{
    
    return jjstrLiteralImages_;
}
java::lang::StringArray* ExpressionParserTokenManager::jjstrLiteralImages_;

java::lang::StringArray*& ExpressionParserTokenManager::lexStateNames()
{
    
    return lexStateNames_;
}
java::lang::StringArray* ExpressionParserTokenManager::lexStateNames_;

intArray*& ExpressionParserTokenManager::jjnewLexState()
{
    
    return jjnewLexState_;
}
intArray* ExpressionParserTokenManager::jjnewLexState_;

int64_tArray*& ExpressionParserTokenManager::jjtoToken()
{
    
    return jjtoToken_;
}
int64_tArray* ExpressionParserTokenManager::jjtoToken_;

int64_tArray*& ExpressionParserTokenManager::jjtoSkip()
{
    
    return jjtoSkip_;
}
int64_tArray* ExpressionParserTokenManager::jjtoSkip_;

int64_tArray*& ExpressionParserTokenManager::jjtoSpecial()
{
    
    return jjtoSpecial_;
}
int64_tArray* ExpressionParserTokenManager::jjtoSpecial_;

int64_tArray*& ExpressionParserTokenManager::jjtoMore()
{
    
    return jjtoMore_;
}
int64_tArray* ExpressionParserTokenManager::jjtoMore_;

void ExpressionParserTokenManager::ctor(SimpleCharStream* stream)
{
    super::ctor();
    init();
    if(SimpleCharStream::staticFlag)
        throw new ::java::lang::Error(u"ERROR: Cannot use a static CharStream class with a non-static lexical analyzer."_j);

    input_stream = stream;
}

void ExpressionParserTokenManager::ctor(SimpleCharStream* stream, int lexState)
{
    ctor(stream);
    SwitchTo(lexState);
}

void ExpressionParserTokenManager::ReInit(SimpleCharStream* stream)
{
    jjmatchedPos = jjnewStateCnt;
    curLexState = defaultLexState;
    input_stream = stream;
    ReInitRounds();
}

void ExpressionParserTokenManager::ReInitRounds()
{
    int i;
    jjround = -2147483647;
    for (i = 59; i-- > 0; ) 
                (*jjrounds)[i] = int(-0x7fffffff-1);

}

void ExpressionParserTokenManager::ReInit(SimpleCharStream* stream, int lexState)
{
    ReInit(stream);
    SwitchTo(lexState);
}

void ExpressionParserTokenManager::SwitchTo(int lexState)
{
    if(lexState >= 3 || lexState < 0)
        throw new TokenMgrError(std::stringBuilder().append(u"Error: Ignoring invalid lexical state : "_j)->append(lexState)
            ->append(u". State unchanged."_j)->toString(), TokenMgrError::INVALID_LEXICAL_STATE);
    else
        curLexState = lexState;
}

Token* ExpressionParserTokenManager::jjFillToken()
{
    Token* t;
    const std::string & curTokenImage;
    int beginLine;
    int endLine;
    int beginColumn;
    int endColumn;
    if(jjmatchedPos < 0) {
        if(image == 0)
            curTokenImage = u""_j;
        else
            curTokenImage = image)->toString();
        beginLine = endLine = input_stream->getBeginLine();
        beginColumn = endColumn = input_stream->getBeginColumn();
    } else {
        auto im = (*jjstrLiteralImages_)[jjmatchedKind];
        curTokenImage = (im == 0) ? input_stream->GetImage() : im;
        beginLine = input_stream->getBeginLine();
        beginColumn = input_stream->getBeginColumn();
        endLine = input_stream->getEndLine();
        endColumn = input_stream->getEndColumn();
    }
    t = Token::newToken(jjmatchedKind, curTokenImage);
    t)->beginLine = beginLine;
    t)->endLine = endLine;
    t)->beginColumn = beginColumn;
    t)->endColumn = endColumn;
    return t;
}

Token* ExpressionParserTokenManager::getNextToken()
{
    Token* specialToken;
    Token* matchedToken;
    auto curPos = int(0);
    for (; ; ) {
        bool EOFLoop0_continue = false;
        try {
            curChar = input_stream->BeginToken();
        } catch (std::exception* e) {
            jjmatchedKind;
            matchedToken = jjFillToken();
            matchedToken)->specialToken = specialToken;
            return matchedToken;
        }
        image = jjimage;
        image)->setLength(0);
        jjimageLen;
        for (; ; ) {
            switch (curLexState) {
            case int(0):
                jjmatchedKind = 2147483647;
                jjmatchedPos;
                curPos = jjMoveStringLiteralDfa0_0();
                break;
            case int(1):
                jjmatchedKind = 8;
                jjmatchedPos = -int(1);
                curPos;
                curPos = jjMoveStringLiteralDfa0_1();
                if(jjmatchedPos < 0 || (jjmatchedPos == 0 && jjmatchedKind > 10)) {
                    jjmatchedKind = 10;
                    jjmatchedPos;
                }
                break;
            case int(2):
                jjmatchedKind = 2147483647;
                jjmatchedPos;
                curPos = jjMoveStringLiteralDfa0_2();
                if(jjmatchedPos == 0 && jjmatchedKind > 10) {
                    jjmatchedKind = 10;
                }
                break;
            }

            if(jjmatchedKind != 2147483647) {
                if(jjmatchedPos + int(1) < curPos)
                    input_stream->backup(curPos - jjmatchedPos - int(1));

                if(((*jjtoToken_)[jjmatchedKind >> int(6)] & (long(1LL) << (jjmatchedKind & int(63)))) != 0LL) {
                    matchedToken = jjFillToken();
                    matchedToken)->specialToken = specialToken;
                    if((*jjnewLexState_)[jjmatchedKind] != -int(1))
                        curLexState = (*jjnewLexState_)[jjmatchedKind];

                    return matchedToken;
                } else if(((*jjtoSkip_)[jjmatchedKind >> int(6)] & (long(1LL) << (jjmatchedKind & int(63)))) != 0LL) {
                    if(((*jjtoSpecial_)[jjmatchedKind >> int(6)] & (long(1LL) << (jjmatchedKind & int(63)))) != 0LL) {
                        matchedToken = jjFillToken();
                        if(specialToken == 0)
                            specialToken = matchedToken;
                        else {
                            matchedToken)->specialToken = specialToken;
                            specialToken = (specialToken)->next = matchedToken);
                        }
                        SkipLexicalActions(matchedToken);
                    } else
                        SkipLexicalActions(0);
                    if((*jjnewLexState_)[jjmatchedKind] != -int(1))
                        curLexState = (*jjnewLexState_)[jjmatchedKind];

                    { EOFLoop0_continue = true; break; }
                }
                jjimageLen += jjmatchedPos + int(1);
                if((*jjnewLexState_)[jjmatchedKind] != -int(1))
                    curLexState = (*jjnewLexState_)[jjmatchedKind];

                curPos;
                jjmatchedKind = 2147483647;
                try {
                    curChar = input_stream->readChar();
                    continue;
                } catch (std::exception* e1) {
                }
            }
            auto error_line = input_stream->getEndLine();
            auto error_column = input_stream->getEndColumn();
            const std::string & error_after;
            auto EOFSeen = false;
            try {
                input_stream->readChar();
                input_stream->backup(1);
            } catch (std::exception* e1) {
                EOFSeen = true;
                error_after = curPos <= 1 ? u""_j : input_stream->GetImage();
                if(curChar == u'\u000a' || curChar == u'\u000d') {
                    error_line++;
                    error_column;
                } else
                    error_column++;
            }
            if(!EOFSeen) {
                input_stream->backup(1);
                error_after = curPos <= 1 ? u""_j : input_stream->GetImage();
            }
            throw new TokenMgrError(EOFSeen, curLexState, error_line, error_column, error_after, curChar, TokenMgrError::LEXICAL_ERROR);
        }

    }

EOFLoop0_break:;
}

void ExpressionParserTokenManager::SkipLexicalActions(Token* matchedToken)
{
    switch (jjmatchedKind) {
    default:
        break;
    }

}

void ExpressionParserTokenManager::jjCheckNAdd(int state)
{
    if((*jjrounds)[state] != jjround) {
        (*jjstateSet)[jjnewStateCnt++] = state;
        (*jjrounds)[state] = jjround;
    }
}

void ExpressionParserTokenManager::jjAddStates(int start, int end)
{
    do {
        (*jjstateSet)[jjnewStateCnt++] = (*jjnextStates_)[start];
    } while (start++ != end);
}

void ExpressionParserTokenManager::jjCheckNAddTwoStates(int state1, int state2)
{
    jjCheckNAdd(state1);
    jjCheckNAdd(state2);
}

void ExpressionParserTokenManager::jjCheckNAddStates(int start, int end)
{
    do {
        jjCheckNAdd((*jjnextStates_)[start]);
    } while (start++ != end);
}



java::lang::Class* ExpressionParserTokenManager::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.ExpressionParserTokenManager", 73);
    return c;
}

void ExpressionParserTokenManager::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        jjbitVec0_ = (new ::int64_tArray({
            long(-2LL)
            , long(-1LL)
            , long(-1LL)
            , long(-1LL)
        }));
        jjbitVec2_ = (new ::int64_tArray({
            long(0LL)
            , long(0LL)
            , long(-1LL)
            , long(-1LL)
        }));
        jjnextStates_ = (new ::intArray({
            int(16)
            , int(17)
            , int(18)
            , int(39)
            , int(40)
            , int(45)
            , int(46)
            , int(49)
            , int(50)
            , int(14)
            , int(26)
            , int(27)
            , int(28)
            , int(54)
            , int(56)
            , int(57)
            , int(3)
            , int(5)
            , int(10)
            , int(11)
            , int(14)
            , int(41)
            , int(42)
            , int(14)
            , int(49)
            , int(50)
            , int(14)
            , int(12)
            , int(13)
            , int(19)
            , int(20)
            , int(29)
            , int(30)
            , int(43)
            , int(44)
            , int(47)
            , int(48)
            , int(51)
            , int(52)
            , int(0)
            , int(1)
            , int(3)
        }));
        jjstrLiteralImages_ = (new std::stringArray({
            u""_j
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , u"\174\174"_j
            , u"\46\46"_j
            , u"\41"_j
            , u"\174"_j
            , u"\136"_j
            , u"\46"_j
            , u"\176"_j
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , u"\53"_j
            , u"\55"_j
            , u"\52"_j
            , u"\57"_j
            , u"\45"_j
            , u"\77"_j
            , u"\72"_j
            , u"\54"_j
            , u"\75\75"_j
            , u"\41\75"_j
            , u"\176\75"_j
            , u"\74"_j
            , u"\76"_j
            , u"\74\75"_j
            , u"\76\75"_j
            , u"\50"_j
            , u"\51"_j
            , u"\173"_j
            , u"\175"_j
            , u"\76\76"_j
            , u"\76\76\76"_j
            , u"\74\74"_j
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
            , static_cast< const std::string & >(0)
        }));
        lexStateNames_ = (new std::stringArray({
            u"DEFAULT"_j
            , u"IN_SINGLE_LINE_COMMENT"_j
            , u"IN_MULTI_LINE_COMMENT"_j
        }));
        jjnewLexState_ = (new ::intArray({
            -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , int(1)
            , int(2)
            , int(0)
            , int(0)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
            , -int(1)
        }));
        jjtoToken_ = (new ::int64_tArray({long(9007199057606657LL)}));
        jjtoSkip_ = (new ::int64_tArray({long(830LL)}));
        jjtoSpecial_ = (new ::int64_tArray({long(768LL)}));
        jjtoMore_ = (new ::int64_tArray({long(1216LL)}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* ExpressionParserTokenManager::getClass0()
{
    return class_();
}

