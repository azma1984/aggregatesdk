// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/CommandParser.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::communication::CommandParser
    
{
    void addData(int dataByte);
    Command* readCommand() /* throws(IOException, DisconnectionException, SyntaxErrorException) */;
    void reset();
    void setListener(CommandParserListener* listener);

    // Generated
    
};
