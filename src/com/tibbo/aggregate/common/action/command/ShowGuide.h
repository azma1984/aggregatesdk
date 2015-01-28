#ifndef ShowGuideH
#define ShowGuideH
#include "action/GenericActionCommand.h"



class ShowGuide : public GenericActionCommand
{
private:
    static const std::string CF_INVOKER_CONTEXT_;
    static const std::string CF_MACRO_NAME_;
    static TableFormatPtr CFT_SHOW_GUIDE_;
    const std::string & invokerContext;
    const std::string & macroName;

public:
    DataTablePtr constructParameters();
//
public:
    const std::string & getInvokerContext();
    void setInvokerContext(const std::string & invokerContext);
    const std::string & getMacroName();
    void setMacroName(const std::string & macroName);

    ShowGuide();
    ShowGuide(const std::string & title, const std::string & invokerContext, const std::string & macroName);
    ShowGuide(const std::string & title, DataTablePtr parameters);

    static const std::string& CF_INVOKER_CONTEXT();
    static const std::string& CF_MACRO_NAME();
	static TableFormatPtr& CFT_SHOW_GUIDE();
};

#endif
