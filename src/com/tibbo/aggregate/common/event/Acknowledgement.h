#ifndef _Acknowledgement_H_
#define _Acknowledgement_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include <ctime>

#include "util/Cloneable.h"
//#include "datatable/TableFormat.h"
#include "datatable/DataTableConversion.h"

#include "datatable/converter/DefaultFormatConverter.h"

class TableFormat;

class Acknowledgement// : public Cloneable
{
private:
    static const std::string FIELD_AUTHOR;
    static const std::string FIELD_TIME;
    static const std::string FIELD_TEXT;
    static boost::shared_ptr<TableFormat> FORMAT;
    std::string author;
    std::time_t time;
    std::string text;

public:
    std::string getAuthor();
    std::string getText();
    std::time_t getTime();
    void setAuthor(const std::string& author);
    void setText(const std::string& text);
    void setTime(std::time_t time);    
	boost::shared_ptr<TableFormat> getFormat();
    
	void Init();
	static Class *class_()
	{
	 return 0;
	}
	virtual Acknowledgement *clone();

	Acknowledgement(Acknowledgement &al);//Constructor copy

    Acknowledgement();
    Acknowledgement(const std::string& author, std::time_t time, const std::string& text);
};
#endif  //_Acknowledgement_H_
