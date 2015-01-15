// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/SimpleCharStream.java
//#include <com/tibbo/aggregate/common/expression/parser/SimpleCharStream.h"

#include <SimpleCharStream.h"


void SimpleCharStream::SimpleCharStream(std::ifstream* dstream, int startline, int startcolumn, int buffersize)
{
    bufpos = -int(1);
    column = int(0);
    line = int(1);
    prevCharIsCR = false;
    prevCharIsLF = false;
    maxNextCharInd = int(0);
    inBuf = int(0);
    tabSize = int(8);
}

void SimpleCharStream::setTabSize(int i)
{
    tabSize = i;
}

int SimpleCharStream::getTabSize(int i)
{
    return tabSize;
}

void SimpleCharStream::ExpandBuff(bool wrapAround)
{
   /*
	auto newbuffer = new char[bufsize + int(2048)];
    auto newbufline = new int[bufsize + int(2048)];
    auto newbufcolumn = new int[bufsize + int(2048)];
    try {
        if(wrapAround) {
            ::java::lang::System::arraycopy(buffer, tokenBegin, newbuffer, 0, bufsize - tokenBegin);
            ::java::lang::System::arraycopy(buffer, 0, newbuffer, bufsize - tokenBegin, bufpos);
            buffer = newbuffer;
            ::java::lang::System::arraycopy(bufline, tokenBegin, newbufline, 0, bufsize - tokenBegin);
            ::java::lang::System::arraycopy(bufline, 0, newbufline, bufsize - tokenBegin, bufpos);
            bufline = newbufline;
            ::java::lang::System::arraycopy(bufcolumn, tokenBegin, newbufcolumn, 0, bufsize - tokenBegin);
            ::java::lang::System::arraycopy(bufcolumn, 0, newbufcolumn, bufsize - tokenBegin, bufpos);
            bufcolumn = newbufcolumn;
            maxNextCharInd = (bufpos += (bufsize - tokenBegin));
        } else {
            ::java::lang::System::arraycopy(buffer, tokenBegin, newbuffer, 0, bufsize - tokenBegin);
            buffer = newbuffer;
            ::java::lang::System::arraycopy(bufline, tokenBegin, newbufline, 0, bufsize - tokenBegin);
            bufline = newbufline;
            ::java::lang::System::arraycopy(bufcolumn, tokenBegin, newbufcolumn, 0, bufsize - tokenBegin);
            bufcolumn = newbufcolumn;
            maxNextCharInd = (bufpos -= tokenBegin);
        }
    } catch (::java::lang::Throwable* t) {
        throw new ::java::lang::Error(t)->getMessage());
    }
    bufsize += 2048;
    available = bufsize;
    tokenBegin;*/
}

void SimpleCharStream::FillBuff() /* throws(java.io.IOException) */
{
    /*
	if(maxNextCharInd == available) {
        if(available == bufsize) {
            if(tokenBegin > 2048) {
                bufpos = maxNextCharInd;
                available = tokenBegin;
            } else if(tokenBegin < 0)
                bufpos = maxNextCharInd;
            else
                ExpandBuff(false);
        } else if(available > tokenBegin)
            available = bufsize;
        else if((tokenBegin - available) < 2048)
            ExpandBuff(true);
        else
            available = tokenBegin;
    }
    int i;
    try {
        if((i = inputStream)->read(buffer, maxNextCharInd, available - maxNextCharInd)) == -int(1)) {
            inputStream)->close();
            throw new std::exception();
        } else
            maxNextCharInd += i;
        return;
    } catch (std::exception* e) {
        --bufpos;
        backup(0);
        if(tokenBegin == -int(1))
            tokenBegin = bufpos;

        throw e;
    }*/
}

char16_t SimpleCharStream::BeginToken() /* throws(java.io.IOException) */
{
    tokenBegin = -int(1);
    auto c = readChar();
    tokenBegin = bufpos;
    return c;
}

void SimpleCharStream::UpdateLineColumn(char16_t c)
{
    column++;
    if(prevCharIsLF) {
        prevCharIsLF = false;
        line += (column = 1);
    } else if(prevCharIsCR) {
        prevCharIsCR = false;
        if(c == u'\u000a') {
            prevCharIsLF = true;
        } else
            line += (column = 1);
    }
    switch (c) {
    case u'\u000d':
        prevCharIsCR = true;
        break;
    case u'\u000a':
        prevCharIsLF = true;
        break;
    case u'\u0009':
        column--;
        column += (tabSize - (column % tabSize));
        break;
    default:
        break;
    }

    (*bufline)[bufpos] = line;
    (*bufcolumn)[bufpos] = column;
}

char16_t SimpleCharStream::readChar() /* throws(java.io.IOException) */
{
   /*
	if(inBuf > 0) {
        --inBuf;
        if(++bufpos == bufsize)
            bufpos;

        return (*buffer)[bufpos];
    }
    if(++bufpos >= maxNextCharInd)
        FillBuff();

    auto c = (*buffer)[bufpos];
    UpdateLineColumn(c);
    return c;*/
}

int SimpleCharStream::getColumn()
{
    return (*bufcolumn)[bufpos];
}

int SimpleCharStream::getLine()
{
    return (*bufline)[bufpos];
}

int SimpleCharStream::getEndColumn()
{
    return (*bufcolumn)[bufpos];
}

int SimpleCharStream::getEndLine()
{
    return (*bufline)[bufpos];
}

int SimpleCharStream::getBeginColumn()
{
    return (*bufcolumn)[tokenBegin];
}

int SimpleCharStream::getBeginLine()
{
    return (*bufline)[tokenBegin];
}

void SimpleCharStream::backup(int amount)
{
    inBuf += amount;
    if((bufpos -= amount) < 0)
        bufpos += bufsize;

}

void SimpleCharStream::ReInit(std::ifstream* dstream, int startline, int startcolumn, int buffersize)
{
	/*
    inputStream = dstream;
    line = startline;
    column = startcolumn - int(1);
    if(buffer == 0 || buffersize != buffer)->length) {
        available = bufsize = buffersize;
        buffer = new ::char16_tArray(buffersize);
        bufline = new ::intArray(buffersize);
        bufcolumn = new ::intArray(buffersize);
    }
    prevCharIsLF = prevCharIsCR = false;
    tokenBegin = inBuf = maxNextCharInd;
    bufpos = -int(1);*/
}

void SimpleCharStream::ReInit(std::ifstream* dstream, int startline, int startcolumn)
{
    ReInit(dstream, startline, startcolumn, int(4096));
}

void SimpleCharStream::ReInit(std::ifstream* dstream)
{
    ReInit(dstream, int(1), int(1), int(4096));
}


void SimpleCharStream::ReInit(std::iostream* dstream, const std::string & encoding, int startline, int startcolumn, int buffersize) /* throws(java.io.UnsupportedEncodingException) */
{
    ReInit(encoding == 0 ? static_cast< std::ifstream* >(new std::iostreamReader(dstream)) : static_cast< std::ifstream* >(new std::iostreamReader(dstream, encoding)), startline, startcolumn, buffersize);
}

void SimpleCharStream::ReInit(std::iostream* dstream, int startline, int startcolumn, int buffersize)
{
    ReInit(static_cast< std::ifstream* >(new std::iostreamReader(dstream)), startline, startcolumn, buffersize);
}

void SimpleCharStream::ReInit(std::iostream* dstream, const std::string & encoding) /* throws(java.io.UnsupportedEncodingException) */
{
    ReInit(dstream, encoding, 1, 1, 4096);
}

void SimpleCharStream::ReInit(std::iostream* dstream)
{
    ReInit(dstream, int(1), int(1), int(4096));
}

void SimpleCharStream::ReInit(std::iostream* dstream, const std::string & encoding, int startline, int startcolumn) /* throws(java.io.UnsupportedEncodingException) */
{
    ReInit(dstream, encoding, startline, startcolumn, 4096);
}

void SimpleCharStream::ReInit(std::iostream* dstream, int startline, int startcolumn)
{
    ReInit(dstream, startline, startcolumn, int(4096));
}

const std::string & SimpleCharStream::GetImage()
{
   /*
	if(bufpos >= tokenBegin)
        return new std::string(buffer, tokenBegin, bufpos - tokenBegin + int(1));
    else
        return std::stringBuilder().append(new std::string(buffer, tokenBegin, bufsize - tokenBegin))->append(new std::string(buffer, int(0), bufpos + int(1)))->toString();
*/
return 0;
}

std::string SimpleCharStream::GetSuffix(int len)
{

	auto ret = new char[len];
    /*
     if((bufpos + int(1)) >= len)
        ::java::lang::System::arraycopy(buffer, bufpos - len + int(1), ret, 0, len);
    else {
        ::java::lang::System::arraycopy(buffer, bufsize - (len - bufpos - int(1)), ret, 0, len - bufpos - int(1));
        ::java::lang::System::arraycopy(buffer, 0, ret, len - bufpos - int(1), bufpos + int(1));
    }
    */
    return ret;
}

void SimpleCharStream::Done()
{
    buffer=0;
    bufline=0;
    bufcolumn=0;
}

void SimpleCharStream::adjustBeginLineColumn(int newLine, int newCol)
{
    auto start = tokenBegin;
    int len;
    if(bufpos >= tokenBegin) {
        len = bufpos - tokenBegin + inBuf + int(1);
    } else {
        len = bufsize - tokenBegin + bufpos + int(1) + inBuf;
    }
    int i = int(0), j = int(0), k = int(0);
    int nextColDiff = int(0), columnDiff = int(0);
    while (i < len && (*bufline)[j = start % bufsize] == (*bufline)[k = ++start % bufsize]) {
        (*bufline)[j] = newLine;
        nextColDiff = columnDiff + (*bufcolumn)[k] - (*bufcolumn)[j];
        (*bufcolumn)[j] = newCol + columnDiff;
        columnDiff = nextColDiff;
        i++;
    }
    if(i < len) {
        (*bufline)[j] = newLine++;
        (*bufcolumn)[j] = newCol + columnDiff;
        while (i++ < len) {
            if((*bufline)[j = start % bufsize] != (*bufline)[++start % bufsize])
                (*bufline)[j] = newLine++;
            else
                (*bufline)[j] = newLine;
        }
    }
    line = (*bufline)[j];
    column = (*bufcolumn)[j];
}



