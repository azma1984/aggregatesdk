#ifndef EventH
#define EventH

#include "util/Cloneable.h"
#include <boost/shared_ptr.hpp>

class Event: public Cloneable
{
 private:
	void init(const std::string& context, std::string& name, int level, DataTablePtr data, long id);
	
	long id;
	DatePtr instantiationtime;
	DatePtr creationtime;
	DatePtr  expirationtime;
	std::string context;
	std::string name;
    std::list<AcknowledgementPtr> acknowledgements;
	DataTablePtr data;
	int listener;
	int level;
	PermissionsPtr permissions;
	int count;
	std::list<EnrichmentPtr> enrichments;
	//TODO:
	AgObjectPtr originator;
	std::string deduplicationId;

public:
    static const long DEFAULT_EVENT_EXPIRATION_PERIOD; // Milliseconds
    Event();
    Event(const std::string& context, EventDefinitionPtr def, int level, DataTablePtr data, long id, Date creationtime, PermissionsPtr permissions);
	Event(const std::string& context, const std::string& name, int level, DataTablePtr data, long id);
  
    DatePtr getInstantiationtime();
    DatePtr getCreationtime();
    std::string getContext();
	std::string getName();
    DatePtr getExpirationtime();
    DataTablePtr getAcknowledgementsTable();
    DataTablePtr getEnrichmentsTable();
    void setAcknowledgementsTable(DataTablePtr data);
	void setEnrichmentsTable(DataTablePtr data);
	void addAcknowledgement(AcknowledgementPtr ack);
	std::list<AcknowledgementPtr> getAcknowledgements();
	void addEnrichment(EnrichmentPtr enrichment);
    std::list<EnrichmentPtr> getEnrichments();

	void setId(long id);
    void setCreationtime(DatePtr creationtime);
	void setName(const std::string &name);
    void setContext(const std::string& context);
    void setExpirationtime(DatePtr expirationtime);
	void setData(DataTablePtr data);
	void setListener(int listener);
    void setLevel(int level);
	void setOriginator(AgObjectPtr originator);
	DataTablePtr getData();
	int getListener();
    int getLevel();
    PermissionsPtr getPermissions();
	void setPermissions(PermissionsPtr permissions);
	AgObjectPtr getOriginator();
	int getCount();
	void setCount(int count);
	std::string getDeduplicationId();
	void setDeduplicationId(std::string deduplicationId);
	EventPtr clone();
	int hashCode();
	bool equals(AgObjectPtr obj);
	std::string toString();
};

#endif
