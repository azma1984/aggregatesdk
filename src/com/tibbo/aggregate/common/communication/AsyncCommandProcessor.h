
#ifndef AsyncCommandProcessorH
#define AsyncCommandProcessorH
#include "Cres.h"
#include "Log.h"
#include "communication/AbstractDeviceController.h"
#include "communication/AsyncCommandProcessor_sendCommand_1.h"
#include "communication/Command.h"
#include "communication/CommandParser.h"
#include "communication/CommandProcessorStatistics.h"
#include "communication/ReplyMonitor.h"
#include "device/DisconnectionException.h"
#include "util/NamedThreadFactory.h"
#include "util/Util.h"


class AsyncCommandProcessor  //: public ::java::lang::Thread
{
private:
    static const long PENDING_COMMAND_TIMEOUT { long(86400000LL) };
   // static ::java::util::concurrent::ThreadPoolExecutor* SENDERS_POOL_; todo
    AbstractDeviceController* controller;
    std::list  sentCommandsQueue;
	CommandProcessorStatisticsPtr statistics;
	  void init();
  //	static ::java::util::concurrent::ThreadPoolExecutor*& SENDERS_POOL();todo
	void sendCommandImplementation(CommandPtr cmd);
	ReplyMonitor* sendCommand(CommandPtr cmd);
	CommandPtr waitReplyMonitor(ReplyMonitor* mon);
	void addSentCommand(ReplyMonitor* mon);
 //	void processError(::org::apache::log4j::Level* priority, const std::string & message, ::java::lang::Exception* ex); todo


public:
	CommandPtr sendSyncCommand(CommandPtr cmd);
	void sendUnrepliedCommand(CommandPtr cmd);
	void resetSentCommandTimeouts();

	void run();

	bool isActive();
    std::list  getActiveCommands();
    void interrupt();
    AbstractDeviceController* getController();
    CommandProcessorStatisticsPtr getStatistics();
   // static ::java::util::concurrent::ThreadPoolExecutor* getSendersPool(); todo

	AsyncCommandProcessor(AbstractDeviceController* controller);
};

#endif
