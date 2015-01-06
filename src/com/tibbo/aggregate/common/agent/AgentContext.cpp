// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/AgentContext.java
#include "AgentContext.h"





AgentContext::AgentContext(RemoteServer* server, const std::string &name, bool eventConfirmation) 
{   
  
  V_DATE= "date";
  F_LOGIN= "login";
  F_REGISTER= "register";
  F_SYNCHRONIZED= "synchronized";
  F_CONFIRM_EVENT= "confirmEvent";
  F_GET_HISTORY= "getHistory";
  E_EVENT_CONFIRMED= "eventConfirmed";
  FIF_LOGIN_CHALLENGE= "challenge";
  FIF_CONFIRM_EVENT_ID= "id";
  FOF_LOGIN_OWNER= "owner";
  FOF_LOGIN_NAME= "name";
  FOF_LOGIN_RESPONSE= "response";
  FOF_REGISTER_PASSWORD= "password";
  FOF_GET_HISTORY_VARIABLE= "variable";
  FOF_GET_HISTORY_TIMESTAMP= "timestamp";
  FOF_GET_HISTORY_VALUE= "value";
  EF_EVENT_CONFIRMED_ID= "id";
    
  
  /*
   FIFT_LOGIN= new TableFormat(1, 1, "<" + FIF_LOGIN_CHALLENGE + "><S>")
   FOFT_LOGIN= new TableFormat(1, 1);
 
   FOFT_LOGIN->addField("<" + FOF_LOGIN_OWNER + "><S>");
   FOFT_LOGIN->addField("<" + FOF_LOGIN_NAME + "><S>");
   FOFT_LOGIN->addField("<" + FOF_LOGIN_RESPONSE + "><S>");
 
   
   FOFT_REGISTER= new TableFormat(1, 1,  "<" + FOF_REGISTER_PASSWORD + "><S>")

   FOFT_GET_HISTORY= new TableFormat();
   FOFT_GET_HISTORY->addField("<" + FOF_GET_HISTORY_VARIABLE + "><S>");
   FOFT_GET_HISTORY->addField("<" + FOF_GET_HISTORY_TIMESTAMP + "><D>");
   FOFT_GET_HISTORY->addField("<" + FOF_GET_HISTORY_VALUE + "><T>");
   
   
   FIFT_CONFIRM_EVENT= new TableFormat(1, 1,  "<" + FIF_CONFIRM_EVENT_ID + "><L>")

   EFT_EVENT_CONFIRMED= new TableFormat(1, 1, "<" + EF_EVENT_CONFIRMED_ID + "><L>");  
  
  */
  
  
  
  
  
  loginImpl = new FunctionImplementation1();
  registerImpl = new FunctionImplementation2();
  synchronizedImpl = new FunctionImplementation3();
  confirmEventImpl = new FunctionImplementation4();
  getHistoryImpl = new FunctionImplementation5();


 // AbstractContext(Contexts::CTX_ROOT);
  this->server = server;
  this->name = name;
  this->eventConfirmation = eventConfirmation;
}



void AgentContext::setupMyself() 
{
    this->setupMyself();
    /*
    FunctionDefinition *fd = new FunctionDefinition(F_LOGIN, FIFT_LOGIN, FOFT_LOGIN, Cres::get()->getString("login"));
    fd->setImplementation(loginImpl);
    addFunctionDefinition(fd);
    fd = new FunctionDefinition(F_REGISTER_, TableFormat::EMPTY_FORMAT(), FOFT_REGISTER_, Cres::get()->getString("register"));
    fd->setImplementation(registerImpl);
    addFunctionDefinition(fd);
    fd = new FunctionDefinition(F_SYNCHRONIZED_, TableFormat::EMPTY_FORMAT(), TableFormat::EMPTY_FORMAT(), Cres::get())->getString("register"));
    fd->setImplementation(synchronizedImpl);
    addFunctionDefinition(fd);
    fd = new FunctionDefinition(F_CONFIRM_EVENT_, FIFT_CONFIRM_EVENT_, TableFormat::EMPTY_FORMAT());
    fd->setImplementation(confirmEventImpl);
    addFunctionDefinition(fd);
    fd = new FunctionDefinition(F_GET_HISTORY_, TableFormat::EMPTY_FORMAT(), FOFT_GET_HISTORY_);
    fd->setImplementation(getHistoryImpl);
    addFunctionDefinition(fd);
    if(eventConfirmation) {
      EventDefinition *ed = new EventDefinition(E_EVENT_CONFIRMED_, EFT_EVENT_CONFIRMED_);
        addEventDefinition(ed);
    }
    */
}

void AgentContext::confirmEvent(int id)
{
  //  if(getEventDefinition(E_EVENT_CONFIRMED) != 0) 
  //  {
       // fireEvent(E_EVENT_CONFIRMED,id);
  //  }
}

bool AgentContext::isSynchronized1()
{
    return isSynchronized;
}

void AgentContext::setSynchronized(bool isSynchronized)
{
    this->isSynchronized= isSynchronized;
}

RemoteServer* AgentContext::getServer()
{
    return server;
}

/*
std::list<HistoricalValue> AgentContext::getHistory()
{
    return emptyList();
}*/



