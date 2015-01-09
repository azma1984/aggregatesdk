#include "event/Acknowledgement.h"

const std::string Acknowledgement::FIELD_AUTHOR = "author";
const std::string Acknowledgement::FIELD_TIME = "time";
const std::string Acknowledgement::FIELD_TEXT = "text";
boost::shared_ptr<TableFormat> Acknowledgement::FORMAT = new TableFormat();

//TODO:
/*
FORMAT.addField("<" + FIELD_AUTHOR + "><S><F=N><D=" + Cres.get().getString("author") + ">");
FORMAT.addField("<" + FIELD_TIME + "><D><D=" + Cres.get().getString("time") + ">");
FORMAT.addField("<" + FIELD_TEXT + "><S><D=" + Cres.get().getString("text") + ">");

FORMAT.setNamingExpression("print({}, \"{" + FIELD_TIME + "} + ': ' + {" + FIELD_TEXT + "} + ' (' + {" + FIELD_AUTHOR + "} + ')'\", \"; \")");
*/

//TODO:
//DataTableConversion::registerFormatConverter(new DefaultFormatConverter(Acknowledgement.class, FORMAT));


Acknowledgement::Acknowledgement()
{

}

Acknowledgement::Acknowledgement(String author, Date time, String text)
{
    this->author = author;
    this->time = time;
    this->text = text;
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

void Acknowledgement::setAuthor(String author)
{
    this->author = author;
}

void Acknowledgement::setText(String text)
{
    this->text = text;
}

void Acknowledgement::setTime(Date time)
{
    this->time = time;
}

boost::shared_ptr<TableFormat> Acknowledgement::getFormat()
{
    return FORMAT;
}


Acknowledgement Acknowledgement::clone()
{
    try
    {
      return (Acknowledgement) super.clone();
    }
    catch (CloneNotSupportedException ex)
    {
      throw new IllegalStateException(ex);
    }
}

