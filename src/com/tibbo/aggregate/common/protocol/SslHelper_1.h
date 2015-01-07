// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/SslHelper.java

#pragma once

#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/security/cert/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <javax/net/ssl/X509TrustManager.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace security
    {
        namespace cert
        {
typedef ::SubArray< ::java::security::cert::Certificate, voidArray, ::java::io::SerializableArray > CertificateArray;
typedef ::SubArray< ::java::security::cert::X509Extension, voidArray > X509ExtensionArray;
typedef ::SubArray< ::java::security::cert::X509Certificate, CertificateArray, X509ExtensionArray > X509CertificateArray;
        } // cert
    } // security
} // java



class com::tibbo::aggregate::common::protocol::SslHelper_1
    
    , public ::javax::net::ssl::X509TrustManager
{

public:
    typedef void super;
    ::java::security::cert::X509CertificateArray* getAcceptedIssuers();
    void checkClientTrusted(::java::security::cert::X509CertificateArray* certs, std::string* authType);
    void checkServerTrusted(::java::security::cert::X509CertificateArray* certs, std::string* authType);

    // Generated
    SslHelper_1();
    

private:
    ::java::lang::Class* getClass0();
    friend class SslHelper;
};
