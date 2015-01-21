// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/KeyFieldsValidator.java
#include <com/tibbo/aggregate/common/datatable/validator/KeyFieldsValidator.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableQuery.h"
#include <com/tibbo/aggregate/common/datatable/QueryCondition.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/ValidationException.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"
//#include <java/lang/Character.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

Datevalidator::KeyFieldsValidator::KeyFieldsValidator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datevalidator::KeyFieldsValidator::KeyFieldsValidator() 
    : KeyFieldsValidator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

Datevalidator::KeyFieldsValidator::KeyFieldsValidator(const std::string & source) 
    : KeyFieldsValidator(*static_cast< ::default_init_tag* >(0))
{
    ctor(source);
}

void Datevalidator::KeyFieldsValidator::ctor()
{
    super::ctor();
}

void Datevalidator::KeyFieldsValidator::ctor(const std::string & source)
{
    super::ctor();
}

std::string Datevalidator::KeyFieldsValidator::encode()
{
    return u""_j;
}

java::lang::Character* Datevalidator::KeyFieldsValidator::getType()
{
    return ::java::lang::Character::valueOf(TableFormat::RECORD_VALIDATOR_KEY_FIELDS);
}

void Datevalidator::KeyFieldsValidator::validate(DataTable* table, DataRecord* record) /* throws(ValidationException) */
{
    auto keyFields = table)->getFormat())->getKeyFields();
    if(keyFields)->size() == 0) {
        return;
    }
    auto query = new DataTableQuery();
    std::list  key = new ::java::util::LinkedList();
    for (auto _i = keyFields)->iterator(); _i->hasNext(); ) {
        const std::string & keyField = java_cast< const std::string & >(_i->next());
        {
            auto value = record)->getValue(keyField);
            key)->add(value));
            query)->addCondition(new QueryCondition(keyField, value));
        }
    }
    auto rec = table)->select(query);
    if(rec != 0 && rec != record) {
        throw new ValidationException(::java::text::MessageFormat::format(Cres::get())->getString(u"dtKeyFieldViolation"_j), new voidArray({key), ::com::tibbo::aggregate::common::util::StringUtils::print(static_cast< ::java::util::Collection* >(keyFields)))})));
    }
}



java::lang::Class* Datevalidator::KeyFieldsValidator::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.validator.KeyFieldsValidator", 65);
    return c;
}

java::lang::Class* Datevalidator::KeyFieldsValidator::getClass0()
{
    return class_();
}

