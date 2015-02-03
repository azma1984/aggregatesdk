#ifndef VariableDefinitionH
#define VariableDefinitionH

 #define BOOST_THREAD_USE_LIB
//#include "context/CompatibilityConverter.h"
//#include "context/VariableGetter.h"
//#include "context/VariableSetter.h"
//#include "datatable/DataTable.h"

#include "context/AbstractEntityDefinition.h"
#include "util/Cloneable.h"
#include "util/Comparable.h"
#include "util/Pointers.h"

#include <list>

//todo - class stub
class VariableDefinition : public AbstractEntityDefinition, public Cloneable , public Comparable
{

private:
    TableFormatPtr format;
    bool readable;
	bool writable;
    bool hidden;
	PermissionsPtr readPermissions;
	PermissionsPtr writePermissions;
	std::string helpId;
	VariableGetterPtr getter;
	VariableSetterPtr setter;
    bool allowUpdateEvents;
	long  changeEventsExpirationPeriod;
    bool localCachingEnabled;
    long  remoteCacheTime;
	AgClassPtr valueClass;
	std::list< CompatibilityConverterPtr >  compatibilityConverters;
	bool persistent;
	DataTablePtr defaultValue;


   void init(const std::string & name, TableFormatPtr format, bool readable, bool writable, const std::string & description);

public:
	void setFormat(TableFormatPtr format);
    void setReadable(bool readable);
	void setWritable(bool writable);
	void setHidden(bool hidden);
	void setGroup(const std::string & group);
	void setReadPermissions(PermissionsPtr readPermissions);
	void setWritePermissions(PermissionsPtr writePermissions);
	void setSetter(VariableSetterPtr setter);
	void setGetter(VariableGetterPtr getter);
	TableFormatPtr getFormat();
	bool isReadable();
	bool isWritable();
	bool isHidden();
    PermissionsPtr getReadPermissions();
	PermissionsPtr getWritePermissions();
    VariableSetterPtr getSetter();
	VariableGetterPtr getGetter();
	std::string getHelpId();
	void setHelpId(const std::string & helpId);
    AgClassPtr getValueClass();
    void setValueClass(AgClassPtr valueClass);
    long  getChangeEventsExpirationPeriod();
    void setChangeEventsExpirationPeriod(long  changeEventsExpirationPeriod);
    bool isLocalCachingEnabled();
    void setLocalCachingEnabled(bool valueCachingEnabled);
    long  getRemoteCacheTime();
	void setRemoteCacheTime(long  remoteCacheTime);
    DataTablePtr getDefaultValue();
    void setDefaultValue(DataTablePtr defaultValue);
    bool isPersistent();
    void setPersistent(bool persistent);
    bool isAllowUpdateEvents();
    void setAllowUpdateEvents(bool allowUpdateEvents);
	void addCompatibilityConverter(CompatibilityConverterPtr converter);
	std::list<CompatibilityConverterPtr>  getCompatibilityConverters();
    VariableDefinition *clone() const;
    int hashCode();
    bool equals(VariableDefinition* obj);
    int compareTo(VariableDefinition* d) const;

 	VariableDefinition(const std::string & name, TableFormatPtr format, bool readable, bool writable);
	VariableDefinition(const std::string & name, TableFormatPtr format, bool readable, bool writable, const std::string & description);
	VariableDefinition(const std::string & name, TableFormatPtr format, bool readable, bool writable, const std::string & description, const std::string & group);

};
#endif
