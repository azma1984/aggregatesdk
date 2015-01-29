#ifndef AgentContextH
#define AgentContextH

#include "context/AbstractContext.h"
//#include "Cres.h"
#include "context/EventDefinition.h"
#include "context/FunctionDefinition.h"
#include "context/Contexts.h"
#include "protocol/RemoteServer.h"
#include "DataTable/DataTable.h"
#include "DataTable/TableFormat.h"
#include "agent/HistoricalValue.h"
#include <list>

class AgentContext : public AbstractContext//<Context>
{

private:
	RemoteServerPtr server;
	std::string name;
    bool eventConfirmation;
	bool isSynchronized;

   
    
protected:    
    void confirmEvent(int id);


public:
    static const std::string V_DATE;
    static const std::string F_LOGIN;
    static const std::string F_REGISTER;
    static const std::string F_SYNCHRONIZED;
    static const std::string F_CONFIRM_EVENT;
    static const std::string F_GET_HISTORY;
    static const std::string E_EVENT_CONFIRMED;
    static const std::string FIF_LOGIN_CHALLENGE;
    static const std::string FIF_CONFIRM_EVENT_ID;
    static const std::string FOF_LOGIN_OWNER;
    static const std::string FOF_LOGIN_NAME;
    static const std::string FOF_LOGIN_RESPONSE;
    static const std::string FOF_REGISTER_PASSWORD;
    static const std::string FOF_GET_HISTORY_VARIABLE;
    static const std::string FOF_GET_HISTORY_TIMESTAMP;
    static const std::string FOF_GET_HISTORY_VALUE;
    static const std::string EF_EVENT_CONFIRMED_ID;
    
    
    static TableFormatPtr FIFT_LOGIN;
    static TableFormatPtr FOFT_LOGIN;
    static TableFormatPtr FOFT_REGISTER;
    static TableFormatPtr FOFT_GET_HISTORY;
    static TableFormatPtr FIFT_CONFIRM_EVENT;
    static TableFormatPtr EFT_EVENT_CONFIRMED; 

    bool isSynchronized1();
    void setSynchronized(bool isSynchronized);
    RemoteServerPtr getServer();

    std::list<HistoricalValue>  getHistory();

    void setupMyself(); 

    AgentContext(RemoteServerPtr server, const std::string &name, bool eventConfirmation);

};
#endif
