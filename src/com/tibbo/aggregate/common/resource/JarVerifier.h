// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/resource/JarVerifier.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/resource/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/security/cert/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/jar/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

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



class com::tibbo::aggregate::common::resource::JarVerifier
    
{

public:
    typedef void super;
    static void verify(::java::util::jar::JarEntry* je, ::java::security::cert::X509CertificateArray* trustedCaCerts) /* throws(IOException, CertificateException) */;
    static bool isTrusted(::java::security::cert::X509Certificate* cert, ::java::security::cert::X509CertificateArray* trustedCaCerts);
    static ::java::security::cert::X509CertificateArray* getChainRoots(::java::security::cert::CertificateArray* certs);

    // Generated
    JarVerifier();
protected:
    JarVerifier(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
