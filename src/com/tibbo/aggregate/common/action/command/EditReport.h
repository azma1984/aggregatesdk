#ifndef _EDIT_REPORT_H_
#define _EDIT_REPORT_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "action/GenericActionCommand.h"


class EditReport : public GenericActionCommand
{
public:
    // Generated
    EditReport();
    EditReport(const std::string& title, const std::string& template_, DataTable* data);
    EditReport(const std::string& title, DataTable* parameters);

    std::string getTemplate();
    void setTemplate(const std::string& template_);
    DataTable* getData();
    void setData(DataTable* data);

    static const std::string CF_TEMPLATE;
    static const std::string CF_DATA;
    static const std::string RF_TEMPLATE;
    static const std::string RF_RESULT;
    static boost::shared_ptr<TableFormat> CFT_EDIT_REPORT;
    static boost::shared_ptr<TableFormat> RFT_EDIT_REPORT;
    std::string template_;
    boost::shared_ptr<DataTable> data;

protected:
    void ctor();
    void ctor(const std::string& title, const std::string& template_, DataTable* data);
    void ctor(const std::string& title, DataTable* parameters);
    DataTable* constructParameters();
};
#endif  //_EDIT_REPORT_H_
