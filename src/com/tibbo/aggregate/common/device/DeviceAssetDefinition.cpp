#include "device/DeviceAssetDefinition.h"


DeviceAssetDefinition::DeviceAssetDefinition()
{
    AggreGateBean(FORMAT());
    this->enabled = false;
}

DeviceAssetDefinition::DeviceAssetDefinition(boost::shared_ptr<DataRecord> data)
{
    AggreGateBean(FORMAT(), data);
    this->enabled = false;
}

DeviceAssetDefinition::DeviceAssetDefinition(const std::string& id, const std::string& description)
{
    AggreGateBean(FORMAT());
    this->enabled = false;
    this->id = id;
    this->description = description;
}

static boost::shared_ptr<TableFormat> DeviceAssetDefinition::FORMAT()
{

}

std::string DeviceAssetDefinition::getId()
{
    return id;
}

void DeviceAssetDefinition::setId(const std::string& id)
{
    this->id = id;
}

std::string DeviceAssetDefinition::getDescription()
{
    return description;
}

void DeviceAssetDefinition::setDescription(const std::string& description)
{
    this->description = description;
}

bool DeviceAssetDefinition::isEnabled()
{
    return enabled;
}

void DeviceAssetDefinition::setEnabled(bool enabled)
{
    this->enabled = enabled;
}

std::list<ptrDeviceAssetDefinition> DeviceAssetDefinition::getChildren()
{
    return children;
}

void DeviceAssetDefinition::setChildren(std::list<ptrDeviceAssetDefinition>  children)
{
    if (children)
        this->children = children;
}

void DeviceAssetDefinition::addSubgroup(ptrDeviceAssetDefinition child)
{
    getChildren()->add(children);
}

int DeviceAssetDefinition::compareTo(ptrDeviceAssetDefinition other)
{
    return description->compareTo(other->description);
}

std::string DeviceAssetDefinition::toString()
{
    return "GroupDefinition [id=" + id + ", description=" + description + ", enabled=" + enabled + ", children=" + (children != null ? children.size() : 0) + "]";
}

//    int DeviceAssetDefinition::hashCode()
//{
//    final int prime = 31;
//    int result = 1;
//    result = prime * result + ((description == null) ? 0 : description.hashCode());
//    return result;
//}

bool DeviceAssetDefinition::equals(DeviceAssetDefinition* obj)
{
    if (this == obj)
          return true;
        if (obj == null)
          return false;
        if (getClass() != obj.getClass())
          return false;
        DeviceAssetDefinition other = (DeviceAssetDefinition) obj;
        if (description == null)
        {
          if (other.description != null)
            return false;
        }
        else if (!description.equals(other.description))
          return false;
        return true;
}
