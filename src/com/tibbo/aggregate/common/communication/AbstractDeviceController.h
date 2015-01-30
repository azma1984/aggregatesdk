#ifndef AbstractDeviceControllerH
#define AbstractDeviceControllerH

#include "communication/CommandParserListener.h"
#include "communication/AsyncCommandProcessor.h"
#include "communication/Command.h"
#include "communication/CommandParser.h"
#include "communication/CommandProcessorStatistics.h"
#include "device/DisconnectionException.h"

template <class I,class O> class AbstractDeviceController : public CommandParserListener
{
 private:
	long commandTimeout;
	bool resetTimeoutsOnData;
   //	::org::apache::log4j::Logger* logger;  todo
	CommandParserPtr commandParser;

	AsyncCommandProcessorPtr processor;

	bool connecting;

	bool connected;
	bool loggingIn;
	bool loggedIn;

 public:
	bool connectImpl();
	bool loginImpl();
	void disconnectImpl();
	void send(CommandPtr cmd);

	void connect();

	void checkAndConnect();


	void login();
	void disconnect();
	CommandPtr sendCommand(CommandPtr cmd);
    bool isActive();


    void processAsyncCommand(CommandPtr cmd);


    void newDataReceived();


    void resetCommandTimeouts();
    void startCommandProcessor();
    void setCommandParser(CommandParserPtr commandParser);


    bool isConnected();


    void setConnected(bool connected);


    bool isLoggedIn();
    void setLoggedIn(bool loggedIn);


    CommandParserPtr getCommandParser();

    void setResetTimeoutsOnData(bool resetTimeoutWhenDataReceived);
	std::list< ReplyMonitor<O, I> >  getActiveCommands();
    long getCommandTimeout();
  //  ::org::apache::log4j::Logger* getLogger();  //todo
    CommandProcessorStatisticsPtr getStatistics();

    AbstractDeviceController(long commandTimeout/*, ::org::apache::log4j::Logger* logger*/); //todo
};

#endif
