// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/GroupContext.java


#ifndef GroupContextH
#define GroupContextH

#include "servercontext.h"
#include "GroupContextConstants.h"


class GroupContext : public ServerContext//, public GroupContextConstants
{
    virtual bool isHidesMembers()=0;
    virtual void addMember(const std::string & path)=0;
    virtual void removeMember(const std::string & path, bool failIfDynamic)=0;
    virtual void renameMember(const std::string & oldPath, const std::string & newPath)=0;
    virtual void memberAdded(ServerContextPtr recursiveMember)=0;
    virtual void memberRemoved(ServerContextPtr recursiveMember)=0;
};


  #endif
