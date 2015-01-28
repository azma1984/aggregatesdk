// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventEnrichmentRule.java
#include "event/EventEnrichmentRule.h"


const std::string EventEnrichmentRule::FIELD_NAME="name";
const std::string EventEnrichmentRule::FIELD_EXPRESSION = "expression";


EventEnrichmentRule::EventEnrichmentRule()
{
  Init(); 
 // AggreGateBean::AggreGateBean(FORMAT);
}


EventEnrichmentRule::EventEnrichmentRule(DataRecordPtr data) 
{
  Init();
  //AggreGateBean::AggreGateBean(FORMAT,data);
}


std::string EventEnrichmentRule::getName()
{
    return name;
}

void EventEnrichmentRule::setName(const std::string & name)
{
    this->name = name;
}

std::string EventEnrichmentRule::getExpression()
{
    return expression;
}

void EventEnrichmentRule::setExpression(const std::string & expression)
{
    this->expression = expression;
    enrichmentExpression;
}

ExpressionPtr EventEnrichmentRule::getEnrichmentExpression()
//{
//    if(enrichmentExpression == 0) 
//	{
//      enrichmentExpression = (expression != 0 && expression->length() > 0) ? new Expression(expression) : 0;
//    }
    return enrichmentExpression;
}



void EventEnrichmentRule::Init()
{
	
  //FORMAT = new TableFormat();

  //FORMAT->addTableValidator(new validator::TableKeyFieldsValidator());
  //
  //FieldFormat *ff = FieldFormat::create("<"+FIELD_NAME+"><S><F=K><D="+Cres::get()->getString("name")+">");
  //ff->addValidator(ValidatorHelper::NAME_LENGTH_VALIDATOR);
  //ff->addValidator(ValidatorHelper::NAME_SYNTAX_VALIDATOR);
  //FORMAT->addField(ff);
  //FORMAT->addField(FieldFormat::create("<"+FIELD_EXPRESSION + "><S><D="+Cres::get()->getString("expression")+"><E="+StringFieldFormat::EDITOR_EXPRESSION+
  //           ">"));
  //FORMAT->setNamingExpression("print({}, \"{"+FIELD_NAME+"}\", \", \")");

}


