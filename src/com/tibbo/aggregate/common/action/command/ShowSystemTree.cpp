#include "action/command/ShowSystemTree.h"


//ShowSystemTree::ShowSystemTree(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//ShowSystemTree::ShowSystemTree()
//    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//ShowSystemTree::ShowSystemTree(const std::string & title, ContextPtr root)
//    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,root);
//}
//
//ShowSystemTree::ShowSystemTree(const std::string & title, std::stringArray*/*...*/ roots)
//    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,roots);
//}
//
//ShowSystemTree::ShowSystemTree(const std::string & title, DataTablePtr parameters)
//    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,parameters);
//}
//
//void ShowSystemTree::init()
//{
//    relatedActions = true;
//}
//
//std::string& ShowSystemTree::CF_ROOT()
//{
//
//    return CF_ROOT_;
//}
//std::string ShowSystemTree::CF_ROOT_;
//
//std::string& ShowSystemTree::CF_ROOTS()
//{
//
//    return CF_ROOTS_;
//}
//std::string ShowSystemTree::CF_ROOTS_;
//
//std::string& ShowSystemTree::CF_LOCATION()
//{
//
//    return CF_LOCATION_;
//}
//std::string ShowSystemTree::CF_LOCATION_;
//
//std::string& ShowSystemTree::CF_DASHBOARD()
//{
//
//    return CF_DASHBOARD_;
//}
//std::string ShowSystemTree::CF_DASHBOARD_;
//
//std::string& ShowSystemTree::CF_RELATED_ACTIONS()
//{
//
//    return CF_RELATED_ACTIONS_;
//}
//std::string ShowSystemTree::CF_RELATED_ACTIONS_;
//
//std::string& ShowSystemTree::CF_ROOTS_ROOT()
//{
//
//    return CF_ROOTS_ROOT_;
//}
//std::string ShowSystemTree::CF_ROOTS_ROOT_;
//
//DateTableFormatPtr& ShowSystemTree::CFT_SHOW_SYSTEM_TREE_ROOTS()
//{
//
//    return CFT_SHOW_SYSTEM_TREE_ROOTS_;
//}
//DateTableFormatPtr ShowSystemTree::CFT_SHOW_SYSTEM_TREE_ROOTS_;
//
//DateTableFormatPtr& ShowSystemTree::CFT_SHOW_SYSTEM_TREE()
//{
//
//    return CFT_SHOW_SYSTEM_TREE_;
//}
//DateTableFormatPtr ShowSystemTree::CFT_SHOW_SYSTEM_TREE_;
//
//void ShowSystemTree::ctor()
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), CFT_SHOW_SYSTEM_TREE_, static_cast< TableFormatPtr >(0));
//    init();
//}
//
//void ShowSystemTree::ctor(const std::string & title, ContextPtr root)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), title);
//    init();
//    this->root = root)->getPath();
//}
//
//void ShowSystemTree::ctor(const std::string & title, std::stringArray*/*...*/ roots)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), title);
//    init();
//    this->roots = ::java::util::Arrays::asList(roots);
//}
//
//void ShowSystemTree::ctor(const std::string & title, DataTablePtr parameters)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), title);
//    init();
//    root = parameters)->rec())->getString(CF_ROOT_);
//    if(parameters)->getFormat())->hasField(CF_ROOTS_)) {
//        roots = new ::java::util::LinkedList();
//        for (auto _i = parameters)->rec())->getDataTable(CF_ROOTS_))->iterator(); _i->hasNext(); ) {
//            DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
//            {
//                roots)->add(rec)->getString(CF_ROOTS_ROOT_)));
//            }
//        }
//    }
//    relatedActions = (parameters)->rec())->getBoolean(CF_RELATED_ACTIONS_)))->booleanValue();
//    if(parameters)->getFormat())->hasField(CF_LOCATION_)) {
//        auto loc = parameters)->rec())->getDataTable(CF_LOCATION_);
//        location = loc != 0 ? new WindowLocation(loc)->rec()) : static_cast< WindowLocationPtr >(0);
//    }
//    if(parameters)->getFormat())->hasField(CF_DASHBOARD_)) {
//        auto db = parameters)->rec())->getDataTable(CF_DASHBOARD_);
//        dashboard = db != 0 ? new DashboardProperties(db)->rec()) : static_cast< DashboardPropertiesPtr >(0);
//    }
//}
//
//DateDataTablePtr ShowSystemTree::constructParameters()
//{
//    auto res = new DataRecord(CFT_SHOW_SYSTEM_TREE_);
//    res)->addString(root);
//    auto t = new DataTable(CFT_SHOW_SYSTEM_TREE_ROOTS_);
//    if(roots != 0) {
//        for (auto _i = roots)->iterator(); _i->hasNext(); ) {
//            AgObjectPtr each = java_cast< AgObjectPtr >(_i->next());
//            {
//                t)->addRecord(new voidArray({each}));
//            }
//        }
//    }
//    res)->addDataTable(t);
//    res)->addBoolean(::java::lang::Boolean::valueOf(relatedActions));
//    res)->addDataTable(location != 0 ? location)->toDataTable() : static_cast< DataTablePtr >(0));
//    res)->addDataTable(dashboard != 0 ? dashboard)->toDataTable() : static_cast< DataTablePtr >(0));
//    return res)->wrap();
//}
//
//bool ShowSystemTree::isRelatedActions()
//{
//    return relatedActions;
//}
//
//void ShowSystemTree::setRelatedActions(bool relatedActions)
//{
//    this->relatedActions = relatedActions;
//}
//
//com::tibbo::aggregate::common::util::WindowLocationPtr ShowSystemTree::getLocation()
//{
//    return location;
//}
//
//void ShowSystemTree::setLocation(WindowLocationPtr location)
//{
//    this->location = location;
//}
//
//com::tibbo::aggregate::common::util::DashboardPropertiesPtr ShowSystemTree::getDashboard()
//{
//    return dashboard;
//}
//
//void ShowSystemTree::setDashboard(DashboardPropertiesPtr dashboard)
//{
//    this->dashboard = dashboard;
//}
//
//
//
//java::lang::Class* ShowSystemTree::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowSystemTree", 56);
//    return c;
//}
//
//void ShowSystemTree::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    CF_ROOT_ = u"root"_j;
//    CF_ROOTS_ = u"roots"_j;
//    CF_LOCATION_ = u"location"_j;
//    CF_DASHBOARD_ = u"dashboard"_j;
//    CF_RELATED_ACTIONS_ = u"relatedActions"_j;
//    CF_ROOTS_ROOT_ = u"root"_j;
//    }
//};
//
//    static string_init_ string_init_instance;
//
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        CFT_SHOW_SYSTEM_TREE_ROOTS_ = datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_ROOTS_ROOT_)
//            ->append(u"><S>"_j)->toString()))->wrap();
//        CFT_SHOW_SYSTEM_TREE_ = new TableFormat(int(1), int(1));
//        {
//            CFT_SHOW_SYSTEM_TREE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_ROOT_)
//                ->append(u"><S><F=N><D="_j)
//                ->append(Cres::get())->getString(u"root"_j))
//                ->append(u"><E="_j)
//                ->append(field::StringFieldFormat::EDITOR_CONTEXT())
//                ->append(u">"_j)->toString());
//            auto ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_ROOTS_)
//                ->append(u"><T>"_j)->toString());
//            ff)->setDefault(new DataTable(CFT_SHOW_SYSTEM_TREE_ROOTS_, true));
//            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_RELATED_ACTIONS_)
//                ->append(u"><B><A=1><D="_j)
//                ->append(Cres::get())->getString(u"relatedActions"_j))
//                ->append(u">"_j)->toString());
//            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_LOCATION_)
//                ->append(u"><T><F=N>"_j)->toString());
//            ff)->setDefault((new WindowLocation())->toDataTable());
//            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_DASHBOARD_)
//                ->append(u"><T><F=N>"_j)->toString());
//            ff)->setDefault((new DashboardProperties())->toDataTable());
//            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

