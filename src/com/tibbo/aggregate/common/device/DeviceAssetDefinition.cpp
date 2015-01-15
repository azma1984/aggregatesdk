// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceAssetDefinition.java
#include <com/tibbo/aggregate/common/device/DeviceAssetDefinition.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/DataTableBindingProvider.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
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

com::tibbo::aggregate::common::device::DeviceAssetDefinition::DeviceAssetDefinition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::DeviceAssetDefinition::DeviceAssetDefinition() 
    : DeviceAssetDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::device::DeviceAssetDefinition::DeviceAssetDefinition(DataRecord* data) 
    : DeviceAssetDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

com::tibbo::aggregate::common::device::DeviceAssetDefinition::DeviceAssetDefinition(const std::string & id, const std::string & description) 
    : DeviceAssetDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,description);
}

std::string& com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_ID()
{
    
    return FIELD_ID_;
}
std::string com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_ID_;

std::string& com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_DESCRIPTION()
{
    
    return FIELD_DESCRIPTION_;
}
std::string com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_DESCRIPTION_;

std::string& com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_ENABLED()
{
    
    return FIELD_ENABLED_;
}
std::string com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_ENABLED_;

std::string& com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_CHILDREN()
{
    
    return FIELD_CHILDREN_;
}
std::string com::tibbo::aggregate::common::device::DeviceAssetDefinition::FIELD_CHILDREN_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::device::DeviceAssetDefinition::FORMAT()
{
    
    return FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::device::DeviceAssetDefinition::FORMAT_;

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::ctor()
{
    super::ctor(FORMAT_);
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::ctor(DataRecord* data)
{
    super::ctor(FORMAT_, data);
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::ctor(const std::string & id, const std::string & description)
{
    ctor();
    this->id = id;
    this->description = description;
}

std::string com::tibbo::aggregate::common::device::DeviceAssetDefinition::getId()
{
    return id;
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::setId(const std::string & id)
{
    this->id = id;
}

std::string com::tibbo::aggregate::common::device::DeviceAssetDefinition::getDescription()
{
    return description;
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::setDescription(const std::string & description)
{
    this->description = description;
}

bool com::tibbo::aggregate::common::device::DeviceAssetDefinition::isEnabled()
{
    return enabled;
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::setEnabled(bool enabled)
{
    this->enabled = enabled;
}

java::util::List* com::tibbo::aggregate::common::device::DeviceAssetDefinition::getChildren()
{
    return children;
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::setChildren(std::list  children)
{
    this->children = children != 0 ? children : static_cast< std::list  >(new ::java::util::LinkedList());
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::addSubgroup(DeviceAssetDefinition* child)
{
    getChildren())->add(child));
}

int com::tibbo::aggregate::common::device::DeviceAssetDefinition::compareTo(DeviceAssetDefinition* other)
{
    return description)->compareTo(other)->description);
}

int com::tibbo::aggregate::common::device::DeviceAssetDefinition::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< DeviceAssetDefinition* >(arg0));
}

std::string com::tibbo::aggregate::common::device::DeviceAssetDefinition::toString()
{
    return std::stringBuilder().append(u"GroupDefinition [id="_j)->append(id)
        ->append(u", description="_j)
        ->append(description)
        ->append(u", enabled="_j)
        ->append(enabled)
        ->append(u", children="_j)
        ->append((children != 0 ? children)->size() : int(0)))
        ->append(u"]"_j)->toString();
}

int com::tibbo::aggregate::common::device::DeviceAssetDefinition::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((description == 0) ? int(0) : description)->hashCode());
    return result;
}

bool com::tibbo::aggregate::common::device::DeviceAssetDefinition::equals(void* obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< DeviceAssetDefinition* >(obj);
    if(description == 0) {
        if(other)->description != 0)
            return false;

    } else if(!description)->equals(other)->description)))
        return false;

    return true;
}



java::lang::Class* com::tibbo::aggregate::common::device::DeviceAssetDefinition::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.DeviceAssetDefinition", 55);
    return c;
}

void com::tibbo::aggregate::common::device::DeviceAssetDefinition::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_ID_ = u"id"_j;
    FIELD_DESCRIPTION_ = u"description"_j;
    FIELD_ENABLED_ = u"enabled"_j;
    FIELD_CHILDREN_ = u"children"_j;
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
            FORMAT_)->setUnresizable(true);
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ID_)
                ->append(u"><S><F=HRK>"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_DESCRIPTION_)
                ->append(u"><S><F=R><D="_j)
                ->append(Cres::get())->getString(u"description"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ENABLED_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"enabled"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_CHILDREN_)
                ->append(u"><T><F=N><D="_j)
                ->append(Cres::get())->getString(u"devNestedAssets"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->setNamingExpression(std::stringBuilder().append(::com::tibbo::aggregate::common::expression::function::Functions::AGGREGATE())->append(u"({}, \"{env/previous} + ({"_j)
                ->append(FIELD_ENABLED_)
                ->append(u"} ? 1 : 0)\", 0) + '/' + {#"_j)
                ->append(::com::tibbo::aggregate::common::expression::DefaultReferenceResolver::RECORDS())
                ->append(u"}"_j)->toString());
            auto ref = std::stringBuilder().append(FIELD_CHILDREN_)->append(u"#"_j)
                ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString();
            auto exp = std::stringBuilder().append(u"{"_j)->append(FIELD_ENABLED_)
                ->append(u"}"_j)->toString();
            FORMAT_)->addBinding(ref, exp);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::device::DeviceAssetDefinition::getClass0()
{
    return class_();
}

