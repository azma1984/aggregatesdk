// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/AbstractCommandParser.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/communication/CommandParser.h"



class com::tibbo::aggregate::common::communication::AbstractCommandParser
    
    , public CommandParser
{

public:
    typedef void super;

private:
    ::java::io::ByteArrayOutputStream* data;
    CommandParserListener* listener;
protected:
    void ctor();
    /*Command* readCommand(); (already declared) */

public:
    void reset();
    ::int8_tArray* getData();
    void addData(int dataByte);
    void setListener(CommandParserListener* listener);

public: /* protected */
    CommandParserListener* getListener();

public:
    std::string* toString();

    // Generated
    AbstractCommandParser();
protected:
    AbstractCommandParser(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
