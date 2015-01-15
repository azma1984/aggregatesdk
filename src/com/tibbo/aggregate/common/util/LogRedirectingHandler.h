// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/LogRedirectingHandler.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/logging/fwd-aggregate_sdk_5.11.00.h"
//#include <org/apache/log4j/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/logging/ConsoleHandler.h"



class com::tibbo::aggregate::common::util::LogRedirectingHandler
    : public ::java::util::logging::ConsoleHandler
{

public:
    typedef ::java::util::logging::ConsoleHandler super;
protected:
    void ctor();

public:
    void publish(::java::util::logging::LogRecord* record);

private:
    const std::string & digRecordMessage(::java::util::logging::LogRecord* record);

public:
    static ::org::apache::log4j::Logger* findCorrespondingLogger(const std::string & name, const std::string & fullName);
    static ::org::apache::log4j::Level* convertLogLevel(::java::util::logging::Level* level) /* throws(LogLevelFormatException) */;

    // Generated
    LogRedirectingHandler();
protected:
    LogRedirectingHandler(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
