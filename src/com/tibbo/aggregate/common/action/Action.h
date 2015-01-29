#ifndef ActionH
#define ActionH

//#include "ActionContext.h"
//#include "ActionResult.h"
#include "util/AgObject.h"
#include "util/pointers.h"

template <class I,class C,class R> class Action: public AgObject
{
  public:
  virtual void init(ActionContextPtr actionContext, I initialParameters) = 0;
  virtual ActionResultPtr destroy() = 0;
  virtual C service(R actionRequest) = 0;

};

#endif
