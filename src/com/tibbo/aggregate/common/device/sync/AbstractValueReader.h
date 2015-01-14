#pragma once

#include "device/sync/ValueReader.h"


class AbstractValueReader : public ValueReader
{
private:
    std::string name;

public:
    AbstractValueReader()
    {
        name = "Custom Synchronization Handler";
    }

    AbstractValueReader(std::string* name)
    {
        this->name = name;
    }

    std::string toString()
    {
        return name;
    }
};
