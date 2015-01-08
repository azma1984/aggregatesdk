// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.java
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"

#include <com/tibbo/aggregate/common/datatable/encoding/FormatCache.h"
#include <com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.h"

com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::ClassicEncodingSettings(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::ClassicEncodingSettings(bool useVisibleSeparators) 
    : ClassicEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(useVisibleSeparators);
}

com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::ClassicEncodingSettings(bool useVisibleSeparators, bool encodeFieldNames) 
    : ClassicEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(useVisibleSeparators,encodeFieldNames);
}

com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::ClassicEncodingSettings(bool useVisibleSeparators, ::com::tibbo::aggregate::common::datatable::TableFormat* format) 
    : ClassicEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(useVisibleSeparators,format);
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::init()
{
    encodeDefaultValues = true;
    encodeFieldNames = false;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::ctor(bool useVisibleSeparators)
{
    super::ctor(true, 0);
    init();
    this->useVisibleSeparators = useVisibleSeparators;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::ctor(bool useVisibleSeparators, bool encodeFieldNames)
{
    ctor(useVisibleSeparators);
    this->encodeFieldNames = encodeFieldNames;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::ctor(bool useVisibleSeparators, ::com::tibbo::aggregate::common::datatable::TableFormat* format)
{
    super::ctor(true, format);
    init();
    this->useVisibleSeparators = useVisibleSeparators;
}

bool com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::isEncodeDefaultValues()
{
    return encodeDefaultValues;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::setEncodeDefaultValues(bool encodeDefaultValues)
{
    this->encodeDefaultValues = encodeDefaultValues;
}

bool com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::isUseVisibleSeparators()
{
    return useVisibleSeparators;
}

com::tibbo::aggregate::common::datatable::encoding::FormatCache* com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::getFormatCache()
{
    return formatCache;
}

com::tibbo::aggregate::common::datatable::encoding::KnownFormatCollector* com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::getKnownFormatCollector()
{
    return knownFormatCollector;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::setUseVisibleSeparators(bool useVisibleSeparators)
{
    this->useVisibleSeparators = useVisibleSeparators;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::setFormatCache(FormatCache* formatCache)
{
    this->formatCache = formatCache;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::setKnownFormatCollector(KnownFormatCollector* knownFormatCollector)
{
    this->knownFormatCollector = knownFormatCollector;
}

bool com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::isEncodeFieldNames()
{
    return encodeFieldNames;
}

void com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::setEncodeFieldNames(bool encodeFieldNames)
{
    this->encodeFieldNames = encodeFieldNames;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.ClassicEncodingSettings", 69);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings::getClass0()
{
    return class_();
}

