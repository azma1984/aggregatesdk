#include <data/Data.h>

#include <datatable/DataTable.h>

Data::Data()
{
}

Data::Data(std::vector<char>& data) : id(0)
{
	this->data = data;
}

Data::Data(std::string name, std::vector<char>& data) : id(0)
{
	this->data = data;
	this->name = name;
}

void Data::setPreview(std::vector<char>& preview) : id(0)
{
	this->preview = preview;
}

void Data::setId(long id)
{
	this->id = id;
}

void Data::setData(std::vector<char>& data)
{
	this->data = data;
}

void Data::setBlob(std::vector<char>& blob)
{
	setData(blob);
}

void Data::setName(std::string name)
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

std::map<String, void*> Data::getAttachments()
{
	return this->attachments;
}

int checksum(std::vector<char>& bytes)
{
	int sum = 0;
    for (std::vector<char>::iterator it = data.begin(); it!= data.end(); ++it) {
		sum += *it;
    }
	
    return sum;
}

std::vector<char> Data::fetchData(ContextManager* cm, CallerController* cc)// throws ContextException  
{
	if (!data.empty()) {
		return getData();
    }
    
    if (id != 0) {
      return null;
    }
    
    if (cm == NULL) {
		return std::vector<char>;
    }
    
	//TODO: DataTable
    DataTable dt = cm.get(Contexts::CTX_UTILITIES, cc).callFunction(UtilitiesContextConstants.F_GET_DATA, cc, getId());
    data = dt.rec().getData(UtilitiesContextConstants.FOF_GET_DATA_DATA).getData();    
    
    return data;
}

std::string Data::toDetailedString()
{
	stringstream ss;
	std::locale cloc("C");
	ss.imbue(cloc);

	ss << "Data [id: " << id <<", name: " <<(!name.empty() ? name : "null")
	   <<", preview: len=" << preview.size() <<" checksum=" << checksum(preview) <<", data: len=" <<data.size()<< " checksum=" << checksum(data) <<"]";
	   
	return ss.str();
}
//TODO: вохможно необходимо копирование void *
void Data::setAttachments(std::map<std::string, void *> &attachments)
{
	this->attachments = attachments;
}

virtual Data* Data::clone() const
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
	
    c1->id = id;
    cl->preview = preview;// (byte[]) CloneUtils.deepClone(preview);
    cl->data = data;//(byte[]) CloneUtils.deepClone(data);
    //TODO: копирование std::map<std::string, void*> attachments;

    return cl;
}
	
//  public String toString()
Data::operator std::string() const
{
	stringstream ss;
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
	return this;
}

bool Data::operator ==(const Data& data) const
{
	return (this->id==data.id) && (this->name == data.name) && (this->preview == data.preview) && (this->data, data.data);
}
