// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateCommandParser.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/channels/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/SimpleCommandParser.h"
#include <com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h"



class com::tibbo::aggregate::common::protocol::AggreGateCommandParser
    : public ::com::tibbo::aggregate::common::communication::SimpleCommandParser
{

public:
    typedef ::com::tibbo::aggregate::common::communication::SimpleCommandParser super;
protected:
    void ctor(::java::nio::channels::ReadableByteChannel* channel, int8_t startChar, int8_t endChar);

public: /* protected */
    IncomingAggreGateCommand* createCommandFromBufferContent() /* throws(SyntaxErrorException) */;

    // Generated

public:
    AggreGateCommandParser(::java::nio::channels::ReadableByteChannel* channel, int8_t startChar, int8_t endChar);
protected:
    AggreGateCommandParser(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
