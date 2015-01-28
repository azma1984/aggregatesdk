
#ifndef _PersistenceOptions_H_
#define _PersistenceOptions_H_

#include "event/PersistenceBinding.h"
#include "util/CloneUtils.h"
#include "util/cloneable.h"




class PersistenceOptions: public Cloneable
{

private:
	std::list<PersistenceBindingPtr>  persistenceBindings;
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
    PersistenceOptionsPtr clone();
	std::list< PersistenceBindingPtr >  getPersistenceBindings();
    void addPersistenceBinding(PersistenceBindingPtr binding);
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
	void setPersistenceBindings(std::list<PersistenceBindingPtr>  persistenceBindings);


    PersistenceOptions();

};

#endif 
