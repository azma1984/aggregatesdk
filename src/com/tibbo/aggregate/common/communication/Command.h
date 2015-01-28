#ifndef CommandH
#define CommandH

#include "Cres.h"
#include "communication/SocketDisconnectionException.h"
#include "device/DisconnectionException.h"
#include "util/StringUtils.h"

class Command
{
 private:
    long  timeout;

 public:
    const std::string & header();
    const std::string & footer();

 public:
    const std::string & getContent();
	void add(const std::string & data);
	void send(::java::nio::channels::ByteChannel* byteChannel) ;
	void send(::java::nio::channels::ByteChannel* byteChannel, bool encapsulate) ;
	void send(::java::io::OutputStream* stream);
    const std::string & getId();
    bool isAsync();
    long  getTimeout();
    void setTimeout(long  timeout);

	Command();
    Command(const std::string & data);
    Command(::unsigned charArray* data);
};
#endif