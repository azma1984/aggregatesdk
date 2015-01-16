#include "event/Acknowledgement.h"
#include "Cres.h"

const std::string Acknowledgement::FIELD_AUTHOR = "author";
const std::string Acknowledgement::FIELD_TIME = "time";
const std::string Acknowledgement::FIELD_TEXT = "text";
boost::shared_ptr<TableFormat> Acknowledgement::FORMAT;

Acknowledgement::Acknowledgement()
{
  Init();
}

Acknowledgement::Acknowledgement(const std::string& author, std::time_t time, const std::string& text)
{
  Init();
  this->author = author;
  this->time = time;
  this->text = text;
}

void Acknowledgement::Init()
{
  FORMAT = boost::shared_ptr<TableFormat>(new TableFormat());
  FORMAT->addField("<"+FIELD_AUTHOR+"><S><F=N><D="+Cres::get()->getString("author")+">");
  FORMAT->addField("<"+FIELD_TIME+"><D><D="+Cres::get()->getString("time")+">");
  FORMAT->addField("<"+FIELD_TEXT+"><S><D="+Cres::get()->getString("text")+">");

  FORMAT->setNamingExpression("print({}, \"{"+FIELD_TIME+"} + ': ' + {"+FIELD_TEXT+"} + ' (' + {"+FIELD_AUTHOR+"} + ')'\", \"; \")");

  DataTableConversion::registerFormatConverter((FormatConverter*)(new DefaultFormatConverter(Acknowledgement::class_(), FORMAT)));

}

std::string Acknowledgement::getAuthor()
{
    return author;
}

std::string Acknowledgement::getText()
{
    return text;
}

std::time_t Acknowledgement::getTime()
{
    return time;
}

void Acknowledgement::setAuthor(const std::string& author)
{
    this->author = author;
}

void Acknowledgement::setText(const std::string& text)
{
    this->text = text;
}

void Acknowledgement::setTime(std::time_t time)
{
    this->time = time;
}

boost::shared_ptr<TableFormat> Acknowledgement::getFormat()
{
    return FORMAT;
}


Acknowledgement *Acknowledgement::clone()
{
  try
   {
    return new Acknowledgement(*this);
   }
  catch (...)
    {
     std::cout << "Clone 'Acknowledgement' Eception!";
    }
}

//Constructor copy
Acknowledgement::Acknowledgement(Acknowledgement &al)
{
  this->author = al.author;
  this->time = al.time;
  this->text = al.text;
}