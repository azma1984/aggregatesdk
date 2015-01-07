// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceAssetDefinition.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/AggreGateBean.h"
//#include <java/lang/Comparable.h"



class com::tibbo::aggregate::common::device::DeviceAssetDefinition
    : public ::com::tibbo::aggregate::common::datatable::AggreGateBean
    , public ::java::lang::Comparable
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::AggreGateBean super;

private:
    static const std::string FIELD_ID_;
    static const std::string FIELD_DESCRIPTION_;
    static const std::string FIELD_ENABLED_;
    static const std::string FIELD_CHILDREN_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* id;
    std::string* description;
    bool enabled;
    std::list  children;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::datatable::DataRecord* data);
    void ctor(std::string* id, std::string* description);

public:
    std::string* getId();
    void setId(std::string* id);
    std::string* getDescription();
    void setDescription(std::string* description);
    bool isEnabled();
    void setEnabled(bool enabled);
    std::list  getChildren();
    void setChildren(std::list  children);
    void addSubgroup(DeviceAssetDefinition* child);
    int compareTo(DeviceAssetDefinition* other);
    std::string* toString();
    int hashCode();
    bool equals(void* obj);

    // Generated
    DeviceAssetDefinition();
    DeviceAssetDefinition(::com::tibbo::aggregate::common::datatable::DataRecord* data);
    DeviceAssetDefinition(std::string* id, std::string* description);
protected:
    DeviceAssetDefinition(const ::default_init_tag&);


public:
    
    static void 
    int compareTo(void* arg0);

private:
    static const std::string& FIELD_ID();
    static const std::string& FIELD_DESCRIPTION();
    static const std::string& FIELD_ENABLED();
    static const std::string& FIELD_CHILDREN();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
