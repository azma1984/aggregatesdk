// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/SimpleCharStream.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"


class SimpleCharStream
{
public:
    static const bool staticFlag = false;

    int bufsize;
    int available;
    int tokenBegin;

    int bufpos;

    int* bufline;
    int* bufcolumn;
    int column;
    int line;
    bool prevCharIsCR;
    bool prevCharIsLF;
    std::ifstream *inputStream;
    std::string buffer;
    int maxNextCharInd;
    int inBuf;
    int tabSize;
    void setTabSize(int i);
    int getTabSize(int i);
    void ExpandBuff(bool wrapAround);
    void FillBuff();

    char16_t BeginToken();

    void UpdateLineColumn(char16_t c);

    char16_t readChar();
    int getColumn();
    int getLine();
    int getEndColumn();
    int getEndLine();
    int getBeginColumn();
    int getBeginLine();
    void backup(int amount);

    void SimpleCharStream(std::ifstream* dstream, int startline, int startcolumn, int buffersize);
    void SimpleCharStream(std::ifstream* dstream, int startline, int startcolumn);
    void SimpleCharStream(std::ifstream* dstream);


    void ReInit(std::ifstream* dstream, int startline, int startcolumn, int buffersize);
    void ReInit(std::ifstream* dstream, int startline, int startcolumn);
    void ReInit(std::ifstream* dstream);

    void SimpleCharStream(std::iostream* dstream, std::string* encoding, int startline, int startcolumn, int buffersize) /* throws(java.io.UnsupportedEncodingException) */;
    void SimpleCharStream(std::iostream* dstream, int startline, int startcolumn, int buffersize);
    void SimpleCharStream(std::iostream* dstream, std::string* encoding, int startline, int startcolumn) /* throws(java.io.UnsupportedEncodingException) */;
    void SimpleCharStream(std::iostream* dstream, int startline, int startcolumn);
    void SimpleCharStream(std::iostream* dstream, std::string* encoding) /* throws(java.io.UnsupportedEncodingException) */;
    void SimpleCharStream(std::iostream* dstream);

    void ReInit(std::iostream* dstream, std::string* encoding, int startline, int startcolumn, int buffersize) /* throws(java.io.UnsupportedEncodingException) */;
    void ReInit(std::iostream* dstream, int startline, int startcolumn, int buffersize);
    void ReInit(std::iostream* dstream, std::string* encoding) /* throws(java.io.UnsupportedEncodingException) */;
    void ReInit(std::iostream* dstream);
    void ReInit(std::iostream* dstream, std::string* encoding, int startline, int startcolumn) /* throws(java.io.UnsupportedEncodingException) */;
    void ReInit(std::iostream* dstream, int startline, int startcolumn);
    std::string* GetImage();
    std::string GetSuffix(int len);
    void Done();
    void adjustBeginLineColumn(int newLine, int newCol);

    // Generated
    SimpleCharStream(std::ifstream* dstream, int startline, int startcolumn, int buffersize);
    SimpleCharStream(std::ifstream* dstream, int startline, int startcolumn);
    SimpleCharStream(std::ifstream* dstream);
    SimpleCharStream(std::iostream* dstream, std::string* encoding, int startline, int startcolumn, int buffersize);
    SimpleCharStream(std::iostream* dstream, int startline, int startcolumn, int buffersize);
    SimpleCharStream(std::iostream* dstream, std::string* encoding, int startline, int startcolumn);
    SimpleCharStream(std::iostream* dstream, int startline, int startcolumn);
    SimpleCharStream(std::iostream* dstream, std::string* encoding);
    SimpleCharStream(std::iostream* dstream);

};
