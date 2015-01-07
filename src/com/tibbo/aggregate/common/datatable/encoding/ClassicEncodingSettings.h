// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.h"



class com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings
    : public EncodingSettings
{

public:
    typedef EncodingSettings super;

private:
    bool useVisibleSeparators;
    FormatCache* formatCache;
    KnownFormatCollector* knownFormatCollector;
    bool encodeDefaultValues;
    bool encodeFieldNames;
protected:
    void ctor(bool useVisibleSeparators);
    void ctor(bool useVisibleSeparators, bool encodeFieldNames);
    void ctor(bool useVisibleSeparators, ::com::tibbo::aggregate::common::datatable::TableFormat* format);

public:
    bool isEncodeDefaultValues();
    void setEncodeDefaultValues(bool encodeDefaultValues);
    bool isUseVisibleSeparators();
    FormatCache* getFormatCache();
    KnownFormatCollector* getKnownFormatCollector();
    void setUseVisibleSeparators(bool useVisibleSeparators);
    void setFormatCache(FormatCache* formatCache);
    void setKnownFormatCollector(KnownFormatCollector* knownFormatCollector);
    bool isEncodeFieldNames();
    void setEncodeFieldNames(bool encodeFieldNames);

    // Generated
    ClassicEncodingSettings(bool useVisibleSeparators);
    ClassicEncodingSettings(bool useVisibleSeparators, bool encodeFieldNames);
    ClassicEncodingSettings(bool useVisibleSeparators, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
protected:
    ClassicEncodingSettings(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
