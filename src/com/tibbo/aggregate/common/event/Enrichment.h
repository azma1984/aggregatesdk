#ifndef _Enrichment_H_
#define _Enrichment_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Date.h"
#include "datatable/TableFormat.h"

class Enrichment
{

private:
    static const std::string FIELD_NAME_;
    static const std::string FIELD_VALUE_;
    static const std::string FIELD_DATE_;
    static const std::string FIELD_AUTHOR_;
    static boost::shared_ptr<TableFormat> FORMAT_;
    std::string name;
    std::string value;
    boost::shared_ptr<Date> date;
    std::string author;

protected:
    void ctor();
    void ctor(std::string* name, std::string* value, ::java::util::Date* date, std::string* author);

public:
    std::string getName();
    void setName(const std::string& name);
    std::string getValue();
    void setValue(const std::string& value);
    boost::shared_ptr<Date> getDate();
    void setDate(boost::shared_ptr<Date> date);
    std::string getAuthor();
    void setAuthor(const std::string& author);

    // Generated
    Enrichment();
    Enrichment(const std::string& name, const std::string& value, boost::shared_ptr<Date> date, const std::string& author);

private:
    static const std::string& FIELD_NAME();
    static const std::string& FIELD_VALUE();
    static const std::string& FIELD_DATE();
    static const std::string& FIELD_AUTHOR();
};
#endif  //_Enrichment_H_
