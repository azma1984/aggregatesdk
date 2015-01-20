#ifndef _EDIT_REPORT_H_
#define _EDIT_REPORT_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "action/GenericActionCommand.h"


class EditReport : public GenericActionCommand
{
private:
    std::string template_;
    boost::shared_ptr<DataTable> data;
    static boost::shared_ptr<TableFormat> CFT_EDIT_REPORT_;
    static boost::shared_ptr<TableFormat> RFT_EDIT_REPORT_;

public:
    // Generated
    EditReport();
    EditReport(const std::string& title, const std::string& template_, boost::shared_ptr<DataTable> data);
    EditReport(const std::string& title, boost::shared_ptr<DataTable> parameters);

    std::string getTemplate();
    void setTemplate(const std::string& template_);
    boost::shared_ptr<DataTable> getData();
    void setData(boost::shared_ptr<DataTable> data);

    static const std::string CF_TEMPLATE;
    static const std::string CF_DATA;
    static const std::string RF_TEMPLATE;
    static const std::string RF_RESULT;

    static boost::shared_ptr<TableFormat> CFT_EDIT_REPORT();
    static boost::shared_ptr<TableFormat> RFT_EDIT_REPORT();

protected:    
    DataTable* constructParameters();
};
#endif  //_EDIT_REPORT_H_
