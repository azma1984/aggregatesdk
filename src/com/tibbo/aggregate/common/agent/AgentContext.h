// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/AgentContext.java

#ifndef AgentContextH
#define AgentContextH

#include "AbstractContext.h"
#include "FunctionImplementation.h"
/*
#include <com/tibbo/aggregate/common/Cres.h"

#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
*/

#include "Contexts.h"
#include "RemoteServer.h"
#include "DataTable.h"
#include "TableFormat.h"
#include <list>







class FunctionImplementation1 :public FunctionImplementation
{
 
  DataTable* execute(Context<FunctionImplementation1>* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters)
  {
  /*
    std::string challenge = parameters.rec().getString(FIF_LOGIN_CHALLENGE);
      
    std::string response = Md5Utils.hexHash(challenge + server.getPassword());
      
    return new DataRecord(FOFT_LOGIN).addString(server.getUsername()).addString(name).addString(response).wrap();*/
  }

};


class FunctionImplementation2 :public FunctionImplementation
{
  
  DataTable* execute(Context<FunctionImplementation2>* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters)
  {
   //return new DataRecord(FOFT_REGISTER).addString(server.getPassword()).wrap(); 
  } 


};

class FunctionImplementation3 :public FunctionImplementation
{
 
  DataTable* execute(Context<FunctionImplementation3>* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters)
  {
   //setSynchronized(true);
   return 0;
  } 
 

};

class FunctionImplementation4 :public FunctionImplementation
{
  DataTable* execute(Context<FunctionImplementation4>* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters)
  {
  // confirmEvent(parameters.rec().getLong(FIF_CONFIRM_EVENT_ID));
   return 0;
  } 

};

class FunctionImplementation5 :public FunctionImplementation
{
  DataTable* execute(Context<FunctionImplementation5>* con, FunctionDefinition* def, CallerController* caller, RequestController* request, DataTable* parameters)
  {
     /*
    DataTable res = new DataTable(def.getOutputFormat());
      
      HistoricalValue hv = getHistory();
      List<HistoricalValue>::const_iterator hist_value; 
      
      
      for (hist_value = hv.begin(); hist_value!= hv.end(); ++hist_value)
      {
        DataRecord rec = res.addRecord();
        rec.addString(hv.getVariable());
        rec.addDate(hv.getTimestamp());
        rec.addDataTable(hv.getValue());
      }
      
      return res; */
  } 

};



class AgentContext: public AbstractContext<AgentContext>
{

private:
    RemoteServer* server;
    std::string name;
    bool eventConfirmation;
    bool isSynchronized;

    void setupMyself();   
    
protected:    
    void confirmEvent(int id);


public:
    static std::string V_DATE;
    static std::string F_LOGIN;
    static std::string F_REGISTER;
    static std::string F_SYNCHRONIZED;
    static std::string F_CONFIRM_EVENT;
    static std::string F_GET_HISTORY;
    static std::string E_EVENT_CONFIRMED;
    static std::string FIF_LOGIN_CHALLENGE;
    static std::string FIF_CONFIRM_EVENT_ID;
    static std::string FOF_LOGIN_OWNER;
    static std::string FOF_LOGIN_NAME;
    static std::string FOF_LOGIN_RESPONSE;
    static std::string FOF_REGISTER_PASSWORD;
    static std::string FOF_GET_HISTORY_VARIABLE;
    static std::string FOF_GET_HISTORY_TIMESTAMP;
    static std::string FOF_GET_HISTORY_VALUE;
    static std::string EF_EVENT_CONFIRMED_ID;
    
    
    static TableFormat* FIFT_LOGIN;
    static TableFormat* FOFT_LOGIN;
    static TableFormat* FOFT_REGISTER;
    static TableFormat* FOFT_GET_HISTORY;
    static TableFormat* FIFT_CONFIRM_EVENT;
    static TableFormat* EFT_EVENT_CONFIRMED; 


    bool isSynchronized1();
    void setSynchronized(bool isSynchronized);
    RemoteServer* getServer();


   // std::list<HistoricalValue>  getHistory();


    FunctionImplementation1* loginImpl;
    FunctionImplementation2* registerImpl;
    FunctionImplementation3* synchronizedImpl;
    FunctionImplementation4* confirmEventImpl;
    FunctionImplementation5* getHistoryImpl;


    AgentContext(RemoteServer* server, const std::string &name, bool eventConfirmation);

};
#endif
