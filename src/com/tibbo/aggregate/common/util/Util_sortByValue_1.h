// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/Util.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/Comparator.h"



class com::tibbo::aggregate::common::util::Util_sortByValue_1
    
    , public ::java::util::Comparator
{

public:
    typedef void super;
    int compare(::java::util::Map_Entry* e1, ::java::util::Map_Entry* e2);

    // Generated
    Util_sortByValue_1();
    
    bool equals(void* arg0);
    int compare(void* arg0, void* arg1);

private:
    ::java::lang::Class* getClass0();
    friend class Util;
};
