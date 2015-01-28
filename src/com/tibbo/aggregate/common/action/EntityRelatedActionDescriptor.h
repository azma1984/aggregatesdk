#ifndef EntityRelatedActionDescriptorH
#define EntityRelatedActionDescriptorH

#include "datatable/AggreGateBean.h"


class EntityRelatedActionDescriptor : public AggreGateBean
{
private:
    static const std::string FIELD_MASK_;
    static const std::string FIELD_ENTITY_;
    static const std::string FIELD_TARGET_;
    static const std::string FIELD_ACTION_;
    static const std::string FIELD_DESCRIPTION_;
    static const std::string FIELD_ICON_;
    static TableFormatPtr FORMAT_;
    const std::string & mask;
    const std::string & entity;
    const std::string & target;
    const std::string & action;
    const std::string & description;
    const std::string & icon;

public:
    const std::string & getMask();
    void setMask(const std::string & mask);
    const std::string & getEntity();
    const std::string & getTarget();
    void setTarget(const std::string & target);
    const std::string & getAction();
    void setAction(const std::string & action);
    const std::string & getDescription();
    const std::string & getIcon();
    void setEntity(const std::string & group);
    void setDescription(const std::string & description);
    void setIcon(const std::string & icon);

	EntityRelatedActionDescriptor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId);
    EntityRelatedActionDescriptor(DataRecordPtr data);
    EntityRelatedActionDescriptor();

    static const std::string& FIELD_MASK();
    static const std::string& FIELD_ENTITY();
    static const std::string& FIELD_TARGET();
    static const std::string& FIELD_ACTION();
    static const std::string& FIELD_DESCRIPTION();
    static const std::string& FIELD_ICON();
    static TableFormatPtr& FORMAT();

};

#endif
