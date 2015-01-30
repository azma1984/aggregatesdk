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
	std::string code;
	std::string mode;
    static TableFormatPtr CFT_EDIT_CODE_;
    static TableFormatPtr RFT_EDIT_CODE_;

public:
	static const std::string CF_CODE;
	static const std::string CF_MODE;
	static const std::string RF_RESULT;
	static const std::string RF_CODE;	

    DataTablePtr constructParameters();

	std::string getCode();
    void setCode(const std::string& code);
    std::string getMode();
    void setMode(const std::string& mode);


    EditCode();
    EditCode(const std::string & title, const std::string & code, const std::string & mode);
    EditCode(const std::string & title, DataTablePtr parameters);
    static TableFormatPtr CFT_EDIT_CODE();
    static TableFormatPtr RFT_EDIT_CODE();
};
#endif
