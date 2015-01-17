#pragma once

#include "expression/util/Tracer.h"
#include <boost/shared_ptr.hpp>

class TracerManager
{
private:
    static boost::shared_ptr<Tracer> DEFAULT_TRACER_;

public:
    static boost::shared_ptr<Tracer> getDefaultTracer()
    {
        return DEFAULT_TRACER_;
    }

    static void setDefaultTracer(boost::shared_ptr<Tracer> tracer)
    {
        if (tracer == NULL) {
            return;
            //TODO: exception
            //throw new NullPointerException("Default tracer cannot be NULL");
        }

        DEFAULT_TRACER_ = tracer;
    }
};
