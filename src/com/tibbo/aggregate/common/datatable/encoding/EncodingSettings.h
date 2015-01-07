// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::encoding::EncodingSettings
    
{

public:
    typedef void super;

private:
    bool encodeFormat;
    ::com::tibbo::aggregate::common::datatable::TableFormat* format;
protected:
    void ctor(bool encodeFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* format);

public:
    ::com::tibbo::aggregate::common::datatable::TableFormat* getFormat();
    void setFormat(::com::tibbo::aggregate::common::datatable::TableFormat* format);
    bool isEncodeFormat();
    void setEncodeFormat(bool encodeFormat);

    // Generated
    EncodingSettings(bool encodeFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
protected:
    EncodingSettings(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
