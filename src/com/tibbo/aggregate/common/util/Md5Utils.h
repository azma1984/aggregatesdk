// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/Md5Utils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::Md5Utils
    
{

public:
    typedef void super;

private:
    static const std::string MD5_;

public:
    static const int RESPONSE_LEN = 16) };
    static const std::string hexHash(const std::string & source);
    static const std::string hexRepresentation(::int8_tArray* md5);
    static ::java::security::MessageDigest* getMessageDigest();

    // Generated
    Md5Utils();
protected:
    Md5Utils(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& MD5();
    ::java::lang::Class* getClass0();
};
