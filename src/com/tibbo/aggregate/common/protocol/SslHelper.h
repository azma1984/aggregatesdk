
#ifndef SslHelperH
#define SslHelperH


class SslHelper
{

private:
    static ::javax::net::ssl::SSLContextPtr SSL_CONTEXT_;
	static ::javax::net::ssl::SSLContextPtr& SSL_CONTEXT();
	friend class SslHelper_1;
public:
	static ::javax::net::ssl::SSLSocketFactory* getTrustedSocketFactory();


	SslHelper();

};

#endif
