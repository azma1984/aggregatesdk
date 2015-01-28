#ifndef _DeviceAssetDefinition_H_
#define _DeviceAssetDefinition_H_

#include "datatable/AggreGateBean.h"
#include "datatable/TableFormat.h"
#include "Cres.h"
#include "datatable/DataTableBindingProvider.h"
#include "util/Comparable.h"
//#include "Expression/Function/functions.h";
#include <string>
#include <list>
#include <sstream>
#include <iostream>
#include <boost/shared_ptr.hpp>



class DeviceAssetDefinition: public AggreGateBean, public Comparable
{
private:
    static const std::string FIELD_ID;
    static const std::string FIELD_DESCRIPTION;
    static const std::string FIELD_ENABLED;
    static const std::string FIELD_CHILDREN;
    static TableFormatPtr FORMAT;
    std::string id;
    std::string description;
    bool enabled;
	
    std::list<DeviceAssetDefinitionPtr>  children;

 public:
    std::string getId();
    void setId(const std::string& id);
    std::string getDescription();
    void setDescription(const std::string& description);
    bool isEnabled();
    void setEnabled(bool enabled);
    std::list<DeviceAssetDefinitionPtr> getChildren();
    void setChildren(std::list<DeviceAssetDefinitionPtr>  children);
    void addSubgroup(DeviceAssetDefinitionPtr child);
    int compareTo(DeviceAssetDefinitionPtr other);
    std::string toString();
    int hashCode();
    bool equals(DeviceAssetDefinitionPtr obj);
	void Init();

    DeviceAssetDefinition();
    DeviceAssetDefinition(DataRecordPtr data);
    DeviceAssetDefinition(const std::string& id, const std::string& description);

};

#endif