#pragma once
#include <string>
#include <set>
#include <list>
#include "util/Pointers.h"

class DataTableReplication
{

public:
    static std::set<std::string> copy(DataTable &source, DataTablePtr target);
    static std::set<std::string> copy(DataTable &source, DataTablePtr target, bool copyReadOnlyFields);
    static std::set<std::string> copy(DataTable &source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields);
    static std::set<std::string> copy(DataTable &source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget);
    static std::set<std::string> copy(DataTable &source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                      bool addRecordsToTarget);
    static std::set<std::string> copy(DataTable &source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                      bool addRecordsToTarget, bool ignoreUnresizable);
    static std::set<std::string> copy(DataTable &source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                      bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields);

    static std::set<std::string> copyWithKeyFields(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                       bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields);

    static std::set<std::string> copyWithoutKeyFields(DataTable& source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                                      bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields);
    static std::set<std::string> copyRecord(DataRecord& source, DataRecordPtr target);
    static std::set<std::string> copyRecord(DataRecord& source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields);
    static std::set<std::string> copyRecord(DataRecord& source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, std::list<std::string> fields);
    static std::set<std::string> copyRecord(DataRecord& source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                            bool addRecordsToTarget, std::list<std::string> fields);
};
