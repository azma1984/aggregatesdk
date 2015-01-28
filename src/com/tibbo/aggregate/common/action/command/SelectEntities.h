#ifndef _SelectEntities_H_
#define _SelectEntities_H_

#include "action/GenericActionCommand.h"

class SelectEntities : public GenericActionCommand
{
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
    static TableFormatPtr CFT_SELECT_ENTITIES_;
    static TableFormatPtr CFT_SELECT_ENTITIES_TYPES_;
    static TableFormatPtr RFT_SELECT_ENTITIES_;
    std::list contextTypes;
    const std::string & rootContext;
    const std::string & defaultContext;
    const std::string & expandedContext;
    bool showChildren;
    bool allowMasks;
    bool showVars;
    bool showFuncs;
    bool showEvents;
    bool showFields;
    bool singleSelection;

public:
    DataTablePtr constructParameters();
//
public:
    std::list getContextTypes();
    void setContextTypes(std::list contextTypes);
    const std::string & getRootContext();
    void setRootContext(const std::string & rootContext);
    const std::string & getDefaultContext();
    void setDefaultContext(const std::string & defaultContext);
    const std::string & getExpandedContext();
    void setExpandedContext(const std::string & expandedContext);
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

    SelectEntities();
    SelectEntities(const std::string & title, std::list contextTypes, const std::string & rootContext, const std::string & defaultContext, const std::string & expandedContext, bool showChildren, bool allowMasks, bool showVars, bool showFuncs, bool showEvents, bool showFields, bool singleSelection);

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
    static TableFormatPtr& CFT_SELECT_ENTITIES();
    static TableFormatPtr& CFT_SELECT_ENTITIES_TYPES();
//
public:
    static TableFormatPtr& RFT_SELECT_ENTITIES();

};
#endif  //_SelectEntities_H_
