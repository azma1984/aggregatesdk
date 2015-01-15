// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::protocol::AggreGateCommandUtils
    
{

public:
    typedef void super;
    static const int CLIENT_PROTOCOL_VERSION = 2) };
    static OutgoingAggreGateCommand* startMessage();
    static OutgoingAggreGateCommand* operationMessage();
    static OutgoingAggreGateCommand* getVariableOperation(const std::string & context, const std::string & name);
    static OutgoingAggreGateCommand* setVariableOperation(const std::string & context, const std::string & name, const std::string & encodedValue);
    static OutgoingAggreGateCommand* callFunctionOperation(const std::string & context, const std::string & name, const std::string & encodedParameters);
    static OutgoingAggreGateCommand* addEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter);
    static OutgoingAggreGateCommand* removeEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter);

private:
    static const std::string CLIENT_COMMAND_SEPARATOR_;

    // Generated

public:
    AggreGateCommandUtils();
protected:
    AggreGateCommandUtils(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CLIENT_COMMAND_SEPARATOR();

private:
    ::java::lang::Class* getClass0();
};
