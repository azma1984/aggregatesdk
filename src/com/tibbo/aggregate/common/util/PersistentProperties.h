#ifndef PersistentPropertiesH
#define PersistentPropertiesH

class PersistentProperties
{

public:
    PersistentProperties() {}
	
    std::map<std::string, DataTable> getProperties()
	{
	}
    DataTable getProperty(const std::string& name)
	{
	}
	
private:
    std::map<std::string, DataTable> properties;

};

#endif
