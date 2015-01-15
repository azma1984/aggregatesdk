// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FireChangeEventRequestController.java
#include <com/tibbo/aggregate/common/context/FireChangeEventRequestController.h"

#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/lang/String.h"
////#include <java/util/Date.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::FireChangeEventRequestController::FireChangeEventRequestController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::FireChangeEventRequestController::FireChangeEventRequestController(::java::lang::Long* customExpirationPeriod, VariableDefinition* def, DataTable* value) 
    : FireChangeEventRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(customExpirationPeriod,def,value);
}

void com::tibbo::aggregate::common::context::FireChangeEventRequestController::ctor(::java::lang::Long* customExpirationPeriod, VariableDefinition* def, DataTable* value)
{
    super::ctor(customExpirationPeriod);
    this->def = def;
    this->value = value;
}

Event* com::tibbo::aggregate::common::context::FireChangeEventRequestController::process(Event* event)
{
    if(event)->getExpirationtime() == 0) {
        return 0;
    }
    auto fullValue = def)->getFormat() == 0 ? value : static_cast< DataTable* >(0);
    event)->getData())->rec())->setValue(AbstractContext::EF_CHANGE_VALUE(), fullValue));
    auto dataOnly = def)->getFormat() == 0 ? static_cast< const std::string & >(0) : value)->getEncodedData(new encoding::ClassicEncodingSettings(false, true));
    event)->getData())->rec())->setValue(AbstractContext::EF_CHANGE_DATA(), dataOnly));
    return event;
}



java::lang::Class* com::tibbo::aggregate::common::context::FireChangeEventRequestController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.FireChangeEventRequestController", 67);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::FireChangeEventRequestController::getClass0()
{
    return class_();
}

