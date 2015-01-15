// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableInfo.java
//#include <com/tibbo/aggregate/common/context/VariableInfo.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableBuilding.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
////#include <java/lang/Boolean.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/String.h"
////#include <java/lang/StringBuilder.h"
////#include <java/util/ResourceBundle.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::VariableInfo::VariableInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::VariableInfo::VariableInfo()
    : VariableInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::context::VariableInfo::FORMAT()
{
    
    return FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::context::VariableInfo::FORMAT_;

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::context::VariableInfo::createInfoTable(VariableDefinition* vd)
{
    
    auto res = new DataRecord(FORMAT_);
    res)->addString(vd)->getName());
    res)->addString(vd)->getDescription());
    res)->addDataTable(vd)->getFormat() != 0 ? DataTableBuilding::formatToFieldsTable(vd)->getFormat(), false) : static_cast< DataTable* >(0));
    res)->addBoolean(::java::lang::Boolean::valueOf(vd)->isReadable()));
    res)->addBoolean(::java::lang::Boolean::valueOf(vd)->isWritable()));
    res)->addString(vd)->getHelp());
    res)->addString(vd)->getGroup());
    return res)->wrap();
}



java::lang::Class* com::tibbo::aggregate::common::context::VariableInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.VariableInfo", 47);
    return c;
}

void com::tibbo::aggregate::common::context::VariableInfo::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat(int(1), int(1));
        {
            FORMAT_)->addField(std::stringBuilder().append(u"<name><S><D="_j)->append(Cres::get())->getString(u"name"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<description><S><D="_j)->append(Cres::get())->getString(u"description"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<format><T><F=N><D="_j)->append(Cres::get())->getString(u"format"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<readable><B><D="_j)->append(Cres::get())->getString(u"acReadable"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<writable><B><D="_j)->append(Cres::get())->getString(u"acWritable"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<help><S><F=N><D="_j)->append(Cres::get())->getString(u"help"_j))
                ->append(u"><E="_j)
                ->append(field::StringFieldFormat::EDITOR_TEXT_AREA())
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<group><S><F=N><D="_j)->append(Cres::get())->getString(u"group"_j))
                ->append(u">"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::context::VariableInfo::getClass0()
{
    return class_();
}

