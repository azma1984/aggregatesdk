// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EntityList.java
#include <com/tibbo/aggregate/common/context/EntityList.h"

#include <com/tibbo/aggregate/common/context/EntityReference.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
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

com::tibbo::aggregate::common::context::EntityList::EntityList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::EntityList::EntityList() 
    : EntityList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::context::EntityList::EntityList(DataTable* data) 
    : EntityList(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

com::tibbo::aggregate::common::context::EntityList::EntityList(const std::string & context, const std::string & entity) 
    : EntityList(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,entity);
}

com::tibbo::aggregate::common::context::EntityList::EntityList(EntityReference* ref) 
    : EntityList(*static_cast< ::default_init_tag* >(0))
{
    ctor(ref);
}

void com::tibbo::aggregate::common::context::EntityList::init()
{
    entities = new ::java::util::LinkedList();
}

std::string& com::tibbo::aggregate::common::context::EntityList::FIELD_CONTEXT()
{
    
    return FIELD_CONTEXT_;
}
std::string com::tibbo::aggregate::common::context::EntityList::FIELD_CONTEXT_;

std::string& com::tibbo::aggregate::common::context::EntityList::FIELD_ENTITY()
{
    
    return FIELD_ENTITY_;
}
std::string com::tibbo::aggregate::common::context::EntityList::FIELD_ENTITY_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::context::EntityList::FORMAT()
{
    
    return FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::context::EntityList::FORMAT_;

void com::tibbo::aggregate::common::context::EntityList::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::context::EntityList::ctor(DataTable* data)
{
    super::ctor();
    init();
    for (auto _i = data)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            entities)->add(new EntityReference(rec)->getString(FIELD_CONTEXT_), rec)->getString(FIELD_ENTITY_))));
        }
    }
}

void com::tibbo::aggregate::common::context::EntityList::ctor(const std::string & context, const std::string & entity)
{
    super::ctor();
    init();
    add(context, entity);
}

void com::tibbo::aggregate::common::context::EntityList::ctor(EntityReference* ref)
{
    super::ctor();
    init();
    entities)->add(ref));
}

bool com::tibbo::aggregate::common::context::EntityList::includes(EntityReference* ref)
{
    return includes(ref)->getContext(), ref)->getEntity());
}

bool com::tibbo::aggregate::common::context::EntityList::includes(const std::string & context, const std::string & entity)
{
    for (auto _i = entities)->iterator(); _i->hasNext(); ) {
        EntityReference* ref = java_cast< EntityReference* >(_i->next());
        {
            if(ref)->getContext())->equals(context)) && ref)->getEntity())->equals(entity))) {
                return true;
            }
        }
    }
    return false;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::context::EntityList::toDataTable()
{
    auto tab = new DataTable(FORMAT_);
    for (auto _i = entities)->iterator(); _i->hasNext(); ) {
        EntityReference* ref = java_cast< EntityReference* >(_i->next());
        {
            tab)->addRecord())->addString(ref)->getContext()))->addString(ref)->getEntity());
        }
    }
    return tab;
}

bool com::tibbo::aggregate::common::context::EntityList::isEmpty()
{
    return entities)->isEmpty();
}

void com::tibbo::aggregate::common::context::EntityList::add(const std::string & context, const std::string & entity)
{
    if(!includes(context, entity)) {
        add(new EntityReference(context, entity));
    }
}

void com::tibbo::aggregate::common::context::EntityList::add(EntityReference* ref)
{
    if(!includes(ref)) {
        entities)->add(ref));
    }
}

java::util::List* com::tibbo::aggregate::common::context::EntityList::getEntities()
{
    return entities;
}

java::util::Iterator* com::tibbo::aggregate::common::context::EntityList::iterator()
{
    return entities)->iterator();
}

std::string com::tibbo::aggregate::common::context::EntityList::toString()
{
    return entities)->toString();
}

com::tibbo::aggregate::common::context::EntityList* com::tibbo::aggregate::common::context::EntityList::clone()
{
    try {
        auto clone = java_cast< EntityList* >(super::clone());
        clone)->entities = new ::java::util::LinkedList();
        for (auto _i = entities)->iterator(); _i->hasNext(); ) {
            EntityReference* er = java_cast< EntityReference* >(_i->next());
            {
                clone)->entities)->add(er)->clone()));
            }
        }
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

int com::tibbo::aggregate::common::context::EntityList::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((entities == 0) ? int(0) : entities)->hashCode());
    return result;
}

bool com::tibbo::aggregate::common::context::EntityList::equals(void* obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< EntityList* >(obj);
    if(entities == 0) {
        if(other)->entities != 0)
            return false;

    } else if(!entities)->equals(other)->entities)))
        return false;

    return true;
}



java::lang::Class* com::tibbo::aggregate::common::context::EntityList::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.EntityList", 45);
    return c;
}

void com::tibbo::aggregate::common::context::EntityList::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_CONTEXT_ = u"context"_j;
    FIELD_ENTITY_ = u"entity"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat();
        {
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_CONTEXT_)
                ->append(u"><S>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ENTITY_)
                ->append(u"><S>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::context::EntityList::getClass0()
{
    return class_();
}

