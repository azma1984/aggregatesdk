// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.java
//#include <com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.h"

#include <com/tibbo/aggregate/common/datatable/TableFormat.h"

com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::EncodingSettings(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::EncodingSettings(bool encodeFormat, TableFormat* format) 
    : EncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format);
}

void com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::init()
{
    encodeFormat = true;
}

void com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::ctor(bool encodeFormat, TableFormat* format)
{
    super::ctor();
    init();
    this->encodeFormat = encodeFormat;
    this->format = format;
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::getFormat()
{
    return format;
}

void com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::setFormat(TableFormat* format)
{
    this->format = format;
}

bool com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::isEncodeFormat()
{
    return encodeFormat;
}

void com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::setEncodeFormat(bool encodeFormat)
{
    this->encodeFormat = encodeFormat;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.EncodingSettings", 62);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::encoding::EncodingSettings::getClass0()
{
    return class_();
}

