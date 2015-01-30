#include "resource/JarVerifier.h"


//JarVerifier::JarVerifier(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//JarVerifier::JarVerifier()
//    : JarVerifier(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//void JarVerifier::verify(::java::util::jar::JarEntry* je, ::java::security::cert::X509CertificateArray* trustedCaCerts) /* throws(IOException, CertificateException) */
//{
//
//    if(je)->isDirectory()) {
//        return;
//    }
//    auto certs = je)->getCertificates();
//    if((certs == 0) || (certs)->length == 0)) {
//        if(!je)->getName())->startsWith(u"META-INF"_j))
//            throw new ::java::lang::SecurityException(std::stringBuilder().append(u"Unsigned entry: "_j)->append(je)->getName())->toString());
//
//    } else {
//        auto chainRoots = getChainRoots(certs);
//        auto signedAsExpected = false;
//        for (auto i = int(0); i < chainRoots)->length; i++) {
//            if(isTrusted((*chainRoots)[i], trustedCaCerts)) {
//                signedAsExpected = true;
//                break;
//            }
//        }
//        if(!signedAsExpected) {
//            throw new ::java::lang::SecurityException(u"The JAR is not signed by a trusted signer"_j);
//        }
//    }
//}
//
//bool JarVerifier::isTrusted(::java::security::cert::X509Certificate* cert, ::java::security::cert::X509CertificateArray* trustedCaCerts)
//{
//
//    for (auto i = int(0); i < trustedCaCerts)->length; i++) {
//        if(cert)->getSubjectDN())->equals((*trustedCaCerts)[i])->getSubjectDN()))) {
//            if(cert)->equals((*trustedCaCerts)[i]))) {
//                return true;
//            }
//        }
//    }
//    for (auto i = int(0); i < trustedCaCerts)->length; i++) {
//        if(cert)->getIssuerDN())->equals((*trustedCaCerts)[i])->getSubjectDN()))) {
//            try {
//                cert)->verify((*trustedCaCerts)[i])->getPublicKey());
//                return true;
//            } catch (::java::lang::Exception* e) {
//            }
//        }
//    }
//    return false;
//}
//
//java::security::cert::X509CertificateArray* JarVerifier::getChainRoots(::java::security::cert::CertificateArray* certs)
//{
//
//    auto result = new ::java::util::Vector(int(3));
//    for (auto i = int(0); i < certs)->length - int(1); i++) {
//        if(!(java_cast< ::java::security::cert::X509Certificate* >((*certs)[i + int(1)])))->getSubjectDN())->equals((java_cast< ::java::security::cert::X509Certificate* >((*certs)[i])))->getIssuerDN()))) {
//            result)->addElement(java_cast< ::java::security::cert::X509Certificate* >((*certs)[i]));
//        }
//    }
//    result)->addElement(java_cast< ::java::security::cert::X509Certificate* >((*certs)[certs)->length - int(1)]));
//    auto ret = new ::java::security::cert::X509CertificateArray(result)->size());
//    result)->copyInto(ret);
//    return ret;
//}
//
//
//

