// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/data/Event.java
#include "Event.h"
 /*




Event::Event(std::string* context, ::com::tibbo::aggregate::common::context::EventDefinition* def, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id, ::java::util::Date* creationtime, ::com::tibbo::aggregate::common::security::Permissions* permissions)
    : Event(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,def,level,data,id,creationtime,permissions);
}

Event::Event(std::string* context, std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id)
    : Event(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,name,level,data,id);
}

void Event::init()
{
    instantiationtime = new ::java::util::Date();
    acknowledgements = new ::java::util::LinkedList();
    data;
    count = int(1);
    enrichments = new ::java::util::LinkedList();
}

const long Event::DEFAULT_EVENT_EXPIRATION_PERIOD;

void Event::ctor()
{
    super::ctor();
    init();
    setCreationtime(new ::java::util::Date(::java::lang::System::currentTimeMillis()));
}

void Event::ctor(std::string* context, ::com::tibbo::aggregate::common::context::EventDefinition* def, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id, ::java::util::Date* creationtime, ::com::tibbo::aggregate::common::security::Permissions* permissions)
{
    ctor();
    init_(context, def)->getName(), level, data, id);
    this->name = def)->getName();
    this->permissions = permissions;
    if(creationtime != 0) {
        this->creationtime = creationtime;
    }
    if(def)->getExpirationPeriod() > 0) {
        setExpirationtime(new ::java::util::Date(::java::lang::System::currentTimeMillis() + def)->getExpirationPeriod()));
    }
}

void Event::ctor(std::string* context, std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id)
{
    ctor();
    init_(context, name, level, data, id);
}

void Event::init_(std::string* context, std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id)
{
    this->context = context;
    this->name = name;
    this->level = level;
    this->data = data;
    this->id = id;
}

java::lang::Long* Event::getId()
{
    return id;
}

java::util::Date* Event::getInstantiationtime()
{
    return instantiationtime;
}

java::util::Date* Event::getCreationtime()
{
    return creationtime;
}

std::string Event::getContext()
{
    return context;
}

std::string Event::getName()
{
    return name;
}

java::util::Date* Event::getExpirationtime()
{
    return expirationtime;
}

com::tibbo::aggregate::common::datatable::DataTable* Event::getAcknowledgementsTable()
{
    try {
        return ::com::tibbo::aggregate::common::datatable::DataTableConversion::beansToTable(acknowledgements, ::com::tibbo::aggregate::common::event::Acknowledgement::FORMAT(), false);
    } catch (::com::tibbo::aggregate::common::datatable::DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

com::tibbo::aggregate::common::datatable::DataTable* Event::getEnrichmentsTable()
{
    try {
        return ::com::tibbo::aggregate::common::datatable::DataTableConversion::beansToTable(enrichments, ::com::tibbo::aggregate::common::event::Enrichment::FORMAT(), false);
    } catch (::com::tibbo::aggregate::common::datatable::DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::setAcknowledgementsTable(::com::tibbo::aggregate::common::datatable::DataTable* data)
{
    try {
        acknowledgements = ::com::tibbo::aggregate::common::datatable::DataTableConversion::beansFromTable(data, ::com::tibbo::aggregate::common::event::Acknowledgement::class_(), ::com::tibbo::aggregate::common::event::Acknowledgement::FORMAT(), false);
    } catch (::com::tibbo::aggregate::common::datatable::DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::setEnrichmentsTable(::com::tibbo::aggregate::common::datatable::DataTable* data)
{
    try {
        enrichments = ::com::tibbo::aggregate::common::datatable::DataTableConversion::beansFromTable(data, ::com::tibbo::aggregate::common::event::Enrichment::class_(), ::com::tibbo::aggregate::common::event::Enrichment::FORMAT(), false);
    } catch (::com::tibbo::aggregate::common::datatable::DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::addAcknowledgement(::com::tibbo::aggregate::common::event::Acknowledgement* ack)
{
    acknowledgements)->add(ack));
}

java::util::List* Event::getAcknowledgements()
{
    return acknowledgements;
}

void Event::addEnrichment(::com::tibbo::aggregate::common::event::Enrichment* enrichment)
{
    enrichments)->add(enrichment));
}

java::util::List* Event::getEnrichments()
{
    return enrichments;
}

void Event::setId(::java::lang::Long* id)
{
    this->id = id;
}

void Event::setCreationtime(::java::util::Date* creationtime)
{
    this->creationtime = creationtime;
}

void Event::setName(std::string* name)
{
    this->name = name;
}

void Event::setContext(std::string* context)
{
    this->context = context;
}

void Event::setExpirationtime(::java::util::Date* expirationtime)
{
    this->expirationtime = expirationtime;
}

void Event::setData(::com::tibbo::aggregate::common::datatable::DataTable* data)
{
    this->data = data;
}

void Event::setListener(::java::lang::Integer* listener)
{
    this->listener = listener;
}

void Event::setLevel(int level)
{
    this->level = level;
}

void Event::setOriginator(void* originator)
{
    this->originator = originator;
}

com::tibbo::aggregate::common::datatable::DataTable* Event::getData()
{
    return data;
}

java::lang::Integer* Event::getListener()
{
    return listener;
}

int Event::getLevel()
{
    return level;
}

com::tibbo::aggregate::common::security::Permissions* Event::getPermissions()
{
    return permissions;
}

void Event::setPermissions(::com::tibbo::aggregate::common::security::Permissions* permissions)
{
    this->permissions = permissions;
}

void* Event::getOriginator()
{
    return originator;
}

int Event::getCount()
{
    return count;
}

void Event::setCount(int count)
{
    this->count = count;
}

std::string Event::getDeduplicationId()
{
    return deduplicationId;
}

void Event::setDeduplicationId(std::string* deduplicationId)
{
    this->deduplicationId = deduplicationId;
}

Event* Event::clone()
{
    try {
        auto clone = java_cast< Event* >(super::clone());
        clone)->acknowledgements = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(acknowledgements));
        clone)->enrichments = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(enrichments));
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

int Event::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((id == 0) ? int(0) : id)->hashCode());
    return result;
}

bool Event::equals(void* obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< Event* >(obj);
    if(id == 0 || other)->id == 0) {
        return false;
    } else if(!id)->equals(other)->id)))
        return false;

    return true;
}

std::string Event::toString()
{
    return std::stringBuilder().append(u"Event '"_j)->append(name)
        ->append(u"' in context '"_j)
        ->append(context)
        ->append(u"': "_j)
        ->append((data != 0 ? data)->dataAsString() : u"no data"_j))
        ->append((listener != 0 ? std::stringBuilder().append(u", for listener '"_j)->append(listener))
            ->append(u"'"_j)->toString() : u""_j))->toString();
}



java::lang::Class* Event::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.data.Event", 37);
    return c;
}

java::lang::Class* Event::getClass0()
{
    return class_();
}
  */
