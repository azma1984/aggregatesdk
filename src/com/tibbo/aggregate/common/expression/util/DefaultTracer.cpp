// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/DefaultTracer.java
#include "expression/util/DefaultTracer.h"

#include "Log.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <org/apache/log4j/Logger.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

util::DefaultTracer::DefaultTracer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

util::DefaultTracer::DefaultTracer()
    : DefaultTracer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void util::DefaultTracer::trace(void* value, const std::string & message)
{
    traceToLog(value, message);
}

void util::DefaultTracer::traceToLog(void* value, const std::string & message)
{
    
    Log::EXPRESSIONS())->info(std::stringBuilder().append(u"Trace: "_j)->append(value))
        ->append((message != 0 ? std::stringBuilder().append(u" ("_j)->append(message)
            ->append(u")"_j)->toString() : u""_j))->toString());
}



java::lang::Class* util::DefaultTracer::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.util.DefaultTracer", 56);
    return c;
}

java::lang::Class* util::DefaultTracer::getClass0()
{
    return class_();
}

