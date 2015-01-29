#ifndef AgentContextH
#define AgentContextH

#include "AbstractContext.h"
#include "FunctionImplementation.h"

//#include "Cres.h"

#include "context/EventDefinition.h"


#include "context/FunctionDefinition.h"
#include "context/Contexts.h"
#include "RemoteServer.h"
#include "DataTable/DataTable.h"
#include "DataTable/TableFormat.h"
#include "agent/historicalvalue.h"
#include <list>





class FunctionImplementation1 :public FunctionImplementation
{
 
  DataTablePtr execute(ContextPtr con, FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters)
  {
  /*
    std::string challenge = parameters.rec().getString(FIF_LOGIN_CHALLENGE);
      
    std::string response = Md5Utils.hexHash(challenge + server.getPassword());
      
    return new DataRecord(FOFT_LOGIN).addString(server.getUsername()).addString(name).addString(response).wrap();*/
   return DataTablePtr();
  }

};


class FunctionImplementation2 :public FunctionImplementation
{
  
  DataTablePtr execute(ContextPtr con, FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters)
  {
   //return new DataRecord(FOFT_REGISTER).addString(server.getPassword()).wrap();
   return DataTablePtr();
  }


};

class FunctionImplementation3 :public FunctionImplementation
{
 
  DataTablePtr execute(ContextPtr con, FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters)
  {
   //setSynchronized(true);
   return DataTablePtr();
  } 
 

};

class FunctionImplementation4 :public FunctionImplementation
{
  DataTablePtr execute(ContextPtr con, FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters)
  {
  // confirmEvent(parameters.rec().getLong(FIF_CONFIRM_EVENT_ID));
   return DataTablePtr();
  } 

};

class FunctionImplementation5 :public FunctionImplementation
{
  DataTablePtr execute(ContextPtr con, FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters)
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
		 return DataTablePtr();
  } 

};



class AgentContext: public AbstractContext//<Context>
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


    FunctionImplementation1* loginImpl;
    FunctionImplementation2* registerImpl;
    FunctionImplementation3* synchronizedImpl;
    FunctionImplementation4* confirmEventImpl;
    FunctionImplementation5* getHistoryImpl;

    void setupMyself(); 

    AgentContext(RemoteServerPtr server, const std::string &name, bool eventConfirmation);

};
#endif
