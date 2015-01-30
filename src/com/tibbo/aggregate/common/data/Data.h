#ifndef DataH
#define DataH
#include "util/Pointers.h"
#include "util/Cloneable.h"
#include "util/AgObject.h"
#include <context/ContextManager.h>
#include <context/CallerController.h>

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
    std::map< std::string,  AgObjectPtr > getAttachments();

    std::vector<char> fetchData(ContextManagerPtr cm, CallerControllerPtr cc);

    std::string toDetailedString();
    std::string toString();
    std::string toCleanString();

    void setAttachments(std::map<std::string, AgObjectPtr > &attachments);

    virtual Data* clone() const;
    bool equals(Data* eq) const;
		
private:
	long id;
	std::string name;
	std::vector<char> preview;
	std::vector<char> data;
    std::map<std::string, AgObjectPtr > attachments;

    int checksum(const std::vector<char> &bytes);

};

#endif
