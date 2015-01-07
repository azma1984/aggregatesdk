// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SynchronizationParameters.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"



class com::tibbo::aggregate::common::device::sync::SynchronizationParameters
    
    , public ::java::lang::Cloneable
{

public:
    typedef void super;

private:
    bool connectOnly;
    bool shouldReadMetadata;
    bool shouldPersistStatus;
    bool shouldUseExtendedStatus;
    ::java::util::Set* variables;
    int directionOverride;
protected:
    void ctor();
    void ctor(std::string* setting);
    void ctor(bool connectOnly);
    void ctor(std::string* setting, int directionOverride);
    void ctor(bool connectOnly, bool shouldReadMetadata, bool shouldPersistStatus, bool shouldUseExtendedStatus);

public:
    bool isShouldReadMetadata();
    bool isShouldPersistStatus();
    bool isConnectOnly();
    bool isFull();
    void addVariable(std::string* variable);
    void removeVariable(std::string* variable);
    ::java::util::Set* getVariables();
    bool isShouldUseExtendedStatus();
    int getDirectionOverride();
    std::string* toString();
    int hashCode();
    bool equals(void* obj);
    SynchronizationParameters* clone();

    // Generated
    SynchronizationParameters();
    SynchronizationParameters(std::string* setting);
    SynchronizationParameters(bool connectOnly);
    SynchronizationParameters(std::string* setting, int directionOverride);
    SynchronizationParameters(bool connectOnly, bool shouldReadMetadata, bool shouldPersistStatus, bool shouldUseExtendedStatus);
protected:
    SynchronizationParameters(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
