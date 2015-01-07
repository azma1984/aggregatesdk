// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/AbstractDeviceController.java

#pragma once

#include <CommandParserListener.h>



template <class I,class O> class AbstractDeviceController:public CommandParserListener
{


private: /*
	long commandTimeout;
	bool resetTimeoutsOnData;
	::org::apache::log4j::Logger* logger;
	CommandParser* commandParser; */

	AsyncCommandProcessor* processor;

	bool connecting;

	bool connected;
 /*	bool loggingIn;
	bool loggedIn;
protected:
    void ctor(long commandTimeout, ::org::apache::log4j::Logger* logger);

public:
	bool connectImpl();
	bool loginImpl();
	void disconnectImpl();
	void send(Command* cmd);
	   */
public:
	void connect();
	   /*
public:
	void checkAndConnect();

public:
	void login();
	void disconnect();
	Command* sendCommand(Command* cmd);
    bool isActive();

public:
    void processAsyncCommand(Command* cmd);

public:
    void newDataReceived();

public:
    void resetCommandTimeouts();
    void startCommandProcessor();
    void setCommandParser(CommandParser* commandParser);

public:
    bool isConnected();

public:
    void setConnected(bool connected);

public:
    bool isLoggedIn();
    void setLoggedIn(bool loggedIn);

public:
    CommandParser* getCommandParser();

public:
    void setResetTimeoutsOnData(bool resetTimeoutWhenDataReceived);
    std::list  getActiveCommands();
    long getCommandTimeout();
    ::org::apache::log4j::Logger* getLogger();
    CommandProcessorStatistics* getStatistics();

    // Generated
    AbstractDeviceController(long commandTimeout, ::org::apache::log4j::Logger* logger);
protected:
    AbstractDeviceController(const ::default_init_tag&);

*/
};
