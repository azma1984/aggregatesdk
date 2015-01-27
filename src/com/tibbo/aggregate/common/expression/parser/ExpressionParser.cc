/* ExpressionParser.cc */
#include ".\ExpressionParser.h"
  unsigned int jj_la1_0[] = {
0x543e2000,0x0,0x800,0x1000,0x4000,0x8000,0x10000,0x0,0x0,0x0,0x0,0x0,0x0,0x60000000,0x60000000,0x80000000,0x80000000,0x543e2000,0x143e2000,0x143e0000,0x143c0000,0x543e2000,0x0,0x143c0000,0xc0000,};
  unsigned int jj_la1_1[] = {
0x85000,0x4,0x0,0x0,0x0,0x0,0x0,0xe0,0xe0,0xf00,0xf00,0x70000,0x70000,0x0,0x0,0x3,0x3,0x85000,0x85000,0x85000,0x85000,0x85000,0x10,0x0,0x0,};

  /** Constructor with user supplied TokenManager. */



//string ExpressionParser::skip_to_matching_brace() {/*@bgen(jjtree) skip_to_matching_brace */
//  ASTskip_to_matching_brace *jjtn000 = new ASTskip_to_matching_brace(JJTSKIP_TO_MATCHING_BRACE);
//  bool jjtc000 = true;
//  jjtree.openNodeScope(jjtn000);
//  jjtn000.jjtSetFirstToken(getToken(1));
//    try {
//jjtree.closeNodeScope(jjtn000, true);
//          jjtc000 = false;
//          jjtn000.jjtSetLastToken(getToken(0));
//return "";
//    } catch ( ...) {
//if (jjtc000) {
//            jjtree.clearNodeScope(jjtn000);
//            jjtc000 = false;
//          } else {
//            jjtree.popNode();
//          }
//    }
//if (jjtc000) {
//            jjtree.closeNodeScope(jjtn000, true);
//            jjtn000.jjtSetLastToken(getToken(0));
//          }
//assert(false);
//  }

std::string ExpressionParser::skip_to_matching_brace()
{
    std::string res = "";
    Token* tok;
    int nesting = 1;
    while (true) {
        tok = getToken(1);
        if (tok->kind == EOF) break;
        if (tok->kind == LBRACE) nesting++;
        if (tok->kind == RBRACE) {
            nesting--;
            if (nesting == 0) break;
        }
        if (tok->kind == STRING_LITERAL) {
            res += tok->image.replace("\\\\", "\\");
        }else{
            res += tok->image;
        }

        tok = getNextToken();
    }

    return res;
}


ASTStart* ExpressionParser::Start() {/*@bgen(jjtree) Start */
  ASTStart *jjtn000 = new ASTStart(JJTSTART);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case NOT:
      case BITWISE_NOT:
      case TRUE:
      case FALSE:
      case NULL:
      case INTEGER_LITERAL:
      case FLOATING_POINT_LITERAL:
      case STRING_LITERAL:
      case MINUS:
      case LBRAKET:
      case LBRACE:
      case IDENTIFIER:{
        Expression();
        break;
        }
      default:
        jj_la1[0] = jj_gen;
        ;
      }
      jj_consume_token(0);
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
    jjtn000.jjtSetLastToken(getToken(0));
return jjtn000;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
assert(false);
  }


void ExpressionParser::Expression() {/*@bgen(jjtree) Expression */
  ASTExpression *jjtn000 = new ASTExpression(JJTEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      ConditionalExpression();
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::ConditionalExpression() {/*@bgen(jjtree) ConditionalExpression */
  ASTConditionalExpression *jjtn000 = new ASTConditionalExpression(JJTCONDITIONALEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      LogicalOrExpression();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case QUESTION:{
        jj_consume_token(QUESTION);
        LogicalOrExpression();
        jj_consume_token(COLON);
ASTConditionalNode *jjtn001 = new ASTConditionalNode(JJTCONDITIONALNODE);
                                                                     bool jjtc001 = true;
                                                                     jjtree.openNodeScope(jjtn001);
                                                                     jjtn001.jjtSetFirstToken(getToken(1));
        try {
          ConditionalExpression();
        } catch ( ...) {
if (jjtc001) {
                                                                       jjtree.clearNodeScope(jjtn001);
                                                                       jjtc001 = false;
                                                                     } else {
                                                                       jjtree.popNode();
                                                                     }
        }
if (jjtc001) {
                                                                       jjtree.closeNodeScope(jjtn001,  3);
                                                                       jjtn001.jjtSetLastToken(getToken(0));
                                                                     }
        break;
        }
      default:
        jj_la1[1] = jj_gen;
        ;
      }
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::LogicalOrExpression() {/*@bgen(jjtree) LogicalOrExpression */
  ASTLogicalOrExpression *jjtn000 = new ASTLogicalOrExpression(JJTLOGICALOREXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      LogicalAndExpression();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case OR:{
          ;
          break;
          }
        default:
          jj_la1[2] = jj_gen;
          goto end_label_1;
        }
        jj_consume_token(OR);
ASTLogicalOrNode *jjtn001 = new ASTLogicalOrNode(JJTLOGICALORNODE);
                                  bool jjtc001 = true;
                                  jjtree.openNodeScope(jjtn001);
                                  jjtn001.jjtSetFirstToken(getToken(1));
        try {
          LogicalAndExpression();
        } catch ( ...) {
if (jjtc001) {
                                    jjtree.clearNodeScope(jjtn001);
                                    jjtc001 = false;
                                  } else {
                                    jjtree.popNode();
                                  }
        }
if (jjtc001) {
                                    jjtree.closeNodeScope(jjtn001,  2);
                                    jjtn001.jjtSetLastToken(getToken(0));
                                  }
      }
      end_label_1: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::LogicalAndExpression() {/*@bgen(jjtree) LogicalAndExpression */
  ASTLogicalAndExpression *jjtn000 = new ASTLogicalAndExpression(JJTLOGICALANDEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      BitwiseOrExpression();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case AND:{
          ;
          break;
          }
        default:
          jj_la1[3] = jj_gen;
          goto end_label_2;
        }
        jj_consume_token(AND);
ASTLogicalAndNode *jjtn001 = new ASTLogicalAndNode(JJTLOGICALANDNODE);
                                  bool jjtc001 = true;
                                  jjtree.openNodeScope(jjtn001);
                                  jjtn001.jjtSetFirstToken(getToken(1));
        try {
          BitwiseOrExpression();
        } catch ( ...) {
if (jjtc001) {
                                    jjtree.clearNodeScope(jjtn001);
                                    jjtc001 = false;
                                  } else {
                                    jjtree.popNode();
                                  }
        }
if (jjtc001) {
                                    jjtree.closeNodeScope(jjtn001,  2);
                                    jjtn001.jjtSetLastToken(getToken(0));
                                  }
      }
      end_label_2: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::BitwiseOrExpression() {/*@bgen(jjtree) BitwiseOrExpression */
  ASTBitwiseOrExpression *jjtn000 = new ASTBitwiseOrExpression(JJTBITWISEOREXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      BitwiseXorExpression();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case BITWISE_OR:{
          ;
          break;
          }
        default:
          jj_la1[4] = jj_gen;
          goto end_label_3;
        }
        jj_consume_token(BITWISE_OR);
ASTBitwiseOrNode *jjtn001 = new ASTBitwiseOrNode(JJTBITWISEORNODE);
                                          bool jjtc001 = true;
                                          jjtree.openNodeScope(jjtn001);
                                          jjtn001.jjtSetFirstToken(getToken(1));
        try {
          BitwiseXorExpression();
        } catch ( ...) {
if (jjtc001) {
                                            jjtree.clearNodeScope(jjtn001);
                                            jjtc001 = false;
                                          } else {
                                            jjtree.popNode();
                                          }
        }
if (jjtc001) {
                                            jjtree.closeNodeScope(jjtn001,  2);
                                            jjtn001.jjtSetLastToken(getToken(0));
                                          }
      }
      end_label_3: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::BitwiseXorExpression() {/*@bgen(jjtree) BitwiseXorExpression */
  ASTBitwiseXorExpression *jjtn000 = new ASTBitwiseXorExpression(JJTBITWISEXOREXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      BitwiseAndExpression();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case BITWISE_XOR:{
          ;
          break;
          }
        default:
          jj_la1[5] = jj_gen;
          goto end_label_4;
        }
        jj_consume_token(BITWISE_XOR);
ASTBitwiseXorNode *jjtn001 = new ASTBitwiseXorNode(JJTBITWISEXORNODE);
                                           bool jjtc001 = true;
                                           jjtree.openNodeScope(jjtn001);
                                           jjtn001.jjtSetFirstToken(getToken(1));
        try {
          BitwiseAndExpression();
        } catch ( ...) {
if (jjtc001) {
                                             jjtree.clearNodeScope(jjtn001);
                                             jjtc001 = false;
                                           } else {
                                             jjtree.popNode();
                                           }
        }
if (jjtc001) {
                                             jjtree.closeNodeScope(jjtn001,  2);
                                             jjtn001.jjtSetLastToken(getToken(0));
                                           }
      }
      end_label_4: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::BitwiseAndExpression() {/*@bgen(jjtree) BitwiseAndExpression */
  ASTBitwiseAndExpression *jjtn000 = new ASTBitwiseAndExpression(JJTBITWISEANDEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      EqualityExpression();
      while (!hasError) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case BITWISE_AND:{
          ;
          break;
          }
        default:
          jj_la1[6] = jj_gen;
          goto end_label_5;
        }
        jj_consume_token(BITWISE_AND);
ASTBitwiseAndNode *jjtn001 = new ASTBitwiseAndNode(JJTBITWISEANDNODE);
                                         bool jjtc001 = true;
                                         jjtree.openNodeScope(jjtn001);
                                         jjtn001.jjtSetFirstToken(getToken(1));
        try {
          EqualityExpression();
        } catch ( ...) {
if (jjtc001) {
                                           jjtree.clearNodeScope(jjtn001);
                                           jjtc001 = false;
                                         } else {
                                           jjtree.popNode();
                                         }
        }
if (jjtc001) {
                                           jjtree.closeNodeScope(jjtn001,  2);
                                           jjtn001.jjtSetLastToken(getToken(0));
                                         }
      }
      end_label_5: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::EqualityExpression() {
    RelationalExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case EQ:
      case NE:
      case MATCH:{
        ;
        break;
        }
      default:
        jj_la1[7] = jj_gen;
        goto end_label_6;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case EQ:{
        jj_consume_token(EQ);
ASTEQNode *jjtn001 = new ASTEQNode(JJTEQNODE);
            bool jjtc001 = true;
            jjtree.openNodeScope(jjtn001);
            jjtn001.jjtSetFirstToken(getToken(1));
        try {
          RelationalExpression();
        } catch ( ...) {
if (jjtc001) {
              jjtree.clearNodeScope(jjtn001);
              jjtc001 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc001) {
              jjtree.closeNodeScope(jjtn001,  2);
              jjtn001.jjtSetLastToken(getToken(0));
            }
        break;
        }
      case NE:{
        jj_consume_token(NE);
ASTNENode *jjtn002 = new ASTNENode(JJTNENODE);
            bool jjtc002 = true;
            jjtree.openNodeScope(jjtn002);
            jjtn002.jjtSetFirstToken(getToken(1));
        try {
          RelationalExpression();
        } catch ( ...) {
if (jjtc002) {
              jjtree.clearNodeScope(jjtn002);
              jjtc002 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc002) {
              jjtree.closeNodeScope(jjtn002,  2);
              jjtn002.jjtSetLastToken(getToken(0));
            }
        break;
        }
      case MATCH:{
        jj_consume_token(MATCH);
ASTRegexMatchNode *jjtn003 = new ASTRegexMatchNode(JJTREGEXMATCHNODE);
               bool jjtc003 = true;
               jjtree.openNodeScope(jjtn003);
               jjtn003.jjtSetFirstToken(getToken(1));
        try {
          RelationalExpression();
        } catch ( ...) {
if (jjtc003) {
                 jjtree.clearNodeScope(jjtn003);
                 jjtc003 = false;
               } else {
                 jjtree.popNode();
               }
        }
if (jjtc003) {
                 jjtree.closeNodeScope(jjtn003,  2);
                 jjtn003.jjtSetLastToken(getToken(0));
               }
        break;
        }
      default:
        jj_la1[8] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    }
    end_label_6: ;
  }


void ExpressionParser::RelationalExpression() {
    ShiftExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LT:
      case GT:
      case LTE:
      case GTE:{
        ;
        break;
        }
      default:
        jj_la1[9] = jj_gen;
        goto end_label_7;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LT:{
        jj_consume_token(LT);
ASTLTNode *jjtn001 = new ASTLTNode(JJTLTNODE);
           bool jjtc001 = true;
           jjtree.openNodeScope(jjtn001);
           jjtn001.jjtSetFirstToken(getToken(1));
        try {
          ShiftExpression();
        } catch ( ...) {
if (jjtc001) {
             jjtree.clearNodeScope(jjtn001);
             jjtc001 = false;
           } else {
             jjtree.popNode();
           }
        }
if (jjtc001) {
             jjtree.closeNodeScope(jjtn001,  2);
             jjtn001.jjtSetLastToken(getToken(0));
           }
        break;
        }
      case GT:{
        jj_consume_token(GT);
ASTGTNode *jjtn002 = new ASTGTNode(JJTGTNODE);
           bool jjtc002 = true;
           jjtree.openNodeScope(jjtn002);
           jjtn002.jjtSetFirstToken(getToken(1));
        try {
          ShiftExpression();
        } catch ( ...) {
if (jjtc002) {
             jjtree.clearNodeScope(jjtn002);
             jjtc002 = false;
           } else {
             jjtree.popNode();
           }
        }
if (jjtc002) {
             jjtree.closeNodeScope(jjtn002,  2);
             jjtn002.jjtSetLastToken(getToken(0));
           }
        break;
        }
      case LTE:{
        jj_consume_token(LTE);
ASTLENode *jjtn003 = new ASTLENode(JJTLENODE);
            bool jjtc003 = true;
            jjtree.openNodeScope(jjtn003);
            jjtn003.jjtSetFirstToken(getToken(1));
        try {
          ShiftExpression();
        } catch ( ...) {
if (jjtc003) {
              jjtree.clearNodeScope(jjtn003);
              jjtc003 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc003) {
              jjtree.closeNodeScope(jjtn003,  2);
              jjtn003.jjtSetLastToken(getToken(0));
            }
        break;
        }
      case GTE:{
        jj_consume_token(GTE);
ASTGENode *jjtn004 = new ASTGENode(JJTGENODE);
            bool jjtc004 = true;
            jjtree.openNodeScope(jjtn004);
            jjtn004.jjtSetFirstToken(getToken(1));
        try {
          ShiftExpression();
        } catch ( ...) {
if (jjtc004) {
              jjtree.clearNodeScope(jjtn004);
              jjtc004 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc004) {
              jjtree.closeNodeScope(jjtn004,  2);
              jjtn004.jjtSetLastToken(getToken(0));
            }
        break;
        }
      default:
        jj_la1[10] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    }
    end_label_7: ;
  }


void ExpressionParser::ShiftExpression() {
    AdditiveExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case RIGHT_SHIFT:
      case URIGHT_SHIFT:
      case LEFT_SHIFT:{
        ;
        break;
        }
      default:
        jj_la1[11] = jj_gen;
        goto end_label_8;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case RIGHT_SHIFT:{
        jj_consume_token(RIGHT_SHIFT);
ASTRightShiftNode *jjtn001 = new ASTRightShiftNode(JJTRIGHTSHIFTNODE);
                    bool jjtc001 = true;
                    jjtree.openNodeScope(jjtn001);
                    jjtn001.jjtSetFirstToken(getToken(1));
        try {
          AdditiveExpression();
        } catch ( ...) {
if (jjtc001) {
                      jjtree.clearNodeScope(jjtn001);
                      jjtc001 = false;
                    } else {
                      jjtree.popNode();
                    }
        }
if (jjtc001) {
                      jjtree.closeNodeScope(jjtn001,  2);
                      jjtn001.jjtSetLastToken(getToken(0));
                    }
        break;
        }
      case URIGHT_SHIFT:{
        jj_consume_token(URIGHT_SHIFT);
ASTUnsignedRightShiftNode *jjtn002 = new ASTUnsignedRightShiftNode(JJTUNSIGNEDRIGHTSHIFTNODE);
                     bool jjtc002 = true;
                     jjtree.openNodeScope(jjtn002);
                     jjtn002.jjtSetFirstToken(getToken(1));
        try {
          AdditiveExpression();
        } catch ( ...) {
if (jjtc002) {
                       jjtree.clearNodeScope(jjtn002);
                       jjtc002 = false;
                     } else {
                       jjtree.popNode();
                     }
        }
if (jjtc002) {
                       jjtree.closeNodeScope(jjtn002,  2);
                       jjtn002.jjtSetLastToken(getToken(0));
                     }
        break;
        }
      case LEFT_SHIFT:{
        jj_consume_token(LEFT_SHIFT);
ASTLeftShiftNode *jjtn003 = new ASTLeftShiftNode(JJTLEFTSHIFTNODE);
                   bool jjtc003 = true;
                   jjtree.openNodeScope(jjtn003);
                   jjtn003.jjtSetFirstToken(getToken(1));
        try {
          AdditiveExpression();
        } catch ( ...) {
if (jjtc003) {
                     jjtree.clearNodeScope(jjtn003);
                     jjtc003 = false;
                   } else {
                     jjtree.popNode();
                   }
        }
if (jjtc003) {
                     jjtree.closeNodeScope(jjtn003,  2);
                     jjtn003.jjtSetLastToken(getToken(0));
                   }
        break;
        }
      default:
        jj_la1[12] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    }
    end_label_8: ;
  }


void ExpressionParser::AdditiveExpression() {
    MultiplicativeExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case PLUS:
      case MINUS:{
        ;
        break;
        }
      default:
        jj_la1[13] = jj_gen;
        goto end_label_9;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case PLUS:{
        jj_consume_token(PLUS);
ASTAddNode *jjtn001 = new ASTAddNode(JJTADDNODE);
             bool jjtc001 = true;
             jjtree.openNodeScope(jjtn001);
             jjtn001.jjtSetFirstToken(getToken(1));
        try {
          MultiplicativeExpression();
        } catch ( ...) {
if (jjtc001) {
               jjtree.clearNodeScope(jjtn001);
               jjtc001 = false;
             } else {
               jjtree.popNode();
             }
        }
if (jjtc001) {
               jjtree.closeNodeScope(jjtn001,  2);
               jjtn001.jjtSetLastToken(getToken(0));
             }
        break;
        }
      case MINUS:{
        jj_consume_token(MINUS);
ASTSubtractNode *jjtn002 = new ASTSubtractNode(JJTSUBTRACTNODE);
              bool jjtc002 = true;
              jjtree.openNodeScope(jjtn002);
              jjtn002.jjtSetFirstToken(getToken(1));
        try {
          MultiplicativeExpression();
        } catch ( ...) {
if (jjtc002) {
                jjtree.clearNodeScope(jjtn002);
                jjtc002 = false;
              } else {
                jjtree.popNode();
              }
        }
if (jjtc002) {
                jjtree.closeNodeScope(jjtn002,  2);
                jjtn002.jjtSetLastToken(getToken(0));
              }
        break;
        }
      default:
        jj_la1[14] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    }
    end_label_9: ;
  }


void ExpressionParser::MultiplicativeExpression() {
    UnaryExpression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case MUL:
      case DIV:
      case MOD:{
        ;
        break;
        }
      default:
        jj_la1[15] = jj_gen;
        goto end_label_10;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case MUL:{
        jj_consume_token(MUL);
ASTMulNode *jjtn001 = new ASTMulNode(JJTMULNODE);
            bool jjtc001 = true;
            jjtree.openNodeScope(jjtn001);
            jjtn001.jjtSetFirstToken(getToken(1));
        try {
          UnaryExpression();
        } catch ( ...) {
if (jjtc001) {
              jjtree.clearNodeScope(jjtn001);
              jjtc001 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc001) {
              jjtree.closeNodeScope(jjtn001,  2);
              jjtn001.jjtSetLastToken(getToken(0));
            }
        break;
        }
      case DIV:{
        jj_consume_token(DIV);
ASTDivNode *jjtn002 = new ASTDivNode(JJTDIVNODE);
            bool jjtc002 = true;
            jjtree.openNodeScope(jjtn002);
            jjtn002.jjtSetFirstToken(getToken(1));
        try {
          UnaryExpression();
        } catch ( ...) {
if (jjtc002) {
              jjtree.clearNodeScope(jjtn002);
              jjtc002 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc002) {
              jjtree.closeNodeScope(jjtn002,  2);
              jjtn002.jjtSetLastToken(getToken(0));
            }
        break;
        }
      case MOD:{
        jj_consume_token(MOD);
ASTModNode *jjtn003 = new ASTModNode(JJTMODNODE);
            bool jjtc003 = true;
            jjtree.openNodeScope(jjtn003);
            jjtn003.jjtSetFirstToken(getToken(1));
        try {
          UnaryExpression();
        } catch ( ...) {
if (jjtc003) {
              jjtree.clearNodeScope(jjtn003);
              jjtc003 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc003) {
              jjtree.closeNodeScope(jjtn003,  2);
              jjtn003.jjtSetLastToken(getToken(0));
            }
        break;
        }
      default:
        jj_la1[16] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    }
    end_label_10: ;
  }


void ExpressionParser::UnaryExpression() {/*@bgen(jjtree) UnaryExpression */
  ASTUnaryExpression *jjtn000 = new ASTUnaryExpression(JJTUNARYEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case MINUS:{
        jj_consume_token(MINUS);
ASTUnaryNode *jjtn001 = new ASTUnaryNode(JJTUNARYNODE);
            bool jjtc001 = true;
            jjtree.openNodeScope(jjtn001);
            jjtn001.jjtSetFirstToken(getToken(1));
        try {
          LogicalNotExpression();
        } catch ( ...) {
if (jjtc001) {
              jjtree.clearNodeScope(jjtn001);
              jjtc001 = false;
            } else {
              jjtree.popNode();
            }
        }
if (jjtc001) {
              jjtree.closeNodeScope(jjtn001,  1);
              jjtn001.jjtSetLastToken(getToken(0));
            }
        break;
        }
      case NOT:
      case BITWISE_NOT:
      case TRUE:
      case FALSE:
      case NULL:
      case INTEGER_LITERAL:
      case FLOATING_POINT_LITERAL:
      case STRING_LITERAL:
      case LBRAKET:
      case LBRACE:
      case IDENTIFIER:{
        LogicalNotExpression();
        break;
        }
      default:
        jj_la1[17] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::LogicalNotExpression() {/*@bgen(jjtree) LogicalNotExpression */
  ASTLogicalNotExpression *jjtn000 = new ASTLogicalNotExpression(JJTLOGICALNOTEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case NOT:{
        jj_consume_token(NOT);
ASTLogicalNotNode *jjtn001 = new ASTLogicalNotNode(JJTLOGICALNOTNODE);
          bool jjtc001 = true;
          jjtree.openNodeScope(jjtn001);
          jjtn001.jjtSetFirstToken(getToken(1));
        try {
          LogicalNotExpression();
        } catch ( ...) {
if (jjtc001) {
            jjtree.clearNodeScope(jjtn001);
            jjtc001 = false;
          } else {
            jjtree.popNode();
          }
        }
if (jjtc001) {
            jjtree.closeNodeScope(jjtn001,  1);
            jjtn001.jjtSetLastToken(getToken(0));
          }
        break;
        }
      case BITWISE_NOT:
      case TRUE:
      case FALSE:
      case NULL:
      case INTEGER_LITERAL:
      case FLOATING_POINT_LITERAL:
      case STRING_LITERAL:
      case LBRAKET:
      case LBRACE:
      case IDENTIFIER:{
        BitwiseNotExpression();
        break;
        }
      default:
        jj_la1[18] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::BitwiseNotExpression() {/*@bgen(jjtree) BitwiseNotExpression */
  ASTBitwiseNotExpression *jjtn000 = new ASTBitwiseNotExpression(JJTBITWISENOTEXPRESSION);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case BITWISE_NOT:{
        jj_consume_token(BITWISE_NOT);
ASTBitwiseNotNode *jjtn001 = new ASTBitwiseNotNode(JJTBITWISENOTNODE);
                  bool jjtc001 = true;
                  jjtree.openNodeScope(jjtn001);
                  jjtn001.jjtSetFirstToken(getToken(1));
        try {
          BitwiseNotExpression();
        } catch ( ...) {
if (jjtc001) {
                    jjtree.clearNodeScope(jjtn001);
                    jjtc001 = false;
                  } else {
                    jjtree.popNode();
                  }
        }
if (jjtc001) {
                    jjtree.closeNodeScope(jjtn001,  1);
                    jjtn001.jjtSetLastToken(getToken(0));
                  }
        break;
        }
      case TRUE:
      case FALSE:
      case NULL:
      case INTEGER_LITERAL:
      case FLOATING_POINT_LITERAL:
      case STRING_LITERAL:
      case LBRAKET:
      case LBRACE:
      case IDENTIFIER:{
        PrimaryExpression();
        break;
        }
      default:
        jj_la1[19] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::PrimaryExpression() {String name;
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case LBRACE:{
      jj_consume_token(LBRACE);
      ValueReference();
      jj_consume_token(RBRACE);
      break;
      }
    case TRUE:
    case FALSE:
    case NULL:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case STRING_LITERAL:{
      Literal();
      break;
      }
    case IDENTIFIER:{
      Function();
      break;
      }
    case LBRAKET:{
      jj_consume_token(LBRAKET);
      Expression();
      jj_consume_token(RBRAKET);
      break;
      }
    default:
      jj_la1[20] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
  }


void ExpressionParser::Function() {Token t;/*@bgen(jjtree) FunctionNode */
  ASTFunctionNode *jjtn000 = new ASTFunctionNode(JJTFUNCTIONNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      t = jj_consume_token(IDENTIFIER);
      Arguments();
jjtree.closeNodeScope(jjtn000, true);
      jjtc000 = false;
      jjtn000.jjtSetLastToken(getToken(0));
jjtn000.name = t.image;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::Arguments() {
    jj_consume_token(LBRAKET);
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case NOT:
    case BITWISE_NOT:
    case TRUE:
    case FALSE:
    case NULL:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case STRING_LITERAL:
    case MINUS:
    case LBRAKET:
    case LBRACE:
    case IDENTIFIER:{
      ArgumentList();
      break;
      }
    default:
      jj_la1[21] = jj_gen;
      ;
    }
    jj_consume_token(RBRAKET);
  }


void ExpressionParser::ArgumentList() {
    Expression();
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case COMMA:{
        ;
        break;
        }
      default:
        jj_la1[22] = jj_gen;
        goto end_label_11;
      }
      jj_consume_token(COMMA);
      Expression();
    }
    end_label_11: ;
  }


void ExpressionParser::ValueReference() {Token t;/*@bgen(jjtree) ValueReferenceNode */
  ASTValueReferenceNode *jjtn000 = new ASTValueReferenceNode(JJTVALUEREFERENCENODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
  jjtn000.jjtSetFirstToken(getToken(1));
    try {
      jjtn000.uriImage = skip_to_matching_brace();
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
      jjtn000.jjtSetLastToken(getToken(0));
    }
  }


void ExpressionParser::Literal() {Token t;
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case INTEGER_LITERAL:{
ASTLongConstNode *jjtn001 = new ASTLongConstNode(JJTLONGCONSTNODE);
   bool jjtc001 = true;
   jjtree.openNodeScope(jjtn001);
   jjtn001.jjtSetFirstToken(getToken(1));
      try {
        t = jj_consume_token(INTEGER_LITERAL);
jjtree.closeNodeScope(jjtn001, true);
      jjtc001 = false;
      jjtn001.jjtSetLastToken(getToken(0));
if (t.image.startsWith("0x") || t.image.startsWith("0X"))
       {
         jjtn001.val = Long.parseLong(t.image.substring(2, t.image.length()), 16);
       }
       else if (t.image.startsWith("0b") || t.image.startsWith("0B"))
       {
         jjtn001.val = Long.parseLong(t.image.substring(2, t.image.length()), 2);
       }
       else if (t.image.startsWith("0") && t.image.length() > 1)
       {
         jjtn001.val = Long.parseLong(t.image.substring(1, t.image.length()), 8);
       }
       else
       {
         jjtn001.val = Long.parseLong(t.image);
       }
      } catch ( ...) {
if (jjtc001) {
     jjtree.clearNodeScope(jjtn001);
     jjtc001 = false;
   } else {
     jjtree.popNode();
   }
      }
if (jjtc001) {
     jjtree.closeNodeScope(jjtn001, true);
     jjtn001.jjtSetLastToken(getToken(0));
   }
      break;
      }
    case FLOATING_POINT_LITERAL:{
ASTFloatConstNode *jjtn002 = new ASTFloatConstNode(JJTFLOATCONSTNODE);
   bool jjtc002 = true;
   jjtree.openNodeScope(jjtn002);
   jjtn002.jjtSetFirstToken(getToken(1));
      try {
        t = jj_consume_token(FLOATING_POINT_LITERAL);
jjtree.closeNodeScope(jjtn002, true);
      jjtc002 = false;
      jjtn002.jjtSetLastToken(getToken(0));
jjtn002.val = Float.parseFloat(t.image);
      } catch ( ...) {
if (jjtc002) {
     jjtree.clearNodeScope(jjtn002);
     jjtc002 = false;
   } else {
     jjtree.popNode();
   }
      }
if (jjtc002) {
     jjtree.closeNodeScope(jjtn002, true);
     jjtn002.jjtSetLastToken(getToken(0));
   }
      break;
      }
    case STRING_LITERAL:{
ASTStringConstNode *jjtn003 = new ASTStringConstNode(JJTSTRINGCONSTNODE);
   bool jjtc003 = true;
   jjtree.openNodeScope(jjtn003);
   jjtn003.jjtSetFirstToken(getToken(1));
      try {
        t = jj_consume_token(STRING_LITERAL);
jjtree.closeNodeScope(jjtn003, true);
      jjtc003 = false;
      jjtn003.jjtSetLastToken(getToken(0));
jjtn003.val = t.image.substring(1, t.image.length() - 1);

       jjtn003.val = org.apache.commons.lang.StringEscapeUtils.unescapeJava(jjtn003.val);
      } catch ( ...) {
if (jjtc003) {
     jjtree.clearNodeScope(jjtn003);
     jjtc003 = false;
   } else {
     jjtree.popNode();
   }
      }
if (jjtc003) {
     jjtree.closeNodeScope(jjtn003, true);
     jjtn003.jjtSetLastToken(getToken(0));
   }
      break;
      }
    case TRUE:
    case FALSE:{
      BooleanLiteral();
      break;
      }
    case NULL:{
ASTNullNode *jjtn004 = new ASTNullNode(JJTNULLNODE);
    bool jjtc004 = true;
    jjtree.openNodeScope(jjtn004);
    jjtn004.jjtSetFirstToken(getToken(1));
      try {
        jj_consume_token(NULL);
      } catch ( ...) {
if (jjtc004) {
      jjtree.clearNodeScope(jjtn004);
      jjtc004 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc004) {
      jjtree.closeNodeScope(jjtn004, true);
      jjtn004.jjtSetLastToken(getToken(0));
    }
      break;
      }
    default:
      jj_la1[23] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
  }


void ExpressionParser::BooleanLiteral() {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case TRUE:{
ASTTrueNode *jjtn001 = new ASTTrueNode(JJTTRUENODE);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
    jjtn001.jjtSetFirstToken(getToken(1));
      try {
        jj_consume_token(TRUE);
      } catch ( ...) {
if (jjtc001) {
      jjtree.clearNodeScope(jjtn001);
      jjtc001 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc001) {
      jjtree.closeNodeScope(jjtn001, true);
      jjtn001.jjtSetLastToken(getToken(0));
    }
      break;
      }
    case FALSE:{
ASTFalseNode *jjtn002 = new ASTFalseNode(JJTFALSENODE);
    bool jjtc002 = true;
    jjtree.openNodeScope(jjtn002);
    jjtn002.jjtSetFirstToken(getToken(1));
      try {
        jj_consume_token(FALSE);
      } catch ( ...) {
if (jjtc002) {
      jjtree.clearNodeScope(jjtn002);
      jjtc002 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc002) {
      jjtree.closeNodeScope(jjtn002, true);
      jjtn002.jjtSetLastToken(getToken(0));
    }
      break;
      }
    default:
      jj_la1[24] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
  }


 ExpressionParser::ExpressionParser(TokenManager *tm){
    head = NULL;
    ReInit(tm);
}
   ExpressionParser::~ExpressionParser()
{
  if (token_source) delete token_source;
  if (head) {
    Token *next, *t = head;
    while (t) {
      next = t->next;
      delete t;
      t = next;
    }
  }
  if (errorHandlerCreated) {
    delete errorHandler;
  }
}

void ExpressionParser::ReInit(TokenManager *tm){
    if (head) delete head;
    errorHandler = new ErrorHandler();
    errorHandlerCreated = true;
    hasError = false;
    token_source = tm;
    head = token = new Token();
    token->kind = 0;
    token->next = NULL;
    jj_lookingAhead = false;
    jj_rescan = false;
    jj_done = false;
    jj_scanpos = jj_lastpos = NULL;
    jj_gc = 0;
    jj_kind = -1;
    trace_indent = 0;
    trace_enabled = false;
    jj_ntk = -1;
    jjtree.reset();
    jj_gen = 0;
    for (int i = 0; i < 25; i++) jj_la1[i] = -1;
  }


Token * ExpressionParser::jj_consume_token(int kind)  {
    Token *oldToken;
    if ((oldToken = token)->next != NULL) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    if (token->kind == kind) {
      jj_gen++;
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    JAVACC_STRING_TYPE image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
    errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this), hasError = true;
    return token;
  }


/** Get the next Token. */

Token * ExpressionParser::getNextToken(){
    if (token->next != NULL) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */

Token * ExpressionParser::getToken(int index){
    Token *t = token;
    for (int i = 0; i < index; i++) {
      if (t->next != NULL) t = t->next;
      else t = t->next = token_source->getNextToken();
    }
    return t;
  }


int ExpressionParser::jj_ntk_f(){
    if ((jj_nt=token->next) == NULL)
      return (jj_ntk = (token->next=token_source->getNextToken())->kind);
    else
      return (jj_ntk = jj_nt->kind);
  }


 void  ExpressionParser::parseError()   {
      fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine, token->beginColumn, addUnicodeEscapes(token->image).c_str(), addUnicodeEscapes(getToken(1)->image).c_str());
   }


 void ExpressionParser::enable_tracing()  {
  }

  /** Disable tracing. */

 void ExpressionParser::disable_tracing()  {
  }


