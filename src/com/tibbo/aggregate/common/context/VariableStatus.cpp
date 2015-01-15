// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableStatus.java
#include <com/tibbo/aggregate/common/context/VariableStatus.h"

////#include <java/lang/String.h"

com::tibbo::aggregate::common::context::VariableStatus::VariableStatus(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::VariableStatus::VariableStatus(const std::string & status, const std::string & comment) 
    : VariableStatus(*static_cast< ::default_init_tag* >(0))
{
    ctor(status,comment);
}

void com::tibbo::aggregate::common::context::VariableStatus::ctor(const std::string & status, const std::string & comment)
{
    super::ctor();
    this->status = status;
    this->comment = comment;
}

std::string com::tibbo::aggregate::common::context::VariableStatus::getComment()
{
    return comment;
}

std::string com::tibbo::aggregate::common::context::VariableStatus::getStatus()
{
    return status;
}

void com::tibbo::aggregate::common::context::VariableStatus::setComment(const std::string & comment)
{
    this->comment = comment;
}

void com::tibbo::aggregate::common::context::VariableStatus::setStatus(const std::string & status)
{
    this->status = status;
}



java::lang::Class* com::tibbo::aggregate::common::context::VariableStatus::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.VariableStatus", 49);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::VariableStatus::getClass0()
{
    return class_();
}

