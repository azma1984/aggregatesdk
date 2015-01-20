// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowSystemTree.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"

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



class com::tibbo::aggregate::common::action::command::ShowSystemTree
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_ROOT_;
    static const std::string CF_ROOTS_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static const std::string CF_RELATED_ACTIONS_;
    static const std::string CF_ROOTS_ROOT_;
    static TableFormat* CFT_SHOW_SYSTEM_TREE_ROOTS_;
    static TableFormat* CFT_SHOW_SYSTEM_TREE_;
    const std::string & root;
    std::list  roots;
    bool relatedActions;
    ::com::tibbo::aggregate::common::util::WindowLocation* location;
    ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard;
protected:
    void ctor();
    void ctor(const std::string & title, Context* root);
    void ctor(const std::string & title, std::stringArray*/*...*/ roots);
    void ctor(const std::string & title, DataTable* parameters);

public: /* protected */
    DataTable* constructParameters();

public:
    bool isRelatedActions();
    void setRelatedActions(bool relatedActions);
    ::com::tibbo::aggregate::common::util::WindowLocation* getLocation();
    void setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location);
    ::com::tibbo::aggregate::common::util::DashboardProperties* getDashboard();
    void setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);

    // Generated
    ShowSystemTree();
    ShowSystemTree(const std::string & title, Context* root);
    ShowSystemTree(const std::string & title, std::stringArray* roots);
    ShowSystemTree(const std::string & title, DataTable* parameters);
protected:
    ShowSystemTree(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static const std::string& CF_ROOT();
    static const std::string& CF_ROOTS();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static const std::string& CF_RELATED_ACTIONS();
    static const std::string& CF_ROOTS_ROOT();
    static TableFormat*& CFT_SHOW_SYSTEM_TREE_ROOTS();
    static TableFormat*& CFT_SHOW_SYSTEM_TREE();

private:
    ::java::lang::Class* getClass0();
};
