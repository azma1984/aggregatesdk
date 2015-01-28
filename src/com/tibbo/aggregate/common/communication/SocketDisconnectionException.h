
#ifndef SocketDisconnectionExceptionH
#define SocketDisconnectionExceptionH


class SocketDisconnectionException : public std::exception
{

public:
    SocketDisconnectionException();
    SocketDisconnectionException(const std::string & message);
    SocketDisconnectionException(::java::lang::Throwable* cause);
    SocketDisconnectionException(const std::string & message, ::java::lang::Throwable* cause);

};

#endif
