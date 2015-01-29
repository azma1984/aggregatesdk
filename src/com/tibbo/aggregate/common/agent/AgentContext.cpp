#include "agent/AgentContext.h"

const std::string AgentContext::V_DATE= "date";

const std::string AgentContext::F_LOGIN= "login";
const std::string AgentContext::F_REGISTER= "register";
const std::string AgentContext::F_SYNCHRONIZED= "synchronized";
const std::string AgentContext::F_CONFIRM_EVENT= "confirmEvent";
const std::string AgentContext::F_GET_HISTORY= "getHistory";
const std::string AgentContext::E_EVENT_CONFIRMED= "eventConfirmed";
const std::string AgentContext::FIF_LOGIN_CHALLENGE= "challenge";
const std::string AgentContext::FIF_CONFIRM_EVENT_ID= "id";
const std::string AgentContext::FOF_LOGIN_OWNER= "owner";
const std::string AgentContext::FOF_LOGIN_NAME= "name";
const std::string AgentContext::FOF_LOGIN_RESPONSE= "response";
const std::string AgentContext::FOF_REGISTER_PASSWORD= "password";
const std::string AgentContext::FOF_GET_HISTORY_VARIABLE= "variable";
const std::string AgentContext::FOF_GET_HISTORY_TIMESTAMP= "timestamp";
const std::string AgentContext::FOF_GET_HISTORY_VALUE= "value";
const std::string AgentContext::EF_EVENT_CONFIRMED_ID= "id";

//TODO: init her
//TableFormatPtr AgentContext::FIFT_LOGIN;
//TableFormatPtr AgentContext::FOFT_LOGIN;
//TableFormatPtr AgentContext::FOFT_REGISTER;
//TableFormatPtr AgentContext::FOFT_GET_HISTORY;
//TableFormatPtr AgentContext::FIFT_CONFIRM_EVENT;
//TableFormatPtr AgentContext::EFT_EVENT_CONFIRMED;


AgentContext::AgentContext(RemoteServerPtr server, const std::string &name, bool eventConfirmation) 
{   
   FIFT_LOGIN= TableFormatPtr(new TableFormat(1, 1, "<" + FIF_LOGIN_CHALLENGE + "><S>"));
   FOFT_LOGIN= TableFormatPtr(new TableFormat(1, 1));
  
   FOFT_LOGIN->addField("<" + FOF_LOGIN_OWNER + "><S>");
   FOFT_LOGIN->addField("<" + FOF_LOGIN_NAME + "><S>");
   FOFT_LOGIN->addField("<" + FOF_LOGIN_RESPONSE + "><S>");
 

   FOFT_REGISTER= TableFormatPtr(new TableFormat(1, 1,  "<" + FOF_REGISTER_PASSWORD + "><S>"));

   FOFT_GET_HISTORY= TableFormatPtr(new TableFormat());
   FOFT_GET_HISTORY->addField("<" + FOF_GET_HISTORY_VARIABLE + "><S>");
   FOFT_GET_HISTORY->addField("<" + FOF_GET_HISTORY_TIMESTAMP + "><D>");
   FOFT_GET_HISTORY->addField("<" + FOF_GET_HISTORY_VALUE + "><T>");
   
   
   FIFT_CONFIRM_EVENT= TableFormatPtr(new TableFormat(1, 1,  "<" + FIF_CONFIRM_EVENT_ID + "><L>"));

   EFT_EVENT_CONFIRMED= TableFormatPtr(new TableFormat(1, 1, "<" + EF_EVENT_CONFIRMED_ID + "><L>"));
  
  loginImpl = new FunctionImplementation1();
  registerImpl = new FunctionImplementation2();
  synchronizedImpl = new FunctionImplementation3();
  confirmEventImpl = new FunctionImplementation4();
  getHistoryImpl = new FunctionImplementation5();


 // AbstractContext::AbstractContext(Contexts::CTX_ROOT);//todo
  this->server = server;
  this->name = name;
  this->eventConfirmation = eventConfirmation;
}



void AgentContext::setupMyself() 
{
    AbstractContext::setupMyself();

	FunctionDefinitionPtr fd = FunctionDefinitionPtr(new FunctionDefinition(F_LOGIN, FIFT_LOGIN, FOFT_LOGIN, Cres::get()->getString("login")));
   //	fd->setImplementation(FunctionDefinitionPtr(loginImpl));
	addFunctionDefinition(fd);
   //	fd = FunctionDefinitionPtr(new FunctionDefinition(F_REGISTER, TableFormat::EMPTY_FORMAT, FOFT_REGISTER, Cres::get()->getString("register")));  todo
   //	fd->setImplementation(FunctionDefinitionPtr(registerImpl));
	addFunctionDefinition(fd);
  //	fd = FunctionDefinitionPtr(new FunctionDefinition(F_SYNCHRONIZED, TableFormat::EMPTY_FORMAT, TableFormat::EMPTY_FORMAT, Cres::get())->getString("register")));
   //	fd->setImplementation(FunctionDefinitionPtr(synchronizedImpl));
    addFunctionDefinition(fd);
 //	fd = FunctionDefinitionPtr(new FunctionDefinition(F_CONFIRM_EVENT, FIFT_CONFIRM_EVENT, TableFormat::EMPTY_FORMAT)));
   //	fd->setImplementation(FunctionDefinitionPtr(confirmEventImpl));
    addFunctionDefinition(fd);
  //	fd = FunctionDefinitionPtr(new FunctionDefinition(F_GET_HISTORY, TableFormat::EMPTY_FORMAT, FOFT_GET_HISTORY)));
  //	fd->setImplementation(FunctionDefinitionPtr(getHistoryImpl));
    addFunctionDefinition(fd);
    if(eventConfirmation) 
	{
	 EventDefinitionPtr ed = EventDefinitionPtr( new EventDefinition(E_EVENT_CONFIRMED, EFT_EVENT_CONFIRMED));
     addEventDefinition(ed);
    }
  
}

void AgentContext::confirmEvent(int id)
{
    if(getEventDefinition(E_EVENT_CONFIRMED) != 0) 
    {
	  //fireEvent(E_EVENT_CONFIRMED,(AgObjectPtr)id); todo
	}
}

bool AgentContext::isSynchronized1()
{
    return isSynchronized;
}

void AgentContext::setSynchronized(bool isSynchronized)
{
    this->isSynchronized= isSynchronized;
}

RemoteServerPtr AgentContext::getServer()
{
    return server;
}


std::list<HistoricalValue> AgentContext::getHistory()
{
 std::list<HistoricalValue> list;
  return list; //emptyList();
}



