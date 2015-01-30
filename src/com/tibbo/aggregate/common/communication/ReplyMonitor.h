
#ifndef ReplyMonitorH
#define ReplyMonitorH

//#include "Log.h"
#include "communication/Command.h"

template <class C,class R> class  ReplyMonitor
{
 private:
    CommandPtr command;
    CommandPtr reply;
    long startTime;
    long time;
   // ::java::util::concurrent::locks::Lock* lock;    todo
   // ::java::util::concurrent::locks::Condition* commandReceivedCondition; todo
    bool timeoutReset;
	bool terminated;
	void init();

public:
	CommandPtr getCommand();
	CommandPtr getReply();
	void setReply(CommandPtr reply);
	void terminate();
	void reset();
	bool waitReply(long timeout);
	long getTime();
	long getStartTime();
	std::string toString();

	ReplyMonitor(CommandPtr command);

};
#endif
