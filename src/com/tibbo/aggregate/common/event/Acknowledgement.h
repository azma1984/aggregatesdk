#ifndef _Acknowledgement_H_
#define _Acknowledgement_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Cloneable.h"
#include "datatable/TableFormat.h"

class Acknowledgement : public Cloneable
{
private:
    static const std::string FIELD_AUTHOR;
    static const std::string FIELD_TIME;
    static const std::string FIELD_TEX;
    static boost::shared_ptr<TableFormat> FORMAT;
    std::string author;
    boost::shared_ptr<Date> time;
    std::string text;
protected:
    void ctor();
    void ctor(const std::string& author, boost::shared_ptr<Date*> time, const std::string& text);

public:
    std::string getAuthor();
    std::string getText();
    boost::shared_ptr<Date> getTime();
    void setAuthor(const std::string& author);
    void setText(const std::string& text);
    void setTime(boost::shared_ptr<Date> time);
    boost::shared_ptr<TableFormat> getFormat();
    virtual Acknowledgement* clone();

    Acknowledgement();
    Acknowledgement(std::string* author, ::java::util::Date* time, std::string* text);
};
#endif  //_Acknowledgement_H_
