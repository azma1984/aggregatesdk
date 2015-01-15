// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/XMLEncodingSettings.java
#include <com/tibbo/aggregate/common/datatable/encoding/XMLEncodingSettings.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/util/ResourceBundle.h"

com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::XMLEncodingSettings(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat);
}

com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat, TableFormat* format) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format);
}

com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format,getFormatFromDefaultValue,fieldFormat);
}

com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::XMLEncodingSettings(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat, ::java::util::ResourceBundle* bundle) 
    : XMLEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(encodeFormat,format,getFormatFromDefaultValue,fieldFormat,bundle);
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::ctor(bool encodeFormat)
{
    ctor(encodeFormat, 0);
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::ctor(bool encodeFormat, TableFormat* format)
{
    super::ctor(encodeFormat, format);
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::ctor(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat)
{
    ctor(encodeFormat, format, getFormatFromDefaultValue, fieldFormat, 0);
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::ctor(bool encodeFormat, TableFormat* format, bool getFormatFromDefaultValue, FieldFormat* fieldFormat, ::java::util::ResourceBundle* bundle)
{
    super::ctor(encodeFormat, format);
    this->getFormatFromDefaultValue = getFormatFromDefaultValue;
    this->fieldFormat = fieldFormat;
    this->bundle = bundle;
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::setFieldFormat(FieldFormat* fieldFormat)
{
    this->fieldFormat = fieldFormat;
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::getFieldFormat()
{
    return fieldFormat;
}

bool com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::isGetFormatFromDefaultValue()
{
    return getFormatFromDefaultValue;
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::setGetFormatFromDefaultValue(bool getFormatFromDefaultValue)
{
    this->getFormatFromDefaultValue = getFormatFromDefaultValue;
}

java::util::ResourceBundle* com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::getBundle()
{
    return bundle;
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::setBundle(::java::util::ResourceBundle* bundle)
{
    this->bundle = bundle;
}

bool com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::isAllFields()
{
    return allFields;
}

void com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::setAllFields(bool allFields)
{
    this->allFields = allFields;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.XMLEncodingSettings", 65);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::encoding::XMLEncodingSettings::getClass0()
{
    return class_();
}

