#include "action/command/SelectEntities.h"


/*
SelectEntities::SelectEntities(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

SelectEntities::SelectEntities()
    : SelectEntities(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

SelectEntities::SelectEntities(const std::string & title, std::list contextTypes, const std::string & rootContext, const std::string & defaultContext, const std::string & expandedContext, bool showChildren, bool allowMasks, bool showVars, bool showFuncs, bool showEvents, bool showFields, bool singleSelection)
    : SelectEntities(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,contextTypes,rootContext,defaultContext,expandedContext,showChildren,allowMasks,showVars,showFuncs,showEvents,showFields,singleSelection);
}

std::string& SelectEntities::CF_TYPES()
{
    
    return CF_TYPES_;
}
std::string SelectEntities::CF_TYPES_;

std::string& SelectEntities::CF_ROOT()
{
    
    return CF_ROOT_;
}
std::string SelectEntities::CF_ROOT_;

std::string& SelectEntities::CF_DEFAULT()
{
    
    return CF_DEFAULT_;
}
std::string SelectEntities::CF_DEFAULT_;

std::string& SelectEntities::CF_EXPANDED()
{
    
    return CF_EXPANDED_;
}
std::string SelectEntities::CF_EXPANDED_;

std::string& SelectEntities::CF_SHOW_CHILDREN()
{
    
    return CF_SHOW_CHILDREN_;
}
std::string SelectEntities::CF_SHOW_CHILDREN_;

std::string& SelectEntities::CF_ALLOW_MASKS()
{
    
    return CF_ALLOW_MASKS_;
}
std::string SelectEntities::CF_ALLOW_MASKS_;

std::string& SelectEntities::CF_SHOW_VARS()
{
    
    return CF_SHOW_VARS_;
}
std::string SelectEntities::CF_SHOW_VARS_;

std::string& SelectEntities::CF_SHOW_FUNCS()
{
    
    return CF_SHOW_FUNCS_;
}
std::string SelectEntities::CF_SHOW_FUNCS_;

std::string& SelectEntities::CF_SHOW_EVENTS()
{
    
    return CF_SHOW_EVENTS_;
}
std::string SelectEntities::CF_SHOW_EVENTS_;

std::string& SelectEntities::CF_SHOW_FIELDS()
{
    
    return CF_SHOW_FIELDS_;
}
std::string SelectEntities::CF_SHOW_FIELDS_;

std::string& SelectEntities::CF_SINGLE_SELECTION()
{
    
    return CF_SINGLE_SELECTION_;
}
std::string SelectEntities::CF_SINGLE_SELECTION_;

std::string& SelectEntities::CF_TYPES_TYPE()
{
    
    return CF_TYPES_TYPE_;
}
std::string SelectEntities::CF_TYPES_TYPE_;

std::string& SelectEntities::RF_REFERENCE()
{
    
    return RF_REFERENCE_;
}
std::string SelectEntities::RF_REFERENCE_;

DateTableFormatPtr& SelectEntities::CFT_SELECT_ENTITIES()
{
    
    return CFT_SELECT_ENTITIES_;
}
DateTableFormatPtr SelectEntities::CFT_SELECT_ENTITIES_;

DateTableFormatPtr& SelectEntities::CFT_SELECT_ENTITIES_TYPES()
{
    
    return CFT_SELECT_ENTITIES_TYPES_;
}
DateTableFormatPtr SelectEntities::CFT_SELECT_ENTITIES_TYPES_;

DateTableFormatPtr& SelectEntities::RFT_SELECT_ENTITIES()
{
    
    return RFT_SELECT_ENTITIES_;
}
DateTableFormatPtr SelectEntities::RFT_SELECT_ENTITIES_;

void SelectEntities::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SELECT_ENTITIES(), CFT_SELECT_ENTITIES_, RFT_SELECT_ENTITIES_);
}

void SelectEntities::ctor(const std::string & title, std::list contextTypes, const std::string & rootContext, const std::string & defaultContext, const std::string & expandedContext, bool showChildren, bool allowMasks, bool showVars, bool showFuncs, bool showEvents, bool showFields, bool singleSelection)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SELECT_ENTITIES(), title);
    this->contextTypes = contextTypes;
    this->rootContext = rootContext;
    this->defaultContext = defaultContext;
    this->expandedContext = expandedContext;
    this->showChildren = showChildren;
    this->allowMasks = allowMasks;
    this->showVars = showVars;
    this->showFuncs = showFuncs;
    this->showEvents = showEvents;
    this->showFields = showFields;
    this->singleSelection = singleSelection;
}

DateDataTablePtr SelectEntities::constructParameters()
{
    DataTablePtr types;
    if(contextTypes != 0) {
        types = new DataTable(CFT_SELECT_ENTITIES_TYPES_);
        for (auto _i = contextTypes)->iterator(); _i->hasNext(); ) {
            const std::string & type = java_cast< const std::string & >(_i->next());
            {
                types)->addRecord())->addString(type);
            }
        }
    }
    return new DataTable(CFT_SELECT_ENTITIES_, new voidArray({types), rootContext), defaultContext), expandedContext), ::java::lang::Boolean::valueOf(showChildren)), ::java::lang::Boolean::valueOf(allowMasks)), ::java::lang::Boolean::valueOf(showVars)), ::java::lang::Boolean::valueOf(showFuncs)), ::java::lang::Boolean::valueOf(showEvents)), ::java::lang::Boolean::valueOf(showFields)), ::java::lang::Boolean::valueOf(singleSelection))}));
}

java::util::Collection* SelectEntities::getContextTypes()
{
    return contextTypes;
}

void SelectEntities::setContextTypes(std::list contextTypes)
{
    this->contextTypes = contextTypes;
}

std::string SelectEntities::getRootContext()
{
    return rootContext;
}

void SelectEntities::setRootContext(const std::string & rootContext)
{
    this->rootContext = rootContext;
}

std::string SelectEntities::getDefaultContext()
{
    return defaultContext;
}

void SelectEntities::setDefaultContext(const std::string & defaultContext)
{
    this->defaultContext = defaultContext;
}

std::string SelectEntities::getExpandedContext()
{
    return expandedContext;
}

void SelectEntities::setExpandedContext(const std::string & expandedContext)
{
    this->expandedContext = expandedContext;
}

bool SelectEntities::isShowChildren()
{
    return showChildren;
}

void SelectEntities::setShowChildren(bool showChildren)
{
    this->showChildren = showChildren;
}

bool SelectEntities::isAllowMasks()
{
    return allowMasks;
}

void SelectEntities::setAllowMasks(bool allowMasks)
{
    this->allowMasks = allowMasks;
}

bool SelectEntities::isShowVars()
{
    return showVars;
}

void SelectEntities::setShowVars(bool showVars)
{
    this->showVars = showVars;
}

bool SelectEntities::isShowFuncs()
{
    return showFuncs;
}

void SelectEntities::setShowFuncs(bool showFuncs)
{
    this->showFuncs = showFuncs;
}

bool SelectEntities::isShowEvents()
{
    return showEvents;
}

void SelectEntities::setShowEvents(bool showEvents)
{
    this->showEvents = showEvents;
}

bool SelectEntities::isShowFields()
{
    return showFields;
}

void SelectEntities::setShowFields(bool showFields)
{
    this->showFields = showFields;
}

bool SelectEntities::isSingleSelection()
{
    return singleSelection;
}

void SelectEntities::setSingleSelection(bool singleSelection)
{
    this->singleSelection = singleSelection;
}



java::lang::Class* SelectEntities::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.SelectEntities", 56);
    return c;
}

void SelectEntities::clinit()
{
struct string_init_ {
    string_init_() {
    CF_TYPES_ = u"types"_j;
    CF_ROOT_ = u"root"_j;
    CF_DEFAULT_ = u"default"_j;
    CF_EXPANDED_ = u"expanded"_j;
    CF_SHOW_CHILDREN_ = u"showChildren"_j;
    CF_ALLOW_MASKS_ = u"allowMasks"_j;
    CF_SHOW_VARS_ = u"showVars"_j;
    CF_SHOW_FUNCS_ = u"showFuncs"_j;
    CF_SHOW_EVENTS_ = u"showEvents"_j;
    CF_SHOW_FIELDS_ = u"showFields"_j;
    CF_SINGLE_SELECTION_ = u"singleSelection"_j;
    CF_TYPES_TYPE_ = u"type"_j;
    RF_REFERENCE_ = u"reference"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SELECT_ENTITIES_ = new TableFormat(int(1), int(1));
        {
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_TYPES_)
                ->append(u"><T><F=N>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_ROOT_)
                ->append(u"><S>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DEFAULT_)
                ->append(u"><S><F=N>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_EXPANDED_)
                ->append(u"><S><F=N>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_CHILDREN_)
                ->append(u"><B>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_ALLOW_MASKS_)
                ->append(u"><B>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_VARS_)
                ->append(u"><B>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_FUNCS_)
                ->append(u"><B>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_EVENTS_)
                ->append(u"><B>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_FIELDS_)
                ->append(u"><B>"_j)->toString());
            CFT_SELECT_ENTITIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SINGLE_SELECTION_)
                ->append(u"><B>"_j)->toString());
        }
        CFT_SELECT_ENTITIES_TYPES_ = datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_TYPES_TYPE_)
            ->append(u"><S>"_j)->toString()))->wrap();
        RFT_SELECT_ENTITIES_ = datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(RF_REFERENCE_)
            ->append(u"><S>"_j)->toString()))->wrap();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

*/
