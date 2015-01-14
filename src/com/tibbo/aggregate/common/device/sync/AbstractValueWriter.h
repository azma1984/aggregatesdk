// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/AbstractValueWriter.java

#pragma once

#include "device/sync/ValueWriter.h"


class AbstractValueWriter : public ValueWriter
{
private:
    std::string name;

public:
    AbstractValueWriter(const std::string& name)
    {
        this->name = name;
    }

    AbstractValueWriter()
    {
        this->name = "Custom Synchronization Handler";
    }

    std::string toString()
    {
        return name;
    }
};
