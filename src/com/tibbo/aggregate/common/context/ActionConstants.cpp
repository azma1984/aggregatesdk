// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ActionConstants.java
#include <com/tibbo/aggregate/common/context/ActionConstants.h"

////#include <java/lang/String.h"

com::tibbo::aggregate::common::context::ActionConstants::ActionConstants(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::ActionConstants::ActionConstants()
    : ActionConstants(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_NAME()
{
    
    return FIELD_AD_NAME_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_NAME_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_DESCRIPTION()
{
    
    return FIELD_AD_DESCRIPTION_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_DESCRIPTION_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_HELP()
{
    
    return FIELD_AD_HELP_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_HELP_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_ACCELERATOR()
{
    
    return FIELD_AD_ACCELERATOR_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_ACCELERATOR_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_DROP_SOURCES()
{
    
    return FIELD_AD_DROP_SOURCES_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_DROP_SOURCES_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_HIDDEN()
{
    
    return FIELD_AD_HIDDEN_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_HIDDEN_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_ENABLED()
{
    
    return FIELD_AD_ENABLED_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_ENABLED_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_ICON_ID()
{
    
    return FIELD_AD_ICON_ID_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_ICON_ID_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_GROUP()
{
    
    return FIELD_AD_GROUP_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_GROUP_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_EXECUTION_GROUP()
{
    
    return FIELD_AD_EXECUTION_GROUP_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_EXECUTION_GROUP_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_DEFAULT()
{
    
    return FIELD_AD_DEFAULT_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_DEFAULT_;

std::string& com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK()
{
    
    return FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK_;
}
std::string com::tibbo::aggregate::common::context::ActionConstants::FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK_;



java::lang::Class* com::tibbo::aggregate::common::context::ActionConstants::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.ActionConstants", 50);
    return c;
}

void com::tibbo::aggregate::common::context::ActionConstants::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_AD_NAME_ = u"name"_j;
    FIELD_AD_DESCRIPTION_ = u"description"_j;
    FIELD_AD_HELP_ = u"help"_j;
    FIELD_AD_ACCELERATOR_ = u"accelerator"_j;
    FIELD_AD_DROP_SOURCES_ = u"dropSources"_j;
    FIELD_AD_HIDDEN_ = u"hidden"_j;
    FIELD_AD_ENABLED_ = u"enabled"_j;
    FIELD_AD_ICON_ID_ = u"iconId"_j;
    FIELD_AD_GROUP_ = u"group"_j;
    FIELD_AD_EXECUTION_GROUP_ = u"executionGroup"_j;
    FIELD_AD_DEFAULT_ = u"default"_j;
    FIELD_AD_RESOURCE_MASKS_RESOURCE_MASK_ = u"resourceMask"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* com::tibbo::aggregate::common::context::ActionConstants::getClass0()
{
    return class_();
}

