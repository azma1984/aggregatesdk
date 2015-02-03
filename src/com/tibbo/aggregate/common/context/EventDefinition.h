#ifndef EventDefinitionH
#define EventDefinitionH

#define BOOST_THREAD_USE_LIB
#include "AbstractEntityDefinition.h"

#include "datatable/TableFormat.h"
#include "event/PersistenceOptions.h"
#include "security/Permissions.h"
#include "util/Cloneable.h"
//todo - class stub
class EventDefinition : public AbstractEntityDefinition, public Cloneable
{

private:
	void init(const std::string &name, TableFormatPtr format, const std::string & description);

    TableFormatPtr format;
	bool hidden;
	PermissionsPtr permissions;
    long expirationPeriod;
	int level;
	PermissionsPtr firePermissions;
	bool synchronous;
	PersistenceOptionsPtr persistenceOptions;
	int  memoryStorageSize;

public:
	void setFormat(TableFormatPtr format);
	void setHidden(bool hidden);
	void setPermissions(PermissionsPtr perms);
	void setExpirationPeriod(long expirationPeriod);
	void setLevel(int level);
	void setSynchronous(bool synchronous);
	TableFormatPtr getFormat();
    bool isHidden();
    PermissionsPtr getPermissions();
    long getExpirationPeriod();
    int getLevel();
    PermissionsPtr getFirePermissions();
    void setFirePermissions(PermissionsPtr firePermissions);
	bool isSynchronous();
	PersistenceOptionsPtr getPersistenceOptions();
	int  getMemoryStorageSize();
    void setMemoryStorageSize(int  memoryStorageSize);
    EventDefinition* clone() const;
    int compareTo(EventDefinition* d);
    int hashCode();
    bool equals(AgObjectPtr obj);

public:
    EventDefinition(const std::string & name, TableFormatPtr format);
    EventDefinition(const std::string & name, TableFormatPtr format, const std::string & description);
    EventDefinition(const std::string & name, TableFormatPtr format, const std::string & description, const std::string & group);

};

#endif
