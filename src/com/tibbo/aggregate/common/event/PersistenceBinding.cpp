// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/PersistenceBinding.java
#include <com/tibbo/aggregate/common/event/PersistenceBinding.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/ResourceBundle.h"

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

com::tibbo::aggregate::common::event::PersistenceBinding::PersistenceBinding(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::PersistenceBinding::PersistenceBinding() 
    : PersistenceBinding(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::event::PersistenceBinding::PersistenceBinding(DataRecord* record) 
    : PersistenceBinding(*static_cast< ::default_init_tag* >(0))
{
    ctor(record);
}

com::tibbo::aggregate::common::event::PersistenceBinding::PersistenceBinding(const std::string & name, const std::string & type, const std::string & index, const std::string & expression) 
    : PersistenceBinding(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,type,index,expression);
}

std::string& com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_BOOLEAN()
{
    
    return TYPE_BOOLEAN_;
}
std::string com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_BOOLEAN_;

std::string& com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_STRING()
{
    
    return TYPE_STRING_;
}
std::string com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_STRING_;

std::string& com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_INT()
{
    
    return TYPE_INT_;
}
std::string com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_INT_;

std::string& com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_LONG()
{
    
    return TYPE_LONG_;
}
std::string com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_LONG_;

std::string& com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_FLOAT()
{
    
    return TYPE_FLOAT_;
}
std::string com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_FLOAT_;

std::string& com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_DOUBLE()
{
    
    return TYPE_DOUBLE_;
}
std::string com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_DOUBLE_;

std::string& com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_TIMESTAMP()
{
    
    return TYPE_TIMESTAMP_;
}
std::string com::tibbo::aggregate::common::event::PersistenceBinding::TYPE_TIMESTAMP_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::event::PersistenceBinding::FORMAT()
{
    
    return FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::event::PersistenceBinding::FORMAT_;

void com::tibbo::aggregate::common::event::PersistenceBinding::ctor()
{
    super::ctor(FORMAT_);
}

void com::tibbo::aggregate::common::event::PersistenceBinding::ctor(DataRecord* record)
{
    super::ctor(FORMAT_, record);
}

void com::tibbo::aggregate::common::event::PersistenceBinding::ctor(const std::string & name, const std::string & type, const std::string & index, const std::string & expression)
{
    ctor();
    if(index != 0 && index)->length() > 2) {
        throw new ::java::lang::IllegalStateException(u"Index name length is limited to 2 characters to meed database name length limitations"_j);
    }
    setName(name);
    setType(type);
    setIndex(index);
    setExpression(expression);
}

std::string com::tibbo::aggregate::common::event::PersistenceBinding::getType()
{
    return type;
}

std::string com::tibbo::aggregate::common::event::PersistenceBinding::getIndex()
{
    return index;
}

std::string com::tibbo::aggregate::common::event::PersistenceBinding::getName()
{
    return name;
}

std::string com::tibbo::aggregate::common::event::PersistenceBinding::getExpression()
{
    return expression;
}

com::tibbo::aggregate::common::expression::Expression* com::tibbo::aggregate::common::event::PersistenceBinding::getCompiledExpression()
{
    if(compiledExpression == 0) {
        compiledExpression = expression != 0 ? new ::com::tibbo::aggregate::common::expression::Expression(expression) : static_cast< ::com::tibbo::aggregate::common::expression::Expression* >(0);
    }
    return compiledExpression;
}

void com::tibbo::aggregate::common::event::PersistenceBinding::setName(const std::string & name)
{
    this->name = name;
}

void com::tibbo::aggregate::common::event::PersistenceBinding::setType(const std::string & type)
{
    this->type = type;
}

void com::tibbo::aggregate::common::event::PersistenceBinding::setIndex(const std::string & index)
{
    this->index = index;
}

void com::tibbo::aggregate::common::event::PersistenceBinding::setExpression(const std::string & expression)
{
    this->expression = expression;
    compiledExpression;
}

com::tibbo::aggregate::common::event::PersistenceBinding* com::tibbo::aggregate::common::event::PersistenceBinding::clone()
{
    try {
        return java_cast< PersistenceBinding* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

int com::tibbo::aggregate::common::event::PersistenceBinding::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((expression == 0) ? int(0) : expression)->hashCode());
    result = prime * result + ((index == 0) ? int(0) : index)->hashCode());
    result = prime * result + ((name == 0) ? int(0) : name)->hashCode());
    result = prime * result + ((type == 0) ? int(0) : type)->hashCode());
    return result;
}

bool com::tibbo::aggregate::common::event::PersistenceBinding::equals(void* obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< PersistenceBinding* >(obj);
    if(expression == 0) {
        if(other)->expression != 0)
            return false;

    } else if(!expression)->equals(other)->expression)))
        return false;

    if(index == 0) {
        if(other)->index != 0)
            return false;

    } else if(!index)->equals(other)->index)))
        return false;

    if(name == 0) {
        if(other)->name != 0)
            return false;

    } else if(!name)->equals(other)->name)))
        return false;

    if(type == 0) {
        if(other)->type != 0)
            return false;

    } else if(!type)->equals(other)->type)))
        return false;

    return true;
}

std::string com::tibbo::aggregate::common::event::PersistenceBinding::toString()
{
    return std::stringBuilder().append(u"PersistenceBinding [name="_j)->append(name)
        ->append(u", type="_j)
        ->append(type)
        ->append(u", index="_j)
        ->append(index)
        ->append(u", expression="_j)
        ->append(expression)
        ->append(u"]"_j)->toString();
}



java::lang::Class* com::tibbo::aggregate::common::event::PersistenceBinding::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.PersistenceBinding", 51);
    return c;
}

void com::tibbo::aggregate::common::event::PersistenceBinding::clinit()
{
struct string_init_ {
    string_init_() {
    TYPE_BOOLEAN_ = u"boolean"_j;
    TYPE_STRING_ = u"string"_j;
    TYPE_INT_ = u"int"_j;
    TYPE_LONG_ = u"long"_j;
    TYPE_FLOAT_ = u"float"_j;
    TYPE_DOUBLE_ = u"double"_j;
    TYPE_TIMESTAMP_ = u"timestamp"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat();
        {
            auto name = FieldFormat::create(std::stringBuilder().append(u"<name><S><F=N><D="_j)->append(Cres::get())->getString(u"name"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(name);
            auto type = FieldFormat::create(std::stringBuilder().append(u"<type><S><F=N><D="_j)->append(Cres::get())->getString(u"type"_j))
                ->append(u">"_j)->toString());
            type)->addSelectionValue(TYPE_BOOLEAN_, Cres::get())->getString(u"dtBoolean"_j));
            type)->addSelectionValue(TYPE_STRING_, Cres::get())->getString(u"dtString"_j));
            type)->addSelectionValue(TYPE_INT_, Cres::get())->getString(u"dtInteger"_j));
            type)->addSelectionValue(TYPE_LONG_, Cres::get())->getString(u"dtLong"_j));
            type)->addSelectionValue(TYPE_FLOAT_, Cres::get())->getString(u"dtFloat"_j));
            type)->addSelectionValue(TYPE_DOUBLE_, Cres::get())->getString(u"dtDouble"_j));
            type)->addSelectionValue(TYPE_TIMESTAMP_, Cres::get())->getString(u"date"_j));
            FORMAT_)->addField(type);
            auto index = FieldFormat::create(std::stringBuilder().append(u"<index><S><F=N><D="_j)->append(Cres::get())->getString(u"index"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(index);
            auto expression = FieldFormat::create(std::stringBuilder().append(u"<expression><S><F=N><D="_j)->append(Cres::get())->getString(u"expression"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(expression);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::event::PersistenceBinding::getClass0()
{
    return class_();
}

