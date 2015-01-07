// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/data/Event.java

#pragma once


class Event
{
  /*
public:
	static const long DEFAULT_EVENT_EXPIRATION_PERIOD { long(8640000000LL) };

private:
    ::java::lang::Long* id;
    ::java::util::Date* instantiationtime;
    ::java::util::Date* creationtime;
    ::java::util::Date* expirationtime;
    std::string* context;
    std::string* name;
    std::list  acknowledgements;
    ::com::tibbo::aggregate::common::datatable::DataTable* data;
    ::java::lang::Integer* listener;
    int level;
    ::com::tibbo::aggregate::common::security::Permissions* permissions;
    int count;
    std::list  enrichments;
    void* originator;
    std::string* deduplicationId;
protected:
    void ctor();
    void ctor(std::string* context, ::com::tibbo::aggregate::common::context::EventDefinition* def, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id, ::java::util::Date* creationtime, ::com::tibbo::aggregate::common::security::Permissions* permissions);
    void ctor(std::string* context, std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id);

private:
    void init_(std::string* context, std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id);

public:
    ::java::lang::Long* getId();
    ::java::util::Date* getInstantiationtime();
    ::java::util::Date* getCreationtime();
    std::string* getContext();
    std::string* getName();
    ::java::util::Date* getExpirationtime();
    ::com::tibbo::aggregate::common::datatable::DataTable* getAcknowledgementsTable();
    ::com::tibbo::aggregate::common::datatable::DataTable* getEnrichmentsTable();
    void setAcknowledgementsTable(::com::tibbo::aggregate::common::datatable::DataTable* data);
    void setEnrichmentsTable(::com::tibbo::aggregate::common::datatable::DataTable* data);
    void addAcknowledgement(::com::tibbo::aggregate::common::event::Acknowledgement* ack);
    std::list  getAcknowledgements();
    void addEnrichment(::com::tibbo::aggregate::common::event::Enrichment* enrichment);
    std::list  getEnrichments();
    void setId(::java::lang::Long* id);
    void setCreationtime(::java::util::Date* creationtime);
    void setName(std::string* name);
    void setContext(std::string* context);
    void setExpirationtime(::java::util::Date* expirationtime);
    void setData(::com::tibbo::aggregate::common::datatable::DataTable* data);
    void setListener(::java::lang::Integer* listener);
    void setLevel(int level);
    void setOriginator(void* originator);
    ::com::tibbo::aggregate::common::datatable::DataTable* getData();
    ::java::lang::Integer* getListener();
    int getLevel();
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    void setPermissions(::com::tibbo::aggregate::common::security::Permissions* permissions);
    void* getOriginator();
    int getCount();
    void setCount(int count);
    std::string* getDeduplicationId();
    void setDeduplicationId(std::string* deduplicationId);
    Event* clone();
    int hashCode();
    bool equals(void* obj);
    std::string* toString();

    // Generated
    Event();
    Event(std::string* context, ::com::tibbo::aggregate::common::context::EventDefinition* def, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id, ::java::util::Date* creationtime, ::com::tibbo::aggregate::common::security::Permissions* permissions);
    Event(std::string* context, std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data, ::java::lang::Long* id);
protected:
    Event(const ::default_init_tag&);


public:
    

private:
    void init();
	::java::lang::Class* getClass0();
	*/
};
