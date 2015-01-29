#ifndef EditCodeH
#define EditCodeH
 #include "action/ActionUtils.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "action/GenericActionCommand.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditCode : public GenericActionCommand
{
private:    
    static TableFormatPtr CFT_EDIT_CODE_;
    static TableFormatPtr RFT_EDIT_CODE_;
    std::string code;
    std::string mode;

public:
    static const std::string CF_CODE_;
    static const std::string CF_MODE_;
    static const std::string RF_RESULT_;
    static const std::string RF_CODE_;

public:
    DataTablePtr constructParameters();

public:
    std::string getCode();
    void setCode(const std::string& code);
    std::string getMode();
    void setMode(const std::string& mode);


    EditCode();
    EditCode(const std::string & title, const std::string & code, const std::string & mode);
    EditCode(const std::string & title, DataTablePtr parameters);

public:
    static TableFormatPtr CFT_EDIT_CODE();
    static TableFormatPtr RFT_EDIT_CODE();
};
#endif
