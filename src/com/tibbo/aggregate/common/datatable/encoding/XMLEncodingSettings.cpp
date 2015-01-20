// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/XMLEncodingSettings.java
#include <com/tibbo/aggregate/common/datatable/encoding/XMLEncodingSettings.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/util/ResourceBundle.h"

Dateencoding::XMLEncodingSettings::XMLEncodingSettings(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateencoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat);
}

Dateencoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat, TableFormat* format) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format);
}

Dateencoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format,getFormatFromDefaultValue,fieldFormat);
}

Dateencoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat, ::java::util::ResourceBundle* bundle) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format,getFormatFromDefaultValue,fieldFormat,bundle);
}

void Dateencoding::XMLEncodingSettings::ctor(bool encodeFormat)
{
    ctor(encodeFormat, 0);
}

void Dateencoding::XMLEncodingSettings::ctor(bool encodeFormat, TableFormat* format)
{
    super::ctor(encodeFormat, format);
}

void Dateencoding::XMLEncodingSettings::ctor(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat)
{
    ctor(encodeFormat, format, getFormatFromDefaultValue, fieldFormat, 0);
}

void Dateencoding::XMLEncodingSettings::ctor(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat, ::java::util::ResourceBundle* bundle)
{
    super::ctor(encodeFormat, format);
    this->getFormatFromDefaultValue = getFormatFromDefaultValue;
    this->fieldFormat = fieldFormat;
    this->bundle = bundle;
}

void Dateencoding::XMLEncodingSettings::setFieldFormat(FieldFormat* fieldFormat)
{
    this->fieldFormat = fieldFormat;
}

DateFieldFormat* Dateencoding::XMLEncodingSettings::getFieldFormat()
{
    return fieldFormat;
}

bool Dateencoding::XMLEncodingSettings::isGetFormatFromDefaultValue()
{
    return getFormatFromDefaultValue;
}

void Dateencoding::XMLEncodingSettings::setGetFormatFromDefaultValue(bool getFormatFromDefaultValue)
{
    this->getFormatFromDefaultValue = getFormatFromDefaultValue;
}

java::util::ResourceBundle* Dateencoding::XMLEncodingSettings::getBundle()
{
    return bundle;
}

void Dateencoding::XMLEncodingSettings::setBundle(::java::util::ResourceBundle* bundle)
{
    this->bundle = bundle;
}

bool Dateencoding::XMLEncodingSettings::isAllFields()
{
    return allFields;
}

void Dateencoding::XMLEncodingSettings::setAllFields(bool allFields)
{
    this->allFields = allFields;
}



java::lang::Class* Dateencoding::XMLEncodingSettings::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.XMLEncodingSettings", 65);
    return c;
}

java::lang::Class* Dateencoding::XMLEncodingSettings::getClass0()
{
    return class_();
}

