
#ifndef ContextRuntimeExceptionH
#define ContextRuntimeExceptionH
 #include <stdexcept>

class ContextRuntimeException
{
 public:
	ContextRuntimeException(const std::string &message)
	{

	}
	ContextRuntimeException(const std::exception &cause)
	{

	}

	ContextRuntimeException(const std::string &message, const std::exception &cause)
	{

    }
};

#endif