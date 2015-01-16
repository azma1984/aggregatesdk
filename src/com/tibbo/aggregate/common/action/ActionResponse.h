// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionResponse.java

#ifndef ActionResponseH
#define ActionResponseH

#include "RequestIdentifier.h"
#include "Interface.h"

class ActionResponse : public Interface
{
  virtual bool shouldRemember() = 0;
  virtual RequestIdentifier* getRequestId() = 0;

};

#endif
