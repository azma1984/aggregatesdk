#ifndef EntityReferenceH
#define EntityReferenceH
#include "util/Comparable.h"
#include "util/Cloneable.h"
#include "util/pointers.h"
//todo - class stub
class EntityReference : public Cloneable, Comparable /* public ::java::io::Serializable*/
{
private:
	std::string context;
	std::string entity;

public:
    const std::string & getContext();
    const std::string & getEntity();
    const std::string & getProperty();
    void setContext(const std::string & context);
    void setEntity(const std::string & entity);
    void setProperty(const std::string & property);
    int hashCode();
    bool equals(AgObjectPtr obj);
   // int compareTo(EntityReferencePtr ref); todo
    std::string toString();
    //EntityReferencePtr clone(); todo

    EntityReference();
	EntityReference(const std::string & context, const std::string & entity);

};
#endif