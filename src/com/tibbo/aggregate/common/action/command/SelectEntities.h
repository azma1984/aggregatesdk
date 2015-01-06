// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/SelectEntities.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::SelectEntities
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_TYPES_;
    static const std::string CF_ROOT_;
    static const std::string CF_DEFAULT_;
    static const std::string CF_EXPANDED_;
    static const std::string CF_SHOW_CHILDREN_;
    static const std::string CF_ALLOW_MASKS_;
    static const std::string CF_SHOW_VARS_;
    static const std::string CF_SHOW_FUNCS_;
    static const std::string CF_SHOW_EVENTS_;
    static const std::string CF_SHOW_FIELDS_;
    static const std::string CF_SINGLE_SELECTION_;
    static const std::string CF_TYPES_TYPE_;
    static const std::string RF_REFERENCE_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SELECT_ENTITIES_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SELECT_ENTITIES_TYPES_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* RFT_SELECT_ENTITIES_;
    ::java::util::Collection* contextTypes;
    std::string* rootContext;
    std::string* defaultContext;
    std::string* expandedContext;
    bool showChildren;
    bool allowMasks;
    bool showVars;
    bool showFuncs;
    bool showEvents;
    bool showFields;
    bool singleSelection;
protected:
    void ctor();
    void ctor(std::string* title, ::java::util::Collection* contextTypes, std::string* rootContext, std::string* defaultContext, std::string* expandedContext, bool showChildren, bool allowMasks, bool showVars, bool showFuncs, bool showEvents, bool showFields, bool singleSelection);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    ::java::util::Collection* getContextTypes();
    void setContextTypes(::java::util::Collection* contextTypes);
    std::string* getRootContext();
    void setRootContext(std::string* rootContext);
    std::string* getDefaultContext();
    void setDefaultContext(std::string* defaultContext);
    std::string* getExpandedContext();
    void setExpandedContext(std::string* expandedContext);
    bool isShowChildren();
    void setShowChildren(bool showChildren);
    bool isAllowMasks();
    void setAllowMasks(bool allowMasks);
    bool isShowVars();
    void setShowVars(bool showVars);
    bool isShowFuncs();
    void setShowFuncs(bool showFuncs);
    bool isShowEvents();
    void setShowEvents(bool showEvents);
    bool isShowFields();
    void setShowFields(bool showFields);
    bool isSingleSelection();
    void setSingleSelection(bool singleSelection);

    // Generated
    SelectEntities();
    SelectEntities(std::string* title, ::java::util::Collection* contextTypes, std::string* rootContext, std::string* defaultContext, std::string* expandedContext, bool showChildren, bool allowMasks, bool showVars, bool showFuncs, bool showEvents, bool showFields, bool singleSelection);
protected:
    SelectEntities(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_TYPES();
    static const std::string& CF_ROOT();
    static const std::string& CF_DEFAULT();
    static const std::string& CF_EXPANDED();
    static const std::string& CF_SHOW_CHILDREN();
    static const std::string& CF_ALLOW_MASKS();
    static const std::string& CF_SHOW_VARS();
    static const std::string& CF_SHOW_FUNCS();
    static const std::string& CF_SHOW_EVENTS();
    static const std::string& CF_SHOW_FIELDS();
    static const std::string& CF_SINGLE_SELECTION();
    static const std::string& CF_TYPES_TYPE();
    static const std::string& RF_REFERENCE();

private:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SELECT_ENTITIES();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SELECT_ENTITIES_TYPES();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& RFT_SELECT_ENTITIES();

private:
    ::java::lang::Class* getClass0();
};
