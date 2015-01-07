// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/GroupContext.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"

//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/server/ServerContext.h"
#include <com/tibbo/aggregate/common/server/GroupContextConstants.h"

struct com::tibbo::aggregate::common::server::GroupContext
    : public ServerContext
    , public GroupContextConstants
{
    bool isHidesMembers();
    void addMember(std::string* path) /* throws(ContextException) */;
    void removeMember(std::string* path, bool failIfDynamic) /* throws(ContextException) */;
    void renameMember(std::string* oldPath, std::string* newPath) /* throws(ContextException) */;
    void memberAdded(ServerContext* recursiveMember) /* throws(ContextException) */;
    void memberRemoved(ServerContext* recursiveMember) /* throws(ContextException) */;

    // Generated
    
};
