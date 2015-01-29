// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DataTableFieldFormat.java
#include "datatable/field/DataTableFieldFormat_DataTableFieldFormat_1.h"

#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "datatable/TableFormat.h"
#include "datatable/field/DataTableFieldFormat.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

Datefield::DataTableFieldFormat_DataTableFieldFormat_1::DataTableFieldFormat_DataTableFieldFormat_1(DataTableFieldFormat *DataTableFieldFormat_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , DataTableFieldFormat_this(DataTableFieldFormat_this)
{
    
    ctor();
}

void* Datefield::DataTableFieldFormat_DataTableFieldFormat_1::validate(void* value) /* throws(ValidationException) */
{
    auto def = java_cast< DataTable* >(DataTableFieldFormat_this->getDefaultValue());
    if(def == 0 || def)->getFieldCount() == 0) {
        return value;
    }
    auto dt = java_cast< DataTable* >(value);
    if(dt == 0) {
        return value;
    }
    auto msg = dt)->getFormat())->extendMessage(def)->getFormat());
    if(msg != 0) {
        auto newValue = def)->clone();
        DataTableReplication::copy(dt, newValue, true, true, true);
        value = newValue;
    }
    return value;
}



java::lang::Class* Datefield::DataTableFieldFormat_DataTableFieldFormat_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* Datefield::DataTableFieldFormat_DataTableFieldFormat_1::getClass0()
{
    return class_();
}

