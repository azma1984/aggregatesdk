// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/XPathFunction.java

#pragma once

#include "expression/function/other/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <org/xml/sax/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <org/xml/sax/EntityResolver.h"



class function::other::XPathFunction_execute_1
    
    , public ::org::xml::sax::EntityResolver
{

public:
    typedef void super;
    ::org::xml::sax::InputSource* resolveEntity(const std::string & publicId, const std::string & systemId);

    // Generated
    XPathFunction_execute_1(XPathFunction *XPathFunction_this);
    
    XPathFunction *XPathFunction_this;

private:
    ::java::lang::Class* getClass0();
    friend class XPathFunction;
};
