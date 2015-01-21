// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/IdValidator.java
#include <com/tibbo/aggregate/common/datatable/validator/IdValidator.h"

#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Character.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

Datevalidator::IdValidator::IdValidator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datevalidator::IdValidator::IdValidator() 
    : IdValidator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Datevalidator::IdValidator::ctor()
{
    super::ctor();
}

bool Datevalidator::IdValidator::shouldEncode()
{
    return true;
}

std::string Datevalidator::IdValidator::encode()
{
    return u""_j;
}

java::lang::Character* Datevalidator::IdValidator::getType()
{
    return ::java::lang::Character::valueOf(FieldFormat::VALIDATOR_ID);
}

void* Datevalidator::IdValidator::validate(void* value) /* throws(ValidationException) */
{
    if(value != 0 && dynamic_cast< const std::string & >(value) != 0) {
        return ::com::tibbo::aggregate::common::util::Util::descriptionToName(value)->toString());
    }
    return value;
}



java::lang::Class* Datevalidator::IdValidator::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.validator.IdValidator", 58);
    return c;
}

java::lang::Class* Datevalidator::IdValidator::getClass0()
{
    return class_();
}

