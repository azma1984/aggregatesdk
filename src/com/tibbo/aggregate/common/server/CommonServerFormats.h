// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/CommonServerFormats.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"

//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::server::CommonServerFormats
    
{

public:
    typedef void super;

private:
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FIFT_LOGIN_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FOFT_LOGIN_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FIFT_GET_FORMAT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FOFT_GET_FORMAT_;

    // Generated

public:
    CommonServerFormats();
protected:
    CommonServerFormats(const ::default_init_tag&);


public:
    
    static void 
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FIFT_LOGIN();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FOFT_LOGIN();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FIFT_GET_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FOFT_GET_FORMAT();

private:
    ::java::lang::Class* getClass0();
};
