// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/AbstractRecordValidator.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/datatable/validator/RecordValidator.h"



class com::tibbo::aggregate::common::datatable::validator::AbstractRecordValidator
    
    , public RecordValidator
{

public:
    typedef void super;
    bool equals(void* obj);
    void* clone();

    // Generated
    AbstractRecordValidator();
protected:
    AbstractRecordValidator(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
