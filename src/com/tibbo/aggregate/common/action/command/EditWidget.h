#ifndef EditWidgetH
#define EditWidgetH

#include "action/GenericActionCommand.h"
#include "action/ActionUtils.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"




class EditWidget : public GenericActionCommand
{
private:
 	const std::string defaultContext;
	const std::string widgetContext;
	const std::string widget;

public:
	static const std::string CF_DEFAULT_CONTEXT;
	static const std::string CF_WIDGET_CONTEXT;
	static const std::string CF_WIDGET;
	static const std::string RF_WIDGET;
	static const std::string RF_RESULT;
	static TableFormatPtr CFT_EDIT_WIDGET;
	static TableFormatPtr RFT_EDIT_WIDGET;

    DataTablePtr constructParameters();

    const std::string & getDefaultContext();
    void setDefaultContext(const std::string & defaultContext);
    const std::string & getWidgetContext();
    void setWidgetContext(const std::string & widgetContext);
    const std::string & getWidget();
    void setWidget(const std::string & widget);

    EditWidget();
    EditWidget(const std::string & title, const std::string & defaultContext, const std::string & widgetContext, const std::string & widget);
    EditWidget(const std::string & title, DataTablePtr parameters);

 };

#endif
