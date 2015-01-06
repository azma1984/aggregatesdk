// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowSystemTree.java
#include <com/tibbo/aggregate/common/action/command/ShowSystemTree.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/util/DashboardProperties.h"
#include <com/tibbo/aggregate/common/util/WindowLocation.h"
/*
//#include <java/io/Serializable.h"

//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Arrays.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
#include <SubArray.h"
#include <ObjectArray.h"*/

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::command::ShowSystemTree::ShowSystemTree(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::ShowSystemTree::ShowSystemTree() 
    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::ShowSystemTree::ShowSystemTree(std::string* title, ::com::tibbo::aggregate::common::context::Context* root) 
    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,root);
}

com::tibbo::aggregate::common::action::command::ShowSystemTree::ShowSystemTree(std::string* title, std::stringArray*/*...*/ roots) 
    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,roots);
}

com::tibbo::aggregate::common::action::command::ShowSystemTree::ShowSystemTree(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) 
    : ShowSystemTree(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::init()
{
    relatedActions = true;
}

std::string& com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_ROOT()
{
    
    return CF_ROOT_;
}
std::string com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_ROOT_;

std::string& com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_ROOTS()
{
    
    return CF_ROOTS_;
}
std::string com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_ROOTS_;

std::string& com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_LOCATION()
{
    
    return CF_LOCATION_;
}
std::string com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_LOCATION_;

std::string& com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_DASHBOARD()
{
    
    return CF_DASHBOARD_;
}
std::string com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_DASHBOARD_;

std::string& com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_RELATED_ACTIONS()
{
    
    return CF_RELATED_ACTIONS_;
}
std::string com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_RELATED_ACTIONS_;

std::string& com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_ROOTS_ROOT()
{
    
    return CF_ROOTS_ROOT_;
}
std::string com::tibbo::aggregate::common::action::command::ShowSystemTree::CF_ROOTS_ROOT_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::ShowSystemTree::CFT_SHOW_SYSTEM_TREE_ROOTS()
{
    
    return CFT_SHOW_SYSTEM_TREE_ROOTS_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::ShowSystemTree::CFT_SHOW_SYSTEM_TREE_ROOTS_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::ShowSystemTree::CFT_SHOW_SYSTEM_TREE()
{
    
    return CFT_SHOW_SYSTEM_TREE_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::ShowSystemTree::CFT_SHOW_SYSTEM_TREE_;

void com::tibbo::aggregate::common::action::command::ShowSystemTree::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), CFT_SHOW_SYSTEM_TREE_, static_cast< ::com::tibbo::aggregate::common::datatable::TableFormat* >(0));
    init();
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::ctor(std::string* title, ::com::tibbo::aggregate::common::context::Context* root)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), title);
    init();
    this->root = root)->getPath();
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::ctor(std::string* title, std::stringArray*/*...*/ roots)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), title);
    init();
    this->roots = ::java::util::Arrays::asList(roots);
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_SYSTEM_TREE(), title);
    init();
    root = parameters)->rec())->getString(CF_ROOT_);
    if(parameters)->getFormat())->hasField(CF_ROOTS_)) {
        roots = new ::java::util::LinkedList();
        for (auto _i = parameters)->rec())->getDataTable(CF_ROOTS_))->iterator(); _i->hasNext(); ) {
            ::com::tibbo::aggregate::common::datatable::DataRecord* rec = java_cast< ::com::tibbo::aggregate::common::datatable::DataRecord* >(_i->next());
            {
                roots)->add(rec)->getString(CF_ROOTS_ROOT_)));
            }
        }
    }
    relatedActions = (parameters)->rec())->getBoolean(CF_RELATED_ACTIONS_)))->booleanValue();
    if(parameters)->getFormat())->hasField(CF_LOCATION_)) {
        auto loc = parameters)->rec())->getDataTable(CF_LOCATION_);
        location = loc != 0 ? new ::com::tibbo::aggregate::common::util::WindowLocation(loc)->rec()) : static_cast< ::com::tibbo::aggregate::common::util::WindowLocation* >(0);
    }
    if(parameters)->getFormat())->hasField(CF_DASHBOARD_)) {
        auto db = parameters)->rec())->getDataTable(CF_DASHBOARD_);
        dashboard = db != 0 ? new ::com::tibbo::aggregate::common::util::DashboardProperties(db)->rec()) : static_cast< ::com::tibbo::aggregate::common::util::DashboardProperties* >(0);
    }
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::ShowSystemTree::constructParameters()
{
    auto res = new ::com::tibbo::aggregate::common::datatable::DataRecord(CFT_SHOW_SYSTEM_TREE_);
    res)->addString(root);
    auto t = new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_SHOW_SYSTEM_TREE_ROOTS_);
    if(roots != 0) {
        for (auto _i = roots)->iterator(); _i->hasNext(); ) {
            void* each = java_cast< void* >(_i->next());
            {
                t)->addRecord(new voidArray({each}));
            }
        }
    }
    res)->addDataTable(t);
    res)->addBoolean(::java::lang::Boolean::valueOf(relatedActions));
    res)->addDataTable(location != 0 ? location)->toDataTable() : static_cast< ::com::tibbo::aggregate::common::datatable::DataTable* >(0));
    res)->addDataTable(dashboard != 0 ? dashboard)->toDataTable() : static_cast< ::com::tibbo::aggregate::common::datatable::DataTable* >(0));
    return res)->wrap();
}

bool com::tibbo::aggregate::common::action::command::ShowSystemTree::isRelatedActions()
{
    return relatedActions;
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::setRelatedActions(bool relatedActions)
{
    this->relatedActions = relatedActions;
}

com::tibbo::aggregate::common::util::WindowLocation* com::tibbo::aggregate::common::action::command::ShowSystemTree::getLocation()
{
    return location;
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location)
{
    this->location = location;
}

com::tibbo::aggregate::common::util::DashboardProperties* com::tibbo::aggregate::common::action::command::ShowSystemTree::getDashboard()
{
    return dashboard;
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard)
{
    this->dashboard = dashboard;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::ShowSystemTree::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowSystemTree", 56);
    return c;
}

void com::tibbo::aggregate::common::action::command::ShowSystemTree::clinit()
{
struct string_init_ {
    string_init_() {
    CF_ROOT_ = u"root"_j;
    CF_ROOTS_ = u"roots"_j;
    CF_LOCATION_ = u"location"_j;
    CF_DASHBOARD_ = u"dashboard"_j;
    CF_RELATED_ACTIONS_ = u"relatedActions"_j;
    CF_ROOTS_ROOT_ = u"root"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SHOW_SYSTEM_TREE_ROOTS_ = datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_ROOTS_ROOT_)
            ->append(u"><S>"_j)->toString()))->wrap();
        CFT_SHOW_SYSTEM_TREE_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            CFT_SHOW_SYSTEM_TREE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_ROOT_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"root"_j))
                ->append(u"><E="_j)
                ->append(::com::tibbo::aggregate::common::datatable::field::StringFieldFormat::EDITOR_CONTEXT())
                ->append(u">"_j)->toString());
            auto ff = ::com::tibbo::aggregate::common::datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_ROOTS_)
                ->append(u"><T>"_j)->toString());
            ff)->setDefault(new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_SHOW_SYSTEM_TREE_ROOTS_, true));
            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
            ff = ::com::tibbo::aggregate::common::datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_RELATED_ACTIONS_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"relatedActions"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
            ff = ::com::tibbo::aggregate::common::datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_LOCATION_)
                ->append(u"><T><F=N>"_j)->toString());
            ff)->setDefault((new ::com::tibbo::aggregate::common::util::WindowLocation())->toDataTable());
            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
            ff = ::com::tibbo::aggregate::common::datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_DASHBOARD_)
                ->append(u"><T><F=N>"_j)->toString());
            ff)->setDefault((new ::com::tibbo::aggregate::common::util::DashboardProperties())->toDataTable());
            CFT_SHOW_SYSTEM_TREE_)->addField(ff);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::ShowSystemTree::getClass0()
{
    return class_();
}

