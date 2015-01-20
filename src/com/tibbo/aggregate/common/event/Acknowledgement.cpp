#include "event/Acknowledgement.h"
#include "Cres.h"
#include "datatable/TableFormat.h"

const std::string Acknowledgement::FIELD_AUTHOR = "author";
const std::string Acknowledgement::FIELD_TIME = "time";
const std::string Acknowledgement::FIELD_TEXT = "text";
boost::shared_ptr<TableFormat> Acknowledgement::FORMAT;

Acknowledgement::Acknowledgement()
{
  initFormat();
}

Acknowledgement::Acknowledgement(const std::string& author, Date time, const std::string& text)
{
  initFormat();
  this->author = author;
  this->time = time;
  this->text = text;
}

void Acknowledgement::initFormat()
{
    if (FORMAT.get() == NULL)
    {
        FORMAT = boost::shared_ptr<TableFormat>(new TableFormat());
        FORMAT->addField("<"+FIELD_AUTHOR+"><S><F=N><D="+Cres::get()->getString("author")+">");
        FORMAT->addField("<"+FIELD_TIME+"><D><D="+Cres::get()->getString("time")+">");
        FORMAT->addField("<"+FIELD_TEXT+"><S><D="+Cres::get()->getString("text")+">");

        FORMAT->setNamingExpression("print({}, \"{"+FIELD_TIME+"} + ': ' + {"+FIELD_TEXT+"} + ' (' + {"+FIELD_AUTHOR+"} + ')'\", \"; \")");
    }

  //todo
  //DataTableConversion::registerFormatConverter((FormatConverter*)(new DefaultFormatConverter(Acknowledgement::class_(), FORMAT)));

}

std::string Acknowledgement::getAuthor()
{
    return author;
}

std::string Acknowledgement::getText()
{
    return text;
}

Date Acknowledgement::getTime()
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

void Acknowledgement::setTime(Date time)
{
    this->time = time;
}

boost::shared_ptr<TableFormat> Acknowledgement::getFormat()
{
    initFormat();
    return FORMAT;
}


Acknowledgement *Acknowledgement::clone() const
{
    Acknowledgement *ac = new Acknowledgement;
    ac->author = this->author;
    ac->time = this->time;
    ac->text = this->text;

    return ac;
}
