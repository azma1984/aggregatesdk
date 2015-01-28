
#ifndef BlockingChannelH
#define BlockingChannelH




class BlockingChannel
{
 private:
    ::java::net::Socket* s;
    std::iostream* is;
    ::java::io::OutputStream* os;
    ::java::nio::channels::ReadableByteChannel* rbc;
    ::java::nio::channels::WritableByteChannel* wbc;
public:
    int read(::java::nio::ByteBuffer* dst) ;
    int write(::java::nio::ByteBuffer* src) ;
    void close() ;
    bool isOpen();
    ::java::net::Socket* getSocket();


    BlockingChannel(::java::net::Socket* socket);

};
#endif
