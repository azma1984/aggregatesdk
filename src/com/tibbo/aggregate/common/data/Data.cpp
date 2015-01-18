#include "data/data.h"
#include <sstream>

Data::Data() : id(0)
{
}

Data::Data(const std::vector<char> &data) : id(0)
{
	this->data = data;
}

Data::Data(const std::string &name, const std::vector<char> &data) : id(0)
{
	this->data = data;
	this->name = name;
}

void Data::setPreview(const std::vector<char> &preview)
{
	this->preview = preview;
}

void Data::setId(long id)
{
	this->id = id;
}

void Data::setData(const std::vector<char> &data)
{
	this->data = data;
}

void Data::setBlob(const std::vector<char> &blob)
{
	setData(blob);
}

void Data::setName(const std::string &name)
{
	this->name = name;
}

std::vector<char> Data::getPreview()  
{
	return this->preview;
}

std::string Data::getName()
{
	return this->name;
}

long Data::getId()
{
	return this->id;
}

std::vector<char> Data::getData()
{
	return this->data;
}

std::vector<char> Data::getBlob()
{
	return this->data;
}

std::map<std::string, boost::shared_ptr<AgObject>> Data::getAttachments()
{
	return this->attachments;
}

int Data::checksum(const std::vector<char> &bytes)
{
	int sum = 0;
    for (std::vector<char>::const_iterator it = bytes.begin(); it!= bytes.end(); ++it) {
		sum += *it;
    }
	
    return sum;
}

std::vector<char> Data::fetchData(ContextManager* cm, CallerController* cc)
{
    if (!data.empty())
    {
		return getData();
    }
    
    if (getId() == 0)
    {
        return std::vector<char>();
    }
    
    if (cm == NULL)
    {
        return std::vector<char>();
    }
    
	//TODO: DataTable
    /*DataTable dt = cm.get(Contexts::CTX_UTILITIES, cc).callFunction(UtilitiesContextConstants.F_GET_DATA, cc, getId());
    data = dt.rec().getData(UtilitiesContextConstants.FOF_GET_DATA_DATA).getData();    

    return data;*/
    return std::vector<char>();
}

std::string Data::toDetailedString()
{
    std::stringstream ss;
	std::locale cloc("C");
	ss.imbue(cloc);

	ss << "Data [id: " << id <<", name: " <<(!name.empty() ? name : "null")
       <<", preview: len=" << preview.size() <<" checksum=" << checksum(preview) <<", data: len=" << data.size() << " checksum=" << checksum(data) <<"]";
	   
	return ss.str();
}

std::string Data::toString()
{
    std::stringstream ss;
    std::locale cloc("C");
    ss.imbue(cloc);

    ss << "Data [id: " << id <<", name: " <<(!name.empty() ? name : "null")
       <<", preview: len=" << preview.size() <<", data: len=" <<data.size() <<"]";

    return ss.str();
}

std::string Data::toCleanString()
{
    //TODO:
    //return data != null ? new String(data, Charset.forName("ISO-8859-1")) : "null";
    return std::string();
}


void Data::setAttachments(std::map<std::string, boost::shared_ptr<AgObject> > &attachments)
{
	this->attachments = attachments;
}

Data* Data::clone() const
{
	Data* cl = new Data();
 
  //  try
  //  {
  //    cl = (Data) super.clone();
  //  }
  //  catch (CloneNotSupportedException ex)
  //  {
  //    throw new IllegalStateException(ex.getMessage(), ex);
  //  }
	
    cl->id = id;
    cl->preview = preview;// (byte[]) CloneUtils.deepClone(preview);
    cl->data = data;//(byte[]) CloneUtils.deepClone(data);
    //TODO: копирование std::map<std::string, void*> attachments;

    return cl;
}
	
bool Data::equals(Data *data)
{
    return (this->id == data->id) && (this->name == data->name) && (this->preview == data->preview) && (this->data == data->data);
}
