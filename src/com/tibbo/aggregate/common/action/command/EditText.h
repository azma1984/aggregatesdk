#pragma once

#include "action/GenericActionCommand.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditText : public GenericActionCommand
{
private:
    static boost::shared_ptr<TableFormat> CFT_EDIT_TEXT_;
    static boost::shared_ptr<TableFormat> RFT_EDIT_TEXT_;
    std::string text;
    std::string mode;

public:
    static const std::string CF_TEXT_;
    static const std::string CF_MODE_;
    static const std::string RF_RESULT_;
    static const std::string RF_TEXT_;

public: /* protected */
    DataTable* constructParameters();

public:
    std::string getText();
    void setText(const std::string & text);
    std::string getMode();
    void setMode(const std::string & mode);

    // Generated
    EditText();
    EditText(const std::string & title, const std::string & text, const std::string & mode);
    EditText(const std::string & title, boost::shared_ptr<DataTable> parameters);

    static boost::shared_ptr<TableFormat> CFT_EDIT_TEXT();
    static boost::shared_ptr<TableFormat> RFT_EDIT_TEXT();
};
