#ifndef _Acknowledgement_H_
#define _Acknowledgement_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Cloneable.h"
#include "datatable/TableFormat.h"

class TableFormat;

class Acknowledgement : public Cloneable
{
private:
    static const std::string FIELD_AUTHOR;
    static const std::string FIELD_TIME;
    static const std::string FIELD_TEXT;
    static boost::shared_ptr<TableFormat> FORMAT_;
    std::string author;
    boost::shared_ptr<Date> time;
    std::string text;

public:
    std::string getAuthor();
    std::string getText();
    boost::shared_ptr<Date> getTime();
    void setAuthor(const std::string& author);
    void setText(const std::string& text);
    void setTime(boost::shared_ptr<Date> time);    
    virtual Acknowledgement* clone();
    static boost::shared_ptr<TableFormat> FORMAT();

    Acknowledgement();
    Acknowledgement(const std::string& author, boost::shared_ptr<Date> time, const std::string& text);
};
#endif  //_Acknowledgement_H_
