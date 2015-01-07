// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/PersistenceOptions.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"



class com::tibbo::aggregate::common::event::PersistenceOptions
    
    , public ::java::lang::Cloneable
{

public:
    typedef void super;

private:
    std::list  persistenceBindings;
    bool dedicatedTablePreferred;
    bool perContextTablePreferred;
    bool persistContext;
    bool persistName;
    bool persistExpirationtime;
    bool persistLevel;
    bool persistPermissions;
    bool persistCount;
    bool persistAcknowledgements;
    bool persistEnrichments;
    bool persistFormat;
    bool persistData;

public:
    PersistenceOptions* clone();
    std::list  getPersistenceBindings();
    void addPersistenceBinding(PersistenceBinding* binding);
    bool isDedicatedTablePreferred();
    void setDedicatedTablePreferred(bool dedicatedTablePreferred);
    bool isPerContextTablePreferred();
    void setPerContextTablePreferred(bool perContextTablePreferred);
    bool isPersistContext();
    void setPersistContext(bool persistContext);
    bool isPersistName();
    void setPersistName(bool persistName);
    bool isPersistExpirationtime();
    void setPersistExpirationtime(bool persistExpirationtime);
    bool isPersistLevel();
    void setPersistLevel(bool persistLevel);
    bool isPersistPermissions();
    void setPersistPermissions(bool persistPermissions);
    bool isPersistCount();
    void setPersistCount(bool persistCount);
    bool isPersistAcknowledgements();
    void setPersistAcknowledgements(bool persistAcknowledgements);
    bool isPersistEnrichments();
    void setPersistEnrichments(bool persistEnrichments);
    bool isPersistFormat();
    void setPersistFormat(bool persistFormat);
    bool isPersistData();
    void setPersistData(bool persistData);
    void setPersistenceBindings(std::list  persistenceBindings);

    // Generated
    PersistenceOptions();
protected:
    void ctor();
    PersistenceOptions(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
