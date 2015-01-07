#pragma once

#include <boost/shared_ptr.hpp>
#include "../TableFormat.h"

class EncodingSettings
{
private:
    bool        encodeFormat;
    boost::shared_ptr<TableFormat> format;

public:
    EncodingSettings(bool encodeFormat, boost::shared_ptr<TableFormat> format) : encodeFormat(true)
    {
        encodeFormat = encodeFormat;
        format = format;
    }

    boost::shared_ptr<TableFormat> getFormat()
    {
        return format;
    }

    void setFormat(boost::shared_ptr<TableFormat> format)
    {
        this->format = format;
    }

    bool isEncodeFormat()
    {
        return encodeFormat;
    }

    void setEncodeFormat(bool encodeFormat)
    {
        this->encodeFormat = encodeFormat;
    }

};
