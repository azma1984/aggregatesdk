#include "protocol/SslHelper.h"



//SslHelper::SslHelper(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//SslHelper::SslHelper()
//    : SslHelper(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//javax::net::ssl::SSLContextPtr& SslHelper::SSL_CONTEXT()
//{
//
//    return SSL_CONTEXT_;
//}
//javax::net::ssl::SSLContextPtr SslHelper::SSL_CONTEXT_;
//
//javax::net::ssl::SSLSocketFactory* SslHelper::getTrustedSocketFactory()
//{
//
//    return SSL_CONTEXT_)->getSocketFactory();
//}
//
//
//
//void SslHelper::clinit()
//{
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        {
//            auto trustAllCerts = new ::javax::net::ssl::TrustManagerArray({static_cast< ::javax::net::ssl::TrustManager* >(new SslHelper_1())});
//            try {
//                SSL_CONTEXT_ = ::javax::net::ssl::SSLContext::getInstance(u"SSL"_j);
//                SSL_CONTEXT_)->init_(0, trustAllCerts, new ::java::security::SecureRandom());
//            } catch (::java::lang::Exception* ex) {
//                Log::CORE())->fatal(u"Error initializing SSL context"_j, ex);
//            }
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

