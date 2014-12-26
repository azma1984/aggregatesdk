// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/Action.java
#ifndef ActionH
#define ActionH

//#include "ActionContext.h"
#include "ActionResult.h"
template <class I,class C,class R> class Action
{
 // virtual void init(ActionContext* actionContext, I* initialParameters) = 0;
  virtual ActionResult* destroy() = 0;
  virtual C* service(R* actionRequest) = 0;
};

#endif
