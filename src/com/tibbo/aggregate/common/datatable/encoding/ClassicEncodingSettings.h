#ifndef ClassicEncodingSettingsH
#define ClassicEncodingSettingsH

#include <boost/shared_ptr.hpp>
#include "EncodingSettings.h"
#include "FormatCache.h"
#include "KnownFormatCollector.h"

class ClassicEncodingSettings : public EncodingSettings
{
private:
    bool useVisibleSeparators;
    boost::shared_ptr<FormatCache> formatCache;
    boost::shared_ptr<KnownFormatCollector> knownFormatCollector;
    bool encodeDefaultValues;
    bool encodeFieldNames;

public:
  //  ClassicEncodingSettings(bool useVisibleSeparators) : EncodingSettings(true, NULL), encodeDefaultValues(true), encodeFieldNames(false)
   // {
   //     this->useVisibleSeparators = useVisibleSeparators;
  //  }

  //  ClassicEncodingSettings(bool useVisibleSeparators, bool encodeFieldNames) : EncodingSettings(true, NULL), encodeDefaultValues(true), encodeFieldNames(false)
  //  {
  //      this->useVisibleSeparators = useVisibleSeparators;
  //      this->encodeFieldNames = encodeFieldNames;
  //  }

    ClassicEncodingSettings(bool useVisibleSeparators, boost::shared_ptr<TableFormat> format) : EncodingSettings(true, format), encodeDefaultValues(true), encodeFieldNames(false)
    {
        this->useVisibleSeparators = useVisibleSeparators;
    }

    bool isEncodeDefaultValues()
    {
        return encodeDefaultValues;
    }

    void setEncodeDefaultValues(bool encodeDefaultValues)
    {
        this->encodeDefaultValues = encodeDefaultValues;
    }

    bool isUseVisibleSeparators()
    {
        return useVisibleSeparators;
    }

    boost::shared_ptr<FormatCache> getFormatCache()
    {
        return formatCache;
    }

    boost::shared_ptr<KnownFormatCollector> getKnownFormatCollector()
    {
        return knownFormatCollector;
    }

    void setUseVisibleSeparators(bool useVisibleSeparators)
    {
        this->useVisibleSeparators = useVisibleSeparators;
    }

    void setFormatCache(boost::shared_ptr<FormatCache> formatCache)
    {
        this->formatCache = formatCache;
    }

    void setKnownFormatCollector(boost::shared_ptr<KnownFormatCollector> knownFormatCollector)
    {
        this->knownFormatCollector = knownFormatCollector;
    }

    bool isEncodeFieldNames()
    {
        return encodeFieldNames;
    }

    void setEncodeFieldNames(bool encodeFieldNames)
    {
        this->encodeFieldNames = encodeFieldNames;
    }
};
#endif
