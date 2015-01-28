#ifndef ShowMessageH
#define ShowMessageH
#include "action/GenericActionCommand.h"



class ShowMessage : public GenericActionCommand
{
private:
    static const std::string CF_MESSAGE_;
    static const std::string CF_LEVEL_;
    static TableFormatPtr CFT_SHOW_MESSAGE_;
    const std::string  message;
    int level;

public:
    DataTablePtr constructParameters();

	const std::string getMessage();
    int getLevel();
    void setMessage(const std::string & message);
    void setLevel(int level);

	ShowMessage();
    ShowMessage(const std::string & title, const std::string & message, int level);
    ShowMessage(const std::string & title, DataTablePtr parameters);

    static const std::string& CF_MESSAGE();
    static const std::string& CF_LEVEL();
	static TableFormatPtr& CFT_SHOW_MESSAGE();
};

#endif
