#ifndef CommandParserH
#define CommandParserH

#include "util/pointers.h"

class CommandParser
{
public:
	virtual void addData(int dataByte)=0;
	virtual CommandPtr readCommand()=0;
	virtual void reset()=0;
	virtual void setListener(CommandParserListenerPtr listener)=0;
};

#endif
