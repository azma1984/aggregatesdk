#pragma once

#include "util/Cloneable.h"
#include "util/AgObject.h"
#include <boost/shared_ptr.hpp>
//#include <context/ContextManager.h>
//#include <context/CallerController.h>

#include <string>
#include <vector>
#include <map>

class Data : public Cloneable, public AgObject
{

public:
	Data();  
    Data(const std::vector<char> &data);
    Data(const std::string &name, const std::vector<char> &data);

    void setPreview(const std::vector<char> &preview);
	void setId(long id);  
    void setData(const std::vector<char> &data);
    void setBlob(const std::vector<char> &blob);
    void setName(const std::string &name);

    std::vector<char> getPreview();
	std::string getName();
	long getId();
	std::vector<char> getData();
	std::vector<char> getBlob();
    std::map<std::string,  boost::shared_ptr<AgObject>> getAttachments();

    //todo
    //std::vector<char> fetchData(ContextManager* cm, CallerController* cc);// throws ContextException

    std::string toDetailedString();
    std::string toString();
    std::string toCleanString();

    void setAttachments(std::map<std::string, boost::shared_ptr<AgObject> > &attachments);

    virtual Data* clone() const;
    bool equals(Data *data);
		
    /*bool operator ==(const Data& data) const;*/
  
private:
	long id;
	std::string name;
	std::vector<char> preview;
	std::vector<char> data;
    std::map<std::string, boost::shared_ptr<AgObject> > attachments;

    int checksum(const std::vector<char> &bytes);

};
