#pragma once

#include "util/Cloneable.h"
#include <boost/shared_ptr.hpp>

class Event: public Cloneable
{

public:
  
    //static const long DEFAULT_EVENT_EXPIRATION_PERIOD; // Milliseconds
  
/*private:
    void init(const std::string& context, std::string& name, int level, boost::shared_ptr<DataTable> data, long id);
	
	long id;
    boost::shared_ptr<Date> instantiationtime;
    boost::shared_ptr<Date> creationtime;
    boost::shared_ptr<Date>  expirationtime;
    std::string context;
    std::string name;
    std::list<boost::shared_ptr<Acknowledgement>> acknowledgements;
    boost::shared_ptr<DataTable> data;
	int listener;
	int level;
    boost::shared_ptr<Permissions> permissions;
	int count = 1;
    std::list<boost::shared_ptr<Enrichment>> enrichments;
	//TODO:
	void* originator;
	std::string deduplicationId;
  
public:
    Event();
    Event(const std::string& context, boost::shared_ptr<EventDefinition> def, int level, boost::shared_ptr<DataTable> data, long id, Date creationtime, boost::shared_ptr<Permissions> permissions);
    Event(const std::string& context, const std::string& name, int level, boost::shared_ptr<DataTable> data, long id);
  
    boost::shared_ptr<Date> getInstantiationtime();
    boost::shared_ptr<Date> getCreationtime();
    std::string getContext();
    std::string getName();
    boost::shared_ptr<Date> getExpirationtime();
    boost::shared_ptr<DataTable> getAcknowledgementsTable();
    boost::shared_ptr<DataTable> getEnrichmentsTable();
    void setAcknowledgementsTable(boost::shared_ptr<DataTable> data);
    void setEnrichmentsTable(boost::shared_ptr<DataTable> data);
    void addAcknowledgement(boost::shared_ptr<Acknowledgement> ack);
    std::list<boost::shared_ptr<Acknowledgement>> getAcknowledgements();
    void addEnrichment(boost::shared_ptr<Enrichment> enrichment);
    std::list<boost::shared_ptr<Enrichment>> getEnrichments();

    void setId(long id);
    void setCreationtime(boost::shared_ptr<Date> creationtime);
    void setName(const std::string &name);
    void setContext(const std::string& context);
    void setExpirationtime(boost::shared_ptr<Date> expirationtime);
    void setData(boost::shared_ptr<DataTable> data);
    void setListener(int listener);
    void setLevel(int level);
    void setOriginator(void* originator);
    boost::shared_ptr<DataTable> getData();
    int getListener();
    int getLevel();
    boost::shared_ptr<Permissions> getPermissions();
    void setPermissions(boost::shared_ptr<Permissions> permissions);
    void* getOriginator();
    int getCount();
    void setCount(int count);
    std::string getDeduplicationId();
    void setDeduplicationId(String deduplicationId);
    boost::shared_ptr<Event> clone();
//    int hashCode();
    bool equals(boost::shared_ptr<this> obj);
    std::string toString();*/
};
