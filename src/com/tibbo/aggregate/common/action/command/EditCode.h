#pragma once

#include "action/GenericActionCommand.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditCode : public GenericActionCommand
{
private:    
    static boost::shared_ptr<TableFormat> CFT_EDIT_CODE_;
    static boost::shared_ptr<TableFormat> RFT_EDIT_CODE_;
    std::string code;
    std::string mode;

public:
    static const std::string CF_CODE_;
    static const std::string CF_MODE_;
    static const std::string RF_RESULT_;
    static const std::string RF_CODE_;

public: /* protected */
    boost::shared_ptr<DataTable> constructParameters();

public:
    std::string getCode();
    void setCode(const std::string& code);
    std::string getMode();
    void setMode(const std::string& mode);

    // Generated
    EditCode();
    EditCode(const std::string & title, const std::string & code, const std::string & mode);
    EditCode(const std::string & title, boost::shared_ptr<DataTable> parameters);

public:
    static boost::shared_ptr<TableFormat> CFT_EDIT_CODE();
    static boost::shared_ptr<TableFormat> RFT_EDIT_CODE();
};
