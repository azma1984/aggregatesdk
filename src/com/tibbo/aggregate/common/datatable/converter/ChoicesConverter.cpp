// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/ChoicesConverter.java
#include <com/tibbo/aggregate/common/datatable/converter/ChoicesConverter.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/converter/Choice.h"
/*
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
#include <ObjectArray.h"
*/
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

com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::ChoicesConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::ChoicesConverter(::java::lang::Class* valueClass) 
    : ChoicesConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor(valueClass);
}

void com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::init()
{
    choices = new ::java::util::LinkedList();
}

void com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::ctor(::java::lang::Class* valueClass)
{
    super::ctor(valueClass);
    init();
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::createFieldFormat(const std::string & name)
{
    auto ff = FieldFormat::create(name, FieldFormat::STRING_FIELD);
    for (auto _i = choices)->iterator(); _i->hasNext(); ) {
        Choice* c = java_cast< Choice* >(_i->next());
        {
            ff)->addSelectionValue(c)->getName(), c)->getDescription());
        }
    }
    if(defaultChoice != 0) {
        ff)->setDefault(defaultChoice)->getName());
    }
    return ff;
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::createFieldFormat(const std::string & name, const std::string & description)
{
    auto const result = createFieldFormat(name);
    result)->setDescription(description);
    return result;
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::createFieldFormat(const std::string & name, const std::string & description, void* defaultValue)
{
    auto const result = createFieldFormat(name, description);
    result)->setDefault(defaultValue);
    return result;
}

void com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::add(Choice* c)
{
    if(choices)->size() == 0) {
        defaultChoice = c;
    }
    choices)->add(c));
}

void com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::add(const std::string & description, void* object)
{
    add(new Choice(description, object));
}

void com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::add(const std::string & name, const std::string & description, void* object)
{
    add(new Choice(name, description, object));
}

void com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::setDefault(Choice* defaultChoice)
{
    this->defaultChoice = defaultChoice;
}

void com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::setDefault(const std::string & name)
{
    for (auto _i = choices)->iterator(); _i->hasNext(); ) {
        Choice* choice = java_cast< Choice* >(_i->next());
        {
            if(choice)->getName())->equals(name))) {
                defaultChoice = choice;
                return;
            }
        }
    }
    throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Can not find choice item with name: "_j)->append(name)->toString());
}

void* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::convertToBean(void* value)
{
    return convertToBean(value, 0));
}

void* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::convertToBean(void* value, void* originalValue)
{
    if(dynamic_cast< DataTable* >(value) != 0) {
        value = (java_cast< DataTable* >(value)))->get();
    }
    for (auto _i = choices)->iterator(); _i->hasNext(); ) {
        Choice* c = java_cast< Choice* >(_i->next());
        {
            if(c)->getName())->equals(value)) {
                return c)->getObject();
            }
        }
    }
    std::cout <<"Unknown value: "_j)->append(value))->toString());
}

void* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::convertToTable(void* value, TableFormat* format)
{
    for (auto _i = choices)->iterator(); _i->hasNext(); ) {
        Choice* c = java_cast< Choice* >(_i->next());
        {
            if(c)->getObject())->equals(value)) {
                return c)->getName();
            }
        }
    }
    std::cout <<"Unknown value: "_j)->append(value))->toString());
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::createTable(void* value, TableFormat* format) /* throws(DataTableException) */
{
    return new DataTable(format, new voidArray({convertToTable(value))}));
}



java::lang::Class* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.converter.ChoicesConverter", 63);
    return c;
}

void* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::convertToTable(void* value)
{
    return super::convertToTable(value);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::converter::ChoicesConverter::getClass0()
{
    return class_();
}

