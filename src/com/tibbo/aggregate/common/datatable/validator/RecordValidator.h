// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/RecordValidator.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/validator/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Cloneable.h"
#include <com/tibbo/aggregate/common/util/PublicCloneable.h"

struct com::tibbo::aggregate::common::datatable::validator::RecordValidator
    : public ::java::lang::Cloneable
    , public ::com::tibbo::aggregate::common::util::PublicCloneable
{
    ::java::lang::Character* getType();
    std::string* encode();
    void validate(::com::tibbo::aggregate::common::datatable::DataTable* table, ::com::tibbo::aggregate::common::datatable::DataRecord* record) /* throws(ValidationException) */;

    // Generated
    
};
