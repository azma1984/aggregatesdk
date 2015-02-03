#pragma once

#include "util/Pointers.h"

class EncodingSettings
{

private:
    bool        encodeFormat;
    TableFormatPtr format;

public:
    EncodingSettings(bool encodeFormat, TableFormatPtr format) : encodeFormat(true)
    {
        this->encodeFormat = encodeFormat;
        this->format = format;
    }

    TableFormatPtr getFormat()
    {
        return format;
    }

    void setFormat(TableFormatPtr format)
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
