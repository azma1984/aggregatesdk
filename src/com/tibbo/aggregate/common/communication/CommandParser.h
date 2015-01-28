#ifndef CommandParserH
#define CommandParserH


class CommandParser
{
    void addData(int dataByte);
	CommandPtr readCommand();
	void reset();
    void setListener(CommandParserListenerPtr listener);
};

#endif
