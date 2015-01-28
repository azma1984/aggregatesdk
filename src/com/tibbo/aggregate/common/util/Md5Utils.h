#ifndef H
#define H


class Md5Utils
{

private:
    static const std::string MD5;

public:
    static const int RESPONSE_LEN = 16;
    static const std::string hexHash(const std::string & source);
    static const std::string hexRepresentation(::unsigned charArray* md5);
    static ::java::security::MessageDigest* getMessageDigest();

	Md5Utils();

};
