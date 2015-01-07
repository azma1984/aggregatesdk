// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableReplication.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::DataTableReplication
    
{

public:
    typedef void super;
    static ::java::util::Set* copy(DataTable* source, DataTable* target);
    static ::java::util::Set* copy(DataTable* source, DataTable* target, bool copyReadOnlyFields);
    static ::java::util::Set* copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields);
    static ::java::util::Set* copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget);
    static ::java::util::Set* copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget);
    static ::java::util::Set* copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable);
    static ::java::util::Set* copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, ::java::util::Collection* fields);
    static ::java::util::Set* copyWithKeyFields(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, ::java::util::Collection* fields);
    static ::java::util::Set* copyWithoutKeyFields(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, ::java::util::Collection* fields);
    static ::java::util::Set* copyRecord(DataRecord* source, DataRecord* target);
    static ::java::util::Set* copyRecord(DataRecord* source, DataRecord* target, bool copyReadOnlyFields, bool copyNonReplicatableFields);
    static ::java::util::Set* copyRecord(DataRecord* source, DataRecord* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, ::java::util::Collection* fields);
    static ::java::util::Set* copyRecord(DataRecord* source, DataRecord* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, ::java::util::Collection* fields);

    // Generated
    DataTableReplication();
protected:
    DataTableReplication(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
