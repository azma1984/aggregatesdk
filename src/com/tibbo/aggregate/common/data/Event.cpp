#include "data/Event.h"
#include "util/TimeHelper.h"

//const long Event::DEFAULT_EVENT_EXPIRATION_PERIOD = 100 * TimeHelper::DAY_IN_MS; // Milliseconds


/*Event::Event(const std::string& context, EventDefinitionPtr def, int level,
             DataTablePtr data, long id, DatePtr creationtime, PermissionsPtr permissions)
{
    ctor(context,def,level,data,id,creationtime,permissions);
}

Event::Event(const std::string& context, const std::string& name, int level, DataTablePtr data, long id)
{
    ctor(context,name,level,data,id);
}

void Event::init()
{
    instantiationtime = new Date();
    data = 0;
	count = 1;
}

const long Event::DEFAULT_EVENT_EXPIRATION_PERIOD;

void Event::ctor()
{
    super::ctor();
    init();
    setCreationtime(new Date(::java::lang::System::currentTimeMillis()));
}

void Event::ctor(const std::string & context, EventDefinitionPtr def, int level, DataTablePtr data, long  id, DatePtr creationtime, PermissionsPtr permissions)
{
    ctor();
    init_(context, def)->getName(), level, data, id);
    this->name = def)->getName();
    this->permissions = permissions;
    if(creationtime != 0) {
        this->creationtime = creationtime;
    }
    if(def)->getExpirationPeriod() > 0) {
        setExpirationtime(new Date(::java::lang::System::currentTimeMillis() + def)->getExpirationPeriod()));
    }
}

void Event::ctor(const std::string & context, const std::string & name, int level, DataTablePtr data, long  id)
{
    ctor();
    init_(context, name, level, data, id);
}

void Event::init_(const std::string & context, const std::string & name, int level, DataTablePtr data, long  id)
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

DatePtr Event::getInstantiationtime()
{
    return instantiationtime;
}

DatePtr Event::getCreationtime()
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

DatePtr Event::getExpirationtime()
{
    return expirationtime;
}

DataTablePtr Event::getAcknowledgementsTable()
{
    try {
        return DataTableConversion::beansToTable(acknowledgements, Acknowledgement::FORMAT(), false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

DataTablePtr Event::getEnrichmentsTable()
{
    try {
        return DataTableConversion::beansToTable(enrichments, Enrichment::FORMAT(), false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::setAcknowledgementsTable(DataTablePtr data)
{
    try {
        acknowledgements = DataTableConversion::beansFromTable(data, Acknowledgement::class_(), Acknowledgement::FORMAT, false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::setEnrichmentsTable(DataTablePtr data)
{
    try {
        enrichments = DataTableConversion::beansFromTable(data, Enrichment::class_(), Enrichment::FORMAT, false);
    } catch (DataTableException& ex) {
        throw IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

void Event::addAcknowledgement(AcknowledgementPtr ack)
{
    acknowledgements.push_back(ack);
}

std::list<AcknowledgementPtr> Event::getAcknowledgements()
{
    return this->acknowledgements;
}

void Event::addEnrichment(EnrichmentPtr enrichment)
{
    enrichments.push_back(enrichment);
}

std::list<EnrichmentPtr> Event::getEnrichments()
{
    return enrichments;
}

void Event::setId(long id)
{
    this->id = id;
}

void Event::setCreationtime(DatePtr creationtime)
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

void Event::setExpirationtime(DatePtr expirationtime)
{
    this->expirationtime = expirationtime;
}

void Event::setData(DataTablePtr data)
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

void Event::setOriginator(AgObjectPtr originator)
{
    this->originator = originator;
}

DataTablePtr Event::getData()
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
  */
PermissionsPtr Event::getPermissions()
{
    return this->permissions;
}
/*
void Event::setPermissions(PermissionsPtr permissions)
{
    this->permissions = permissions;
}

AgObjectPtr Event::getOriginator()
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
EventPtr Event::clone()
{
//    try {
        EventPtr clone = new Event(this);
      
        //clone->acknowledgements = java_cast< std::list  >(CloneUtils::deepClone(acknowledgements));
        //clone->enrichments = java_cast< std::list  >(CloneUtils::deepClone(enrichments));
       
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

bool Event::equals(EventPtr obj)
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
*/
