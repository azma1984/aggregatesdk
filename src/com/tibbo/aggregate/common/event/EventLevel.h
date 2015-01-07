// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventLevel.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::event::EventLevel
    
{

public:
    typedef void super;

private:
    static std::map LEVELS_;
    static std::map SELECTION_VALUES_;

public:
    static const int NUM_LEVELS = 5) };
    static const int NONE) };
    static const int NOTICE = 1) };
    static const int INFO = 2) };
    static const int WARNING = 3) };
    static const int ERROR = 4) };
    static const int FATAL = 5) };
    static bool isValid(int level);
    static const std::string getName(::java::lang::Integer* level);
    static std::map getSelectionValues();

    // Generated
    EventLevel();
protected:
    EventLevel(const ::default_init_tag&);


public:
    
    static void 

private:
    static std::map& LEVELS();
    static std::map& SELECTION_VALUES();
    ::java::lang::Class* getClass0();
};
