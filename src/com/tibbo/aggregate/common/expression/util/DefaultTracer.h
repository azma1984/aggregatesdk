#pragma once

#include "expression/util/Tracer.h"
#include <string>

class DefaultTracer : public Tracer
{
public:
    virtual void trace(void* value, const std::string & message)
    {
        traceToLog(value, message);
    }

    static void traceToLog(void* value, const std::string & message)
    {
        //TODO: need log?
        //Log.EXPRESSIONS.info("Trace: " + value + (message != null ? " (" + message + ")" : ""));
    }
};
