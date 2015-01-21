#include "device/DeviceAssetDefinition.h"
  

 boost::shared_ptr<TableFormat> DeviceAssetDefinition::FORMAT;


  const std::string DeviceAssetDefinition::FIELD_ID = "id";
  const std::string DeviceAssetDefinition::FIELD_DESCRIPTION = "description";
  const std::string DeviceAssetDefinition::FIELD_ENABLED = "enabled";
  const std::string DeviceAssetDefinition::FIELD_CHILDREN = "children";

DeviceAssetDefinition::DeviceAssetDefinition():AggreGateBean(FORMAT)
{   
	Init();
    
    this->enabled = false;
}

DeviceAssetDefinition::DeviceAssetDefinition(boost::shared_ptr<DataRecord> data):AggreGateBean(FORMAT, data)
{  
	Init();
    
    this->enabled = false;
}

DeviceAssetDefinition::DeviceAssetDefinition(const std::string& id, const std::string& description):AggreGateBean(FORMAT)
{  
	Init();
    
    this->enabled = false;
	//DeviceAssetDefinition();
    this->id = id;
    this->description = description;
}



void DeviceAssetDefinition::Init()
{
   FORMAT =  boost::shared_ptr<TableFormat>(new TableFormat());
 
   FORMAT->setUnresizable(true);
    
   FORMAT->addField("<" + FIELD_ID + "><S><F=HRK>");
   FORMAT->addField("<" + FIELD_DESCRIPTION + "><S><F=R><D=" + Cres::get()->getString("description") + ">");
   FORMAT->addField("<" + FIELD_ENABLED + "><B><A=1><D=" + Cres::get()->getString("enabled") + ">");
    
   FORMAT->addField(FieldFormat::create("<" + FIELD_CHILDREN + "><T><F=N><D=" + Cres::get()->getString("devNestedAssets") + ">"));
    
  // todo - Functions::AGGREGATE define is "Expression/Function/functions.h"
//   FORMAT->setNamingExpression(Functions::AGGREGATE + "({}, \"{env/previous} + ({" + FIELD_ENABLED + "} ? 1 : 0)\", 0) + '/' + {#" + DefaultReferenceResolver::RECORDS + "}");
    
   std::string ref = FIELD_CHILDREN + "#" + DataTableBindingProvider::PROPERTY_ENABLED;
   std::string exp = "{" + FIELD_ENABLED + "}";
   FORMAT->addBinding(ref, exp);
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

std::list<boost::shared_ptr<DeviceAssetDefinition>> DeviceAssetDefinition::getChildren()
{
    return children;
}

void DeviceAssetDefinition::setChildren(std::list<boost::shared_ptr<DeviceAssetDefinition>>  children)
{
  this->children = children;
}

void DeviceAssetDefinition::addSubgroup(boost::shared_ptr<DeviceAssetDefinition> child)
{
   getChildren().push_back(child);
}

int DeviceAssetDefinition::compareTo(boost::shared_ptr<DeviceAssetDefinition> other)
{
    return description.compare(other->description);
}

std::string DeviceAssetDefinition::toString()
{
    std::stringstream ss;
    ss <<"GroupDefinition [id=" <<id <<", description=" <<description <<", enabled=" <<enabled
       <<", children=" <</*(children != NULL ? children.size() : 0)*/children.size() <<"]";

    return ss.str();
}

int DeviceAssetDefinition::hashCode()
{
    const int prime = 31;
    int result = 1;                                               //todo - How to calculate a string hashCode?
    result = prime * result + ((description.empty() == true) ? 0 : 0xFFF/*description.hashCode()*/);
    return result;
}

bool DeviceAssetDefinition::equals(DeviceAssetDefinition* obj)
{
    if (this == obj)
        return true;

    if (obj == NULL)
        return false;

    DeviceAssetDefinition* other = (DeviceAssetDefinition*)(obj);
    if (other == NULL)
        return false;

    if (other->description != description)
        return false;

    return true;
}