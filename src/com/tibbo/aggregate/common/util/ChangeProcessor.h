// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ChangeProcessor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::ChangeProcessor
    
{

public:
    typedef void super;
    static const int GAUGE) };
    static const int COUNTER = 1) };
    static const int DERIVE = 2) };
    static const int ABSOLUTE = 3) };
    static const int OUT_OF_RANGE_IGNORE) };
    static const int OUT_OF_RANGE_DISCARD = 1) };
    static const int OUT_OF_RANGE_NORMALIZE = 2) };

private:
    static std::map SELECTION_VALUES_;

public:
    static std::map getSelectionValues();

private:
    static double MAX_32_BIT_;
    static double MAX_64_BIT_;
    int type;
    int outOfRangeValuesHandling;
    ::java::lang::Double* minValue;
    ::java::lang::Double* maxValue;
    long lastUpdateTime;
    ::java::lang::Double* lastValue;
protected:
    void ctor(int type);
    void ctor(int type, int outOfRangeValuesHandling, ::java::lang::Double* minValue, ::java::lang::Double* maxValue);

public:
    ::java::lang::Double* process(long newTime, ::java::lang::Double* newValue);

private:
    ::java::lang::Double* calculateUpdateValue(long oldTime, ::java::lang::Double* oldValue, long newTime, ::java::lang::Double* newValue);

    // Generated

public:
    ChangeProcessor(int type);
    ChangeProcessor(int type, int outOfRangeValuesHandling, ::java::lang::Double* minValue, ::java::lang::Double* maxValue);
protected:
    ChangeProcessor(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();
    static std::map& SELECTION_VALUES();

public:
    static double& MAX_32_BIT();
    static double& MAX_64_BIT();

private:
    ::java::lang::Class* getClass0();
};
