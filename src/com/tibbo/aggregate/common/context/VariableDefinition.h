#ifndef _VariableDefinition_H_
#define _VariableDefinition_H_

#include "context/CompatibilityConverter.h"
#include "context/VariableGetter.h"
#include "context/VariableSetter.h"
//#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "security/Permissions.h"
#include "context/AbstractEntityDefinition.h" 
//todo - class stub
class VariableDefinition //: public AbstractEntityDefinition
//    , public ::java::lang::Cloneable
//    , public ::java::lang::Comparable
{

private:
//    TableFormat* format;
//    bool readable;
//    bool writable;
//    bool hidden;
//    Permissions* readPermissions;
//    Permissions* writePermissions;
//    const std::string & helpId;
//    VariableGetter* getter;
//    VariableSetter* setter;
//    bool allowUpdateEvents;
//    long  changeEventsExpirationPeriod;
//    bool localCachingEnabled;
//    long  remoteCacheTime;
//    ::java::lang::Class* valueClass;
//    std::list  compatibilityConverters;
//    bool persistent;
//    DataTable* defaultValue;


   void init(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description);

public:
 //   void setFormat(TableFormat* format);
//    void setReadable(bool readable);
//    void setWritable(bool writable);
//    void setHidden(bool hidden);
//    void setGroup(const std::string & group);
//    void setReadPermissions(Permissions* readPermissions);
//    void setWritePermissions(Permissions* writePermissions);
//    void setSetter(VariableSetter* setter);
//    void setGetter(VariableGetter* getter);
//    TableFormat* getFormat();
//    bool isReadable();
//    bool isWritable();
//    bool isHidden();
//    Permissions* getReadPermissions();
//    Permissions* getWritePermissions();
//    VariableSetter* getSetter();
//    VariableGetter* getGetter();
//    const std::string & getHelpId();
//    void setHelpId(const std::string & helpId);
//    ::java::lang::Class* getValueClass();
//    void setValueClass(::java::lang::Class* valueClass);
//    long  getChangeEventsExpirationPeriod();
//    void setChangeEventsExpirationPeriod(long  changeEventsExpirationPeriod);
//    bool isLocalCachingEnabled();
//    void setLocalCachingEnabled(bool valueCachingEnabled);
//    long  getRemoteCacheTime();
//    void setRemoteCacheTime(long  remoteCacheTime);
//    DataTable* getDefaultValue();
//    void setDefaultValue(DataTable* defaultValue);
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


    VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable);
    VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description);
    VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description, const std::string & group);

   
//    int compareTo(void* arg0);


};
#endif