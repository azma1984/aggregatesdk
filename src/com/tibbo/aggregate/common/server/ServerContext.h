// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/ServerContext.java

#ifndef ServerContextH
#define ServerContextH

#include "context/Context.h"
#include "context/VariableDefinition.h"
#include "DataTable/DataTable.h"
//#include "server/groupcontext.h"
#include "data/event.h"

class GroupContext;

class ServerContext : public Context
{
    /**
   * Add new visible child to the context.
   * 
   * @param path
   *          Full name of the context to add as visible child of the current one.
   */
	virtual  void addVisibleChild(const std::string &path)=0;

	  /**
   * Remove visible child from the context.
   * 
   * @param path
   *          Full name of the visible child to remove.
   */
    virtual void removeVisibleChild(const std::string &path)=0;

	  /**
   * Returns default value of the variable. If it's not directly specified in the variable definition, an empty data table in the variable's format is created and returned.
   * 
   * @param vd
   *          Definition of the variable those default value to return
   * @return Default value of the variable
   */
    virtual DataTable* getDefaultValue(VariableDefinition* vd)=0;
	
	/**
   * Permanently deletes variable value from the database. This method should be used only before variable definition is going to be removed from the context.
   * 
   * @param name
   *          Name of variable those value should be removed.
   */
    virtual void removeVariableValue(const std::string & name)=0;

	 // The following methods should not be called via public API
    virtual bool checkPermissions(Permissions* needPermissions, CallerController* caller, Context* accessedContext)=0;

  //  ::java::util::Collection* getMembers(bool includeSubgroups);
    virtual void addedToGroup(GroupContext* groupContext)=0;
    virtual void removedFromGroup(GroupContext* groupContext)=0;
  //  ::java::util::Set* getGroups();
    virtual void alertActivated(Event* alert, int type)=0;
    virtual void alertDeactivated(Event* alert)=0;
    virtual bool shouldBeHidden()=0;
    virtual void setIndex(int index)=0;
    virtual void createDefaultStatisticsChannels(VariableDefinition* vd)=0;
    virtual std::string getShortDescription()=0;
};
  #endif