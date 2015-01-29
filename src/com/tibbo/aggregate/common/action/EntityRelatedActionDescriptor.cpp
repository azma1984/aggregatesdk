#include "action/EntityRelatedActionDescriptor.h"
//
//
//
//EntityRelatedActionDescriptor::EntityRelatedActionDescriptor(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//EntityRelatedActionDescriptor::EntityRelatedActionDescriptor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId)
//    : EntityRelatedActionDescriptor(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(mask,entity,target,action,description,iconId);
//}
//
//EntityRelatedActionDescriptor::EntityRelatedActionDescriptor(DataRecordPtr data)
//    : EntityRelatedActionDescriptor(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(data);
//}
//
//EntityRelatedActionDescriptor::EntityRelatedActionDescriptor()
//    : EntityRelatedActionDescriptor(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//std::string& EntityRelatedActionDescriptor::FIELD_MASK()
//{
//
//    return FIELD_MASK_;
//}
//std::string EntityRelatedActionDescriptor::FIELD_MASK_;
//
//std::string& EntityRelatedActionDescriptor::FIELD_ENTITY()
//{
//
//    return FIELD_ENTITY_;
//}
//std::string EntityRelatedActionDescriptor::FIELD_ENTITY_;
//
//std::string& EntityRelatedActionDescriptor::FIELD_TARGET()
//{
//
//    return FIELD_TARGET_;
//}
//std::string EntityRelatedActionDescriptor::FIELD_TARGET_;
//
//std::string& EntityRelatedActionDescriptor::FIELD_ACTION()
//{
//
//    return FIELD_ACTION_;
//}
//std::string EntityRelatedActionDescriptor::FIELD_ACTION_;
//
//std::string& EntityRelatedActionDescriptor::FIELD_DESCRIPTION()
//{
//
//    return FIELD_DESCRIPTION_;
//}
//std::string EntityRelatedActionDescriptor::FIELD_DESCRIPTION_;
//
//std::string& EntityRelatedActionDescriptor::FIELD_ICON()
//{
//
//    return FIELD_ICON_;
//}
//std::string EntityRelatedActionDescriptor::FIELD_ICON_;
//
//DateTableFormatPtr& EntityRelatedActionDescriptor::FORMAT()
//{
//
//    return FORMAT_;
//}
//DateTableFormatPtr EntityRelatedActionDescriptor::FORMAT_;
//
//void EntityRelatedActionDescriptor::ctor(const std::string & mask, const std::string & entity, const std::string & target, const std::string & action, const std::string & description, const std::string & iconId)
//{
//    ctor();
//    this->mask = mask;
//    this->entity = entity;
//    this->target = target;
//    this->action = action;
//    this->description = description;
//    this->icon = iconId;
//}
//
//void EntityRelatedActionDescriptor::ctor(DataRecordPtr data)
//{
//    super::ctor(FORMAT_, data);
//}
//
//void EntityRelatedActionDescriptor::ctor()
//{
//    super::ctor(FORMAT_);
//}
//
//std::string EntityRelatedActionDescriptor::getMask()
//{
//    return mask;
//}
//
//void EntityRelatedActionDescriptor::setMask(const std::string & mask)
//{
//    this->mask = mask;
//}
//
//std::string EntityRelatedActionDescriptor::getEntity()
//{
//    return entity;
//}
//
//std::string EntityRelatedActionDescriptor::getTarget()
//{
//    return target;
//}
//
//void EntityRelatedActionDescriptor::setTarget(const std::string & target)
//{
//    this->target = target;
//}
//
//std::string EntityRelatedActionDescriptor::getAction()
//{
//    return action;
//}
//
//void EntityRelatedActionDescriptor::setAction(const std::string & action)
//{
//    this->action = action;
//}
//
//std::string EntityRelatedActionDescriptor::getDescription()
//{
//    return description;
//}
//
//std::string EntityRelatedActionDescriptor::getIcon()
//{
//    return icon;
//}
//
//void EntityRelatedActionDescriptor::setEntity(const std::string & group)
//{
//    this->entity = group;
//}
//
//void EntityRelatedActionDescriptor::setDescription(const std::string & description)
//{
//    this->description = description;
//}
//
//void EntityRelatedActionDescriptor::setIcon(const std::string & icon)
//{
//    this->icon = icon;
//}
//
//
//
//java::lang::Class* EntityRelatedActionDescriptor::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.EntityRelatedActionDescriptor", 63);
//    return c;
//}
//
//void EntityRelatedActionDescriptor::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    FIELD_MASK_ = u"mask"_j;
//    FIELD_ENTITY_ = u"entity"_j;
//    FIELD_TARGET_ = u"target"_j;
//    FIELD_ACTION_ = u"action"_j;
//    FIELD_DESCRIPTION_ = u"description"_j;
//    FIELD_ICON_ = u"icon"_j;
//    }
//};
//
//    static string_init_ string_init_instance;
//
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        FORMAT_ = new TableFormat();
//        {
//            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_MASK_)
//                ->append(u"><S><F=N>"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ENTITY_)
//                ->append(u"><S><F=N>"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_TARGET_)
//                ->append(u"><S><F=N>"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_)
//                ->append(u"><S>"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_DESCRIPTION_)
//                ->append(u"><S>"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ICON_)
//                ->append(u"><S><F=N>"_j)->toString());
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

