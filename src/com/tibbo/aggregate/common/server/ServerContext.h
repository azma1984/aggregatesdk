// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/ServerContext.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"

//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/Context.h"

struct com::tibbo::aggregate::common::server::ServerContext
    : public ::com::tibbo::aggregate::common::context::Context
{
    void addVisibleChild(std::string* path);
    void removeVisibleChild(std::string* path);
    ::com::tibbo::aggregate::common::datatable::DataTable* getDefaultValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd);
    void removeVariableValue(std::string* name);
    bool checkPermissions(::com::tibbo::aggregate::common::security::Permissions* needPermissions, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::Context* accessedContext);
    ::java::util::Collection* getMembers(bool includeSubgroups);
    void addedToGroup(GroupContext* groupContext);
    void removedFromGroup(GroupContext* groupContext);
    ::java::util::Set* getGroups();
    void alertActivated(::com::tibbo::aggregate::common::data::Event* alert, ::java::lang::Integer* type);
    void alertDeactivated(::com::tibbo::aggregate::common::data::Event* alert);
    bool shouldBeHidden();
    void setIndex(::java::lang::Integer* index);
    void createDefaultStatisticsChannels(::com::tibbo::aggregate::common::context::VariableDefinition* vd);
    std::string* getShortDescription();

    // Generated
    
};
