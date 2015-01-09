#include "Event.h"

#include "datatable/DataTableException.h"

const long Event::DEFAULT_EVENT_EXPIRATION_PERIOD = 100 * TimeHelper.DAY_IN_MS; // Milliseconds



Event::Event(const std::string& context, boost::shared_ptr<EventDefinition> def, int level,
             boost::shared_ptr<DataTable> data, long id, boost::shared_ptr<Date> creationtime, boost::shared_ptr<Permissions> permissions)
{
    ctor(context,def,level,data,id,creationtime,permissions);
}

Event::Event(const std::string& context, const std::string& name, int level, boost::shared_ptr<DataTable> data, long id)
{
    ctor(context,name,level,data,id);
}

void Event::init()
{
    instantiationtime = new Date();
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

long Event::getId()
{
    return id;
}

boost::shared_ptr<Date> Event::getInstantiationtime()
{
    return instantiationtime;
}

boost::shared_ptr<Date> Event::getCreationtime()
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

boost::shared_ptr<Date> Event::getExpirationtime()
{
    return expirationtime;
}

boost::shared_ptr<DataTable> Event::getAcknowledgementsTable()
{
    try {
        return DataTableConversion::beansToTable(acknowledgements, Acknowledgement::FORMAT, false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

boost::shared_ptr<DataTable> Event::getEnrichmentsTable()
{
    try {
        return DataTableConversion::beansToTable(enrichments, Enrichment::FORMAT, false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::setAcknowledgementsTable(boost::shared_ptr<DataTable> data)
{
    try {
        acknowledgements = DataTableConversion::beansFromTable(data, Acknowledgement::class_(), Acknowledgement::FORMAT, false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::setEnrichmentsTable(boost::shared_ptr<DataTable> data)
{
    try {
        enrichments = DataTableConversion::beansFromTable(data, Enrichment::class_(), Enrichment::FORMAT, false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::addAcknowledgement(boost::shared_ptr<Acknowledgement> ack)
{
    acknowledgements.push_back(ack);
}

std::list<boost::shared_ptr<Acknowledgement>> Event::getAcknowledgements()
{
    return this->acknowledgements;
}

void Event::addEnrichment(boost::shared_ptr<Enrichment> enrichment)
{
    enrichments.push_back(enrichment);
}

std::list<boost::shared_ptr<Enrichment>> Event::getEnrichments()
{
    return enrichments;
}

void Event::setId(long id)
{
    this->id = id;
}

void Event::setCreationtime(boost::shared_ptr<Date> creationtime)
{
    this->creationtime = creationtime;
}

void Event::setName(const std::string& name)
{
    this->name = name;
}

void Event::setContext(const std::string& context)
{
    this->context = context;
}

void Event::setExpirationtime(boost::shared_ptr<Date> expirationtime)
{
    this->expirationtime = expirationtime;
}

void Event::setData(boost::shared_ptr<DataTable> data)
{
    this->data = data;
}

void Event::setListener(int listener)
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

boost::shared_ptr<DataTable> Event::getData()
{
    return data;
}

int Event::getListener()
{
    return listener;
}

int Event::getLevel()
{
    return level;
}

boost::shared_ptr<Permissions> Event::getPermissions()
{
    return this->permissions;
}

void Event::setPermissions(boost::shared_ptr<Permissions> permissions)
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

void Event::setDeduplicationId(const std::string& deduplicationId)
{
    this->deduplicationId = deduplicationId;
}

//TODO: копирование списков
boost::shared_ptr<Event> Event::clone()
{
//    try {
        boost::shared_ptr<Event> clone = new Event(this);
        /*
        clone->acknowledgements = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(acknowledgements));
        clone->enrichments = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(enrichments));
        */
        return clone;
//    } catch (::java::lang::CloneNotSupportedException* ex) {
//        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
//    }
}
//TODO:
//int Event::hashCode()
//{
//    auto const prime = int(31);
//    auto result = int(1);
//    result = prime * result + ((id == 0) ? int(0) : id)->hashCode());
//    return result;
//}

bool Event::equals(Event* obj)
{
    if(this == obj)
        return true;

    if(obj == 0)
        return false;   

    if (id != obj->id)
        return false;

    return true;
}

std::string Event::toString()
{
    sdt::stringstream ss;

    ss <<"Event '" <<name <<"' in context '" <<context <<"': " <<(data != null ? data->dataAsString() : "no data")
      <<", for listener '" <<listener <<"'";

    return ss.str();
}
