// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextStatus.java
#include <com/tibbo/aggregate/common/context/ContextStatus.h"

////#include <java/lang/String.h"

com::tibbo::aggregate::common::context::ContextStatus::ContextStatus(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::ContextStatus::ContextStatus() 
    : ContextStatus(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::context::ContextStatus::ContextStatus(int status, const std::string & comment) 
    : ContextStatus(*static_cast< ::default_init_tag* >(0))
{
    ctor(status,comment);
}

void com::tibbo::aggregate::common::context::ContextStatus::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::context::ContextStatus::ctor(int status, const std::string & comment)
{
    super::ctor();
    this->status = status;
    this->comment = comment;
}

std::string com::tibbo::aggregate::common::context::ContextStatus::getComment()
{
    return comment;
}

int com::tibbo::aggregate::common::context::ContextStatus::getStatus()
{
    return status;
}

void com::tibbo::aggregate::common::context::ContextStatus::setComment(const std::string & comment)
{
    this->comment = comment;
}

void com::tibbo::aggregate::common::context::ContextStatus::setStatus(int status)
{
    this->status = status;
}



java::lang::Class* com::tibbo::aggregate::common::context::ContextStatus::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.ContextStatus", 48);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::ContextStatus::getClass0()
{
    return class_();
}

