// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/PersistentProperties.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::PersistentProperties
    
{

public:
    typedef void super;

private:
    std::map properties;

public:
    std::map getProperties();
    ::com::tibbo::aggregate::common::datatable::DataTable* getProperty(std::string* name);

    // Generated
    PersistentProperties();
protected:
    void ctor();
    PersistentProperties(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
