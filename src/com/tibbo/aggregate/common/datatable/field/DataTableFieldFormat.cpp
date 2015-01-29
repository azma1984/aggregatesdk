// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DataTableFieldFormat.java
#include "datatable/field/DataTableFieldFormat.h"

#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "datatable/field/DataTableFieldFormat_DataTableFieldFormat_1.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
Datefield::DataTableFieldFormat::DataTableFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datefield::DataTableFieldFormat::DataTableFieldFormat(const std::string & name) 
    : DataTableFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

void Datefield::DataTableFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
    setTransferEncode(true);
    addValidator(new DataTableFieldFormat_DataTableFieldFormat_1(this));
}

char16_t Datefield::DataTableFieldFormat::getType()
{
    return FieldFormat::DATATABLE_FIELD;
}

java::lang::Class* Datefield::DataTableFieldFormat::getFieldClass()
{
    return DataTable::class_();
}

java::lang::Class* Datefield::DataTableFieldFormat::getFieldWrappedClass()
{
    return DataTable::class_();
}

DateDataTable* Datefield::DataTableFieldFormat::getNotNullDefault()
{
    return new DataTable();
}

DateDataTable* Datefield::DataTableFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    try {
        auto defaultValue = java_cast< DataTable* >(getDefaultValue());
        ::java::lang::Boolean* tempEncodeFieldNames;
        TableFormat* oldFormat;
        if(settings != 0) {
            oldFormat = settings)->getFormat();
            if(defaultValue != 0) {
                settings)->setFormat(defaultValue)->getFormat());
            }
            tempEncodeFieldNames = ::java::lang::Boolean::valueOf(settings)->isEncodeFieldNames());
        } else {
            settings = new encoding::ClassicEncodingSettings(false);
            tempEncodeFieldNames = ::java::lang::Boolean::valueOf(false);
        }
        {
            auto finally0 = finally([&] {
                if(settings != 0) {
                    settings)->setFormat(oldFormat);
                    if((tempEncodeFieldNames))->booleanValue()) {
                        settings)->setEncodeFieldNames((tempEncodeFieldNames))->booleanValue());
                    }
                }
            });
            {
                auto res = value != 0 ? new DataTable(value, settings, validate) : static_cast< DataTable* >(0);
                if(defaultValue != 0 && defaultValue)->getFieldCount() > 0 && !res)->getFormat())->extend(defaultValue)->getFormat())) {
                    auto newRes = java_cast< DataTable* >(getDefaultValue()))->clone();
                    DataTableReplication::copy(res, newRes, true, true, true);
                    res = newRes;
                }
                if(res != 0 && validate) {
                    res)->validate();
                }
                return res;
            }
        }

    } catch (::java::lang::Exception* ex) {
        std::cout <<"Error constructing value of field '"_j)->append(toString())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

std::string Datefield::DataTableFieldFormat::valueToString(DataTable* value, encoding::ClassicEncodingSettings* settings)
{
    if(value == 0) {
        return 0;
    }
    return value)->encode(settings);
}

std::string Datefield::DataTableFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< DataTable* >(value), settings);
}

std::string Datefield::DataTableFieldFormat::encodeEditorOptions(bool showTableData)
{
    
    return showTableData ? u"1"_j : u"0"_j;
}



java::lang::Class* Datefield::DataTableFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.DataTableFieldFormat", 63);
    return c;
}

void* Datefield::DataTableFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string Datefield::DataTableFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* Datefield::DataTableFieldFormat::getClass0()
{
    return class_();
}

