#pragma once
#include <string>
#include <set>
#include <list>
#include "util/Pointers.h"

class DataTableReplication
{

public:
    static std::set<std::string> copy(DataTablePtr source, DataTablePtr target);
    static std::set<std::string> copy(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields);
    static std::set<std::string> copy(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields);
    static std::set<std::string> copy(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget);
    static std::set<std::string> copy(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                      bool addRecordsToTarget);
    static std::set<std::string> copy(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                      bool addRecordsToTarget, bool ignoreUnresizable);
    static std::set<std::string> copy(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                      bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields);

    static std::set<std::string> copyWithKeyFields(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                       bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields);

    static std::set<std::string> copyWithoutKeyFields(DataTablePtr source, DataTablePtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                                      bool addRecordsToTarget, bool ignoreUnresizable, std::list<std::string> fields);
    static std::set<std::string> copyRecord(DataRecordPtr source, DataRecordPtr target);
    static std::set<std::string> copyRecord(DataRecordPtr source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields);
    static std::set<std::string> copyRecord(DataRecordPtr source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, std::list<std::string> fields);
    static std::set<std::string> copyRecord(DataRecordPtr source, DataRecordPtr target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget,
                                            bool addRecordsToTarget, std::list<std::string> fields);
};
