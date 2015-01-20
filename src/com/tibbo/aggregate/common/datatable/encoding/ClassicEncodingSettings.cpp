// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.java
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"

#include <com/tibbo/aggregate/common/datatable/encoding/FormatCache.h"
#include <com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.h"

Dateencoding::ClassicEncodingSettings::ClassicEncodingSettings(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateencoding::ClassicEncodingSettings::ClassicEncodingSettings(bool useVisibleSeparators) 
    : ClassicEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(useVisibleSeparators);
}

Dateencoding::ClassicEncodingSettings::ClassicEncodingSettings(bool useVisibleSeparators, bool encodeFieldNames) 
    : ClassicEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(useVisibleSeparators,encodeFieldNames);
}

Dateencoding::ClassicEncodingSettings::ClassicEncodingSettings(bool useVisibleSeparators, TableFormat* format) 
    : ClassicEncodingSettings(*static_cast< ::default_init_tag* >(0))
{
    ctor(useVisibleSeparators,format);
}

void Dateencoding::ClassicEncodingSettings::init()
{
    encodeDefaultValues = true;
    encodeFieldNames = false;
}

void Dateencoding::ClassicEncodingSettings::ctor(bool useVisibleSeparators)
{
    super::ctor(true, 0);
    init();
    this->useVisibleSeparators = useVisibleSeparators;
}

void Dateencoding::ClassicEncodingSettings::ctor(bool useVisibleSeparators, bool encodeFieldNames)
{
    ctor(useVisibleSeparators);
    this->encodeFieldNames = encodeFieldNames;
}

void Dateencoding::ClassicEncodingSettings::ctor(bool useVisibleSeparators, TableFormat* format)
{
    super::ctor(true, format);
    init();
    this->useVisibleSeparators = useVisibleSeparators;
}

bool Dateencoding::ClassicEncodingSettings::isEncodeDefaultValues()
{
    return encodeDefaultValues;
}

void Dateencoding::ClassicEncodingSettings::setEncodeDefaultValues(bool encodeDefaultValues)
{
    this->encodeDefaultValues = encodeDefaultValues;
}

bool Dateencoding::ClassicEncodingSettings::isUseVisibleSeparators()
{
    return useVisibleSeparators;
}

Dateencoding::FormatCache* Dateencoding::ClassicEncodingSettings::getFormatCache()
{
    return formatCache;
}

Dateencoding::KnownFormatCollector* Dateencoding::ClassicEncodingSettings::getKnownFormatCollector()
{
    return knownFormatCollector;
}

void Dateencoding::ClassicEncodingSettings::setUseVisibleSeparators(bool useVisibleSeparators)
{
    this->useVisibleSeparators = useVisibleSeparators;
}

void Dateencoding::ClassicEncodingSettings::setFormatCache(FormatCache* formatCache)
{
    this->formatCache = formatCache;
}

void Dateencoding::ClassicEncodingSettings::setKnownFormatCollector(KnownFormatCollector* knownFormatCollector)
{
    this->knownFormatCollector = knownFormatCollector;
}

bool Dateencoding::ClassicEncodingSettings::isEncodeFieldNames()
{
    return encodeFieldNames;
}

void Dateencoding::ClassicEncodingSettings::setEncodeFieldNames(bool encodeFieldNames)
{
    this->encodeFieldNames = encodeFieldNames;
}



java::lang::Class* Dateencoding::ClassicEncodingSettings::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.ClassicEncodingSettings", 69);
    return c;
}

java::lang::Class* Dateencoding::ClassicEncodingSettings::getClass0()
{
    return class_();
}

