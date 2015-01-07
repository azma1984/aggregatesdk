// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/Aggregation.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::Aggregation
    
{

public:
    typedef void super;
    static const int AVERAGE) };
    static const int MINIMUM = 1) };
    static const int MAXIMUM = 2) };
    static const int SUMMATION = 3) };
    static const int FIRST = 4) };
    static const int LAST = 5) };
    static const int FIRST_DATE = 6) };
    static const int LAST_DATE = 7) };
    static const int TOTAL_COUNT = 8) };
    static const int VALID_COUNT = 9) };
    static const int MINIMUM_DATE = 10) };
    static const int MAXIMUM_DATE = 11) };

private:
    static std::map SELECTION_VALUES_;

public:
    static std::map getSelectionValues();

    // Generated
    Aggregation();
protected:
    Aggregation(const ::default_init_tag&);


public:
    
    static void 

private:
    static std::map& SELECTION_VALUES();
    ::java::lang::Class* getClass0();
};
