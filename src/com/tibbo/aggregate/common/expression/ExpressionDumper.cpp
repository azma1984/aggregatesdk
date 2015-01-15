// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/expression/ExpressionDumper.java
//#include <com/tibbo/aggregate/common/expression/ExpressionDumper.h"

//#include <com/tibbo/aggregate/common/Log.h"
//#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"
////#include <java/lang/Exception.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/String.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::ExpressionDumper::ExpressionDumper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::ExpressionDumper::ExpressionDumper()
    : ExpressionDumper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::ExpressionDumper::main(std::stringArray* args)
{
    
    ::com::tibbo::aggregate::common::Log::start();
    try {
        auto exp = u"abs(-123)"_j;
        ExpressionUtils::dump(exp);
    } catch (::java::lang::Exception* ex) {
        ex)->printStackTrace();
    }
}



java::lang::Class* com::tibbo::aggregate::common::expression::ExpressionDumper::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.ExpressionDumper", 54);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::ExpressionDumper::getClass0()
{
    return class_();
}

