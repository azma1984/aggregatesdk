#include "datatable/DataTableReplication.h"




std::set<std::string> DataTableReplication::copy(DataTable& source, DataTablePtr target)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copy(DataTable& source, DataTablePtr target, bool copyReadOnlyFields)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copy(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copy(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copy(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copy(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copy(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copyWithKeyFields(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copyWithoutKeyFields(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copyRecord(DataRecord& source, DataRecordPtr target)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copyRecord(DataRecord& source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copyRecord(DataRecord& source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, std::list<std::string> fields)
{
    return std::set<std::string>();
}

std::set<std::string> DataTableReplication::copyRecord(DataRecord& source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, std::list<std::string> fields)
{
    return std::set<std::string>();
}
