
#ifndef AsyncCommandProcessorH
#define AsyncCommandProcessorH
#include "Cres.h"
//#include "Log.h"
#include "communication/AbstractDeviceController.h"
#include "communication/Command.h"
#include "communication/CommandParser.h"
#include "communication/CommandProcessorStatistics.h"
#include "communication/ReplyMonitor.h"
#include "device/DisconnectionException.h"
#include "util/NamedThreadFactory.h"
#include "util/Util.h"


template <class I,class O,class C> class  AsyncCommandProcessor  //: public ::java::lang::Thread
{
private:
	static const long PENDING_COMMAND_TIMEOUT;// = TimeHelper::DAY_IN_MS;   todo
   // static ::java::util::concurrent::ThreadPoolExecutor* SENDERS_POOL_; todo
	AbstractDeviceControllerPtr controller;
	std::list< ReplyMonitor<O, I> >  sentCommandsQueue;
	CommandProcessorStatisticsPtr statistics;
	 void init();
  //	static ::java::util::concurrent::ThreadPoolExecutor*& SENDERS_POOL();todo
	void sendCommandImplementation(CommandPtr cmd);
	ReplyMonitor<AgObjectPtr,AgObjectPtr>* sendCommand(CommandPtr cmd);
	CommandPtr waitReplyMonitor(ReplyMonitor<AgObjectPtr,AgObjectPtr>* mon);
	void addSentCommand(ReplyMonitor<AgObjectPtr,AgObjectPtr>* mon);
 //	void processError(::org::apache::log4j::Level* priority, const std::string & message, ::java::lang::Exception* ex); todo


public:
	CommandPtr sendSyncCommand(CommandPtr cmd);
	void sendUnrepliedCommand(CommandPtr cmd);
	void resetSentCommandTimeouts();

	void run();

	bool isActive();
	std::list< ReplyMonitor<O, I> >  getActiveCommands();
	void interrupt();
	AbstractDeviceControllerPtr getController();
	CommandProcessorStatisticsPtr getStatistics();
   // static ::java::util::concurrent::ThreadPoolExecutor* getSendersPool(); todo

	AsyncCommandProcessor(AbstractDeviceControllerPtr controller);
};

#endif
