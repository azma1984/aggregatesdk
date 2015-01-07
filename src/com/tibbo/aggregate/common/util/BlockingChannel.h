// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/BlockingChannel.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/net/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/channels/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/nio/channels/ByteChannel.h"



class com::tibbo::aggregate::common::util::BlockingChannel
    
    , public ::java::nio::channels::ByteChannel
{

public:
    typedef void super;

private:
    ::java::net::Socket* s;
    std::iostream* is;
    ::java::io::OutputStream* os;
    ::java::nio::channels::ReadableByteChannel* rbc;
    ::java::nio::channels::WritableByteChannel* wbc;
protected:
    void ctor(::java::net::Socket* socket) /* throws(IOException) */;

public:
    int read(::java::nio::ByteBuffer* dst) /* throws(IOException) */;
    int write(::java::nio::ByteBuffer* src) /* throws(IOException) */;
    void close() /* throws(IOException) */;
    bool isOpen();
    ::java::net::Socket* getSocket();

    // Generated
    BlockingChannel(::java::net::Socket* socket);
protected:
    BlockingChannel(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
