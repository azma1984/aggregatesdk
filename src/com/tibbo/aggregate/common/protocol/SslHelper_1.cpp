// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/SslHelper.java
#include <com/tibbo/aggregate/common/protocol/SslHelper_1.h"

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

com::tibbo::aggregate::common::protocol::SslHelper_1::SslHelper_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    
    ctor();
}

java::security::cert::X509CertificateArray* com::tibbo::aggregate::common::protocol::SslHelper_1::getAcceptedIssuers()
{
    return 0;
}

void com::tibbo::aggregate::common::protocol::SslHelper_1::checkClientTrusted(::java::security::cert::X509CertificateArray* certs, const std::string & authType)
{
}

void com::tibbo::aggregate::common::protocol::SslHelper_1::checkServerTrusted(::java::security::cert::X509CertificateArray* certs, const std::string & authType)
{
}



java::lang::Class* com::tibbo::aggregate::common::protocol::SslHelper_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::SslHelper_1::getClass0()
{
    return class_();
}

