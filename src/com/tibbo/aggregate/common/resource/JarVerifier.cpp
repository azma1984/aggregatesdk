// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/resource/JarVerifier.java
//#include <com/tibbo/aggregate/common/resource/JarVerifier.h"
/*
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/SecurityException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/security/Principal.h"
//#include <java/security/cert/Certificate.h"
//#include <java/security/cert/X509Certificate.h"
//#include <java/security/cert/X509Extension.h"
//#include <java/util/Vector.h"
//#include <java/util/jar/JarEntry.h"
#include <SubArray.h"
#include <ObjectArray.h"
*/
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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::resource::JarVerifier::JarVerifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::resource::JarVerifier::JarVerifier()
    : JarVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::resource::JarVerifier::verify(::java::util::jar::JarEntry* je, ::java::security::cert::X509CertificateArray* trustedCaCerts) /* throws(IOException, CertificateException) */
{
    
    if(je)->isDirectory()) {
        return;
    }
    auto certs = je)->getCertificates();
    if((certs == 0) || (certs)->length == 0)) {
        if(!je)->getName())->startsWith(u"META-INF"_j))
            throw new ::java::lang::SecurityException(std::stringBuilder().append(u"Unsigned entry: "_j)->append(je)->getName())->toString());

    } else {
        auto chainRoots = getChainRoots(certs);
        auto signedAsExpected = false;
        for (auto i = int(0); i < chainRoots)->length; i++) {
            if(isTrusted((*chainRoots)[i], trustedCaCerts)) {
                signedAsExpected = true;
                break;
            }
        }
        if(!signedAsExpected) {
            throw new ::java::lang::SecurityException(u"The JAR is not signed by a trusted signer"_j);
        }
    }
}

bool com::tibbo::aggregate::common::resource::JarVerifier::isTrusted(::java::security::cert::X509Certificate* cert, ::java::security::cert::X509CertificateArray* trustedCaCerts)
{
    
    for (auto i = int(0); i < trustedCaCerts)->length; i++) {
        if(cert)->getSubjectDN())->equals((*trustedCaCerts)[i])->getSubjectDN()))) {
            if(cert)->equals((*trustedCaCerts)[i]))) {
                return true;
            }
        }
    }
    for (auto i = int(0); i < trustedCaCerts)->length; i++) {
        if(cert)->getIssuerDN())->equals((*trustedCaCerts)[i])->getSubjectDN()))) {
            try {
                cert)->verify((*trustedCaCerts)[i])->getPublicKey());
                return true;
            } catch (::java::lang::Exception* e) {
            }
        }
    }
    return false;
}

java::security::cert::X509CertificateArray* com::tibbo::aggregate::common::resource::JarVerifier::getChainRoots(::java::security::cert::CertificateArray* certs)
{
    
    auto result = new ::java::util::Vector(int(3));
    for (auto i = int(0); i < certs)->length - int(1); i++) {
        if(!(java_cast< ::java::security::cert::X509Certificate* >((*certs)[i + int(1)])))->getSubjectDN())->equals((java_cast< ::java::security::cert::X509Certificate* >((*certs)[i])))->getIssuerDN()))) {
            result)->addElement(java_cast< ::java::security::cert::X509Certificate* >((*certs)[i]));
        }
    }
    result)->addElement(java_cast< ::java::security::cert::X509Certificate* >((*certs)[certs)->length - int(1)]));
    auto ret = new ::java::security::cert::X509CertificateArray(result)->size());
    result)->copyInto(ret);
    return ret;
}



java::lang::Class* com::tibbo::aggregate::common::resource::JarVerifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.resource.JarVerifier", 47);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::resource::JarVerifier::getClass0()
{
    return class_();
}

