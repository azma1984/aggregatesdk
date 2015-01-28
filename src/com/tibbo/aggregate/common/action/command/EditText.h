#ifndef EditTextH
#define EditTextH

#include "action/GenericActionCommand.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditText : public GenericActionCommand
{
private:
    static TableFormatPtr CFT_EDIT_TEXT_;
    static TableFormatPtr RFT_EDIT_TEXT_;
    std::string text;
    std::string mode;

public:
    static const std::string CF_TEXT_;
    static const std::string CF_MODE_;
    static const std::string RF_RESULT_;
    static const std::string RF_TEXT_;

public:
    DataTablePtr constructParameters();

public:
    std::string getText();
    void setText(const std::string & text);
    std::string getMode();
    void setMode(const std::string & mode);

	EditText();
    EditText(const std::string & title, const std::string & text, const std::string & mode);
    EditText(const std::string & title, DataTablePtr parameters);

    static TableFormatPtr CFT_EDIT_TEXT();
	static TableFormatPtr RFT_EDIT_TEXT();
};

#endif
