// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/ChangeCache.java
//#include <com/tibbo/aggregate/common/binding/ChangeCache.h"

#include <com/tibbo/aggregate/common/binding/BindingProvider.h"
#include <com/tibbo/aggregate/common/binding/CallerControllerSelector.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
/*
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Hashtable.h"
//#include <java/util/Iterator.h"
//#include <java/util/Map_Entry.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
*/
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

com::tibbo::aggregate::common::binding::ChangeCache::ChangeCache(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::binding::ChangeCache::ChangeCache()
    : ChangeCache(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::binding::ChangeCache::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::binding::ChangeCache::init()
{
    variableChanges = new ::java::util::Hashtable();
}

void com::tibbo::aggregate::common::binding::ChangeCache::setVariableField(::com::tibbo::aggregate::common::context::Context* context, const std::string & variable, const std::string & field, int record, void* value, ::com::tibbo::aggregate::common::context::CallerController* cc) /* throws(ContextException) */
{
    auto changes = java_cast< std::map >(variableChanges)->get(context));
    if(changes == 0) {
        changes = new ::java::util::Hashtable();
        variableChanges)->put(context, changes);
    }
    auto table = java_cast< DataTable* >(changes)->get(variable));
    if(table == 0) {
        table = context)->getVariable(variable, cc);
        changes)->put(variable, table);
    }
    table)->getRecord(record))->setValue(field, value);
}

void com::tibbo::aggregate::common::binding::ChangeCache::commit(BindingProvider* provider, CallerControllerSelector* selector)
{
    for (auto _i = variableChanges)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* ce = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            for (auto _i = java_cast< std::map >(ce)->getValue()))->entrySet())->iterator(); _i->hasNext(); ) {
                ::java::util::Map_Entry* ve = java_cast< ::java::util::Map_Entry* >(_i->next());
                {
                    try {
                        auto cc = selector)->select(java_cast< ::com::tibbo::aggregate::common::context::Context* >(ce)->getKey()), java_cast< const std::string & >(ve)->getKey()), ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE);
                        java_cast< ::com::tibbo::aggregate::common::context::Context* >(ce)->getKey()))->setVariable(java_cast< const std::string & >(ve)->getKey()), cc, java_cast< DataTable* >(ve)->getValue()));
                    } catch (::java::lang::Exception* ex) {
                        provider)->processError(0, EvaluationOptions::EVENT, 0, ex);
                    }
                }
            }
        }
    }
}



java::lang::Class* com::tibbo::aggregate::common::binding::ChangeCache::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.ChangeCache", 46);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::ChangeCache::getClass0()
{
    return class_();
}

