// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/AbstractValueWriter.java
//#include <com/tibbo/aggregate/common/device/sync/AbstractValueWriter.h"

//#include <java/lang/String.h"

com::tibbo::aggregate::common::device::sync::AbstractValueWriter::AbstractValueWriter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::sync::AbstractValueWriter::AbstractValueWriter(const std::string & name) 
    : AbstractValueWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

com::tibbo::aggregate::common::device::sync::AbstractValueWriter::AbstractValueWriter() 
    : AbstractValueWriter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::device::sync::AbstractValueWriter::ctor(const std::string & name)
{
    super::ctor();
    this->name = name;
}

void com::tibbo::aggregate::common::device::sync::AbstractValueWriter::ctor()
{
    super::ctor();
    this->name = u"Custom Synchronization Handler"_j;
}

std::string com::tibbo::aggregate::common::device::sync::AbstractValueWriter::toString()
{
    return name;
}



java::lang::Class* com::tibbo::aggregate::common::device::sync::AbstractValueWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.sync.AbstractValueWriter", 58);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::sync::AbstractValueWriter::getClass0()
{
    return class_();
}

