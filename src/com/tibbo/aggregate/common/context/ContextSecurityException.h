#ifndef ContextSecurityExceptionH
#define ContextSecurityExceptionH

#include "context/ContextException.h"


class ContextSecurityException : public ContextException
{
public:
	ContextSecurityException(const std::string & message) : ContextException(message)
	{
	}
	ContextSecurityException(const std::string &message, const std::string &details):ContextException(message, details)
	{

    }
};

#endif
