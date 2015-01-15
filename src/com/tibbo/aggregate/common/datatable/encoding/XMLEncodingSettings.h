// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/XMLEncodingSettings.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.h"



class com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings
    : public EncodingSettings
{

public:
    typedef EncodingSettings super;

private:
    bool getFormatFromDefaultValue;
    FieldFormat* fieldFormat;
    ::java::util::ResourceBundle* bundle;
    bool allFields;
protected:
    void ctor(bool encodeFormat);
    void ctor(bool encodeFormat, TableFormat* format);
    void ctor(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat);
    void ctor(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat, ::java::util::ResourceBundle* bundle);

public:
    void setFieldFormat(FieldFormat* fieldFormat);
    FieldFormat* getFieldFormat();
    bool isGetFormatFromDefaultValue();
    void setGetFormatFromDefaultValue(bool getFormatFromDefaultValue);
    ::java::util::ResourceBundle* getBundle();
    void setBundle(::java::util::ResourceBundle* bundle);
    bool isAllFields();
    void setAllFields(bool allFields);

    // Generated
    XMLEncodingSettings(bool encodeFormat);
    XMLEncodingSettings(bool encodeFormat, TableFormat* format);
    XMLEncodingSettings(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat);
    XMLEncodingSettings(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat, ::java::util::ResourceBundle* bundle);
protected:
    XMLEncodingSettings(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
