
#ifndef AggreGateDeviceControllerH
#define AggreGateDeviceControllerH


#include "util/RemoteConnector.h"

class AggreGateDeviceController : public RemoteConnector
{
public:
    AggreGateDevicePtr getDevice();
	void connect() ;
	void disconnect();
    void login() ;
	void start();
	bool isActive();
	CommandProcessorStatisticsPtr getStatistics();
	CommandPtr sendCommand(CommandPtr cmd);
	std::list  getActiveCommands();


};

#endif
