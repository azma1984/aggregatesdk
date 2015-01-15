// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/TracerManager.java
#include <com/tibbo/aggregate/common/expression/util/TracerManager.h"

#include <com/tibbo/aggregate/common/expression/util/DefaultTracer.h"
#include <com/tibbo/aggregate/common/expression/util/Tracer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"

com::tibbo::aggregate::common::expression::util::TracerManager::TracerManager(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::util::TracerManager::TracerManager()
    : TracerManager(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::expression::util::Tracer*& com::tibbo::aggregate::common::expression::util::TracerManager::DEFAULT_TRACER()
{
    
    return DEFAULT_TRACER_;
}
com::tibbo::aggregate::common::expression::util::Tracer* com::tibbo::aggregate::common::expression::util::TracerManager::DEFAULT_TRACER_;

com::tibbo::aggregate::common::expression::util::Tracer* com::tibbo::aggregate::common::expression::util::TracerManager::getDefaultTracer()
{
    
    return DEFAULT_TRACER_;
}

void com::tibbo::aggregate::common::expression::util::TracerManager::setDefaultTracer(Tracer* tracer)
{
    
    if(tracer == 0) {
        throw new ::java::lang::NullPointerException(u"Default tracer cannot be NULL"_j);
    }
    DEFAULT_TRACER_ = tracer;
}



java::lang::Class* com::tibbo::aggregate::common::expression::util::TracerManager::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.util.TracerManager", 56);
    return c;
}

void com::tibbo::aggregate::common::expression::util::TracerManager::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_TRACER_ = new DefaultTracer();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::expression::util::TracerManager::getClass0()
{
    return class_();
}

