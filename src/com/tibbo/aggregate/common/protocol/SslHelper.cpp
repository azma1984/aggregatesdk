// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/SslHelper.java
#include <com/tibbo/aggregate/common/protocol/SslHelper.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/protocol/SslHelper_1.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/security/SecureRandom.h"
#include <javax/net/ssl/SSLContext.h"
#include <javax/net/ssl/SSLSocketFactory.h"
#include <javax/net/ssl/TrustManager.h"
//#include <org/apache/log4j/Logger.h"
#include <ObjectArray.h"
#include <SubArray.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace javax
{
    namespace net
    {
        namespace ssl
        {
typedef ::SubArray< ::javax::net::ssl::TrustManager, voidArray > TrustManagerArray;
        } // ssl
    } // net
} // javax

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::protocol::SslHelper::SslHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::protocol::SslHelper::SslHelper()
    : SslHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

javax::net::ssl::SSLContextPtr& com::tibbo::aggregate::common::protocol::SslHelper::SSL_CONTEXT()
{
    
    return SSL_CONTEXT_;
}
javax::net::ssl::SSLContextPtr com::tibbo::aggregate::common::protocol::SslHelper::SSL_CONTEXT_;

javax::net::ssl::SSLSocketFactory* com::tibbo::aggregate::common::protocol::SslHelper::getTrustedSocketFactory()
{
    
    return SSL_CONTEXT_)->getSocketFactory();
}



java::lang::Class* com::tibbo::aggregate::common::protocol::SslHelper::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.protocol.SslHelper", 45);
    return c;
}

void com::tibbo::aggregate::common::protocol::SslHelper::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            auto trustAllCerts = new ::javax::net::ssl::TrustManagerArray({static_cast< ::javax::net::ssl::TrustManager* >(new SslHelper_1())});
            try {
                SSL_CONTEXT_ = ::javax::net::ssl::SSLContext::getInstance(u"SSL"_j);
                SSL_CONTEXT_)->init_(0, trustAllCerts, new ::java::security::SecureRandom());
            } catch (::java::lang::Exception* ex) {
                Log::CORE())->fatal(u"Error initializing SSL context"_j, ex);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::protocol::SslHelper::getClass0()
{
    return class_();
}

