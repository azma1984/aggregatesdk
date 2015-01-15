// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/EntityRelatedActionDescriptor.java

#pragma once

//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/AggreGateBean.h"



class com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor
    : public AggreGateBean
{

public:
    typedef AggreGateBean super;

private:
    static const std::string FIELD_MASK_;
    static const std::string FIELD_ENTITY_;
    static const std::string FIELD_TARGET_;
    static const std::string FIELD_ACTION_;
    static const std::string FIELD_DESCRIPTION_;
    static const std::string FIELD_ICON_;
    static TableFormat* FORMAT_;
    const std::string & mask;
    const std::string & entity;
    const std::string & target;
    const std::string & action;
    const std::string & description;
    const std::string & icon;
protected:
    void ctor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId);
    void ctor(DataRecord* data);
    void ctor();

public:
    const std::string & getMask();
    void setMask(const std::string & mask);
    const std::string & getEntity();
    const std::string & getTarget();
    void setTarget(const std::string & target);
    const std::string & getAction();
    void setAction(const std::string & action);
    const std::string & getDescription();
    const std::string & getIcon();
    void setEntity(const std::string & group);
    void setDescription(const std::string & description);
    void setIcon(const std::string & icon);

    // Generated
    EntityRelatedActionDescriptor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId);
    EntityRelatedActionDescriptor(DataRecord* data);
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
    static TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
