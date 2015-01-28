
#ifndef AggreGateCommandParserH
#define AggreGateCommandParserH


#include "communication/SimpleCommandParser.h"
#include "protocol/IncomingAggreGateCommand.h"



class AggreGateCommandParser  : public SimpleCommandParser
{

public:
	IncomingAggreGateCommandPtr createCommandFromBufferContent();


    AggreGateCommandParser(::java::nio::channels::ReadableByteChannel* channel, unsigned char startChar, unsigned char endChar);

};

#endif
