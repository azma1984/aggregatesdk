#include "event/Acknowledgement.h"
#include "Cres.h"

const std::string Acknowledgement::FIELD_AUTHOR = "author";
const std::string Acknowledgement::FIELD_TIME = "time";
const std::string Acknowledgement::FIELD_TEXT = "text";


boost::shared_ptr<TableFormat> Acknowledgement::FORMAT()
{
    if (!FORMAT_) {
        FORMAT_ = new TableFormat();
        FORMAT_->addField( std::string("<").append(FIELD_AUTHOR).append("><S><F=N><D=").append(Cres::get().getString("author")).append(">") );
        FORMAT_->addField( std::string("<").append(FIELD_TIME).append("><D><D=").append(Cres::get().getString("time")).append(">") );
        FORMAT_->addField( std::string("<").append(FIELD_TEXT).append("><S><D=").append(Cres::get().getString("text") ).append(">") );

        FORMAT_->setNamingExpression( std::string("print({}, \"{").append(FIELD_TIME).append("} + ': ' + {").append(FIELD_TEXT).append("} + ' (' + {")
                                    .append(FIELD_AUTHOR).append("} + ')'\", \"; \")") );
    }
}

//TODO: зарегестрировать
//DataTableConversion::registerFormatConverter(new DefaultFormatConverter(Acknowledgement.class, Acknowledgement::FORMAT()));


Acknowledgement::Acknowledgement()
{

}

Acknowledgement::Acknowledgement(const std::string& author, boost::shared_ptr<Date> time, const std::string& text)
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

boost::shared_ptr<Date> Acknowledgement::getTime()
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
    return FORMAT;
}


Acknowledgement Acknowledgement::clone()
{
    Acknowledgement* cl = new Acknowledgement();

    cl->author = author;
    cl->time = new Date(time);
    cl->text = text;

    return cl;
//    try
//    {
//        return (Acknowledgement) super.clone();
//    }
//    catch (CloneNotSupportedException ex)
//    {
//        throw new IllegalStateException(ex);
//    }
}

