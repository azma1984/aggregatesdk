// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.java
//#include "datatable/encoding/EncodingSettings.h"

#include "datatable/TableFormat.h"

Dateencoding::EncodingSettings::EncodingSettings(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateencoding::EncodingSettings::EncodingSettings(bool encodeFormat, TableFormat* format) 
    : EncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format);
}

void Dateencoding::EncodingSettings::init()
{
    encodeFormat = true;
}

void Dateencoding::EncodingSettings::ctor(bool encodeFormat, TableFormat* format)
{
    super::ctor();
    init();
    this->encodeFormat = encodeFormat;
    this->format = format;
}

DateTableFormat* Dateencoding::EncodingSettings::getFormat()
{
    return format;
}

void Dateencoding::EncodingSettings::setFormat(TableFormat* format)
{
    this->format = format;
}

bool Dateencoding::EncodingSettings::isEncodeFormat()
{
    return encodeFormat;
}

void Dateencoding::EncodingSettings::setEncodeFormat(bool encodeFormat)
{
    this->encodeFormat = encodeFormat;
}



java::lang::Class* Dateencoding::EncodingSettings::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.EncodingSettings", 62);
    return c;
}

java::lang::Class* Dateencoding::EncodingSettings::getClass0()
{
    return class_();
}

