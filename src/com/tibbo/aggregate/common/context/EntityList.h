#ifndef EntityListH
#define EntityListH

#include "context/EntityReference.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "util/Cloneable.h"

//todo - class stub
class EntityList: public Cloneable//  , public ::java::lang::Iterable
{
private:
    static const std::string FIELD_CONTEXT_;
    static const std::string FIELD_ENTITY_;
    static TableFormatPtr FORMAT_;
    std::list  entities;

public:
	bool includes(EntityReferencePtr ref);
    bool includes(const std::string & context, const std::string & entity);
    DataTablePtr toDataTable();
    bool isEmpty();
    void add(const std::string & context, const std::string & entity);
    void add(EntityReferencePtr ref);
    std::list  getEntities();
  //  ::java::util::Iterator* iterator(); //todo
    const std::string & toString();
    EntityListPtr clone();
    int hashCode();
    bool equals(AgObjectPtr obj);


    EntityList();
    EntityList(DataTablePtr data);
    EntityList(const std::string & context, const std::string & entity);
    EntityList(EntityReferencePtr ref);


private:
    void init();

public:
    static const std::string& FIELD_CONTEXT();
    static const std::string& FIELD_ENTITY();
	static TableFormatPtr& FORMAT();


};
#endif