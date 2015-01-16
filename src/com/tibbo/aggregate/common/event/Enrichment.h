#ifndef _Enrichment_H_
#define _Enrichment_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Date.h"
#include "datatable/TableFormat.h"
#include "Class.h"
#include "datatable/DataTableConversion.h"
#include "datatable/converter/DefaultFormatConverter.h"
#include "event/Acknowledgement.h"
#include "context/ContextUtils.h"

class Enrichment
{
 private:
    static const std::string FIELD_NAME;
    static const std::string FIELD_VALUE;
    static const std::string FIELD_DATE;
    static const std::string FIELD_AUTHOR;

    std::string name;
    std::string value;
    boost::shared_ptr<Date> date;
    std::string author;

 public:
	boost::shared_ptr<TableFormat> FORMAT;
    std::string getName();
    void setName(const std::string& name);
    std::string getValue();
    void setValue(const std::string& value);
    boost::shared_ptr<Date> getDate();
    void setDate(boost::shared_ptr<Date> date);
    std::string getAuthor();
    void setAuthor(const std::string& author);

	static Class *class_()
	{
	 return 0;
	}
	void Init();
    Enrichment();
    Enrichment(const std::string& name, const std::string& value, boost::shared_ptr<Date> date, const std::string& author);
};
#endif  //_Enrichment_H_
