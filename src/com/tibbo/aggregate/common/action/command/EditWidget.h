// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditWidget.java

#pragma once

#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::EditWidget
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_DEFAULT_CONTEXT_;
    static const std::string CF_WIDGET_CONTEXT_;
    static const std::string CF_WIDGET_;
    static const std::string RF_WIDGET_;
    static const std::string RF_RESULT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_EDIT_WIDGET_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* RFT_EDIT_WIDGET_;
    std::string* defaultContext;
    std::string* widgetContext;
    std::string* widget;
protected:
    void ctor();
    void ctor(std::string* title, std::string* defaultContext, std::string* widgetContext, std::string* widget);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getDefaultContext();
    void setDefaultContext(std::string* defaultContext);
    std::string* getWidgetContext();
    void setWidgetContext(std::string* widgetContext);
    std::string* getWidget();
    void setWidget(std::string* widget);

    // Generated
    EditWidget();
    EditWidget(std::string* title, std::string* defaultContext, std::string* widgetContext, std::string* widget);
    EditWidget(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    EditWidget(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_DEFAULT_CONTEXT();
    static const std::string& CF_WIDGET_CONTEXT();
    static const std::string& CF_WIDGET();
    static const std::string& RF_WIDGET();
    static const std::string& RF_RESULT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_EDIT_WIDGET();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& RFT_EDIT_WIDGET();

private:
    ::java::lang::Class* getClass0();
};
