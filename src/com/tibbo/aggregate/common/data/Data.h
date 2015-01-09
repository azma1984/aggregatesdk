#ifndef _DATA_H_
#define _DATA_H_

#include <util/Cloneable.h>
#include <context/ContextManager.h>
#include <context/CallerController.h>

#include <string>
#include <vector>
#include <map>

class Data : public Cloneable
{

public:
	Data();  
	Data(std::vector<char>& data); 
	Data(std::string name, std::vector<char>& data);  

	void setPreview(std::vector<char>& preview); 
	void setId(long id);  
	void setData(std::vector<char>& data);
	void setBlob(std::vector<char>& blob);  
	void setName(std::string name);  

    std::vector<char> getPreview();
	std::string getName();
	long getId();
	std::vector<char> getData();
	std::vector<char> getBlob();
    std::map<std::string, void*> getAttachments();
	std::vector<char> fetchData(ContextManager* cm, CallerController* cc);// throws ContextException  
	std::string toDetailedString();
    void setAttachments(std::map<std::string, void*>& attachments);

	virtual Data* clone() const;
		
    operator std::string() const;   //  public String toString()
	std::string toCleanString();		
	bool operator ==(const Data& data) const;	
  
private:
	long id;
	std::string name;
	std::vector<char> preview;
	std::vector<char> data;
	//TODO: Object
    std::map<std::string, void*> attachments;
};

#endif
