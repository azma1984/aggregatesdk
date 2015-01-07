// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SynchronizationResult.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::device::sync::SynchronizationResult
    
{

public:
    typedef void super;
    static const int CODE_OK) };
    static const int CODE_SUSPENDED = 10) };
    static const int CODE_DISABLED_BY_DEPENDENCY = 20) };
    static const int CODE_DECLINED_BY_DRIVER = 30) };
    static const int CODE_CONNECTION_FAILED = 40) };
    static const int CODE_INTERRUPTED = 50) };
    static const int CODE_DISCONNECTED = 60) };
    static const int CODE_ERROR = 70) };

private:
    static std::map CODES_;
    int code;
    std::string* details;
protected:
    void ctor(int code);
    void ctor(int code, std::string* details);

public:
    bool isSuccessful();
    int getCode();
    std::string* toString();

    // Generated
    SynchronizationResult(int code);
    SynchronizationResult(int code, std::string* details);
protected:
    SynchronizationResult(const ::default_init_tag&);


public:
    
    static void 

private:
    static std::map& CODES();
    ::java::lang::Class* getClass0();
};
