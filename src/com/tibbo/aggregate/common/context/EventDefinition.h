#ifndef EventDefinitionH
#define EventDefinitionH


#include "AbstractEntityDefinition.h"

#include "datatable/TableFormat.h"
#include "event/PersistenceOptions.h"
//#include "security/Permissions.h"
//todo - class stub
class EventDefinition : public AbstractEntityDefinition
{


private:
	void init(const std::string &name, boost::shared_ptr<TableFormat> format, const std::string & description);
	/*
    boost::shared_ptr<TableFormat> format;
    bool hidden;
    boost::shared_ptr<Permissions> permissions;
    long expirationPeriod;
    int level;
    boost::shared_ptr<Permissions> firePermissions;
    bool synchronous;
    PersistenceOptions* persistenceOptions;
    int  memoryStorageSize;




     */
public:
   /*
	void setFormat(boost::shared_ptr<TableFormat> format);   */
	void setHidden(bool hidden);
	void setPermissions(boost::shared_ptr<Permissions> perms);
	void setExpirationPeriod(long expirationPeriod);
	void setLevel(int level);
	void setSynchronous(bool synchronous);  /*
	boost::shared_ptr<TableFormat> getFormat();
    bool isHidden();
    boost::shared_ptr<Permissions> getPermissions();
    long getExpirationPeriod();
    int getLevel();
    boost::shared_ptr<Permissions> getFirePermissions();
    void setFirePermissions(boost::shared_ptr<Permissions> firePermissions);
	bool isSynchronous();  */
	PersistenceOptions* getPersistenceOptions();/*
	int  getMemoryStorageSize();
    void setMemoryStorageSize(int  memoryStorageSize);
    EventDefinition* clone();
    int compareTo(EventDefinition* d);
    int hashCode();
    bool equals(void* obj);

 */

public:
    EventDefinition(const std::string & name, boost::shared_ptr<TableFormat> format);
    EventDefinition(const std::string & name, boost::shared_ptr<TableFormat> format, const std::string & description);
    EventDefinition(const std::string & name, boost::shared_ptr<TableFormat> format, const std::string & description, const std::string & group);


};

#endif
