// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/DashboardProperties.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/AggreGateBean.h"



class com::tibbo::aggregate::common::util::DashboardProperties
    : public ::com::tibbo::aggregate::common::datatable::AggreGateBean
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::AggreGateBean super;

private:
    static const std::string FIELD_NAME_;
    static const std::string FIELD_DESCRIPTION_;
    static const std::string FIELD_LAYOUT_;
    static const std::string FIELD_COLUMNS_;
    static const std::string FIELD_CLOSABLE_;
    static const std::string FIELD_CLEANUP_;

public:
    static const int LAYOUT_DOCKABLE) };
    static const int LAYOUT_SCROLLABLE = 1) };

private:
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* name;
    std::string* description;
    int layout;
    int columns;
    bool closable;
    bool cleanup;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::datatable::DataRecord* data);
    void ctor(std::string* name, std::string* description);
    void ctor(std::string* name, std::string* description, int layout);

public:
    std::string* getName();
    void setName(std::string* name);
    std::string* getDescription();
    void setDescription(std::string* description);
    int getLayout();
    void setLayout(int layout);
    int getColumns();
    void setColumns(int columns);
    void setClosable(bool closable);
    bool isCleanup();
    void setCleanup(bool cleanup);
    bool isClosable();
    std::string* toString();

    // Generated
    DashboardProperties();
    DashboardProperties(::com::tibbo::aggregate::common::datatable::DataRecord* data);
    DashboardProperties(std::string* name, std::string* description);
    DashboardProperties(std::string* name, std::string* description, int layout);
protected:
    DashboardProperties(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& FIELD_NAME();
    static const std::string& FIELD_DESCRIPTION();
    static const std::string& FIELD_LAYOUT();
    static const std::string& FIELD_COLUMNS();
    static const std::string& FIELD_CLOSABLE();
    static const std::string& FIELD_CLEANUP();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
