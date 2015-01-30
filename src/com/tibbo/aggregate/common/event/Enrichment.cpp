#include "event/Enrichment.h"

#include "AggreGateException.h"
#include "Cres.h"
#include "context/ContextUtils.h"

const std::string Enrichment::FIELD_NAME = "name";
const std::string Enrichment::FIELD_VALUE = "value";
const std::string Enrichment::FIELD_DATE = "date";
const std::string Enrichment::FIELD_AUTHOR = "author";


void Enrichment::Init()
{
//todo
//  FORMAT = TableFormatPtr(new TableFormat());
//
//  FORMAT->addField("<"+FIELD_NAME+"><S><D="+Cres::get()->getString("name")+">");
//  FORMAT->addField("<"+FIELD_VALUE+"><S><D="+Cres::get()->getString("value")+">");
//  FORMAT->addField("<"+FIELD_DATE+"><D><D="+Cres::get()->getString("date")+">");
//  FORMAT->addField("<"+FIELD_AUTHOR+"><S><F=N><D="+Cres::get()->getString("author")+">");
//  FORMAT->setNamingExpression(+"print({}, \"{"+FIELD_NAME+"} + '=' + {"+FIELD_VALUE+"} + ' (' + {"+FIELD_DATE+"} + ', ' + {"+FIELD_AUTHOR+"} + ')'\", \"; \")");
//
//  DataTableConversion::registerFormatConverter((FormatConverter*)(new DefaultFormatConverter(Enrichment::class_(), FORMAT)));
}



Enrichment::Enrichment()
{
 Init();
}

Enrichment::Enrichment(const std::string& name, const std::string& value, DatePtr date, const std::string& author)
{
   Init();
   
   if (!ContextUtils::isValidContextName(name)) 
	{
      std::cout<<("Illegal enrichment name: "+name);
    }
	
  this->name = name;
  this->value = value;
  this->date = date;
  this->author = author;
}

std::string Enrichment::getName()
{
    return name;
}

void Enrichment::setName(const std::string& name)
{
    this->name = name;
}

std::string Enrichment::getValue()
{
    return value;
}

void Enrichment::setValue(const std::string& value)
{
    this->value = value;
}

DatePtr Enrichment::getDate()
{
    return date;
}

void Enrichment::setDate(DatePtr date)
{
    this->date = date;
}

std::string Enrichment::getAuthor()
{
    return author;
}

void Enrichment::setAuthor(const std::string& author)
{
   this->author = author;
}
