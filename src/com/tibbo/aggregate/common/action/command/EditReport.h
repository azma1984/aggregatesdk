#ifndef _EDIT_REPORT_H_
#define _EDIT_REPORT_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "action/GenericActionCommand.h"
#include "action/ActionUtils.h"
#include "datatable/DataTable.h"
//#include "datatable/TableFormat.h"

class EditReport : public GenericActionCommand
{
private:
    std::string template_;
    DataTablePtr data;
    static TableFormatPtr CFT_EDIT_REPORT_;
    static TableFormatPtr RFT_EDIT_REPORT_;

public:
    // Generated
    EditReport();
    EditReport(const std::string& title, const std::string& template_, DataTablePtr data);
    EditReport(const std::string& title, DataTablePtr parameters);

    std::string getTemplate();
    void setTemplate(const std::string& template_);
    DataTablePtr getData();
    void setData(DataTablePtr data);

    static const std::string CF_TEMPLATE;
    static const std::string CF_DATA;
    static const std::string RF_TEMPLATE;
    static const std::string RF_RESULT;

    static TableFormatPtr CFT_EDIT_REPORT();
    static TableFormatPtr RFT_EDIT_REPORT();

protected:    
    DataTablePtr constructParameters();
};
#endif  //_EDIT_REPORT_H_
