#pragma once

#include <string>

class Tracer
{
public:
    virtual void trace(void* value, const std::string& message) = 0;
};
