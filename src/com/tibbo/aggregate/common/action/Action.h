#pragma once

//#include "ActionContext.h"
//#include "ActionResult.h"
#include "util/AgObject.h"
#include "util/Pointers.h"
#include "util/Interface.h"

//template <class I,class C,class R> class Action: public AgObject
//{
//  public:
//  virtual void init(ActionContextPtr actionContext, I initialParameters) = 0;
//  virtual ActionResultPtr destroy() = 0;
//  virtual C service(R actionRequest) = 0;

//};


class Action : public Interface
{
public:
    virtual void init(ActionContextPtr actionContext, InitialRequestPtr initialParameters) = 0;
    virtual ActionResultPtr destroy() = 0;
    virtual ActionCommandPtr service(ActionResponsePtr actionRequest) = 0;
};
