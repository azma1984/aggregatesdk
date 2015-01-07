// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/SslHelper.java

#pragma once

#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
#include <javax/net/ssl/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::protocol::SslHelper
    
{

public:
    typedef void super;

private:
    static ::javax::net::ssl::SSLContext* SSL_CONTEXT_;

public:
    static ::javax::net::ssl::SSLSocketFactory* getTrustedSocketFactory();

    // Generated
    SslHelper();
protected:
    SslHelper(const ::default_init_tag&);


public:
    
    static void 

private:
    static ::javax::net::ssl::SSLContext*& SSL_CONTEXT();
    ::java::lang::Class* getClass0();
    friend class SslHelper_1;
};
