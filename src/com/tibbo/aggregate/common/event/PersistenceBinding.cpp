// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/PersistenceBinding.java
#include "event/PersistenceBinding.h"


/*
PersistenceBinding::PersistenceBinding(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

PersistenceBinding::PersistenceBinding() 
    : PersistenceBinding(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

PersistenceBinding::PersistenceBinding(DataRecordPtr record) 
    : PersistenceBinding(*static_cast< ::default_init_tag* >(0))
{
    ctor(record);
}

PersistenceBinding::PersistenceBinding(const std::string & name, const std::string & type, const std::string & index, const std::string & expression) 
    : PersistenceBinding(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,type,index,expression);
}

std::string& PersistenceBinding::TYPE_BOOLEAN()
{
    
    return TYPE_BOOLEAN_;
}
std::string PersistenceBinding::TYPE_BOOLEAN_;

std::string& PersistenceBinding::TYPE_STRING()
{
    
    return TYPE_STRING_;
}
std::string PersistenceBinding::TYPE_STRING_;

std::string& PersistenceBinding::TYPE_INT()
{
    
    return TYPE_INT_;
}
std::string PersistenceBinding::TYPE_INT_;

std::string& PersistenceBinding::TYPE_LONG()
{
    
    return TYPE_LONG_;
}
std::string PersistenceBinding::TYPE_LONG_;

std::string& PersistenceBinding::TYPE_FLOAT()
{
    
    return TYPE_FLOAT_;
}
std::string PersistenceBinding::TYPE_FLOAT_;

std::string& PersistenceBinding::TYPE_DOUBLE()
{
    
    return TYPE_DOUBLE_;
}
std::string PersistenceBinding::TYPE_DOUBLE_;

std::string& PersistenceBinding::TYPE_TIMESTAMP()
{
    
    return TYPE_TIMESTAMP_;
}
std::string PersistenceBinding::TYPE_TIMESTAMP_;

DateTableFormatPtr& PersistenceBinding::FORMAT()
{
    
    return FORMAT_;
}
DateTableFormatPtr PersistenceBinding::FORMAT_;

void PersistenceBinding::ctor()
{
    super::ctor(FORMAT_);
}

void PersistenceBinding::ctor(DataRecordPtr record)
{
    super::ctor(FORMAT_, record);
}

void PersistenceBinding::ctor(const std::string & name, const std::string & type, const std::string & index, const std::string & expression)
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

std::string PersistenceBinding::getType()
{
    return type;
}

std::string PersistenceBinding::getIndex()
{
    return index;
}

std::string PersistenceBinding::getName()
{
    return name;
}

std::string PersistenceBinding::getExpression()
{
    return expression;
}

ExpressionPtr PersistenceBinding::getCompiledExpression()
{
    if(compiledExpression == 0) {
        compiledExpression = expression != 0 ? new Expression(expression) : static_cast< ExpressionPtr >(0);
    }
    return compiledExpression;
}

void PersistenceBinding::setName(const std::string & name)
{
    this->name = name;
}

void PersistenceBinding::setType(const std::string & type)
{
    this->type = type;
}

void PersistenceBinding::setIndex(const std::string & index)
{
    this->index = index;
}

void PersistenceBinding::setExpression(const std::string & expression)
{
    this->expression = expression;
    compiledExpression;
}

PersistenceBindingPtr PersistenceBinding::clone()
{
    try {
        return java_cast< PersistenceBindingPtr >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

int PersistenceBinding::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((expression == 0) ? int(0) : expression)->hashCode());
    result = prime * result + ((index == 0) ? int(0) : index)->hashCode());
    result = prime * result + ((name == 0) ? int(0) : name)->hashCode());
    result = prime * result + ((type == 0) ? int(0) : type)->hashCode());
    return result;
}

bool PersistenceBinding::equals(AgObjectPtr obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< PersistenceBindingPtr >(obj);
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

std::string PersistenceBinding::toString()
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



void PersistenceBinding::clinit()
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

*/
