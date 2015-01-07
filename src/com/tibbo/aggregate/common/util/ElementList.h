// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ElementList.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/ArrayList.h"



class com::tibbo::aggregate::common::util::ElementList
    : public ::java::util::ArrayList
{

public:
    typedef ::java::util::ArrayList super;
    Element* getElement(std::string* name);

    // Generated
    ElementList();
protected:
    ElementList(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
