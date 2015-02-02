#ifndef EditTextH
#define EditTextH

#include "action/GenericActionCommand.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditText : public GenericActionCommand
{
private:
	std::string text;
	std::string mode;
    static TableFormatPtr CFT_EDIT_TEXT_;
    static TableFormatPtr RFT_EDIT_TEXT_;

protected:
	DataTablePtr constructParameters();

public:
	static const std::string CF_TEXT;
	static const std::string CF_MODE;
	static const std::string RF_RESULT;
	static const std::string RF_TEXT;	
    static TableFormatPtr CFT_EDIT_TEXT();
    static TableFormatPtr RFT_EDIT_TEXT();

	std::string getText();
	void setText(const std::string & text);
	std::string getMode();
	void setMode(const std::string & mode);

	EditText();
	EditText(const std::string & title, const std::string & text, const std::string & mode);
	EditText(const std::string & title, DataTablePtr parameters);

};

#endif
