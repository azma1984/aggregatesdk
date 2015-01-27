#ifndef VariableDefinitionH_
#define VariableDefinitionH
 #define BOOST_THREAD_USE_LIB
#include "context/CompatibilityConverter.h"
#include "context/VariableGetter.h"
#include "context/VariableSetter.h"
//#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "security/Permissions.h"
#include "context/AbstractEntityDefinition.h"
#include "util/Cloneable.h"
#include "util/Comparable.h"

//todo - class stub
class VariableDefinition : public AbstractEntityDefinition//, public Cloneable , public Comparable
{

private:
    TableFormat* format;
    bool readable;
	bool writable;
      bool hidden;
	boost::shared_ptr<Permissions> readPermissions;
	boost::shared_ptr<Permissions> writePermissions;
	std::string helpId;
	VariableGetter* getter;
    VariableSetter* setter;
//    bool allowUpdateEvents;
//    long  changeEventsExpirationPeriod;
//    bool localCachingEnabled;
//    long  remoteCacheTime;
//    ::java::lang::Class* valueClass;
//    std::list  compatibilityConverters;
//    bool persistent;
	DataTable* defaultValue;


   void init(const std::string & name, boost::shared_ptr<TableFormat> format, bool readable, bool writable, const std::string & description);

public:
	void setFormat(TableFormat* format);
    void setReadable(bool readable);
	void setWritable(bool writable);
	void setHidden(bool hidden);
	void setGroup(const std::string & group);
	void setReadPermissions(boost::shared_ptr<Permissions> readPermissions);
	void setWritePermissions(boost::shared_ptr<Permissions> writePermissions);
	void setSetter(VariableSetter* setter);
	void setGetter(VariableGetter* getter);
	TableFormat* getFormat();
	bool isReadable();
	bool isWritable();
	bool isHidden();
    boost::shared_ptr<Permissions> getReadPermissions();
	boost::shared_ptr<Permissions> getWritePermissions();
    VariableSetter* getSetter();
	VariableGetter* getGetter();
	std::string getHelpId();
	void setHelpId(const std::string & helpId);
//    ::java::lang::Class* getValueClass();
//    void setValueClass(::java::lang::Class* valueClass);
//    long  getChangeEventsExpirationPeriod();
//    void setChangeEventsExpirationPeriod(long  changeEventsExpirationPeriod);
//    bool isLocalCachingEnabled();
//    void setLocalCachingEnabled(bool valueCachingEnabled);
//    long  getRemoteCacheTime();
//    void setRemoteCacheTime(long  remoteCacheTime);
	  DataTable* getDefaultValue();
	  void setDefaultValue(DataTable* defaultValue);
//    bool isPersistent();
//    void setPersistent(bool persistent);
//    bool isAllowUpdateEvents();
//    void setAllowUpdateEvents(bool allowUpdateEvents);
//    void addCompatibilityConverter(CompatibilityConverter* converter);
//    std::list  getCompatibilityConverters();
//    VariableDefinition* clone();
//    int hashCode();
//    bool equals(void* obj);
//    int compareTo(VariableDefinition* d);


	VariableDefinition(const std::string & name, boost::shared_ptr<TableFormat> format, bool readable, bool writable);
	VariableDefinition(const std::string & name, boost::shared_ptr<TableFormat> format, bool readable, bool writable, const std::string & description);
	VariableDefinition(const std::string & name, boost::shared_ptr<TableFormat> format, bool readable, bool writable, const std::string & description, const std::string & group);

};
#endif