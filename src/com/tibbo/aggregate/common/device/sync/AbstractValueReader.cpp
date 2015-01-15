// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/AbstractValueReader.java
#include <com/tibbo/aggregate/common/device/sync/AbstractValueReader.h"

//#include <java/lang/String.h"

com::tibbo::aggregate::common::device::sync::AbstractValueReader::AbstractValueReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::sync::AbstractValueReader::AbstractValueReader() 
    : AbstractValueReader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::device::sync::AbstractValueReader::AbstractValueReader(const std::string & name) 
    : AbstractValueReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void com::tibbo::aggregate::common::device::sync::AbstractValueReader::ctor()
{
    super::ctor();
    this->name = u"Custom Synchronization Handler"_j;
}

void com::tibbo::aggregate::common::device::sync::AbstractValueReader::ctor(const std::string & name)
{
    super::ctor();
    this->name = name;
}

std::string com::tibbo::aggregate::common::device::sync::AbstractValueReader::toString()
{
    return name;
}



java::lang::Class* com::tibbo::aggregate::common::device::sync::AbstractValueReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.sync.AbstractValueReader", 58);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::sync::AbstractValueReader::getClass0()
{
    return class_();
}

