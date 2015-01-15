// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/PersistenceOptions.java
#include <com/tibbo/aggregate/common/event/PersistenceOptions.h"

#include <com/tibbo/aggregate/common/event/PersistenceBinding.h"
#include <com/tibbo/aggregate/common/util/CloneUtils.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Collections.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"

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

com::tibbo::aggregate::common::event::PersistenceOptions::PersistenceOptions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::PersistenceOptions::PersistenceOptions()
    : PersistenceOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::event::PersistenceOptions::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::event::PersistenceOptions::init()
{
    persistContext = true;
    persistName = true;
    persistExpirationtime = true;
    persistLevel = true;
    persistPermissions = true;
    persistCount = true;
    persistAcknowledgements = true;
    persistEnrichments = true;
    persistFormat = true;
    persistData = true;
}

com::tibbo::aggregate::common::event::PersistenceOptions* com::tibbo::aggregate::common::event::PersistenceOptions::clone()
{
    try {
        auto clone = java_cast< PersistenceOptions* >(super::clone());
        clone)->persistenceBindings = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(persistenceBindings));
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

java::util::List* com::tibbo::aggregate::common::event::PersistenceOptions::getPersistenceBindings()
{
    return persistenceBindings != 0 ? ::java::util::Collections::unmodifiableList(persistenceBindings) : static_cast< std::list  >(0);
}

void com::tibbo::aggregate::common::event::PersistenceOptions::addPersistenceBinding(PersistenceBinding* binding)
{
    if(persistenceBindings == 0) {
        persistenceBindings = new ::java::util::LinkedList();
    }
    persistenceBindings)->add(binding));
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isDedicatedTablePreferred()
{
    return dedicatedTablePreferred;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setDedicatedTablePreferred(bool dedicatedTablePreferred)
{
    this->dedicatedTablePreferred = dedicatedTablePreferred;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPerContextTablePreferred()
{
    return perContextTablePreferred;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPerContextTablePreferred(bool perContextTablePreferred)
{
    this->perContextTablePreferred = perContextTablePreferred;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistContext()
{
    return persistContext;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistContext(bool persistContext)
{
    this->persistContext = persistContext;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistName()
{
    return persistName;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistName(bool persistName)
{
    this->persistName = persistName;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistExpirationtime()
{
    return persistExpirationtime;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistExpirationtime(bool persistExpirationtime)
{
    this->persistExpirationtime = persistExpirationtime;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistLevel()
{
    return persistLevel;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistLevel(bool persistLevel)
{
    this->persistLevel = persistLevel;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistPermissions()
{
    return persistPermissions;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistPermissions(bool persistPermissions)
{
    this->persistPermissions = persistPermissions;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistCount()
{
    return persistCount;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistCount(bool persistCount)
{
    this->persistCount = persistCount;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistAcknowledgements()
{
    return persistAcknowledgements;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistAcknowledgements(bool persistAcknowledgements)
{
    this->persistAcknowledgements = persistAcknowledgements;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistEnrichments()
{
    return persistEnrichments;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistEnrichments(bool persistEnrichments)
{
    this->persistEnrichments = persistEnrichments;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistFormat()
{
    return persistFormat;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistFormat(bool persistFormat)
{
    this->persistFormat = persistFormat;
}

bool com::tibbo::aggregate::common::event::PersistenceOptions::isPersistData()
{
    return persistData;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistData(bool persistData)
{
    this->persistData = persistData;
}

void com::tibbo::aggregate::common::event::PersistenceOptions::setPersistenceBindings(std::list  persistenceBindings)
{
    this->persistenceBindings = persistenceBindings;
}



java::lang::Class* com::tibbo::aggregate::common::event::PersistenceOptions::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.PersistenceOptions", 51);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::event::PersistenceOptions::getClass0()
{
    return class_();
}

