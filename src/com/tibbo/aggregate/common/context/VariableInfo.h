// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableInfo.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::context::VariableInfo
    
{

public:
    typedef void super;

private:
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;

public:
    static ::com::tibbo::aggregate::common::datatable::DataTable* createInfoTable(VariableDefinition* vd);

    // Generated
    VariableInfo();
protected:
    VariableInfo(const ::default_init_tag&);


public:
    
    static void 
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
