// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableReplication.java
#include <com/tibbo/aggregate/common/datatable/DataTableReplication.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableQuery.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/QueryCondition.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/util/CloneUtils.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Math.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashSet.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
//#include <java/util/Set.h"
//#include <org/apache/log4j/Logger.h"
#include <ObjectArray.h"

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

com::tibbo::aggregate::common::datatable::DataTableReplication::DataTableReplication(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::DataTableReplication::DataTableReplication()
    : DataTableReplication(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copy(DataTable* source, DataTable* target)
{
    
    return copy(source, target, false, false, true, true, false, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copy(DataTable* source, DataTable* target, bool copyReadOnlyFields)
{
    
    return copy(source, target, copyReadOnlyFields, false, true, true, false, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields)
{
    
    return copy(source, target, copyReadOnlyFields, copyNonReplicatableFields, true, true, false, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget)
{
    
    return copy(source, target, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, true, false, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget)
{
    
    return copy(source, target, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, false, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable)
{
    
    return copy(source, target, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, ignoreUnresizable, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copy(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, ::java::util::Collection* fields)
{
    
    if(target)->getFormat())->getKeyFields())->size() == 0) {
        return copyWithoutKeyFields(source, target, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, ignoreUnresizable, fields);
    } else {
        return copyWithKeyFields(source, target, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, ignoreUnresizable, fields);
    }
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copyWithKeyFields(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, ::java::util::Collection* fields)
{
    
    ::java::util::Set* errors = new ::java::util::LinkedHashSet();
    auto keyFields = target)->getFormat())->getKeyFields();
    for (auto _i = keyFields)->iterator(); _i->hasNext(); ) {
        const std::string & fieldName = java_cast< const std::string & >(_i->next());
        {
            if(!source)->getFormat())->hasField(fieldName)) {
                return copyWithoutKeyFields(source, target, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, ignoreUnresizable, fields);
            }
        }
    }
    for (auto *iter = target)->iterator(); iter)->hasNext(); ) {
        auto targetRec = java_cast< DataRecord* >(java_cast< void* >(iter)->next()));
        auto query = new DataTableQuery();
        for (auto _i = keyFields)->iterator(); _i->hasNext(); ) {
            const std::string & keyField = java_cast< const std::string & >(_i->next());
            {
                query)->addCondition(new QueryCondition(keyField, targetRec)->getValue(keyField)));
            }
        }
        auto sourceRec = source)->select(query);
        if(removeRecordsFromTarget && sourceRec == 0 && (ignoreUnresizable || !target)->getFormat())->isUnresizable())) {
            if(target)->getRecordCount() > target)->getFormat())->getMinRecords()) {
                iter)->remove();
            } else {
                if(source)->getFormat())->getMinRecords() != source)->getFormat())->getMaxRecords()) {
                    errors)->add(Cres::get())->getString(u"dtTargetTableMinRecordsReached"_j)));
                }
                break;
            }
        }
    }
    for (auto _i = source)->iterator(); _i->hasNext(); ) {
        DataRecord* sourceRec = java_cast< DataRecord* >(_i->next());
        {
            auto query = new DataTableQuery();
            for (auto _i = keyFields)->iterator(); _i->hasNext(); ) {
                const std::string & keyField = java_cast< const std::string & >(_i->next());
                {
                    query)->addCondition(new QueryCondition(keyField, sourceRec)->getValue(keyField)));
                }
            }
            auto targetRec = target)->select(query);
            if(targetRec == 0) {
                if(addRecordsToTarget && (ignoreUnresizable || !target)->getFormat())->isUnresizable())) {
                    if(target)->getRecordCount() < target)->getFormat())->getMaxRecords()) {
                        auto newRec = new DataRecord(target)->getFormat());
                        errors)->addAll(static_cast< ::java::util::Collection* >(DataTableReplication::copyRecord(sourceRec, newRec, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, fields)));
                        try {
                            target)->addRecord(newRec);
                        } catch (::java::lang::Exception* ex) {
                            errors)->add(std::stringBuilder().append(Cres::get())->getString(u"dtCannotAddRecord"_j))->append((ex)->getMessage() != 0 ? ex)->getMessage() : ex)->toString()))->toString()));
                        }
                    } else {
                        if(source)->getFormat())->getMinRecords() != source)->getFormat())->getMaxRecords()) {
                            errors)->add(Cres::get())->getString(u"dtTargetTableMaxRecordsReached"_j)));
                        }
                    }
                }
            } else {
                errors)->addAll(static_cast< ::java::util::Collection* >(DataTableReplication::copyRecord(sourceRec, targetRec, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, fields)));
            }
        }
    }
    return errors;
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copyWithoutKeyFields(DataTable* source, DataTable* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, bool ignoreUnresizable, ::java::util::Collection* fields)
{
    
    ::java::util::Set* errors = new ::java::util::LinkedHashSet();
    if(removeRecordsFromTarget && (ignoreUnresizable || !target)->getFormat())->isUnresizable())) {
        while (target)->getRecordCount() > source)->getRecordCount()) {
            if(target)->getRecordCount() > target)->getFormat())->getMinRecords()) {
                target)->removeRecord(target)->getRecordCount() - int(1));
            } else {
                if(source)->getFormat())->getMinRecords() != source)->getFormat())->getMaxRecords()) {
                    errors)->add(Cres::get())->getString(u"dtTargetTableMinRecordsReached"_j)));
                }
                break;
            }
        }
    }
    for (auto i = int(0); i < ::java::lang::Math::min(source)->getRecordCount(), target)->getRecordCount()); i++) {
        auto srcRec = source)->getRecord(i);
        auto tgtRec = target)->getRecord(i);
        errors)->addAll(static_cast< ::java::util::Collection* >(copyRecord(srcRec, tgtRec, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, fields)));
    }
    if(addRecordsToTarget && (ignoreUnresizable || !target)->getFormat())->isUnresizable())) {
        if(source)->getRecordCount() > target)->getRecordCount()) {
            for (auto i = target)->getRecordCount(); i < ::java::lang::Math::min(target)->getFormat())->getMaxRecords(), source)->getRecordCount()); i++) {
                errors)->addAll(static_cast< ::java::util::Collection* >(copyRecord(source)->getRecord(i), target)->addRecord(), copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget, fields)));
            }
        }
    }
    if(source)->getRecordCount() > target)->getFormat())->getMaxRecords()) {
        if(source)->getFormat())->getMinRecords() != source)->getFormat())->getMaxRecords()) {
            errors)->add(Cres::get())->getString(u"dtTargetTableMaxRecordsReached"_j)));
        }
    }
    return errors;
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copyRecord(DataRecord* source, DataRecord* target)
{
    
    return copyRecord(source, target, false, false, true, true, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copyRecord(DataRecord* source, DataRecord* target, bool copyReadOnlyFields, bool copyNonReplicatableFields)
{
    
    return copyRecord(source, target, copyReadOnlyFields, copyNonReplicatableFields, true, true, 0);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copyRecord(DataRecord* source, DataRecord* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, ::java::util::Collection* fields)
{
    
    return copyRecord(source, target, copyReadOnlyFields, copyNonReplicatableFields, true, true, fields);
}

java::util::Set* com::tibbo::aggregate::common::datatable::DataTableReplication::copyRecord(DataRecord* source, DataRecord* target, bool copyReadOnlyFields, bool copyNonReplicatableFields, bool removeRecordsFromTarget, bool addRecordsToTarget, ::java::util::Collection* fields)
{
    
    ::java::util::Set* errors = new ::java::util::LinkedHashSet();
    for (auto _i = target)->getFormat())->iterator(); _i->hasNext(); ) {
        FieldFormat* tgtFf = java_cast< FieldFormat* >(_i->next());
        {
            auto fieldName = tgtFf)->getName();
            FieldFormat* srcFf;
            srcFf = source)->getFormat())->getField(fieldName);
            if(fields != 0 && !fields)->contains(tgtFf)->getName())) {
                continue;
            }
            if(srcFf == 0) {
                continue;
            }
            if(tgtFf)->isReadonly() && !copyReadOnlyFields) {
                continue;
            }
            if(!copyNonReplicatableFields) {
                if(tgtFf)->isNotReplicated() || srcFf)->isNotReplicated()) {
                    continue;
                }
            }
            try {
                if(srcFf)->getType() == FieldFormat::DATATABLE_FIELD && tgtFf)->getType() == FieldFormat::DATATABLE_FIELD) {
                    auto const sourceTable = source)->getDataTable(fieldName);
                    auto const targetTable = target)->getDataTable(fieldName);
                    if(sourceTable != 0 && targetTable != 0) {
                        if(::com::tibbo::aggregate::common::util::Util::equals(targetTable)->getFormat(), DataTable::DEFAULT_FORMAT())) {
                            target)->setValue(fieldName, sourceTable)->clone()));
                        } else {
                            errors)->addAll(static_cast< ::java::util::Collection* >(DataTableReplication::copy(sourceTable, targetTable, copyReadOnlyFields, copyNonReplicatableFields, removeRecordsFromTarget, addRecordsToTarget)));
                            target)->setValue(fieldName, targetTable));
                        }
                        continue;
                    }
                }
                if(srcFf)->getFieldWrappedClass())->equals(tgtFf)->getFieldWrappedClass())) {
                    target)->setValue(fieldName, ::com::tibbo::aggregate::common::util::CloneUtils::genericClone(source)->getValue(fieldName)));
                } else {
                    target)->setValue(fieldName, java_cast< void* >(tgtFf)->valueFromString(srcFf)->valueToString(source)->getValue(fieldName)))));
                }
            } catch (::java::lang::Exception* ex2) {
                auto msg = ::java::text::MessageFormat::format(Cres::get())->getString(u"dtErrCopyingField"_j), new voidArray({fieldName)}));
                Log::DATATABLE())->debug(msg, ex2);
                errors)->add(std::stringBuilder().append(msg)->append(u": "_j)
                    ->append(ex2)->getMessage())->toString()));
                continue;
            }
        }
    }
    return errors;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableReplication::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableReplication", 57);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableReplication::getClass0()
{
    return class_();
}

