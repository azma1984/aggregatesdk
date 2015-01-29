#ifndef EntityRelatedActionDescriptorH
#define EntityRelatedActionDescriptorH

#include "datatable/AggreGateBean.h"
#include "datatable/TableFormat.h"



class EntityRelatedActionDescriptor : public AggreGateBean
{
private:
	std::string mask;
	std::string entity;
	std::string target;
	std::string action;
	std::string description;
	std::string icon;

public:
	static const std::string FIELD_MASK;
	static const std::string FIELD_ENTITY;
	static const std::string FIELD_TARGET;
	static const std::string FIELD_ACTION;
	static const std::string FIELD_DESCRIPTION;
	static const std::string FIELD_ICON;
	static TableFormatPtr FORMAT;

	std::string getMask();
	void setMask(const std::string & mask);
	std::string getEntity();
	std::string getTarget();
	void setTarget(const std::string & target);
	std::string getAction();
	void setAction(const std::string & action);
	std::string getDescription();
	std::string getIcon();
    void setEntity(const std::string & group);
    void setDescription(const std::string & description);
    void setIcon(const std::string & icon);

	EntityRelatedActionDescriptor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId);
    EntityRelatedActionDescriptor(DataRecordPtr data);
    EntityRelatedActionDescriptor();


};

#endif
