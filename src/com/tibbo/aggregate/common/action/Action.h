#ifndef ActionH
#define ActionH

#include "ActionContext.h"
#include "ActionResult.h"

template <class I,class C,class R> class Action
{

  virtual void init(ActionContextPtr actionContext, I initialParameters) = 0;
  virtual ActionResultPtr destroy() = 0;
  virtual C service(R actionRequest) = 0;

};

#endif
