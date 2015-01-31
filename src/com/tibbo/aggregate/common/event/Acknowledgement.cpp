#include "event/Acknowledgement.h"


const std::string Acknowledgement::FIELD_AUTHOR = "author";
const std::string Acknowledgement::FIELD_TIME = "time";
const std::string Acknowledgement::FIELD_TEXT = "text";


Acknowledgement::Acknowledgement()
{
}

Acknowledgement::Acknowledgement(const std::string& author, Date time, const std::string& text)
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

TableFormatPtr Acknowledgement::getFormat()
{
    initFormat();
    return FORMAT;
}

Acknowledgement* Acknowledgement::clone() const
{
    //TODO
    Acknowledgement *ac = new Acknowledgement;
    ac->author = this->author;
    ac->time = this->time;
    ac->text = this->text;

    return ac;
}

TableFormatPtr Acknowledgement::FORMAT()
{
    if (!FORMAT_)
    {
        FORMAT_ = TableFormatPtr(new TableFormat());
        FORMAT_->addField("<"+FIELD_AUTHOR+"><S><F=N><D="+Cres::get()->getString("author")+">");
        FORMAT_->addField("<"+FIELD_TIME+"><D><D="+Cres::get()->getString("time")+">");
        FORMAT_->addField("<"+FIELD_TEXT+"><S><D="+Cres::get()->getString("text")+">");

        FORMAT_->setNamingExpression("print({}, \"{"+FIELD_TIME+"} + ': ' + {"+FIELD_TEXT+"} + ' (' + {"+FIELD_AUTHOR+"} + ')'\", \"; \")");

        DataTableConversion::registerFormatConverter(FormatConverterPtr(new DefaultFormatConverter("Acknowledgement::class_()", FORMAT_)));
    }

    return FORMAT_;
}

