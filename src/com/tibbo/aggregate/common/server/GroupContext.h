// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/GroupContext.java


#ifndef GroupContextH
#define GroupContextH

#include "servercontext.h"
#include "GroupContextConstants.h"


class GroupContext : public ServerContext, public GroupContextConstants
{
    virtual bool isHidesMembers();
    virtual void addMember(std::string* path);
    virtual void removeMember(std::string* path, bool failIfDynamic);
    virtual void renameMember(std::string* oldPath, std::string* newPath);
    virtual void memberAdded(ServerContext* recursiveMember);
    virtual void memberRemoved(ServerContext* recursiveMember);
};


  #endif
