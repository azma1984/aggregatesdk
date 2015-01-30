#ifndef _Enrichment_H_
#define _Enrichment_H_
#include <iostream>
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Date.h"
#include "datatable/TableFormat.h"
#include "util/AgClass.h"
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
    DatePtr date;
    std::string author;

 public:
	TableFormatPtr FORMAT;
    std::string getName();
    void setName(const std::string& name);
    std::string getValue();
    void setValue(const std::string& value);
    DatePtr getDate();
    void setDate(DatePtr date);
    std::string getAuthor();
    void setAuthor(const std::string& author);

	static AgClass *class_()
	{
	 return 0;
	}
	void Init();
    Enrichment();
    Enrichment(const std::string& name, const std::string& value, DatePtr date, const std::string& author);
};
#endif  //_Enrichment_H_
