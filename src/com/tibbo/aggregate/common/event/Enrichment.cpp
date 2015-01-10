#include "event/Enrichment.h"

#include "AggreGateException.h"
#include "Cres.h"

const std::string Enrichment::FIELD_NAME = "name";
const std::string Enrichment::FIELD_VALUE = "value";
const std::string Enrichment::FIELD_DATE = "date";
const std::string Enrichment::FIELD_AUTHOR = "author";

//TODO: зарегестрировать
//DataTableConversion::registerFormatConverter(new DefaultFormatConverter(Enrichment.class, FORMAT));

boost::shared_ptr<TableFormat> Enrichment::FORMAT()
{
    if (!FORMAT_) {
        FORMAT_ = new TableFormat();

        FORMAT->addField( std::string("<").append(FIELD_NAME).append("><S><D=").append(Cres::get().getString("name")).append(">") );
        FORMAT->addField( std::string("<").append(FIELD_VALUE).append("><S><D=").append(Cres.get().getString("value")).append(">") );
        FORMAT->addField( std::string("<").append(FIELD_DATE).append("><D><D=").append(Cres::get().getString("date")).append(">") );
        FORMAT->addField( std::string("<").append(FIELD_AUTHOR).append("><S><F=N><D=").append(Cres.get().getString("author")).append(">") );

        FORMAT->setNamingExpression( std::string("print({}, \"{").append(FIELD_NAME).append("} + '=' + {").append(FIELD_VALUE)
                                     .append("} + ' (' + {").append(FIELD_DATE).append("} + ', ' + {").append(FIELD_AUTHOR).append("} + ')'\", \"; \")") );
    }
}

Enrichment::Enrichment()
{
}

Enrichment::Enrichment(const std::string& name, const std::string& value, boost::shared_ptr<Date> date, const std::string& author)
{
    if (!ContextUtils::isValidContextName(name)) {
        throw AggreGateException(std::string("Illegal enrichment name: ").append(name));
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

boost::shared_ptr<Date> Enrichment::getDate()
{
    return date;
}

void Enrichment::setDate(Date date)
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
