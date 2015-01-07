// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/SimpleCommandParser.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/channels/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/AbstractCommandParser.h"



class com::tibbo::aggregate::common::communication::SimpleCommandParser
    : public AbstractCommandParser
{

public:
    typedef AbstractCommandParser super;

private:
    static const int BUFFER_SIZE = 1024) };
    ::java::lang::Byte* startChar;
    int8_t endChar;
    ::java::lang::Byte* endChar2;
    bool needBoth;
    bool started;
    bool waitingEndChar2;
    ::java::nio::channels::ReadableByteChannel* inputChannel;
    bool full;
    ::java::nio::ByteBuffer* buffer;
protected:
    void ctor(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, int8_t endChar);
    void ctor(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, int8_t endChar, ::java::lang::Byte* endChar2, bool needBoth);

public: /* protected */
    Command* createCommandFromBufferContent() /* throws(SyntaxErrorException) */;

private:
    void init_(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, int8_t endChar);

public:
    void clearCommand();
    Command* readCommand() /* throws(IOException, DisconnectionException, SyntaxErrorException) */;

private:
    Command* buildCommand() /* throws(SyntaxErrorException) */;
    bool processBufferContents();
    bool processByte(int8_t cur);

public:
    bool isFull();

    // Generated
    SimpleCommandParser(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, int8_t endChar);
    SimpleCommandParser(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, int8_t endChar, ::java::lang::Byte* endChar2, bool needBoth);
protected:
    SimpleCommandParser(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
