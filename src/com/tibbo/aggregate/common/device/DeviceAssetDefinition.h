#ifndef _DeviceAssetDefinition_H_
#define _DeviceAssetDefinition_H_

#include "datatable/AggreGateBean.h"
#include "datatable/TableFormat.h"
#include "Cres.h"
#include "datatable/DataTableBindingProvider.h"
//#include "Expression/Function/functions.h";
#include <string>
#include <list>
#include <sstream>
#include <iostream>
#include <boost/shared_ptr.hpp>


class DeviceAssetDefinition: public AggreGateBean //, public ::java::lang::Comparable
{
private:
    static const std::string FIELD_ID;
    static const std::string FIELD_DESCRIPTION;
    static const std::string FIELD_ENABLED;
    static const std::string FIELD_CHILDREN;
    static boost::shared_ptr<TableFormat> FORMAT;
    std::string id;
    std::string description;
    bool enabled;
	
    std::list<boost::shared_ptr<DeviceAssetDefinition>>  children;

 public:
    std::string getId();
    void setId(const std::string& id);
    std::string getDescription();
    void setDescription(const std::string& description);
    bool isEnabled();
    void setEnabled(bool enabled);
    std::list<boost::shared_ptr<DeviceAssetDefinition>> getChildren();
    void setChildren(std::list<boost::shared_ptr<DeviceAssetDefinition>>  children);
    void addSubgroup(boost::shared_ptr<DeviceAssetDefinition> child);
    int compareTo(boost::shared_ptr<DeviceAssetDefinition> other);
    std::string toString();
    int hashCode();
    bool equals(DeviceAssetDefinition* obj);
	void Init();

    DeviceAssetDefinition();
    DeviceAssetDefinition(boost::shared_ptr<DataRecord> data);
    DeviceAssetDefinition(const std::string& id, const std::string& description);

};

#endif