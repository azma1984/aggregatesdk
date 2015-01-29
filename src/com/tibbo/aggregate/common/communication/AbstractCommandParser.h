
#ifndef AbstractCommandParserH
#define AbstractCommandParserH

#include "communication/CommandParser.h"
#include "communication/CommandParserListener.h"


class AbstractCommandParser: public CommandParser
{

private:
   // ::java::io::ByteArrayOutputStream* data;  todo
    CommandParserListenerPtr listener;

	CommandPtr readCommand();
	void init();
public:
	void reset();
	char* getData();
	void addData(int dataByte);
	void setListener(CommandParserListenerPtr listener);

	CommandParserListenerPtr getListener();

	const std::string & toString();

	AbstractCommandParser();

};
#endif
