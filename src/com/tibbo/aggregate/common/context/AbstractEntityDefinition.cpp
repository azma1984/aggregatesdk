// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractEntityDefinition.java
#include <com/tibbo/aggregate/common/context/AbstractEntityDefinition.h"

////#include <java/lang/Integer.h"
////#include <java/lang/Object.h"
////#include <java/lang/String.h"
////#include <java/lang/StringBuilder.h"

com::tibbo::aggregate::common::context::AbstractEntityDefinition::AbstractEntityDefinition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::AbstractEntityDefinition::AbstractEntityDefinition()
    : AbstractEntityDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string com::tibbo::aggregate::common::context::AbstractEntityDefinition::getName()
{
    return name;
}

void com::tibbo::aggregate::common::context::AbstractEntityDefinition::setName(std::string* name)
{
    this->name = name;
}

void com::tibbo::aggregate::common::context::AbstractEntityDefinition::setDescription(std::string* description)
{
    this->description = description;
}

void com::tibbo::aggregate::common::context::AbstractEntityDefinition::setHelp(std::string* help)
{
    this->help = help;
}

void com::tibbo::aggregate::common::context::AbstractEntityDefinition::setGroup(std::string* group)
{
    this->group = group;
}

std::string com::tibbo::aggregate::common::context::AbstractEntityDefinition::getDescription()
{
    return description;
}

std::string com::tibbo::aggregate::common::context::AbstractEntityDefinition::getHelp()
{
    return help;
}

std::string com::tibbo::aggregate::common::context::AbstractEntityDefinition::getGroup()
{
    return group;
}

java::lang::Integer* com::tibbo::aggregate::common::context::AbstractEntityDefinition::getIndex()
{
    return index;
}

void com::tibbo::aggregate::common::context::AbstractEntityDefinition::setIndex(::java::lang::Integer* index)
{
    this->index = index;
}

void com::tibbo::aggregate::common::context::AbstractEntityDefinition::setIconId(std::string* iconId)
{
    this->iconId = iconId;
}

std::string com::tibbo::aggregate::common::context::AbstractEntityDefinition::getIconId()
{
    return iconId;
}

void* com::tibbo::aggregate::common::context::AbstractEntityDefinition::getOwner()
{
    return owner;
}

void com::tibbo::aggregate::common::context::AbstractEntityDefinition::setOwner(void* owner)
{
    this->owner = owner;
}

std::string com::tibbo::aggregate::common::context::AbstractEntityDefinition::toString()
{
    return description != 0 ? description : name;
}

std::string com::tibbo::aggregate::common::context::AbstractEntityDefinition::toDetailedString()
{
    return description != 0 ? std::stringBuilder().append(description)->append(u" ("_j)
        ->append(name)
        ->append(u")"_j)->toString() : name;
}



java::lang::Class* com::tibbo::aggregate::common::context::AbstractEntityDefinition::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.AbstractEntityDefinition", 59);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::AbstractEntityDefinition::getClass0()
{
    return class_();
}

