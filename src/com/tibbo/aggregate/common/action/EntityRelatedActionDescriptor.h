// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/EntityRelatedActionDescriptor.java

#pragma once

//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/AggreGateBean.h"



class com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor
    : public ::com::tibbo::aggregate::common::datatable::AggreGateBean
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::AggreGateBean super;

private:
    static const std::string FIELD_MASK_;
    static const std::string FIELD_ENTITY_;
    static const std::string FIELD_TARGET_;
    static const std::string FIELD_ACTION_;
    static const std::string FIELD_DESCRIPTION_;
    static const std::string FIELD_ICON_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* mask;
    std::string* entity;
    std::string* target;
    std::string* action;
    std::string* description;
    std::string* icon;
protected:
    void ctor(std::string* mask, std::string* entity, std::string* target, std::string* action, std::string* description, std::string* iconId);
    void ctor(::com::tibbo::aggregate::common::datatable::DataRecord* data);
    void ctor();

public:
    std::string* getMask();
    void setMask(std::string* mask);
    std::string* getEntity();
    std::string* getTarget();
    void setTarget(std::string* target);
    std::string* getAction();
    void setAction(std::string* action);
    std::string* getDescription();
    std::string* getIcon();
    void setEntity(std::string* group);
    void setDescription(std::string* description);
    void setIcon(std::string* icon);

    // Generated
    EntityRelatedActionDescriptor(std::string* mask, std::string* entity, std::string* target, std::string* action, std::string* description, std::string* iconId);
    EntityRelatedActionDescriptor(::com::tibbo::aggregate::common::datatable::DataRecord* data);
    EntityRelatedActionDescriptor();
protected:
    EntityRelatedActionDescriptor(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& FIELD_MASK();
    static const std::string& FIELD_ENTITY();
    static const std::string& FIELD_TARGET();
    static const std::string& FIELD_ACTION();
    static const std::string& FIELD_DESCRIPTION();
    static const std::string& FIELD_ICON();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
