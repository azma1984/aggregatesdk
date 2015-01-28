#ifndef H
#define H

#include "util/Interface.h"
//#include "util/Callable.h"
class BindingProcessor : public Interface
{
public:
    virtual bool start() = 0;
    virtual void stop() = 0;
    virtual void setEnabled(bool enabled) = 0;
	//todo Callable?
   //	virtual void submit(Callable* task);
};
