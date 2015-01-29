
#ifndef SocketDisconnectionExceptionH
#define SocketDisconnectionExceptionH


class SocketDisconnectionException : public std::exception
{

public:
    SocketDisconnectionException();
    SocketDisconnectionException(const std::string & message);
   // SocketDisconnectionException(::java::lang::Throwable* cause); //todo
  //  SocketDisconnectionException(const std::string & message, ::java::lang::Throwable* cause);//todo

};

#endif
