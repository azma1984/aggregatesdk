//#include "datatable/field/BooleanFieldFormat.h"

//#include "datatable/FieldFormat.h"
//#include "util/Util.h"


//:BooleanFieldFormat::BooleanFieldFormat(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
    
//}

//Datefield::BooleanFieldFormat::BooleanFieldFormat(const std::string & name)
//    : BooleanFieldFormat(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(name);
//}

//void Datefield::BooleanFieldFormat::ctor(const std::string & name)
//{
//    super::ctor(name);
//}

//char16_t Datefield::BooleanFieldFormat::getType()
//{
//    return FieldFormat::BOOLEAN_FIELD;
//}

//java::lang::Class* Datefield::BooleanFieldFormat::getFieldClass()
//{
//    return ::java::lang::Boolean::TYPE();
//}

//java::lang::Class* Datefield::BooleanFieldFormat::getFieldWrappedClass()
//{
//    return ::java::lang::Boolean::class_();
//}

//java::lang::Boolean* Datefield::BooleanFieldFormat::getNotNullDefault()
//{
//    return ::java::lang::Boolean::valueOf(false);
//}

//void* Datefield::BooleanFieldFormat::convertValue(void* value) /* throws(ValidationException) */
//{
//    if(value != 0 && !(dynamic_cast< ::java::lang::Boolean* >(value) != 0)) {
//        value = ::com::tibbo::aggregate::common::util::Util::convertToBoolean(value, true, false);
//    }
//    return value;
//}

//java::lang::Boolean* Datefield::BooleanFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
//{
//    return (value)->equals(u"1"_j)) || value)->equalsIgnoreCase(u"true"_j)) ? ::java::lang::Boolean::valueOf(true) : ::java::lang::Boolean::valueOf(false);
//}

//std::string Datefield::BooleanFieldFormat::valueToString(::java::lang::Boolean* value, encoding::ClassicEncodingSettings* settings)
//{
//    return value == 0 ? static_cast< const std::string & >(0) : ((java_cast< ::java::lang::Boolean* >(value))))->booleanValue() ? u"1"_j : u"0"_j;
//}

//std::string Datefield::BooleanFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
//{
//    return valueToString(dynamic_cast< ::java::lang::Boolean* >(value), settings);
//}



//java::lang::Class* Datefield::BooleanFieldFormat::class_()
//{
//    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.BooleanFieldFormat", 61);
//    return c;
//}

//void* Datefield::BooleanFieldFormat::valueFromString(const std::string & value)
//{
//    return super::valueFromString(value);
//}

//std::string Datefield::BooleanFieldFormat::valueToString(void* value)
//{
//    return super::valueToString(value);
//}

//java::lang::Class* Datefield::BooleanFieldFormat::getClass0()
//{
//    return class_();
//}

