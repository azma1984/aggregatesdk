#ifndef SimpleCommandParserH
#define SimpleCommandParserH

#include "communication/AbstractCommandParser.h"
#include "Cres.h"
//#include "Log.h"
#include "communication/Command.h"
#include "communication/CommandParserListener.h"
#include "device/DisconnectionException.h"


class SimpleCommandParser : public AbstractCommandParser
{
private:
	static const int BUFFER_SIZE = 1024;
   // ::java::lang::Byte* startChar;    todo
    unsigned char endChar;
   // ::java::lang::Byte* endChar2;  todo
    bool needBoth;
    bool started;
    bool waitingEndChar2;
  //  ::java::nio::channels::ReadableByteChannel* inputChannel; todo
    bool full;
    std::vector<char> buffer;//	::java::nio::ByteBuffer* buffer;
    void init();
  	CommandPtr buildCommand();
	bool processBufferContents();
	bool processByte(unsigned char cur);
   //	void init(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, unsigned char endChar); todo

public:
	CommandPtr createCommandFromBufferContent();

	void clearCommand();
	CommandPtr readCommand();

	bool isFull();

   //	SimpleCommandParser(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, unsigned char endChar); todo
   // SimpleCommandParser(::java::nio::channels::ReadableByteChannel* channel, ::java::lang::Byte* startChar, unsigned char endChar, ::java::lang::Byte* endChar2, bool needBoth); todo


};

#endif
