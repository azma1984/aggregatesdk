// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/TransferEncodingHelper.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class Dateencoding::TransferEncodingHelper
    
{

public:
    typedef void super;

private:
    static const char16_t ESCAPE_CHAR { u'%' };
    static std::map DIRECT_;
    static std::map REVERSE_;

public:
    static const std::string encode(const std::string & s);
    static const std::string decode(const std::string & s);

    // Generated
    TransferEncodingHelper();
protected:
    TransferEncodingHelper(const ::default_init_tag&);


public:
    
    static void 

private:
    static std::map& DIRECT();
    static std::map& REVERSE();
    ::java::lang::Class* getClass0();
};
