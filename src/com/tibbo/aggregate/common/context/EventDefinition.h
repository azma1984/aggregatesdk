#ifndef EventDefinitionH
#define EventDefinitionH


#include "AbstractEntityDefinition.h"

#include "datatable/TableFormat.h"
//#include "event/PersistenceOptions.h"
//#include "security/Permissions.h"
//todo - class stub
class EventDefinition : public AbstractEntityDefinition
{


private:
	void init(const std::string &name, TableFormat* format, const std::string & description);
	/*
    TableFormat* format;
    bool hidden;
    Permissions* permissions;
    long expirationPeriod;
    int level;
    Permissions* firePermissions;
    bool synchronous;
    PersistenceOptions* persistenceOptions;
    int  memoryStorageSize;



 

public:
    void setFormat(TableFormat* format);
    void setHidden(bool hidden);
    void setPermissions(Permissions* perms);
    void setExpirationPeriod(long expirationPeriod);
    void setLevel(int level);
    void setSynchronous(bool synchronous);
    TableFormat* getFormat();
    bool isHidden();
    Permissions* getPermissions();
    long getExpirationPeriod();
    int getLevel();
    Permissions* getFirePermissions();
    void setFirePermissions(Permissions* firePermissions);
    bool isSynchronous();
    PersistenceOptions* getPersistenceOptions();
    int  getMemoryStorageSize();
    void setMemoryStorageSize(int  memoryStorageSize);
    EventDefinition* clone();
    int compareTo(EventDefinition* d);
    int hashCode();
    bool equals(void* obj);

 */

public:
    EventDefinition(const std::string & name, TableFormat* format);
    EventDefinition(const std::string & name, TableFormat* format, const std::string & description);
    EventDefinition(const std::string & name, TableFormat* format, const std::string & description, const std::string & group);


};

#endif
