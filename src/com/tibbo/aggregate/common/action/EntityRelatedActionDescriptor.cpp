// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/EntityRelatedActionDescriptor.java
#include <com/tibbo/aggregate/common/action/EntityRelatedActionDescriptor.h"

#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::EntityRelatedActionDescriptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::EntityRelatedActionDescriptor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId) 
    : EntityRelatedActionDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor(mask,entity,target,action,description,iconId);
}

com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::EntityRelatedActionDescriptor(DataRecord* data) 
    : EntityRelatedActionDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::EntityRelatedActionDescriptor() 
    : EntityRelatedActionDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_MASK()
{
    
    return FIELD_MASK_;
}
std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_MASK_;

std::string& com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_ENTITY()
{
    
    return FIELD_ENTITY_;
}
std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_ENTITY_;

std::string& com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_TARGET()
{
    
    return FIELD_TARGET_;
}
std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_TARGET_;

std::string& com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_ACTION()
{
    
    return FIELD_ACTION_;
}
std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_ACTION_;

std::string& com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_DESCRIPTION()
{
    
    return FIELD_DESCRIPTION_;
}
std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_DESCRIPTION_;

std::string& com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_ICON()
{
    
    return FIELD_ICON_;
}
std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FIELD_ICON_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FORMAT()
{
    
    return FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::FORMAT_;

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::ctor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId)
{
    ctor();
    this->mask = mask;
    this->entity = entity;
    this->target = target;
    this->action = action;
    this->description = description;
    this->icon = iconId;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::ctor(DataRecord* data)
{
    super::ctor(FORMAT_, data);
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::ctor()
{
    super::ctor(FORMAT_);
}

std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::getMask()
{
    return mask;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::setMask(const std::string & mask)
{
    this->mask = mask;
}

std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::getEntity()
{
    return entity;
}

std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::getTarget()
{
    return target;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::setTarget(const std::string & target)
{
    this->target = target;
}

std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::getAction()
{
    return action;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::setAction(const std::string & action)
{
    this->action = action;
}

std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::getDescription()
{
    return description;
}

std::string com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::getIcon()
{
    return icon;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::setEntity(const std::string & group)
{
    this->entity = group;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::setDescription(const std::string & description)
{
    this->description = description;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::setIcon(const std::string & icon)
{
    this->icon = icon;
}



java::lang::Class* com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.EntityRelatedActionDescriptor", 63);
    return c;
}

void com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_MASK_ = u"mask"_j;
    FIELD_ENTITY_ = u"entity"_j;
    FIELD_TARGET_ = u"target"_j;
    FIELD_ACTION_ = u"action"_j;
    FIELD_DESCRIPTION_ = u"description"_j;
    FIELD_ICON_ = u"icon"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat();
        {
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_MASK_)
                ->append(u"><S><F=N>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ENTITY_)
                ->append(u"><S><F=N>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_TARGET_)
                ->append(u"><S><F=N>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_)
                ->append(u"><S>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_DESCRIPTION_)
                ->append(u"><S>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ICON_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::EntityRelatedActionDescriptor::getClass0()
{
    return class_();
}

