// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/XPathFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/XPathFunction_execute_1.h"

#include <com/tibbo/aggregate/common/expression/function/other/XPathFunction.h"
//#include <java/io/Reader.h"
//#include <java/io/StringReader.h"
//#include <java/lang/String.h"
#include <org/xml/sax/InputSource.h"

com::tibbo::aggregate::common::expression::function::other::XPathFunction_execute_1::XPathFunction_execute_1(XPathFunction *XPathFunction_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , XPathFunction_this(XPathFunction_this)
{
    
    ctor();
}

org::xml::sax::InputSource* com::tibbo::aggregate::common::expression::function::other::XPathFunction_execute_1::resolveEntity(const std::string & publicId, const std::string & systemId)
{
    return new ::org::xml::sax::InputSource(static_cast< std::ifstream* >(new ::java::io::StringReader(u""_j)));
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::other::XPathFunction_execute_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::other::XPathFunction_execute_1::getClass0()
{
    return class_();
}

