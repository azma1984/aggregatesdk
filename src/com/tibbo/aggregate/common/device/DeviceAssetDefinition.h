#pragma once

#include "datatable/AggreGateBean.h"
#include "datatable/TableFormat.h"
//#include <java/lang/Comparable.h"
#include <string>
#include <list>
#include <boost/shared_ptr.hpp>

class DeviceAssetDefinition : public AggreGateBean //, public ::java::lang::Comparable
{
private:
    static const std::string FIELD_ID_;
    static const std::string FIELD_DESCRIPTION_;
    static const std::string FIELD_ENABLED_;
    static const std::string FIELD_CHILDREN_;
    static boost::shared_ptr<TableFormat> FORMAT_;
    std::string id;
    std::string description;
    bool enabled;
    std::list<ptrDeviceAssetDefinition>  children;

public:
    std::string getId();
    void setId(const std::string& id);
    std::string getDescription();
    void setDescription(const std::string& description);
    bool isEnabled();
    void setEnabled(bool enabled);
    std::list<ptrDeviceAssetDefinition> getChildren();
    void setChildren(std::list<ptrDeviceAssetDefinition>  children);
    void addSubgroup(ptrDeviceAssetDefinition child);
    int compareTo(ptrDeviceAssetDefinition other);
    std::string toString();
//    int hashCode();
    bool equals(DeviceAssetDefinition* obj);

    DeviceAssetDefinition();
    DeviceAssetDefinition(boost::shared_ptr<DataRecord> data);
    DeviceAssetDefinition(const std::string& id, const std::string& description);

public:
    typedef boost::shared_ptr<DeviceAssetDefinition> ptrDeviceAssetDefinition;
    static boost::shared_ptr<TableFormat> FORMAT();
};
