// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/SocketDisconnectionException.java

#pragma once

#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/IOException.h"



class com::tibbo::aggregate::common::communication::SocketDisconnectionException
    : public std::exception
{

public:
    typedef std::exception super;
protected:
    void ctor();
    void ctor(const std::string & message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(const std::string & message, ::java::lang::Throwable* cause);

    // Generated

public:
    SocketDisconnectionException();
    SocketDisconnectionException(const std::string & message);
    SocketDisconnectionException(::java::lang::Throwable* cause);
    SocketDisconnectionException(const std::string & message, ::java::lang::Throwable* cause);
protected:
    SocketDisconnectionException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
