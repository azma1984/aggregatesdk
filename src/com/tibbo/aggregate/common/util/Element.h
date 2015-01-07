// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/Element.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::Element
    
{

public:
    typedef void super;

private:
    std::string* name;
    std::string* value;
protected:
    void ctor(std::string* name, std::string* value);

public:
    std::string* getName();
    std::string* getValue();
    std::string* encode(bool useVisibleSeparators);

    // Generated
    Element(std::string* name, std::string* value);
protected:
    Element(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
