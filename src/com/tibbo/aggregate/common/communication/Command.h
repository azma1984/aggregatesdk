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
	std::string header();
	std::string footer();

    const std::string & getContent();
	void add(const std::string & data);
   //	void send(::java::nio::channels::ByteChannel* byteChannel) ;    todo
   //	void send(::java::nio::channels::ByteChannel* byteChannel, bool encapsulate) ;   todo
   //	void send(::java::io::OutputStream* stream);  todo
	std::string  getId();
    bool isAsync();
    long  getTimeout();
    void setTimeout(long  timeout);

	Command();
    Command(const std::string & data);
    Command(char* data);
};
#endif