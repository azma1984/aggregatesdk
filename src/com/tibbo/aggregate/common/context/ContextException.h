#ifndef ContextExceptionH
#define ContextExceptionH

#include "AggreGateException.h"


class ContextException  : public AggreGateException
{
 public:
	ContextException(const std::string & message):AggreGateException(message)
	{

	}

	ContextException(const std::string &message, const std::string &details):AggreGateException(message, details)
	{

	}

};
#endif