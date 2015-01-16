#pragma once

#include "util/Interface.h"

class BindingProcessor : public Interface
{
public:
    virtual bool start() = 0;
    virtual void stop() = 0;
    virtual void setEnabled(bool enabled) = 0;
    //TODO: Callable?
    //virtual void submit(Callable* task);
};
